#ifndef NJD_SET_ACCENT_TYPE_C
#define NJD_SET_ACCENT_TYPE_C

#ifdef __cplusplus
#define NJD_SET_ACCENT_TYPE_C_START extern "C" {
#define NJD_SET_ACCENT_TYPE_C_END   }
#else
#define NJD_SET_ACCENT_TYPE_C_START
#define NJD_SET_ACCENT_TYPE_C_END
#endif                          /* __CPLUSPLUS */

NJD_SET_ACCENT_TYPE_C_START;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "njd.h"
#include "njd_set_accent_type.h"

#ifdef ASCII_HEADER
#if defined(CHARSET_EUC_JP)
#include "njd_set_accent_type_rule_ascii_for_euc_jp.h"
#elif defined(CHARSET_SHIFT_JIS)
#include "njd_set_accent_type_rule_ascii_for_shift_jis.h"
#elif defined(CHARSET_UTF_8)
#include "njd_set_accent_type_rule_ascii_for_utf_8.h"
#else
#error CHARSET is not specified
#endif
#else
#if defined(CHARSET_EUC_JP)
#include "njd_set_accent_type_rule_euc_jp.h"
#elif defined(CHARSET_SHIFT_JIS)
#include "njd_set_accent_type_rule_shift_jis.h"
#elif defined(CHARSET_UTF_8)
#include "njd_set_accent_type_rule_utf_8.h"
#else
#error CHARSET is not specified
#endif
#endif

#define MAXBUFLEN 1024

static char get_token_from_string(const char *str, int *index, char *buff)
{
   char c;
   int i = 0;

   c = str[(*index)];
   if (c != '\0') {
      while (c != '%' && c != '@' && c != '/' && c != '\0') {
         buff[i++] = c;
         c = str[++(*index)];
      }
      if (c == '%' || c == '@' || c == '/')
         (*index)++;
   }
   buff[i] = '\0';
   return c;
}

static void get_rule(const char *input_rule, const char *prev_pos, char *rule, int *add_type)
{
   int index = 0;
   char buff[MAXBUFLEN];
   char c = ' ';

   if (input_rule) {
      while (c != '\0') {
         c = get_token_from_string(input_rule, &index, buff);
         if ((c == '%' && strstr(prev_pos, buff) != NULL) || c == '@' || c == '/' || c == '\0') {
            /* find */
            if (c == '%')
               c = get_token_from_string(input_rule, &index, rule);
            else
               strcpy(rule, buff);
            if (c == '@') {
               c = get_token_from_string(input_rule, &index, buff);
               (*add_type) = atoi(buff);
            } else {
               (*add_type) = 0;
            }
            return;
         } else {
            /* skip */
            while (c == '%' || c == '@')
               c = get_token_from_string(input_rule, &index, buff);
         }
      }
   }

   /* not found */
   strcpy(rule, "*");
   (*add_type) = 0;
}

void njd_set_accent_type(NJD * njd)
{
   NJDNode *node;
   NJDNode *top_node = NULL;
   char rule[MAXBUFLEN];
   int add_type = 0;
   int mora_size = 0;

   if (njd == NULL || njd->head == NULL)
      return;

   for (node = njd->head; node != NULL; node = node->next) {
      if (NJDNode_get_string(node) == NULL)
         continue;
      if ((node == njd->head) || (NJDNode_get_chain_flag(node) != 1)) {
         /* store the top node */
         top_node = node;
         mora_size = 0;
      } else if (node->prev != NULL && NJDNode_get_chain_flag(node) == 1) {
         /* get accent change type */
         get_rule(NJDNode_get_chain_rule(node), NJDNode_get_pos(node->prev), rule, &add_type);

         /* change accent type */
         if (strcmp(rule, "*") == 0) {  /* no chnage */
         } else if (strcmp(rule, "F1") == 0) {  /* for ancillary word */
         } else if (strcmp(rule, "F2") == 0) {
            if (NJDNode_get_acc(top_node) == 0)
               NJDNode_set_acc(top_node, mora_size + add_type);
         } else if (strcmp(rule, "F3") == 0) {
            if (NJDNode_get_acc(top_node) != 0)
               NJDNode_set_acc(top_node, mora_size + add_type);
         } else if (strcmp(rule, "F4") == 0) {
            NJDNode_set_acc(top_node, mora_size + add_type);
         } else if (strcmp(rule, "F5") == 0) {
            NJDNode_set_acc(top_node, 0);
         } else if (strcmp(rule, "C1") == 0) {  /* for noun */
            NJDNode_set_acc(top_node, mora_size + NJDNode_get_acc(node));
         } else if (strcmp(rule, "C2") == 0) {
            NJDNode_set_acc(top_node, mora_size + 1);
         } else if (strcmp(rule, "C3") == 0) {
            NJDNode_set_acc(top_node, mora_size);
         } else if (strcmp(rule, "C4") == 0) {
            NJDNode_set_acc(top_node, 0);
         } else if (strcmp(rule, "C5") == 0) {
         } else if (strcmp(rule, "P1") == 0) {  /* for postfix */
            if (NJDNode_get_acc(node) == 0)
               NJDNode_set_acc(top_node, 0);
            else
               NJDNode_set_acc(top_node, mora_size + NJDNode_get_acc(node));
         } else if (strcmp(rule, "P2") == 0) {
            if (NJDNode_get_acc(node) == 0)
               NJDNode_set_acc(top_node, mora_size + 1);
            else
               NJDNode_set_acc(top_node, mora_size + NJDNode_get_acc(node));
         } else if (strcmp(rule, "P6") == 0) {
            NJDNode_set_acc(top_node, 0);
         } else if (strcmp(rule, "P14") == 0) {
            if (NJDNode_get_acc(node) != 0)
               NJDNode_set_acc(top_node, mora_size + NJDNode_get_acc(node));
         }
      }

      /* change accent type for digit */
      if (node->prev != NULL && NJDNode_get_chain_flag(node) == 1 &&
          strcmp(NJDNode_get_pos_group1(node->prev), NJD_SET_ACCENT_TYPE_KAZU) == 0 &&
          strcmp(NJDNode_get_pos_group1(node), NJD_SET_ACCENT_TYPE_KAZU) == 0) {
         if (strcmp(NJDNode_get_string(node), NJD_SET_ACCENT_TYPE_JYUU) == 0) { /* 10^1 */
            if (NJDNode_get_string(node->prev) != NULL &&
                (strcmp(NJDNode_get_string(node->prev), NJD_SET_ACCENT_TYPE_SAN) == 0 ||
                 strcmp(NJDNode_get_string(node->prev), NJD_SET_ACCENT_TYPE_YON) == 0 ||
                 strcmp(NJDNode_get_string(node->prev), NJD_SET_ACCENT_TYPE_KYUU) == 0 ||
                 strcmp(NJDNode_get_string(node->prev), NJD_SET_ACCENT_TYPE_NAN) == 0 ||
                 strcmp(NJDNode_get_string(node->prev), NJD_SET_ACCENT_TYPE_SUU) == 0)) {
               NJDNode_set_acc(node->prev, 1);
            } else {
               NJDNode_set_acc(node->prev, 1);
            }
            if (NJDNode_get_string(node->prev) != NULL &&
                (strcmp(NJDNode_get_string(node->prev), NJD_SET_ACCENT_TYPE_GO) == 0 ||
                 strcmp(NJDNode_get_string(node->prev), NJD_SET_ACCENT_TYPE_ROKU) == 0 ||
                 strcmp(NJDNode_get_string(node->prev), NJD_SET_ACCENT_TYPE_HACHI) == 0)) {
               if (node->next != NULL && NJDNode_get_string(node->next) != NULL
                   && (strcmp(NJDNode_get_string(node->next), NJD_SET_ACCENT_TYPE_ICHI) == 0
                       || strcmp(NJDNode_get_string(node->next), NJD_SET_ACCENT_TYPE_NI) == 0
                       || strcmp(NJDNode_get_string(node->next), NJD_SET_ACCENT_TYPE_SAN) == 0
                       || strcmp(NJDNode_get_string(node->next), NJD_SET_ACCENT_TYPE_YON) == 0
                       || strcmp(NJDNode_get_string(node->next), NJD_SET_ACCENT_TYPE_GO) == 0
                       || strcmp(NJDNode_get_string(node->next), NJD_SET_ACCENT_TYPE_ROKU) == 0
                       || strcmp(NJDNode_get_string(node->next), NJD_SET_ACCENT_TYPE_NANA) == 0
                       || strcmp(NJDNode_get_string(node->next), NJD_SET_ACCENT_TYPE_HACHI) == 0
                       || strcmp(NJDNode_get_string(node->next), NJD_SET_ACCENT_TYPE_KYUU) == 0))
                  NJDNode_set_acc(node->prev, 0);
            }
         } else if (strcmp(NJDNode_get_string(node), NJD_SET_ACCENT_TYPE_HYAKU) == 0) { /* 10^2 */
            if (NJDNode_get_string(node->prev) != NULL
                && strcmp(NJDNode_get_string(node->prev), NJD_SET_ACCENT_TYPE_NANA) == 0) {
               NJDNode_set_acc(node->prev, 2);
            } else if (NJDNode_get_string(node->prev) != NULL &&
                       (strcmp(NJDNode_get_string(node->prev), NJD_SET_ACCENT_TYPE_SAN) == 0 ||
                        strcmp(NJDNode_get_string(node->prev), NJD_SET_ACCENT_TYPE_YON) == 0 ||
                        strcmp(NJDNode_get_string(node->prev), NJD_SET_ACCENT_TYPE_KYUU) == 0 ||
                        strcmp(NJDNode_get_string(node->prev), NJD_SET_ACCENT_TYPE_NAN) == 0)) {
               NJDNode_set_acc(node->prev, 1);
            } else {
               NJDNode_set_acc(node->prev,
                               NJDNode_get_mora_size(node->prev) + NJDNode_get_mora_size(node));
            }
         } else if (strcmp(NJDNode_get_string(node), NJD_SET_ACCENT_TYPE_SEN) == 0) {   /* 10^3 */
            NJDNode_set_acc(node->prev, NJDNode_get_mora_size(node->prev) + 1);
         } else if (strcmp(NJDNode_get_string(node), NJD_SET_ACCENT_TYPE_MAN) == 0) {   /* 10^4 */
            NJDNode_set_acc(node->prev, NJDNode_get_mora_size(node->prev) + 1);
         } else if (strcmp(NJDNode_get_string(node), NJD_SET_ACCENT_TYPE_OKU) == 0) {   /* 10^8 */
            if (NJDNode_get_string(node->prev) != NULL &&
                (strcmp(NJDNode_get_string(node->prev), NJD_SET_ACCENT_TYPE_ICHI) == 0 ||
                 strcmp(NJDNode_get_string(node->prev), NJD_SET_ACCENT_TYPE_ROKU) == 0 ||
                 strcmp(NJDNode_get_string(node->prev), NJD_SET_ACCENT_TYPE_NANA) == 0 ||
                 strcmp(NJDNode_get_string(node->prev), NJD_SET_ACCENT_TYPE_HACHI) == 0 ||
                 strcmp(NJDNode_get_string(node->prev), NJD_SET_ACCENT_TYPE_IKU) == 0)) {
               NJDNode_set_acc(node->prev, 2);
            } else {
               NJDNode_set_acc(node->prev, 1);
            }
         } else if (strcmp(NJDNode_get_string(node), NJD_SET_ACCENT_TYPE_CHOU) == 0) {  /* 10^12 */
            if (NJDNode_get_string(node->prev) != NULL &&
                (strcmp(NJDNode_get_string(node->prev), NJD_SET_ACCENT_TYPE_ROKU) == 0 ||
                 strcmp(NJDNode_get_string(node->prev), NJD_SET_ACCENT_TYPE_NANA) == 0)) {
               NJDNode_set_acc(node->prev, 2);
            } else {
               NJDNode_set_acc(node->prev, 1);
            }
         }
      }

      if (strcmp(NJDNode_get_string(node), NJD_SET_ACCENT_TYPE_JYUU) == 0 &&
          NJDNode_get_chain_flag(node) != 1 && node->next != NULL &&
          strcmp(NJDNode_get_pos_group1(node->next), NJD_SET_ACCENT_TYPE_KAZU) == 0) {
         NJDNode_set_acc(node, 0);
      }

      mora_size += NJDNode_get_mora_size(node);
   }
}

NJD_SET_ACCENT_TYPE_C_END;

#endif                          /* !NJD_SET_ACCENT_TYPE_C */
