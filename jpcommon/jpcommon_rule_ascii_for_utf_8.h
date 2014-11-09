#ifndef JPCOMMON_RULE_H
#define JPCOMMON_RULE_H

#ifdef __cplusplus
#define JPCOMMON_RULE_H_START extern "C" {
#define JPCOMMON_RULE_H_END   }
#else
#define JPCOMMON_RULE_H_START
#define JPCOMMON_RULE_H_END
#endif                          /* __CPLUSPLUS */

JPCOMMON_RULE_H_START;

#define JPCOMMON_MORA_UNVOICE "\xe2\x80\x99"
#define JPCOMMON_MORA_LONG_VOWEL "\xe3\x83\xbc"
#define JPCOMMON_MORA_SHORT_PAUSE "\xe3\x80\x81"
#define JPCOMMON_MORA_QUESTION "\xef\xbc\x9f"
#define JPCOMMON_PHONEME_SHORT_PAUSE "pau"
#define JPCOMMON_PHONEME_SILENT "sil"
#define JPCOMMON_PHONEME_UNKNOWN "xx"
#define JPCOMMON_FLAG_QUESTION "1"

static const char *jpcommon_unvoice_list[] = {
   "a", "A",
   "i", "I",
   "u", "U",
   "e", "E",
   "o", "O",
   NULL, NULL
};

static const char *jpcommon_mora_list[] = {
   "\xe3\x83\xb4\xe3\x83\xa7", "by", "o",
   "\xe3\x83\xb4\xe3\x83\xa5", "by", "u",
   "\xe3\x83\xb4\xe3\x83\xa3", "by", "a",
   "\xe3\x83\xb4\xe3\x82\xa9", "v", "o",
   "\xe3\x83\xb4\xe3\x82\xa7", "v", "e",
   "\xe3\x83\xb4\xe3\x82\xa3", "v", "i",
   "\xe3\x83\xb4\xe3\x82\xa1", "v", "a",
   "\xe3\x83\xb4", "v", "u",
   "\xe3\x83\xb3", "N", NULL,
   "\xe3\x83\xb2", "o", NULL,
   "\xe3\x83\xb1", "e", NULL,
   "\xe3\x83\xb0", "i", NULL,
   "\xe3\x83\xaf", "w", "a",
   "\xe3\x83\xae", "w", "a",
   "\xe3\x83\xad", "r", "o",
   "\xe3\x83\xac", "r", "e",
   "\xe3\x83\xab", "r", "u",
   "\xe3\x83\xaa\xe3\x83\xa7", "ry", "o",
   "\xe3\x83\xaa\xe3\x83\xa5", "ry", "u",
   "\xe3\x83\xaa\xe3\x83\xa3", "ry", "a",
   "\xe3\x83\xaa\xe3\x82\xa7", "ry", "e",
   "\xe3\x83\xaa", "r", "i",
   "\xe3\x83\xa9", "r", "a",
   "\xe3\x83\xa8", "y", "o",
   "\xe3\x83\xa7", "y", "o",
   "\xe3\x83\xa6", "y", "u",
   "\xe3\x83\xa5", "y", "u",
   "\xe3\x83\xa4", "y", "a",
   "\xe3\x83\xa3", "y", "a",
   "\xe3\x83\xa2", "m", "o",
   "\xe3\x83\xa1", "m", "e",
   "\xe3\x83\xa0", "m", "u",
   "\xe3\x83\x9f\xe3\x83\xa7", "my", "o",
   "\xe3\x83\x9f\xe3\x83\xa5", "my", "u",
   "\xe3\x83\x9f\xe3\x83\xa3", "my", "a",
   "\xe3\x83\x9f\xe3\x82\xa7", "my", "e",
   "\xe3\x83\x9f", "m", "i",
   "\xe3\x83\x9e", "m", "a",
   "\xe3\x83\x9d", "p", "o",
   "\xe3\x83\x9c", "b", "o",
   "\xe3\x83\x9b", "h", "o",
   "\xe3\x83\x9a", "p", "e",
   "\xe3\x83\x99", "b", "e",
   "\xe3\x83\x98", "h", "e",
   "\xe3\x83\x97", "p", "u",
   "\xe3\x83\x96", "b", "u",
   "\xe3\x83\x95\xe3\x82\xa9", "f", "o",
   "\xe3\x83\x95\xe3\x82\xa7", "f", "e",
   "\xe3\x83\x95\xe3\x82\xa3", "f", "i",
   "\xe3\x83\x95\xe3\x82\xa1", "f", "a",
   "\xe3\x83\x95", "f", "u",
   "\xe3\x83\x94\xe3\x83\xa7", "py", "o",
   "\xe3\x83\x94\xe3\x83\xa5", "py", "u",
   "\xe3\x83\x94\xe3\x83\xa3", "py", "a",
   "\xe3\x83\x94\xe3\x82\xa7", "py", "e",
   "\xe3\x83\x94", "p", "i",
   "\xe3\x83\x93\xe3\x83\xa7", "by", "o",
   "\xe3\x83\x93\xe3\x83\xa5", "by", "u",
   "\xe3\x83\x93\xe3\x83\xa3", "by", "a",
   "\xe3\x83\x93\xe3\x82\xa7", "by", "e",
   "\xe3\x83\x93", "b", "i",
   "\xe3\x83\x92\xe3\x83\xa7", "hy", "o",
   "\xe3\x83\x92\xe3\x83\xa5", "hy", "u",
   "\xe3\x83\x92\xe3\x83\xa3", "hy", "a",
   "\xe3\x83\x92\xe3\x82\xa7", "hy", "e",
   "\xe3\x83\x92", "h", "i",
   "\xe3\x83\x91", "p", "a",
   "\xe3\x83\x90", "b", "a",
   "\xe3\x83\x8f", "h", "a",
   "\xe3\x83\x8e", "n", "o",
   "\xe3\x83\x8d", "n", "e",
   "\xe3\x83\x8c", "n", "u",
   "\xe3\x83\x8b\xe3\x83\xa7", "ny", "o",
   "\xe3\x83\x8b\xe3\x83\xa5", "ny", "u",
   "\xe3\x83\x8b\xe3\x83\xa3", "ny", "a",
   "\xe3\x83\x8b\xe3\x82\xa7", "ny", "e",
   "\xe3\x83\x8b", "n", "i",
   "\xe3\x83\x8a", "n", "a",
   "\xe3\x83\x89\xe3\x82\xa5", "d", "u",
   "\xe3\x83\x89", "d", "o",
   "\xe3\x83\x88\xe3\x82\xa5", "t", "u",
   "\xe3\x83\x88", "t", "o",
   "\xe3\x83\x87\xe3\x83\xa7", "dy", "o",
   "\xe3\x83\x87\xe3\x83\xa5", "dy", "u",
   "\xe3\x83\x87\xe3\x83\xa3", "dy", "a",
   "\xe3\x83\x87\xe3\x82\xa7", "dy", "e",
   "\xe3\x83\x87\xe3\x82\xa3", "d", "i",
   "\xe3\x83\x87", "d", "e",
   "\xe3\x83\x86\xe3\x83\xa7", "ty", "o",
   "\xe3\x83\x86\xe3\x83\xa5", "ty", "u",
   "\xe3\x83\x86\xe3\x83\xa3", "ty", "a",
   "\xe3\x83\x86\xe3\x82\xa3", "t", "i",
   "\xe3\x83\x86", "t", "e",
   "\xe3\x83\x85", "z", "u",
   "\xe3\x83\x84\xe3\x82\xa9", "ts", "o",
   "\xe3\x83\x84\xe3\x82\xa7", "ts", "e",
   "\xe3\x83\x84\xe3\x82\xa3", "ts", "i",
   "\xe3\x83\x84\xe3\x82\xa1", "ts", "a",
   "\xe3\x83\x84", "ts", "u",
   "\xe3\x83\x83", "cl", NULL,
   "\xe3\x83\x82", "j", "i",
   "\xe3\x83\x81\xe3\x83\xa7", "ch", "o",
   "\xe3\x83\x81\xe3\x83\xa5", "ch", "u",
   "\xe3\x83\x81\xe3\x83\xa3", "ch", "a",
   "\xe3\x83\x81\xe3\x82\xa7", "ch", "e",
   "\xe3\x83\x81", "ch", "i",
   "\xe3\x83\x80", "d", "a",
   "\xe3\x82\xbf", "t", "a",
   "\xe3\x82\xbe", "z", "o",
   "\xe3\x82\xbd", "s", "o",
   "\xe3\x82\xbc", "z", "e",
   "\xe3\x82\xbb", "s", "e",
   "\xe3\x82\xba\xe3\x82\xa3", "z", "i",
   "\xe3\x82\xba", "z", "u",
   "\xe3\x82\xb9\xe3\x82\xa3", "s", "i",
   "\xe3\x82\xb9", "s", "u",
   "\xe3\x82\xb8\xe3\x83\xa7", "j", "o",
   "\xe3\x82\xb8\xe3\x83\xa5", "j", "u",
   "\xe3\x82\xb8\xe3\x83\xa3", "j", "a",
   "\xe3\x82\xb8\xe3\x82\xa7", "j", "e",
   "\xe3\x82\xb8", "j", "i",
   "\xe3\x82\xb7\xe3\x83\xa7", "sh", "o",
   "\xe3\x82\xb7\xe3\x83\xa5", "sh", "u",
   "\xe3\x82\xb7\xe3\x83\xa3", "sh", "a",
   "\xe3\x82\xb7\xe3\x82\xa7", "sh", "e",
   "\xe3\x82\xb7", "sh", "i",
   "\xe3\x82\xb6", "z", "a",
   "\xe3\x82\xb5", "s", "a",
   "\xe3\x82\xb4", "g", "o",
   "\xe3\x82\xb3", "k", "o",
   "\xe3\x82\xb2", "g", "e",
   "\xe3\x82\xb1", "k", "e",
   "\xe3\x83\xb6", "k", "e",
   "\xe3\x82\xb0\xe3\x83\xae", "gw", "a",
   "\xe3\x82\xb0", "g", "u",
   "\xe3\x82\xaf\xe3\x83\xae", "kw", "a",
   "\xe3\x82\xaf", "k", "u",
   "\xe3\x82\xae\xe3\x83\xa7", "gy", "o",
   "\xe3\x82\xae\xe3\x83\xa5", "gy", "u",
   "\xe3\x82\xae\xe3\x83\xa3", "gy", "a",
   "\xe3\x82\xae\xe3\x82\xa7", "gy", "e",
   "\xe3\x82\xae", "g", "i",
   "\xe3\x82\xad\xe3\x83\xa7", "ky", "o",
   "\xe3\x82\xad\xe3\x83\xa5", "ky", "u",
   "\xe3\x82\xad\xe3\x83\xa3", "ky", "a",
   "\xe3\x82\xad\xe3\x82\xa7", "ky", "e",
   "\xe3\x82\xad", "k", "i",
   "\xe3\x82\xac", "g", "a",
   "\xe3\x82\xab", "k", "a",
   "\xe3\x82\xaa", "o", NULL,
   "\xe3\x82\xa9", "o", NULL,
   "\xe3\x82\xa8", "e", NULL,
   "\xe3\x82\xa7", "e", NULL,
   "\xe3\x82\xa6\xe3\x82\xa9", "w", "o",
   "\xe3\x82\xa6\xe3\x82\xa7", "w", "e",
   "\xe3\x82\xa6\xe3\x82\xa3", "w", "i",
   "\xe3\x82\xa6", "u", NULL,
   "\xe3\x82\xa5", "u", NULL,
   "\xe3\x82\xa4\xe3\x82\xa7", "y", "e",
   "\xe3\x82\xa4", "i", NULL,
   "\xe3\x82\xa3", "i", NULL,
   "\xe3\x82\xa2", "a", NULL,
   "\xe3\x82\xa1", "a", NULL,
   NULL, NULL, NULL
};

static const char *jpcommon_pos_list[] = {
   "\xe3\x81\x9d\xe3\x81\xae\xe4\xbb\x96", "xx",
   "\xe6\x84\x9f\xe5\x8b\x95\xe8\xa9\x9e", "09",
   "\xe8\xa8\x98\xe5\x8f\xb7", "xx",
   "\xe5\xbd\xa2\xe7\x8a\xb6\xe8\xa9\x9e", "19",
   "\xe5\xbd\xa2\xe5\xae\xb9\xe8\xa9\x9e", "01",
   "\xe5\x8a\xa9\xe8\xa9\x9e-\xe3\x81\x9d\xe3\x81\xae\xe4\xbb\x96", "23",
   "\xe5\x8a\xa9\xe8\xa9\x9e-\xe6\xa0\xbc\xe5\x8a\xa9\xe8\xa9\x9e", "13",
   "\xe5\x8a\xa9\xe8\xa9\x9e-\xe4\xbf\x82\xe5\x8a\xa9\xe8\xa9\x9e", "24",
   "\xe5\x8a\xa9\xe8\xa9\x9e-\xe7\xb5\x82\xe5\x8a\xa9\xe8\xa9\x9e", "14",
   "\xe5\x8a\xa9\xe8\xa9\x9e-\xe6\x8e\xa5\xe7\xb6\x9a\xe5\x8a\xa9\xe8\xa9\x9e", "12",
   "\xe5\x8a\xa9\xe8\xa9\x9e-\xe5\x89\xaf\xe5\x8a\xa9\xe8\xa9\x9e", "11",
   "\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e", "10",
   "\xe6\x8e\xa5\xe7\xb6\x9a\xe8\xa9\x9e", "08",
   "\xe6\x8e\xa5\xe9\xa0\xad\xe8\xbe\x9e", "16",
   "\xe6\x8e\xa5\xe9\xa0\xad\xe8\xbe\x9e-\xe5\xbd\xa2\xe7\x8a\xb6\xe8\xa9\x9e\xe7\x9a\x84", "16",
   "\xe6\x8e\xa5\xe9\xa0\xad\xe8\xbe\x9e-\xe5\xbd\xa2\xe5\xae\xb9\xe8\xa9\x9e\xe7\x9a\x84", "16",
   "\xe6\x8e\xa5\xe9\xa0\xad\xe8\xbe\x9e-\xe5\x8b\x95\xe8\xa9\x9e\xe7\x9a\x84", "16",
   "\xe6\x8e\xa5\xe9\xa0\xad\xe8\xbe\x9e-\xe5\x90\x8d\xe8\xa9\x9e\xe7\x9a\x84", "16",
   "\xe6\x8e\xa5\xe5\xb0\xbe\xe8\xbe\x9e-\xe5\xbd\xa2\xe7\x8a\xb6\xe8\xa9\x9e\xe7\x9a\x84", "16",
   "\xe6\x8e\xa5\xe5\xb0\xbe\xe8\xbe\x9e-\xe5\xbd\xa2\xe5\xae\xb9\xe8\xa9\x9e\xe7\x9a\x84", "15",
   "\xe6\x8e\xa5\xe5\xb0\xbe\xe8\xbe\x9e-\xe5\x8b\x95\xe8\xa9\x9e\xe7\x9a\x84", "15",
   "\xe6\x8e\xa5\xe5\xb0\xbe\xe8\xbe\x9e-\xe5\x90\x8d\xe8\xa9\x9e\xe7\x9a\x84", "15",
   "\xe4\xbb\xa3\xe5\x90\x8d\xe8\xa9\x9e", "04",
   "\xe5\x8b\x95\xe8\xa9\x9e", "20",
   "\xe5\x8b\x95\xe8\xa9\x9e-\xe9\x9d\x9e\xe8\x87\xaa\xe7\xab\x8b", "17",
   "\xe5\x89\xaf\xe8\xa9\x9e", "06",
   "\xe5\x90\x8d\xe8\xa9\x9e-\xe3\x82\xb5\xe5\xa4\x89\xe6\x8e\xa5\xe7\xb6\x9a", "03",
   "\xe5\x90\x8d\xe8\xa9\x9e-\xe5\x9b\xba\xe6\x9c\x89\xe5\x90\x8d\xe8\xa9\x9e", "18",
   "\xe5\x90\x8d\xe8\xa9\x9e-\xe6\x95\xb0\xe8\xa9\x9e", "05",
   "\xe5\x90\x8d\xe8\xa9\x9e-\xe9\x9d\x9e\xe8\x87\xaa\xe7\xab\x8b", "22",
   "\xe5\x90\x8d\xe8\xa9\x9e-\xe6\x99\xae\xe9\x80\x9a\xe5\x90\x8d\xe8\xa9\x9e", "02",
   "\xe9\x80\xa3\xe4\xbd\x93\xe8\xa9\x9e", "07",
   "\xe3\x83\x95\xe3\x82\xa3\xe3\x83\xa9\xe3\x83\xbc", "25",
   NULL, NULL
};


static const char *jpcommon_cform_list[] = {
   "*", "xx",
   "\xe3\x81\x9d\xe3\x81\xae\xe4\xbb\x96", "6",
   "\xe4\xbb\xae\xe5\xae\x9a\xe5\xbd\xa2", "4",
   "\xe5\x9f\xba\xe6\x9c\xac\xe5\xbd\xa2", "2",
   "\xe6\x9c\xaa\xe7\x84\xb6\xe5\xbd\xa2", "0",
   "\xe5\x91\xbd\xe4\xbb\xa4\xe5\xbd\xa2", "5",
   "\xe9\x80\xa3\xe4\xbd\x93\xe5\xbd\xa2", "3",
   "\xe9\x80\xa3\xe7\x94\xa8\xe5\xbd\xa2", "1",
   NULL, NULL
};

static const char *jpcommon_ctype_list[] = {
   "*", "xx",
   "\xe3\x82\xab\xe8\xa1\x8c\xe5\xa4\x89\xe6\xa0\xbc", "5",
   "\xe3\x82\xb5\xe8\xa1\x8c\xe5\xa4\x89\xe6\xa0\xbc", "4",
   "\xe3\x83\xa9\xe8\xa1\x8c\xe5\xa4\x89\xe6\xa0\xbc", "6",
   "\xe4\xb8\x80\xe6\xae\xb5", "3",
   "\xe5\xbd\xa2\xe5\xae\xb9\xe8\xa9\x9e", "7",
   "\xe4\xba\x94\xe6\xae\xb5", "1",
   "\xe5\x9b\x9b\xe6\xae\xb5", "6",
   "\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e", "7",
   "\xe4\xba\x8c\xe6\xae\xb5", "6",
   "\xe4\xb8\x8d\xe5\xa4\x89\xe5\x8c\x96", "6",
   "\xe6\x96\x87\xe8\xaa\x9e\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e", "6",
   NULL, NULL
};

JPCOMMON_RULE_H_END;

#endif                          /* !JPCOMMON_RULE_H */
