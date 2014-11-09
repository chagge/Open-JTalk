#ifndef TEXT2MECAB_RULE_H
#define TEXT2MECAB_RULE_H

#ifdef __cplusplus
#define TEXT2MECAB_RULE_H_START extern "C" {
#define TEXT2MECAB_RULE_H_END   }
#else
#define TEXT2MECAB_RULE_H_START
#define TEXT2MECAB_RULE_H_END
#endif                          /* __CPLUSPLUS */

TEXT2MECAB_RULE_H_START;

static const char text2mecab_control_range[] = {
   0x00, 0x7F
};

static const char text2mecab_kanji_range[] = {
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

static const char *text2mecab_conv_list[] = {
   " ", "@",
   "!", "I",
   "\"", "h",
   "#", "",
   "$", "",
   "%", "",
   "&", "",
   "'", "f",
   "(", "i",
   ")", "j",
   "*", "",
   "+", "{",
   ",", "C",
   "-", "|",
   ".", "D",
   "/", "^",
   "0", "O",
   "1", "P",
   "2", "Q",
   "3", "R",
   "4", "S",
   "5", "T",
   "6", "U",
   "7", "V",
   "8", "W",
   "9", "X",
   ":", "F",
   ";", "G",
   "<", "",
   "=", "",
   ">", "",
   "?", "H",
   "@", "",
   "A", "`",
   "B", "a",
   "C", "b",
   "D", "c",
   "E", "d",
   "F", "e",
   "G", "f",
   "H", "g",
   "I", "h",
   "J", "i",
   "K", "j",
   "L", "k",
   "M", "l",
   "N", "m",
   "O", "n",
   "P", "o",
   "Q", "p",
   "R", "q",
   "S", "r",
   "T", "s",
   "U", "t",
   "V", "u",
   "W", "v",
   "X", "w",
   "Y", "x",
   "Z", "y",
   "[", "m",
   "\\", "",
   "]", "n",
   "^", "O",
   "_", "Q",
   "`", "e",
   "a", "",
   "b", "",
   "c", "",
   "d", "",
   "e", "",
   "f", "",
   "g", "",
   "h", "",
   "i", "",
   "j", "",
   "k", "",
   "l", "",
   "m", "",
   "n", "",
   "o", "",
   "p", "",
   "q", "",
   "r", "",
   "s", "",
   "t", "",
   "u", "",
   "v", "",
   "w", "",
   "x", "",
   "y", "",
   "z", "",
   "{", "o",
   "|", "b",
   "}", "p",
   "~", "`",
   "³Ž", "",
   "¶Ž", "K",
   "·Ž", "M",
   "øŽ", "O",
   "¹Ž", "Q",
   "ŗŽ", "S",
   "»Ž", "U",
   "¼Ž", "W",
   "½Ž", "Y",
   "¾Ž", "[",
   "æŽ", "]",
   "ĄŽ", "_",
   "ĮŽ", "a",
   "ĀŽ", "d",
   "ĆŽ", "f",
   "ÄŽ", "h",
   "ŹŽ", "o",
   "ĖŽ", "r",
   "ĢŽ", "u",
   "ĶŽ", "x",
   "ĪŽ", "{",
   "Źß", "p",
   "Ėß", "s",
   "Ģß", "v",
   "Ķß", "y",
   "Īß", "|",
   "”", "B",
   "¢", "u",
   "£", "v",
   "¤", "A",
   "„", "E",
   "¦", "",
   "§", "@",
   "Ø", "B",
   "©", "D",
   "Ŗ", "F",
   "«", "H",
   "¬", "",
   "­", "",
   "®", "",
   "Æ", "b",
   "°", "[",
   "±", "A",
   "²", "C",
   "³", "E",
   "“", "G",
   "µ", "I",
   "¶", "J",
   "·", "L",
   "ø", "N",
   "¹", "P",
   "ŗ", "R",
   "»", "T",
   "¼", "V",
   "½", "X",
   "¾", "Z",
   "æ", "\",
   "Ą", "^",
   "Į", "`",
   "Ā", "c",
   "Ć", "e",
   "Ä", "g",
   "Å", "i",
   "Ę", "j",
   "Ē", "k",
   "Č", "l",
   "É", "m",
   "Ź", "n",
   "Ė", "q",
   "Ģ", "t",
   "Ķ", "w",
   "Ī", "z",
   "Ļ", "}",
   "Š", "~",
   "Ń", "",
   "Ņ", "",
   "Ó", "",
   "Ō", "",
   "Õ", "",
   "Ö", "",
   "×", "",
   "Ų", "",
   "Ł", "",
   "Ś", "",
   "Ū", "",
   "Ü", "",
   "Ż", "",
   "Ž", "",
   "ß", "",
   NULL, NULL
};

TEXT2MECAB_RULE_H_END;

#endif                          /* !TEXT2MECAB_RULE_H */
