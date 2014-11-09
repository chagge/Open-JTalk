#ifndef TEXT2MECAB_C
#define TEXT2MECAB_C

#ifdef __cplusplus
#define TEXT2MECAB_C_START extern "C" {
#define TEXT2MECAB_C_END   }
#else
#define TEXT2MECAB_C_START
#define TEXT2MECAB_C_END
#endif                          /* __CPLUSPLUS */

TEXT2MECAB_C_START;

#include <stdio.h>
#include <string.h>

#include "text2mecab.h"

#ifdef ASCII_HEADER
#if defined(CHARSET_EUC_JP)
#include "text2mecab_rule_ascii_for_euc_jp.h"
#elif defined(CHARSET_SHIFT_JIS)
#include "text2mecab_rule_ascii_for_shift_jis.h"
#elif defined(CHARSET_UTF_8)
#include "text2mecab_rule_ascii_for_utf_8.h"
#else
#error CHARSET is not specified
#endif
#else
#if defined(CHARSET_EUC_JP)
#include "text2mecab_rule_euc_jp.h"
#elif defined(CHARSET_SHIFT_JIS)
#include "text2mecab_rule_shift_jis.h"
#elif defined(CHARSET_UTF_8)
#include "text2mecab_rule_utf_8.h"
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

void text2mecab(char *output, const char *input)
{
   int i, j;
   const int length = strlen(input);
   const char *str;
   int index = 0;
   int s, e = -1;

   for (s = 0; s < length;) {
      str = &input[s];
      /* search */
      for (i = 0; text2mecab_conv_list[i] != NULL; i += 2) {
         e = strtopcmp(str, text2mecab_conv_list[i]);
         if (e != -1)
            break;
      }
      if (e != -1) {
         /* convert */
         s += e;
         str = text2mecab_conv_list[i + 1];
         for (j = 0; str[j] != '\0'; j++)
            output[index++] = str[j];
      } else if (text2mecab_control_range[0] <= str[0] && str[0] <= text2mecab_control_range[1]) {
         /* control character */
         s++;
      } else {
         /* multi byte character */
         e = -1;
         for (j = 0; text2mecab_kanji_range[j] > 0; j += 3) {
            if (text2mecab_kanji_range[j + 1] <= str[0] && text2mecab_kanji_range[j + 2] >= str[0]) {
               e = text2mecab_kanji_range[j];
               break;
            }
         }
         if (e > 0) {
            for (j = 0; j < e; j++)
               output[index++] = input[s++];
         } else {
            /* unknown */
            fprintf(stderr, "WARNING: text2mecab() in text2mecab.c: Wrong character.\n");
            s++;
         }
      }
   }
   output[index] = '\0';
}

TEXT2MECAB_C_END;

#endif                          /* !TEXT2MECAB_C */
