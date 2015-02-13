#ifndef NJD_SET_LONG_VOWEL_RULE_H
#define NJD_SET_LONG_VOWEL_RULE_H

#ifdef __cplusplus
#define NJD_SET_LONG_VOWEL_RULE_H_START extern "C" {
#define NJD_SET_LONG_VOWEL_RULE_H_END   }
#else
#define NJD_SET_LONG_VOWEL_RULE_H_START
#define NJD_SET_LONG_VOWEL_RULE_H_END
#endif                          /* __CPLUSPLUS */

NJD_SET_LONG_VOWEL_RULE_H_START;

static const char njd_set_long_vowel_kanji_range[] = {
#ifdef CHARSET_EUC_JP
   2, 0xA1, 0xFE,
   3, 0x8F, 0x8F,
#endif                          /* CHARSET_EUC_JP */
#ifdef CHARSET_SHIFT_JIS
   2, 0x81, 0xFC,
#endif                          /* CHARSET_SHIFT_JIS */
#ifdef CHARSET_UTF_8
   2, 0xC0, 0xDF,
   3, 0xE0, 0xEF,
   4, 0xF0, 0xF7,
#endif                          /* CHARSET_UTF_8 */
   -1, -1, -1
};

static const char *njd_set_long_vowel_table[] = {
   "\xe3\x82\xa8\xe3\x82\xa4", "\xe3\x82\xa8\xe3\x83\xbc",
   "\xe3\x82\xb1\xe3\x82\xa4", "\xe3\x82\xb1\xe3\x83\xbc",
   "\xe3\x82\xbb\xe3\x82\xa4", "\xe3\x82\xbb\xe3\x83\xbc",
   "\xe3\x83\x86\xe3\x82\xa4", "\xe3\x83\x86\xe3\x83\xbc",
   "\xe3\x83\x8d\xe3\x82\xa4", "\xe3\x83\x8d\xe3\x83\xbc",
   "\xe3\x83\x98\xe3\x82\xa4", "\xe3\x83\x98\xe3\x83\xbc",
   "\xe3\x83\xa1\xe3\x82\xa4", "\xe3\x83\xa1\xe3\x83\xbc",
   "\xe3\x83\xac\xe3\x82\xa4", "\xe3\x83\xac\xe3\x83\xbc",
   "\xe3\x82\xb2\xe3\x82\xa4", "\xe3\x82\xb2\xe3\x83\xbc",
   "\xe3\x82\xbc\xe3\x82\xa4", "\xe3\x82\xbc\xe3\x83\xbc",
   "\xe3\x83\x87\xe3\x82\xa4", "\xe3\x83\x87\xe3\x83\xbc",
   "\xe3\x83\x99\xe3\x82\xa4", "\xe3\x83\x99\xe3\x83\xbc",
   "\xe3\x83\x9a\xe3\x82\xa4", "\xe3\x83\x9a\xe3\x83\xbc",
   "\xe3\x83\xb1\xe3\x82\xa4", "\xe3\x83\xb1\xe3\x83\xbc",
   NULL, NULL
};

NJD_SET_LONG_VOWEL_RULE_H_END;

#endif                          /* !NJD_SET_LONG_VOWEL_RULE_H */
