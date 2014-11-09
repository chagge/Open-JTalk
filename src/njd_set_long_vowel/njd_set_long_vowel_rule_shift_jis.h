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
   "�G�C", "�G�[",
   "�P�C", "�P�[",
   "�Z�C", "�Z�[",
   "�e�C", "�e�[",
   "�l�C", "�l�[",
   "�w�C", "�w�[",
   "���C", "���[",
   "���C", "���[",
   "�Q�C", "�Q�[",
   "�[�C", "�[�[",
   "�f�C", "�f�[",
   "�x�C", "�x�[",
   "�y�C", "�y�[",
   "���C", "���[",
   /*
      "���F�C", "���F�[",
      "���F�C", "���F�[",
      "�~�F�C", "�~�F�[",
      "�t�F�C", "�t�F�[",
      "�s�F�C", "�s�F�[",
      "�r�F�C", "�r�F�[",
      "�q�F�C", "�q�F�[",
      "�j�F�C", "�j�F�[",
      "�f�F�C", "�f�F�[",
      "�c�F�C", "�c�F�[",
      "�`�F�C", "�`�F�[",
      "�W�F�C", "�W�F�[",
      "�V�F�C", "�V�F�[",
      "�M�F�C", "�M�F�[",
      "�L�F�C", "�L�F�[",
      "�E�F�C", "�E�F�[",
      "�C�F�C", "�C�F�[",
    */
   NULL, NULL
};

NJD_SET_LONG_VOWEL_RULE_H_END;

#endif                          /* !NJD_SET_LONG_VOWEL_RULE_H */