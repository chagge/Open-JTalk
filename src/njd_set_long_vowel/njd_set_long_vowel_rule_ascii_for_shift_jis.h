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
   "\x83\x47\x83\x43", "\x83\x47\x81\x5b",
   "\x83\x50\x83\x43", "\x83\x50\x81\x5b",
   "\x83\x5a\x83\x43", "\x83\x5a\x81\x5b",
   "\x83\x65\x83\x43", "\x83\x65\x81\x5b",
   "\x83\x6c\x83\x43", "\x83\x6c\x81\x5b",
   "\x83\x77\x83\x43", "\x83\x77\x81\x5b",
   "\x83\x81\x83\x43", "\x83\x81\x81\x5b",
   "\x83\x8c\x83\x43", "\x83\x8c\x81\x5b",
   "\x83\x51\x83\x43", "\x83\x51\x81\x5b",
   "\x83\x5b\x83\x43", "\x83\x5b\x81\x5b",
   "\x83\x66\x83\x43", "\x83\x66\x81\x5b",
   "\x83\x78\x83\x43", "\x83\x78\x81\x5b",
   "\x83\x79\x83\x43", "\x83\x79\x81\x5b",
   "\x83\x91\x83\x43", "\x83\x91\x81\x5b",
   NULL, NULL
};

NJD_SET_LONG_VOWEL_RULE_H_END;

#endif                          /* !NJD_SET_LONG_VOWEL_RULE_H */
