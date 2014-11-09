#ifndef NJD_SET_LONG_VOWEL_C
#define NJD_SET_LONG_VOWEL_C

#ifdef __cplusplus
#define NJD_SET_LONG_VOWEL_C_START extern "C" {
#define NJD_SET_LONG_VOWEL_C_END   }
#else
#define NJD_SET_LONG_VOWEL_C_START
#define NJD_SET_LONG_VOWEL_C_END
#endif                          /* __CPLUSPLUS */

NJD_SET_LONG_VOWEL_C_START;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "njd.h"
#include "njd_set_long_vowel.h"

#ifdef ASCII_HEADER
#if defined(CHARSET_EUC_JP)
#include "njd_set_long_vowel_rule_ascii_for_euc_jp.h"
#elif defined(CHARSET_SHIFT_JIS)
#include "njd_set_long_vowel_rule_ascii_for_shift_jis.h"
#elif defined(CHARSET_UTF_8)
#include "njd_set_long_vowel_rule_ascii_for_utf_8.h"
#else
#error CHARSET is not specified
#endif
#else
#if defined(CHARSET_EUC_JP)
#include "njd_set_long_vowel_rule_euc_jp.h"
#elif defined(CHARSET_SHIFT_JIS)
#include "njd_set_long_vowel_rule_shift_jis.h"
#elif defined(CHARSET_UTF_8)
#include "njd_set_long_vowel_rule_utf_8.h"
#else
#error CHARSET is not specified
#endif
#endif

#define MAXBUFLEN 1024

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

static int detect_byte(const char *str)
{
   int i, byte;

   byte = -1;
   for (i = 0; njd_set_long_vowel_kanji_range[i] > 0; i += 3) {
      if (njd_set_long_vowel_kanji_range[i + 1] <= str[0]
          && njd_set_long_vowel_kanji_range[i + 2] >= str[0]) {
         byte = njd_set_long_vowel_kanji_range[i];
         break;
      }
   }
   if (byte < 0) {
      fprintf(stderr, "ERROR: detect_byte() in njd_set_long_vowel.c: Wrong character.\n");
      exit(1);
   }
   return byte;
}

void njd_set_long_vowel(NJD * njd)
{
   int i, j;
   NJDNode *node;
   const char *str;
   int len;
   char buff[MAXBUFLEN];
   int byte = -1;

   for (node = njd->head; node != NULL; node = node->next) {
      /* initialize */
      str = NJDNode_get_pron(node);
      len = strlen(str);
      buff[0] = '\0';
      /* search */
      for (i = 0; i < len; i += byte) {
         byte = -1;
         for (j = 0; njd_set_long_vowel_table[j] != NULL; j += 2) {
            byte = strtopcmp(&str[i], njd_set_long_vowel_table[j]);
            if (byte > 0) {
               /* find */
               strcat(buff, njd_set_long_vowel_table[j + 1]);
               break;
            }
         }
         /* not found */
         if (byte < 0) {
            byte = detect_byte(&str[i]);
            strncat(buff, &str[i], byte);
         }
      }
      /* finish */
      NJDNode_set_pron(node, buff);
   }
}

NJD_SET_LONG_VOWEL_C_END;

#endif                          /* !NJD_SET_LONG_VOWEL_C */
