#ifndef NJD_SET_ACCENT_PHRASE_C
#define NJD_SET_ACCENT_PHRASE_C

#ifdef __cplusplus
#define NJD_SET_ACCENT_PHRASE_C_START extern "C" {
#define NJD_SET_ACCENT_PHRASE_C_END   }
#else
#define NJD_SET_ACCENT_PHRASE_C_START
#define NJD_SET_ACCENT_PHRASE_C_END
#endif                          /* __CPLUSPLUS */

NJD_SET_ACCENT_PHRASE_C_START;

#include <stdio.h>
#include <string.h>

#include "njd.h"
#include "njd_set_accent_phrase.h"

#ifdef ASCII_HEADER
#if defined(CHARSET_EUC_JP)
#include "njd_set_accent_phrase_rule_ascii_for_euc_jp.h"
#elif defined(CHARSET_SHIFT_JIS)
#include "njd_set_accent_phrase_rule_ascii_for_shift_jis.h"
#elif defined(CHARSET_UTF_8)
#include "njd_set_accent_phrase_rule_ascii_for_utf_8.h"
#else
#error CHARSET is not specified
#endif
#else
#if defined(CHARSET_EUC_JP)
#include "njd_set_accent_phrase_rule_euc_jp.h"
#elif defined(CHARSET_SHIFT_JIS)
#include "njd_set_accent_phrase_rule_shift_jis.h"
#elif defined(CHARSET_UTF_8)
#include "njd_set_accent_phrase_rule_utf_8.h"
#else
#error CHARSET is not specified
#endif
#endif

static int strtopcmp(const char *str, const char *pattern)
{
   int i;

   for (i = 0;; i++) {
      if (pattern[i] == '\0')
         return i;
      if (str[i] == '\0')
         return -1;
      if (str[i] != pattern[i])
         return -1;
   }
}

void njd_set_accent_phrase(NJD * njd)
{
   NJDNode *node;

   if (njd == NULL || njd->head == NULL)
      return;

   for (node = njd->head->next; node != NULL; node = node->next) {
      if (NJDNode_get_chain_flag(node) < 0) {
         /* Rule 01 */
         NJDNode_set_chain_flag(node, 1);

         /* Rule 02 */
         if (strcmp(NJDNode_get_pos(node->prev), NJD_SET_ACCENT_PHRASE_MEISHI) == 0)
            if (strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_MEISHI) == 0)
               NJDNode_set_chain_flag(node, 1);

         /* Rule 03 */
         if (strcmp(NJDNode_get_pos(node->prev), NJD_SET_ACCENT_PHRASE_KEIYOUSHI) == 0)
            if (strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_MEISHI) == 0)
               NJDNode_set_chain_flag(node, 0);

         /* Rule 04 */
         if (strcmp(NJDNode_get_pos(node->prev), NJD_SET_ACCENT_PHRASE_MEISHI) == 0)
            if (strcmp
                (NJDNode_get_pos_group1(node->prev), NJD_SET_ACCENT_PHRASE_KEIYOUDOUSHI_GOKAN) == 0)
               if (strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_MEISHI) == 0)
                  NJDNode_set_chain_flag(node, 0);

         /* Rule 05 */
         if (strcmp(NJDNode_get_pos(node->prev), NJD_SET_ACCENT_PHRASE_DOUSHI) == 0) {
            if (strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_KEIYOUSHI) == 0)
               NJDNode_set_chain_flag(node, 0);
            else if (strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_MEISHI) == 0)
               NJDNode_set_chain_flag(node, 0);
         }

         /* Rule 06 */
         if (strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_FUKUSHI) == 0
             || strcmp(NJDNode_get_pos(node->prev), NJD_SET_ACCENT_PHRASE_FUKUSHI) == 0
             || strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_SETSUZOKUSHI) == 0
             || strcmp(NJDNode_get_pos(node->prev), NJD_SET_ACCENT_PHRASE_SETSUZOKUSHI) == 0
             || strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_RENTAISHI) == 0
             || strcmp(NJDNode_get_pos(node->prev), NJD_SET_ACCENT_PHRASE_RENTAISHI) == 0)
            NJDNode_set_chain_flag(node, 0);

         /* Rule 07 */
         if (strcmp(NJDNode_get_pos(node->prev), NJD_SET_ACCENT_PHRASE_MEISHI) == 0)
            if (strcmp(NJDNode_get_pos_group1(node->prev), NJD_SET_ACCENT_PHRASE_FUKUSHI_KANOU)
                == 0)
               NJDNode_set_chain_flag(node, 0);
         if (strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_MEISHI) == 0)
            if (strcmp(NJDNode_get_pos_group1(node), NJD_SET_ACCENT_PHRASE_FUKUSHI_KANOU) == 0)
               NJDNode_set_chain_flag(node, 0);

         /* Rule 08 */
         if (strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_JODOUSHI) == 0)
            NJDNode_set_chain_flag(node, 1);
         if (strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_JOSHI) == 0)
            NJDNode_set_chain_flag(node, 1);

         /* Rule 09 */
         if (strcmp(NJDNode_get_pos(node->prev), NJD_SET_ACCENT_PHRASE_JODOUSHI) == 0)
            if (strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_JODOUSHI) != 0 &&
                strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_JOSHI) != 0)
               NJDNode_set_chain_flag(node, 0);
         if (strcmp(NJDNode_get_pos(node->prev), NJD_SET_ACCENT_PHRASE_JOSHI) == 0)
            if (strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_JODOUSHI) != 0 &&
                strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_JOSHI) != 0)
               NJDNode_set_chain_flag(node, 0);

         /* Rule 10 */
         if (strcmp(NJDNode_get_pos_group1(node->prev), NJD_SET_ACCENT_PHRASE_SETSUBI) == 0)
            if (strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_MEISHI) == 0)
               NJDNode_set_chain_flag(node, 0);

         /* Rule 11 */
         if (strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_KEIYOUSHI) == 0)
            if (strcmp(NJDNode_get_pos_group1(node), NJD_SET_ACCENT_PHRASE_HIJIRITSU) == 0) {
               if (strcmp(NJDNode_get_pos(node->prev), NJD_SET_ACCENT_PHRASE_DOUSHI) == 0) {
                  if (strtopcmp(NJDNode_get_cform(node->prev), NJD_SET_ACCENT_PHRASE_RENYOU) != -1)
                     NJDNode_set_chain_flag(node, 1);
               } else if (strcmp(NJDNode_get_pos(node->prev), NJD_SET_ACCENT_PHRASE_KEIYOUSHI)
                          == 0) {
                  if (strtopcmp(NJDNode_get_cform(node->prev), NJD_SET_ACCENT_PHRASE_RENYOU) != -1)
                     NJDNode_set_chain_flag(node, 1);
               } else if (strcmp(NJDNode_get_pos(node->prev), NJD_SET_ACCENT_PHRASE_JOSHI) == 0) {
                  if (strcmp
                      (NJDNode_get_pos_group1(node->prev),
                       NJD_SET_ACCENT_PHRASE_SETSUZOKUJOSHI) == 0) {
                     if (strcmp(NJDNode_get_string(node->prev), NJD_SET_ACCENT_PHRASE_TE) == 0)
                        NJDNode_set_chain_flag(node, 1);
                     else if (strcmp(NJDNode_get_string(node->prev), NJD_SET_ACCENT_PHRASE_DE) == 0)
                        NJDNode_set_chain_flag(node, 1);
                  }
               }
            }

         /* Rule 12 */
         if (strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_DOUSHI) == 0)
            if (strcmp(NJDNode_get_pos_group1(node), NJD_SET_ACCENT_PHRASE_HIJIRITSU) == 0) {
               if (strcmp(NJDNode_get_pos(node->prev), NJD_SET_ACCENT_PHRASE_DOUSHI) == 0) {
                  if (strtopcmp(NJDNode_get_cform(node->prev), NJD_SET_ACCENT_PHRASE_RENYOU) != -1)
                     NJDNode_set_chain_flag(node, 1);
               } else if (strcmp(NJDNode_get_pos(node->prev), NJD_SET_ACCENT_PHRASE_MEISHI) == 0) {
                  if (strcmp
                      (NJDNode_get_pos_group1(node->prev),
                       NJD_SET_ACCENT_PHRASE_SAHEN_SETSUZOKU) == 0)
                     NJDNode_set_chain_flag(node, 1);
               }
            }

         /* Rule 13 */
         if (strcmp(NJDNode_get_pos(node->prev), NJD_SET_ACCENT_PHRASE_MEISHI) == 0) {
            if (strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_DOUSHI) == 0 ||
                strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_KEIYOUSHI) == 0 ||
                strcmp(NJDNode_get_pos_group1(node), NJD_SET_ACCENT_PHRASE_KEIYOUDOUSHI_GOKAN) == 0)
               NJDNode_set_chain_flag(node, 0);
         }

         /* Rule 14 */
         if (strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_KIGOU) == 0 ||
             strcmp(NJDNode_get_pos(node->prev), NJD_SET_ACCENT_PHRASE_KIGOU) == 0)
            NJDNode_set_chain_flag(node, 0);

         /* Rule 15 */
         if (strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_SETTOUSHI) == 0)
            NJDNode_set_chain_flag(node, 0);

         /* Rule 16 */
         if (strcmp(NJDNode_get_pos_group3(node->prev), NJD_SET_ACCENT_PHRASE_SEI) == 0
             && strcmp(NJDNode_get_pos(node), NJD_SET_ACCENT_PHRASE_MEISHI) == 0)
            NJDNode_set_chain_flag(node, 0);

         /* Rule 17 */
         if (strcmp(NJDNode_get_pos(node->prev), NJD_SET_ACCENT_PHRASE_MEISHI) == 0
             && strcmp(NJDNode_get_pos_group3(node), NJD_SET_ACCENT_PHRASE_MEI) == 0)
            NJDNode_set_chain_flag(node, 0);

         /* Rule 18 */
         if (strcmp(NJDNode_get_pos_group1(node), NJD_SET_ACCENT_PHRASE_SETSUBI) == 0)
            NJDNode_set_chain_flag(node, 1);
      }
   }
}

NJD_SET_ACCENT_PHRASE_C_END;

#endif                          /* !NJD_SET_ACCENT_PHRASE_C */
