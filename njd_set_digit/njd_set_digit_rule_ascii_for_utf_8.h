#ifndef NJD_SET_DIGIT_RULE_H
#define NJD_SET_DIGIT_RULE_H

#ifdef __cplusplus
#define NJD_SET_DIGIT_RULE_H_START extern "C" {
#define NJD_SET_DIGIT_RULE_H_END   }
#else
#define NJD_SET_DIGIT_RULE_H_START
#define NJD_SET_DIGIT_RULE_H_END
#endif                          /* __CPLUSPLUS */

NJD_SET_DIGIT_RULE_H_START;

#define NJD_SET_DIGIT_KAZU "\xe6\x95\xb0"
#define NJD_SET_DIGIT_SUUSETSUZOKU "\xe6\x95\xb0\xe6\x8e\xa5\xe7\xb6\x9a"
#define NJD_SET_DIGIT_JOSUUSHI "\xe5\x8a\xa9\xe6\x95\xb0\xe8\xa9\x9e"
#define NJD_SET_DIGIT_FUKUSHIKANOU "\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd"
#define NJD_SET_DIGIT_HAIHUN1 "\xe2\x80\x95"
#define NJD_SET_DIGIT_HAIHUN2 "\xe2\x88\x92"
#define NJD_SET_DIGIT_HAIHUN3 "\xe2\x80\x90"
#define NJD_SET_DIGIT_KAKKO1 "\xef\xbc\x88"
#define NJD_SET_DIGIT_KAKKO2 "\xef\xbc\x89"
#define NJD_SET_DIGIT_BANGOU "\xe7\x95\xaa\xe5\x8f\xb7"
#define NJD_SET_DIGIT_TEN1 "\xef\xbc\x8e"
#define NJD_SET_DIGIT_TEN2 "\xe3\x83\xbb"
#define NJD_SET_DIGIT_TEN_FEATURE "\xef\xbc\x8e,\xe5\x90\x8d\xe8\xa9\x9e,\xe6\x8e\xa5\xe5\xb0\xbe,\xe5\x8a\xa9\xe6\x95\xb0\xe8\xa9\x9e,*,*,*,\xef\xbc\x8e,\xe3\x83\x86\xe3\x83\xb3,\xe3\x83\x86\xe3\x83\xb3,0/2,*,-1"
#define NJD_SET_DIGIT_ZERO "\xe3\x80\x87"
#define NJD_SET_DIGIT_ZERO_BEFORE_DP "\xe3\x83\xac\xe3\x83\xbc"
#define NJD_SET_DIGIT_ZERO_AFTER_DP "\xe3\x82\xbc\xe3\x83\xad"
#define NJD_SET_DIGIT_TWO "\xe4\xba\x8c"
#define NJD_SET_DIGIT_TWO_BEFORE_DP "\xe3\x83\x8b\xe3\x83\xbc"
#define NJD_SET_DIGIT_TWO_AFTER_DP "\xe3\x83\x8b\xe3\x83\xbc"
#define NJD_SET_DIGIT_FIVE "\xe4\xba\x94"
#define NJD_SET_DIGIT_FIVE_BEFORE_DP "\xe3\x82\xb4\xe3\x83\xbc"
#define NJD_SET_DIGIT_FIVE_AFTER_DP "\xe3\x82\xb4\xe3\x83\xbc"
#define NJD_SET_DIGIT_NIN "\xe4\xba\xba"
#define NJD_SET_DIGIT_GATSU "\xe6\x9c\x88"
#define NJD_SET_DIGIT_NICHI "\xe6\x97\xa5"
#define NJD_SET_DIGIT_NICHIKAN "\xe6\x97\xa5\xe9\x96\x93"
#define NJD_SET_DIGIT_ONE "\xe4\xb8\x80"
#define NJD_SET_DIGIT_TSUITACHI "\xe4\xb8\x80\xe6\x97\xa5,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe4\xb8\x80\xe6\x97\xa5,\xe3\x83\x84\xe3\x82\xa4\xe3\x82\xbf\xe3\x83\x81,\xe3\x83\x84\xe3\x82\xa4\xe3\x82\xbf\xe3\x83\x81,4/4,*"

static const char *njd_set_digit_rule_numeral_list1[] = {
   "\xe2\x97\x8b", "0", "\xe3\x80\x87",
   "\xef\xbc\x91", "1", "\xe4\xb8\x80",
   "\xef\xbc\x92", "2", "\xe4\xba\x8c",
   "\xef\xbc\x93", "3", "\xe4\xb8\x89",
   "\xef\xbc\x94", "4", "\xe5\x9b\x9b",
   "\xef\xbc\x95", "5", "\xe4\xba\x94",
   "\xef\xbc\x96", "6", "\xe5\x85\xad",
   "\xef\xbc\x97", "7", "\xe4\xb8\x83",
   "\xef\xbc\x98", "8", "\xe5\x85\xab",
   "\xef\xbc\x99", "9", "\xe4\xb9\x9d",
   "\xe4\xb8\x80", "1", "\xe4\xb8\x80",
   "\xe4\xba\x8c", "2", "\xe4\xba\x8c",
   "\xe4\xb8\x89", "3", "\xe4\xb8\x89",
   "\xe5\x9b\x9b", "4", "\xe5\x9b\x9b",
   "\xe4\xba\x94", "5", "\xe4\xba\x94",
   "\xe5\x85\xad", "6", "\xe5\x85\xad",
   "\xe4\xb8\x83", "7", "\xe4\xb8\x83",
   "\xe5\x85\xab", "8", "\xe5\x85\xab",
   "\xe4\xb9\x9d", "9", "\xe4\xb9\x9d",
   "\xe3\x81\x84\xe3\x81\xa1", "1", "\xe4\xb8\x80",
   "\xe3\x81\xab", "2", "\xe4\xba\x8c",
   "\xe3\x81\x95\xe3\x82\x93", "3", "\xe4\xb8\x89",
   "\xe3\x82\x88\xe3\x82\x93", "4", "\xe5\x9b\x9b",
   "\xe3\x81\x94", "5", "\xe4\xba\x94",
   "\xe3\x82\x8d\xe3\x81\x8f", "6", "\xe5\x85\xad",
   "\xe3\x81\xaa\xe3\x81\xaa", "7", "\xe4\xb8\x83",
   "\xe3\x81\xaf\xe3\x81\xa1", "8", "\xe5\x85\xab",
   "\xe3\x81\x8d\xe3\x82\x85\xe3\x81\x86", "9", "\xe4\xb9\x9d",
   "\xe3\x80\x87", "0", "\xe3\x80\x87",
   "\xef\xbc\x90", "0", "\xe3\x80\x87",
   "\xe5\xa3\xb1", "1", "\xe4\xb8\x80",
   "\xe5\xbc\x90", "2", "\xe4\xba\x8c",
   "\xe8\xb2\xb3", "2", "\xe4\xba\x8c",
   "\xe3\x83\x8b", "2", "\xe4\xba\x8c",
   "\xe5\x8f\x82", "3", "\xe4\xb8\x89",
   "\xe3\x81\x97", "4", "\xe5\x9b\x9b",
   "\xe3\x81\x97\xe3\x81\xa1", "7", "\xe4\xb8\x83",
   "\xe3\x81\x8f", "9", "\xe4\xb9\x9d",
   NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numeral_list2[] = {
   "",
   "\xe5\x8d\x81,\xe5\x90\x8d\xe8\xa9\x9e,\xe6\x95\xb0,*,*,*,*,\xe5\x8d\x81,\xe3\x82\xb8\xe3\x83\xa5\xe3\x82\xa6,\xe3\x82\xb8\xe3\x83\xa5\xe3\x83\xbc,1/2,*",
   "\xe7\x99\xbe,\xe5\x90\x8d\xe8\xa9\x9e,\xe6\x95\xb0,*,*,*,*,\xe7\x99\xbe,\xe3\x83\x92\xe3\x83\xa3\xe3\x82\xaf,\xe3\x83\x92\xe3\x83\xa3\xe3\x82\xaf,2/2,*",
   "\xe5\x8d\x83,\xe5\x90\x8d\xe8\xa9\x9e,\xe6\x95\xb0,*,*,*,*,\xe5\x8d\x83,\xe3\x82\xbb\xe3\x83\xb3,\xe3\x82\xbb\xe3\x83\xb3,1/2,*",
   NULL
};

static const char *njd_set_digit_rule_numeral_list3[] = {
   "",
   "\xe4\xb8\x87,\xe5\x90\x8d\xe8\xa9\x9e,\xe6\x95\xb0,*,*,*,*,\xe4\xb8\x87,\xe3\x83\x9e\xe3\x83\xb3,\xe3\x83\x9e\xe3\x83\xb3,1/2,*",
   "\xe5\x84\x84,\xe5\x90\x8d\xe8\xa9\x9e,\xe6\x95\xb0,*,*,*,*,\xe5\x84\x84,\xe3\x82\xaa\xe3\x82\xaf,\xe3\x82\xaa\xe3\x82\xaf,1/2,*",
   "\xe5\x85\x86,\xe5\x90\x8d\xe8\xa9\x9e,\xe6\x95\xb0,*,*,*,*,\xe5\x85\x86,\xe3\x83\x81\xe3\x83\xa7\xe3\x82\xa6,\xe3\x83\x81\xe3\x83\xa7\xe3\x83\xbc,1/2,C3",
   "\xe4\xba\xac,\xe5\x90\x8d\xe8\xa9\x9e,\xe6\x95\xb0,*,*,*,*,\xe4\xba\xac,\xe3\x82\xb1\xe3\x82\xa4,\xe3\x82\xb1\xe3\x82\xa4,1/2,*",
   "\xe5\x9e\x93,\xe5\x90\x8d\xe8\xa9\x9e,\xe6\x95\xb0,*,*,*,*,\xe5\x9e\x93,\xe3\x82\xac\xe3\x82\xa4,\xe3\x82\xac\xe3\x82\xa4,1/2,*",
   "\xe7\xa6\xbe\xe4\xba\x88,\xe5\x90\x8d\xe8\xa9\x9e,\xe6\x95\xb0,*,*,*,*,\xe7\xa6\xbe\xe4\xba\x88,\xe3\x82\xb8\xe3\x83\xa7,\xe3\x82\xb8\xe3\x83\xa7,1/1,*", /* No character in EUC-JP */
   "\xe7\xa9\xa3,\xe5\x90\x8d\xe8\xa9\x9e,\xe6\x95\xb0,*,*,*,*,\xe7\xa9\xa3,\xe3\x82\xb8\xe3\x83\xa7\xe3\x82\xa6,\xe3\x82\xb8\xe3\x83\xa7\xe3\x82\xa6,1/2,*",
   "\xe6\xba\x9d,\xe5\x90\x8d\xe8\xa9\x9e,\xe6\x95\xb0,*,*,*,*,\xe6\xba\x9d,\xe3\x82\xb3\xe3\x82\xa6,\xe3\x82\xb3\xe3\x82\xa6,1/2,*",
   "\xe6\xbe\x97,\xe5\x90\x8d\xe8\xa9\x9e,\xe6\x95\xb0,*,*,*,*,\xe6\xbe\x97,\xe3\x82\xab\xe3\x83\xb3,\xe3\x82\xab\xe3\x83\xb3,1/2,*",
   "\xe6\xad\xa3,\xe5\x90\x8d\xe8\xa9\x9e,\xe6\x95\xb0,*,*,*,*,\xe6\xad\xa3,\xe3\x82\xbb\xe3\x82\xa4,\xe3\x82\xbb\xe3\x82\xa4,1/2,*",
   "\xe8\xbc\x89,\xe5\x90\x8d\xe8\xa9\x9e,\xe6\x95\xb0,*,*,*,*,\xe8\xbc\x89,\xe3\x82\xb5\xe3\x82\xa4,\xe3\x82\xb5\xe3\x82\xa4,1/2,*",
   "\xe6\xa5\xb5,\xe5\x90\x8d\xe8\xa9\x9e,\xe6\x95\xb0,*,*,*,*,\xe6\xa5\xb5,\xe3\x82\xb4\xe3\x82\xaf,\xe3\x82\xb4\xe3\x82\xaf,1/2,*",
   "\xe6\x81\x92\xe6\xb2\xb3\xe6\xb2\x99,\xe5\x90\x8d\xe8\xa9\x9e,\xe6\x95\xb0,*,*,*,*,\xe6\x81\x92\xe6\xb2\xb3\xe6\xb2\x99,\xe3\x82\xb4\xe3\x82\xa6\xe3\x82\xac\xe3\x82\xb7\xe3\x83\xa3,\xe3\x82\xb4\xe3\x82\xa6\xe3\x82\xac\xe3\x82\xb7\xe3\x83\xa3,1/4,*",
   "\xe9\x98\xbf\xe5\x83\xa7\xe7\xa5\x87,\xe5\x90\x8d\xe8\xa9\x9e,\xe6\x95\xb0,*,*,*,*,\xe9\x98\xbf\xe5\x83\xa7\xe7\xa5\x87,\xe3\x82\xa2\xe3\x82\xbd\xe3\x82\xa6\xe3\x82\xae,\xe3\x82\xa2\xe3\x82\xbd\xe3\x82\xa6\xe3\x82\xae,2/4,*",
   "\xe9\x82\xa3\xe7\x94\xb1\xe4\xbb\x96,\xe5\x90\x8d\xe8\xa9\x9e,\xe6\x95\xb0,*,*,*,*,\xe9\x82\xa3\xe7\x94\xb1\xe4\xbb\x96,\xe3\x83\x8a\xe3\x83\xa6\xe3\x82\xbf,\xe3\x83\x8a\xe3\x83\xa6\xe3\x82\xbf,1/3,*",
   "\xe4\xb8\x8d\xe5\x8f\xaf\xe6\x80\x9d\xe8\xad\xb0,\xe5\x90\x8d\xe8\xa9\x9e,\xe6\x95\xb0,*,*,*,*,\xe4\xb8\x8d\xe5\x8f\xaf\xe6\x80\x9d\xe8\xad\xb0,\xe3\x83\x95\xe3\x82\xab\xe3\x82\xb7\xe3\x82\xae,\xe3\x83\x95\xe3\x82\xab\xe3\x82\xb7\xe3\x82\xae,2/4,*",
   "\xe7\x84\xa1\xe9\x87\x8f\xe5\xa4\xa7\xe6\x95\xb0,\xe5\x90\x8d\xe8\xa9\x9e,\xe6\x95\xb0,*,*,*,*,\xe7\x84\xa1\xe9\x87\x8f\xe5\xa4\xa7\xe6\x95\xb0,\xe3\x83\xa0\xe3\x83\xaa\xe3\x83\xa7\xe3\x82\xa6\xe3\x82\xbf\xe3\x82\xa4\xe3\x82\xb9\xe3\x82\xa6,\xe3\x83\xa0\xe3\x83\xaa\xe3\x83\xa7\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\xa4\xe3\x82\xb9\xe3\x82\xa6,6/7,*",
   NULL
};

static const char *njd_set_digit_rule_numeral_list4[] = {
   "\xe4\xb8\x80", "\xe4\xba\x8c", "\xe4\xb8\x89", "\xe5\x9b\x9b", "\xe4\xba\x94", "\xe5\x85\xad", "\xe4\xb8\x83", "\xe5\x85\xab", "\xe4\xb9\x9d", "\xe4\xbd\x95", "\xe5\xb9\xbe", "\xe6\x95\xb0",
   NULL
};

static const char *njd_set_digit_rule_numeral_list5[] = {
   "\xe5\x8d\x81", "\xe7\x99\xbe", "\xe5\x8d\x83", "\xe4\xb8\x87", "\xe5\x84\x84", "\xe5\x85\x86", "\xe4\xba\xac", "\xe5\x9e\x93", "\xe7\xa6\xbe\xe4\xba\x88", "\xe7\xa9\xa3", "\xe6\xba\x9d", "\xe6\xbe\x97", "\xe6\xad\xa3", "\xe8\xbc\x89", "\xe6\xa5\xb5",
   "\xe6\x81\x92\xe6\xb2\xb3\xe6\xb2\x99", "\xe9\x98\xbf\xe5\x83\xa7\xe7\xa5\x87", "\xe9\x82\xa3\xe7\x94\xb1\xe4\xbb\x96", "\xe4\xb8\x8d\xe5\x8f\xaf\xe6\x80\x9d\xe8\xad\xb0", "\xe7\x84\xa1\xe9\x87\x8f\xe5\xa4\xa7\xe6\x95\xb0",
   NULL
};

static const char *njd_set_digit_rule_numeral_list6[] = {
   "\xe7\x99\xbe", "\xe5\x8d\x83", NULL
};

static const char *njd_set_digit_rule_numeral_list7[] = {
   "\xe4\xb8\x89", "1",
   "\xe5\x85\xad", "2",
   "\xe5\x85\xab", "2",
   "\xe4\xbd\x95", "1",
   NULL, NULL
};

static const char *njd_set_digit_rule_numeral_list8[] = {
   "\xe7\x99\xbe", NULL
};

static const char *njd_set_digit_rule_numeral_list9[] = {
   "\xe5\x85\xad", "\xe3\x83\xad\xe3\x83\x83", "0", "2",
   "\xe5\x85\xab", "\xe3\x83\x8f\xe3\x83\x83", "0", "2",
   NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numeral_list10[] = {
   "\xe5\x8d\x83", "\xe5\x85\x86", NULL
};

static const char *njd_set_digit_rule_numeral_list11[] = {
   "\xe4\xb8\x80", "\xe3\x82\xa4\xe3\x83\x83", "0", "2",
   "\xe5\x85\xab", "\xe3\x83\x8f\xe3\x83\x83", "0", "2",
   "\xe5\x8d\x81", "\xe3\x82\xb8\xe3\x83\xa5\xe3\x83\x83", "1", "2",
   NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class1b[] = {
   /* from paper */
   "\xe5\xb9\xb4" /* \xe3\x81\xad\xe3\x82\x93 */ , "\xe5\x86\x86",
   /* from dictionary */
   "\xe5\xb9\xb4\xe9\x96\x93", "\xe5\xb9\xb4\xe7\x94\x9f", "\xe5\xb9\xb4\xe4\xbb\xa3", "\xe5\xb9\xb4\xe5\xba\xa6", "\xe5\xb9\xb4\xe7\x89\x88", "\xe5\xb9\xb4\xe4\xbd\x99", "\xe5\xb9\xb4\xe4\xbd\x99", "\xe5\xb9\xb4\xe6\x9d\xa5", "\xe3\x81\x88\xe3\x82\x93",
   NULL
};

static const char *njd_set_digit_rule_conv_table1b[] = {
   "\xe5\x9b\x9b", "\xe3\x83\xa8", "0", "1",
   NULL, NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class1c1[] = {
   /* from paper */
   "\xe6\x99\x82", "\xe6\x99\x82\xe9\x96\x93", "\xe4\xba\xba",
   /* from dictionary */
   "\xe6\x99\x82\xe9\x99\x90", "\xe6\x99\x82\xe5\x8d\x8a", "\xe4\xba\xba\xe6\x9c\x88", "\xe4\xba\xba\xe5\x89\x8d", "\xe4\xba\xba\xe7\xb5\x84",
   NULL
};

static const char *njd_set_digit_rule_conv_table1c1[] = {
   "\xe5\x9b\x9b", "\xe3\x83\xa8", "0", "1",
   "\xe4\xb8\x83", "\xe3\x82\xb7\xe3\x83\x81", "1", "2",
   NULL, NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class1c2[] = {
   /* from paper */
   "\xe6\x99\x82", "\xe6\x99\x82\xe9\x96\x93",
   /* from dictionary */
   "\xe6\x99\x82\xe9\x99\x90", "\xe6\x99\x82\xe5\x8d\x8a",
   NULL
};

static const char *njd_set_digit_rule_conv_table1c2[] = {
   "\xe4\xb9\x9d", "\xe3\x82\xaf", "0", "1",
   NULL, NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class1d[] = {
   /* from paper */
   "\xe6\x97\xa5" /* \xe3\x81\xab\xe3\x81\xa1 */ ,
   /* from dictionary */
   "\xe6\x97\xa5\xe9\x96\x93",
   NULL
};

static const char *njd_set_digit_rule_conv_table1d[] = {
   /* "\xe5\x9b\x9b", "\xe3\x83\xa8\xe3\x83\x83", "1", "2", *//* modified */
   "\xe4\xb8\x83", "\xe3\x82\xb7\xe3\x83\x81", "1", "2",
   "\xe4\xb9\x9d", "\xe3\x82\xaf", "0", "1",
   NULL, NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class1e[] = {
   /* from paper */
   "\xe6\x9c\x88" /* \xe3\x81\x8c\xe3\x81\xa4 */ ,
   NULL
};

static const char *njd_set_digit_rule_conv_table1e[] = {
   "\xe5\x9b\x9b", "\xe3\x82\xb7", "0", "1",
   "\xe4\xb8\x83", "\xe3\x82\xb7\xe3\x83\x81", "1", "2",
   "\xe4\xb9\x9d", "\xe3\x82\xaf", "0", "1",
   NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class1f[] = {
   /* from paper */
   /* "\xe7\xbe\xbd", "\xe6\x8a\x8a", *//* modified */
   NULL
};

static const char *njd_set_digit_rule_conv_table1f[] = {
   "\xe5\x85\xad", "\xe3\x83\xad\xe3\x83\x83", "1", "2",
   "\xe5\x85\xab", "\xe3\x83\x8f\xe3\x83\x83", "1", "2",
   "\xe5\x8d\x81", "\xe3\x82\xb8\xe3\x83\xa5\xe3\x83\x83", "1", "2",
   "\xe7\x99\xbe", "\xe3\x83\x92\xe3\x83\xa3\xe3\x83\x83", "1", "2",
   NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class1g[] = {
   /* from paper */
   "\xe5\x80\x8b", "\xe9\x9a\x8e", "\xe5\x88\x86" /* \xe3\x81\xb5\xe3\x82\x93 */ , "\xe7\x99\xba", "\xe6\x9c\xac", "\xe9\x89\xa2", "\xe5\x8f\xa3", "\xe5\x88\x87\xe3\x82\x8c", "\xe7\xae\xb1",
   /* from dictionary */
   "\xe3\x81\x8b\xe6\x9c\x88", "\xe3\x81\x8b\xe5\x9b\xbd", "\xe3\x81\x8b\xe6\x89\x80", "\xe3\x81\x8b\xe6\x9d\xa1", "\xe3\x81\x8b\xe6\x9d\x91", "\xe3\x81\x8b\xe5\xb9\xb4", "\xe3\x82\xab\xe6\x9c\x88", "\xe3\x82\xab\xe5\x9b\xbd", "\xe3\x82\xab\xe5\xaf\xba", "\xe3\x82\xab\xe6\x89\x80", "\xe3\x82\xab\xe6\x9d\xa1", "\xe3\x82\xab\xe6\x9d\x91",
   "\xe3\x82\xab\xe5\xba\x97", "\xe3\x82\xab\xe5\xb9\xb4", "\xe3\x82\xb1\xe6\x9c\x88", "\xe3\x82\xb1\xe5\x9b\xbd", "\xe3\x82\xb1\xe6\x89\x80", "\xe3\x82\xb1\xe6\x9d\xa1", "\xe3\x82\xb1\xe6\x9d\x91", "\xe3\x82\xb1\xe5\xb9\xb4", "\xe3\x83\xb5\xe6\x9c\x88", "\xe3\x83\xb5\xe5\x9b\xbd", "\xe3\x83\xb5\xe6\x89\x80",
   "\xe3\x83\xb5\xe6\x9d\xa1", "\xe3\x83\xb5\xe6\x9d\x91", "\xe3\x83\xb5\xe5\xb9\xb4", "\xe3\x83\xb6\xe6\x9c\x88", "\xe3\x83\xb6\xe5\x9b\xbd", "\xe3\x83\xb6\xe6\x89\x80", "\xe3\x83\xb6\xe6\x9d\xa1", "\xe3\x83\xb6\xe6\x9d\x91", "\xe3\x83\xb6\xe5\xb9\xb4", "\xe5\x80\x8b\xe6\x9c\x88", "\xe5\x80\x8b\xe5\x8f\xa3",
   "\xe5\x80\x8b\xe5\x9b\xbd", "\xe5\x80\x8b\xe6\x9d\xa1", "\xe5\x80\x8b\xe5\xb9\xb4", "\xe7\xae\x87\xe6\x9c\x88", "\xe7\xae\x87\xe5\x9b\xbd", "\xe7\xae\x87\xe6\x89\x80", "\xe7\xae\x87\xe6\x9d\xa1", "\xe7\xae\x87\xe5\xb9\xb4", "\xe3\x81\x8b\xe3\x81\x91", "\xe3\x81\x8f\xe3\x81\xa0\xe3\x82\x8a", "\xe3\x81\x91\xe3\x81\x9f",
   "\xe4\xbe\xa1", "\xe8\xaa\xb2", "\xe7\x94\xbb", "\xe5\x9b\x9e", "\xe5\x9b\x9e\xe5\xbf\x8c", "\xe5\x9b\x9e\xe7\x94\x9f", "\xe5\x9b\x9e\xe6\x88\xa6", "\xe5\x9b\x9e\xe7\xb7\x9a", "\xe5\x9b\x9e\xe5\x88\x86", "\xe6\xb5\xb7\xe9\x87\x8c", "\xe3\x82\xab\xe3\x82\xa4\xe3\x83\xaa", "\xe6\xb5\xac", "\xe8\xa7\x92",
   "\xe6\xa0\xaa", "\xe5\x86\xa0", "\xe5\xb7\xbb", "\xe7\xbc\xb6", "\xe8\xb2\xab", "\xe8\xb2\xab\xe7\x9b\xae", "\xe9\x96\x93", "\xe5\x9f\xba", "\xe6\x9c\x9f", "\xe6\x9c\x9f\xe7\x94\x9f", "\xe6\xa9\x9f", "\xe6\xb0\x97\xe5\x9c\xa7", "\xe5\xad\xa3", "\xe9\xa8\x8e",
   "\xe5\xae\xa2", "\xe8\x84\x9a", "\xe7\x90\x83", "\xe7\xb4\x9a", "\xe6\xa9\x8b", "\xe5\xb1\x80", "\xe6\x9b\xb2", "\xe6\xa5\xb5", "\xe9\x87\x8d\xe3\x81\xad", "\xe6\x96\xa4", "\xe9\x87\x91", "\xe5\x8f\xa5", "\xe5\x8c\xba", "\xe8\xba\xaf", "\xe8\xa8\x88",
   "\xe6\xa1\x81", "\xe3\x82\xb1\xe3\x82\xbf", "\xe6\xa0\xa1", "\xe6\xb8\xaf", "\xe8\xa1\x8c", "\xe9\xa0\x85", "\xe7\xb5\x84", "\xe4\xbb\xb6", "\xe8\xbb\x92", "\xe8\xa8\x80", "\xe6\x88\xb8", "\xe6\xb9\x96", "\xe5\x85\x89\xe5\xb9\xb4", "\xe7\x9f\xb3",
   "\xe3\x81\xb4\xe3\x81\x8d", "\xe3\x81\xba\xe3\x82\x93", "\xe6\xb3\xa2", "\xe6\xb4\xbe", "\xe6\x95\x97", "\xe6\x9d\xaf", "\xe6\x8b\x8d", "\xe6\xb3\x8a", "\xe7\x89\x88", "\xe7\x8a\xaf", "\xe7\x8f\xad", "\xe5\x8c\xb9", "\xe5\x8c\xb9", "\xe7\xad\x86", "\xe4\xbf\xb5",
   "\xe7\xa5\xa8", "\xe5\x93\x81", "\xe5\x88\x86\xe9\x96\x93", "\xe5\x88\x86\xe7\x9b\xae", "\xe7\x89\x87", "\xe7\x89\x87", "\xe7\xaf\x87", "\xe7\xb7\xa8", "\xe8\xbe\xba", "\xe9\x81\x8d", "\xe6\xad\xa9", "\xe6\xad\xa9", "\xe5\xa0\xb1", "\xe6\x96\xb9", "\xe6\x96\xb9",
   "\xe6\xb3\x95", "\xe6\x9c\xac\xe7\xab\x8b\xe3\x81\xa6",
   NULL
};

static const char *njd_set_digit_rule_conv_table1g[] = {
   "\xe4\xb8\x80", "\xe3\x82\xa4\xe3\x83\x83", "1", "2",
   "\xe5\x85\xad", "\xe3\x83\xad\xe3\x83\x83", "1", "2",
   "\xe5\x85\xab", "\xe3\x83\x8f\xe3\x83\x83", "1", "2",
   "\xe5\x8d\x81", "\xe3\x82\xb8\xe3\x83\xa5\xe3\x83\x83", "1", "2",
   "\xe7\x99\xbe", "\xe3\x83\x92\xe3\x83\xa3\xe3\x83\x83", "1", "2",
   NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class1h[] = {
   /* from paper */
   "\xef\xbc\x8e", "\xe3\x83\xbb", "\xe6\x89\x8d", "\xe9\xa0\xad", "\xe7\x9d\x80", "\xe8\xb6\xb3", "\xe5\xb0\xba", "\xe5\x9d\xaa", "\xe9\x80\x9a\xe3\x82\x8a", "\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x81", "\xe3\x82\xb7\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc",
   /* from dictionary */
   "\xef\xbc\xa3\xef\xbc\xa3", "\xef\xbd\x83\xef\xbd\x83", "\xef\xbd\x83\xef\xbd\x8d", "\xe3\x82\xb5\xe3\x82\xa4\xe3\x82\xaf\xe3\x83\xab", "\xe3\x82\xb5\xe3\x83\xb3\xe3\x83\x81\xe3\x83\xbc\xe3\x83\xa0", "\xe3\x82\xb7\xe3\x83\xbc\xe3\x82\xba\xe3\x83\xb3", "\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88", "\xe3\x82\xb7\xe3\x83\xaa\xe3\x83\xb3\xe3\x82\xb0",
   "\xe3\x82\xb7\xe3\x83\xb3\xe3\x82\xac\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\xab\xe3\x83\x89\xe3\x83\xab", "\xe3\x82\xb9\xe3\x82\xa4\xe3\x82\xb9\xe3\x83\x95\xe3\x83\xa9\xe3\x83\xb3", "\xe3\x82\xb9\xe3\x82\xa6\xe3\x82\xa7\xe3\x83\xbc\xe3\x83\x87\xe3\x83\xb3\xe3\x82\xaf\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x8d", "\xe3\x82\xb9\xe3\x82\xaf\xe3\x83\xac", "\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88", "\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x88",
   "\xe3\x82\xbd\xe3\x83\xab", "\xe3\x82\xbe\xe3\x83\xbc\xe3\x83\xb3", "\xe7\xb3\x8e", "\xe7\xb3\x8e", "\xe7\xab\xbf", "\xe5\xb7\xae", "\xe5\xb7\xae\xe3\x81\x97", "\xe6\xad\xb3", "\xe6\xad\xb3\xe5\x85\x90", "\xe4\xbd\x9c", "\xe5\x86\x8a", "\xe5\x88\xb7", "\xe7\x9a\xbf", "\xe6\xa3\xb9",
   "\xe8\x89\x98", "\xe5\xad\x90", "\xe8\xa6\x96", "\xe5\xbc\x8f", "\xe5\xa4\xb1", "\xe5\xae\xa4", "\xe5\xb0\x84", "\xe7\xa4\xbe", "\xe5\x8b\xba", "\xe7\xa8\xae", "\xe9\xa6\x96", "\xe5\x91\xa8", "\xe5\x91\xa8\xe5\xbf\x8c", "\xe5\x91\xa8\xe5\xb9\xb4", "\xe5\xb7\x9e",
   "\xe9\x80\xb1", "\xe9\x80\xb1\xe9\x96\x93", "\xe9\x9b\x86", "\xe5\xae\xbf", "\xe6\x89\x80", "\xe5\x8b\x9d", "\xe5\x8d\x87", "\xe5\xba\x8a", "\xe7\xab\xa0", "\xe8\x89\xb2", "\xe8\x89\xb2", "\xe9\xa3\x9f", "\xe8\xa6\xaa\xe7\xad\x89", "\xe9\x80\xb2",
   "\xe9\x80\xb2\xe6\x95\xb0", "\xe5\x93\x81", "\xe3\x81\x99\xe3\x81\x98", "\xe3\x81\x9d\xe3\x81\x86", "\xe3\x81\x9d\xe3\x82\x8d\xe3\x81\x84", "\xe7\xad\x8b", "\xe6\x95\xb0", "\xe5\xaf\xb8", "\xe4\xb8\x96", "\xe9\x9a\xbb", "\xe5\xb8\xad", "\xe7\x9f\xb3", "\xe7\xaf\x80", "\xe6\x88\xa6",
   "\xe7\xb7\x9a", "\xe9\x81\xb8", "\xe9\x8a\xad", "\xe5\xb1\xa4", "\xe7\x9b\xb8", "\xe6\x8f\x83", "\xe3\x81\x9f\xe3\x81\xb3", "\xe3\x81\xa4\xe3\x81\x8b\xe3\x81\xbf", "\xe3\x81\xa4\xe3\x81\x8c\xe3\x81\x84", "\xe3\x81\xa4\xe3\x81\xb6", "\xe3\x81\xa4\xe3\x81\xbe\xe3\x81\xbf", "\xe3\x81\xa4\xe6\x8a\x98",
   "\xe3\x81\xa4\xe6\x8a\x98\xe3\x82\x8a", "\xe3\x81\xa8\xe3\x81\x8a\xe3\x82\x8a", "\xe3\x81\xa8\xe3\x81\x8d", "\xe3\x81\xa8\xe3\x81\x93\xe3\x82\x8d", "\xe3\x81\xa8\xe3\x81\x9b", "\xe7\x8e\x89", "\xe6\x9c\x88", "\xe6\x89\x8b", "\xe6\x9d\x9f", "\xe7\xb6\x9a\xe3\x81\x8d", "\xe4\xbd\x93", "\xe5\xaf\xbe",
   "\xe5\x8d\x93", "\xe6\xa8\xbd", "\xe5\x8f\x8d", "\xe4\xb8\x81", "\xe4\xb8\x81\xe7\x9b\xae", "\xe9\xb3\xa5", "\xe9\x80\x9a", "\xe6\x8e\xb4\xe3\x81\xbf", "\xe8\x89\x87", "\xe6\xbb\xb4", "\xe5\xba\x97", "\xe8\xbb\xa2", "\xe7\x82\xb9", "\xe6\x96\x97", "\xe6\xa3\x9f",
   "\xe7\x9b\x97", "\xe7\x81\xaf", "\xe7\xad\x89", "\xe7\xad\x89\xe5\xb8\xad", "\xe7\xad\x89\xe5\x9c\xb0", "\xe7\xad\x89\xe5\x88\x86", "\xe7\xad\x94", "\xe5\xbe\x97", "\xe5\x99\xb8", "\xe7\xb2\x92", "\xe7\xa8\xae\xe9\xa1\x9e", "\xe6\xad\xb3\xe9\xa6\xac", "\xe4\xb8\x96\xe7\xb4\x80",
   NULL
};

static const char *njd_set_digit_rule_conv_table1h[] = {
   "\xe4\xb8\x80", "\xe3\x82\xa4\xe3\x83\x83", "1", "2",
   "\xe5\x85\xab", "\xe3\x83\x8f\xe3\x83\x83", "1", "2",
   "\xe5\x8d\x81", "\xe3\x82\xb8\xe3\x83\xa5\xe3\x83\x83", "1", "2",
   NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class1i[] = {
   /* from paper */
   "\xe3\x82\xad\xe3\x83\xad", "\xe3\x82\xab\xe3\x83\xad\xe3\x83\xaa\xe3\x83\xbc",
   /* from dictionary */
   "\xef\xbd\x83\xef\xbd\x81\xef\xbd\x8c", "\xef\xbd\x8b\xef\xbd\x82", "\xef\xbd\x8b\xef\xbd\x87", "\xef\xbd\x8b\xef\xbd\x8c", "\xef\xbd\x8b\xef\xbd\x8d", "\xef\xbd\x8b\xef\xbd\x94", "\xef\xbd\x8b\xef\xbd\x97", "\xef\xbd\x8b\xe3\x82\xb0\xe3\x83\xa9\xe3\x83\xa0", "\xef\xbd\x8b\xe3\x83\x90\xe3\x82\xa4\xe3\x83\x88", "\xef\xbd\x8b\xe3\x83\x98\xe3\x83\xab\xe3\x83\x84",
   "\xef\xbd\x8b\xe3\x83\xa1\xe3\x83\xbc\xe3\x83\x88\xe3\x83\xab", "\xef\xbd\x8b\xe3\x83\xaa\xe3\x83\x83\xe3\x83\x88\xe3\x83\xab", "\xef\xbd\x8b\xe3\x83\xaf\xe3\x83\x83\xe3\x83\x88", "\xe3\x82\xab\xe3\x83\x8a\xe3\x83\x80\xe3\x83\x89\xe3\x83\xab", "\xe3\x82\xab\xe3\x83\xa9\xe3\x83\x83\xe3\x83\x88", "\xe3\x82\xac\xe3\x83\xad\xe3\x83\xb3", "\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xaa\xe3\x83\xbc",
   "\xe3\x82\xad\xe3\x83\xad\xe3\x82\xab\xe3\x83\xad\xe3\x83\xaa\xe3\x83\xbc", "\xe3\x82\xad\xe3\x83\xad\xe3\x82\xb0\xe3\x83\xa9\xe3\x83\xa0", "\xe3\x82\xad\xe3\x83\xad\xe3\x83\x88\xe3\x83\xb3", "\xe3\x82\xad\xe3\x83\xad\xe3\x83\x90\xe3\x82\xa4\xe3\x83\x88", "\xe3\x82\xad\xe3\x83\xad\xe3\x83\x98\xe3\x83\xab\xe3\x83\x84", "\xe3\x82\xad\xe3\x83\xad\xe3\x83\xa1\xe3\x83\xbc\xe3\x83\x88\xe3\x83\xab",
   "\xe3\x82\xad\xe3\x83\xad\xe3\x83\xaa\xe3\x83\x83\xe3\x83\x88\xe3\x83\xab", "\xe3\x82\xad\xe3\x83\xad\xe3\x83\xaf\xe3\x83\x83\xe3\x83\x88", "\xe3\x82\xad\xe3\x83\xad\xe3\x83\xaf\xe3\x83\x83\xe3\x83\x88\xe6\x99\x82", "\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9", "\xe3\x82\xaf\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x8a", "\xe3\x82\xaf\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x8d", "\xe3\x82\xb0\xe3\x82\xa1\xe3\x83\xa9\xe3\x83\x8b",
   "\xe3\x82\xb1\xe3\x83\xbc\xe3\x82\xb9", "\xe3\x82\xb3\xe3\x83\xbc\xe3\x82\xb9", "\xe7\xb2\x81",
   NULL
};

static const char *njd_set_digit_rule_conv_table1i[] = {
   "\xe5\x85\xad", "\xe3\x83\xad\xe3\x83\x83", "1", "2",
   "\xe5\x8d\x81", "\xe3\x82\xb8\xe3\x83\xa5\xe3\x83\x83", "1", "2",
   "\xe7\x99\xbe", "\xe3\x83\x92\xe3\x83\xa3\xe3\x83\x83", "1", "2",
   NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class1j[] = {
   /* from paper */
   "\xe3\x83\x88\xe3\x83\xb3",
   /* from dictionary */
   "\xef\xbd\x94", "\xe3\x82\xbf\xe3\x83\xab", "\xe3\x83\x86\xe3\x83\xa9", "\xe3\x83\x88\xe3\x83\xa9\xe3\x82\xa4",
   NULL
};

static const char *njd_set_digit_rule_conv_table1j[] = {
   "\xe4\xb8\x80", "\xe3\x82\xa4\xe3\x83\x83", "1", "2",
   "\xe5\x8d\x81", "\xe3\x82\xb8\xe3\x83\xa5\xe3\x83\x83", "1", "2",
   NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class1k[] = {
   /* from paper */
   "\xe6\x88\xbf" /* \xe3\x81\xb5\xe3\x81\x95 */ , "\xe6\x9f\xb1", "\xef\xbc\x85", "\xe3\x83\x9d\xe3\x83\xb3\xe3\x83\x89",
   /* from dictionary */
   "\xef\xbd\x90\xef\xbd\x81", "\xef\xbd\x90\xef\xbd\x90\xef\xbd\x8d", "\xe3\x83\x91\xe3\x83\xbc\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x88", "\xe3\x83\x91\xe3\x83\xbc\xe3\x83\x9f\xe3\x83\xab", "\xe3\x83\x91\xe3\x82\xb9\xe3\x82\xab\xe3\x83\xab", "\xe3\x83\x91\xe3\x83\x83\xe3\x82\xaf", "\xe3\x83\x91\xe3\x83\x83\xe3\x83\x88", "\xe3\x83\x94\xe3\x83\xbc\xe3\x83\x94\xe3\x83\xbc\xe3\x82\xa8\xe3\x83\xa0",
   "\xe3\x83\x94\xe3\x82\xb3", "\xe3\x83\x9a\xe3\x83\xbc\xe3\x82\xb8", "\xe9\xa0\x81", "\xe3\x83\x9a\xe3\x82\xa2", "\xe3\x83\x9a\xe3\x82\xbb\xe3\x82\xbf", "\xe3\x83\x9a\xe3\x82\xbd", "\xe3\x83\x9a\xe3\x83\x8b\xe3\x83\xbc", "\xe3\x83\x9a\xe3\x83\x8b\xe3\x83\x92", "\xe3\x83\x9a\xe3\x83\xb3\xe3\x82\xb9", "\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88",
   "\xe6\x8c\xaf\xe3\x82\x8a", "\xe9\x87\x9d", "\xe8\xa2\x8b", "\xe5\xbc\xb5\xe3\x82\x8a", "\xe5\xb9\xb3\xe7\xb1\xb3", "\xe5\xb9\xb3\xe6\x96\xb9\xe3\x82\xad\xe3\x83\xad", "\xe5\xb9\xb3\xe6\x96\xb9\xe3\x82\xad\xe3\x83\xad\xe3\x83\xa1\xe3\x83\xbc\xe3\x83\x88\xe3\x83\xab", "\xe5\xb9\xb3\xe6\x96\xb9\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x81\xe3\x83\xa1\xe3\x83\xbc\xe3\x83\x88\xe3\x83\xab",
   "\xe5\xb9\xb3\xe6\x96\xb9\xe3\x83\xa1\xe3\x83\xbc\xe3\x83\x88\xe3\x83\xab",
   NULL
};

static const char *njd_set_digit_rule_conv_table1k[] = {
   "\xe5\x8d\x81", "\xe3\x82\xb8\xe3\x83\xa5\xe3\x83\x83", "1", "2",
   NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class2b[] = {
   /* from paper */
   "\xe5\x88\x86", "\xe7\x89\x88", "\xe6\x95\x97", "\xe7\x99\xba", "\xe6\x8b\x8d", "\xe9\x89\xa2",
   /* from dictionary */
   "\xe6\xb3\xa2", "\xe6\xb4\xbe", "\xe6\xb3\x8a", "\xe7\x8a\xaf", "\xe7\x8f\xad", "\xe5\x93\x81", "\xe5\x88\x86\xe9\x96\x93", "\xe5\x88\x86\xe7\x9b\xae", "\xe7\x89\x87", "\xe7\xaf\x87", "\xe7\xb7\xa8", "\xe8\xbe\xba", "\xe9\x81\x8d", "\xe6\xad\xa9", "\xe5\xa0\xb1",
   "\xe6\x96\xb9",
   NULL
};

static const char *njd_set_digit_rule_conv_table2b[] = {
   "\xe4\xb8\x80", "2",
   "\xe4\xb8\x89", "2",
   "\xe5\x9b\x9b", "2",
   "\xe5\x85\xad", "2",
   "\xe5\x85\xab", "2",
   "\xe5\x8d\x81", "2",
   "\xe7\x99\xbe", "2",
   "\xe5\x8d\x83", "2",
   "\xe4\xb8\x87", "2",
   "\xe4\xbd\x95", "2",
   NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class2c[] = {
   /* from paper */
   "\xe6\x9c\xac", "\xe5\x8c\xb9", "\xe7\xa5\xa8", "\xe4\xbf\xb5", "\xe7\xae\xb1",
   /* from dictionary */
   "\xe6\x9c\xac\xe7\xab\x8b\xe3\x81\xa6", "\xe6\x9d\xaf", "\xe9\x87\x9d", "\xe6\x9f\xb1",
   NULL
};

static const char *njd_set_digit_rule_conv_table2c[] = {
   "\xe4\xb8\x80", "2",
   "\xe4\xb8\x89", "1",
   "\xe5\x85\xad", "2",
   "\xe5\x85\xab", "2",
   "\xe5\x8d\x81", "2",
   "\xe7\x99\xbe", "2",
   "\xe5\x8d\x83", "1",
   "\xe4\xb8\x87", "1",
   "\xe4\xbd\x95", "1",
   NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class2d[] = {
/* from paper */
   /* "\xe7\xbe\xbd", "\xe6\x8a\x8a", *//* modified */
   NULL
};

static const char *njd_set_digit_rule_conv_table2d[] = {
   "\xe4\xb8\x89", "1",
   "\xe5\x85\xad", "2",
   "\xe5\x85\xab", "2",
   "\xe5\x8d\x81", "2",
   "\xe7\x99\xbe", "2",
   "\xe5\x8d\x83", "1",
   "\xe4\xb8\x87", "1",
   "\xe4\xbd\x95", "1",
   NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class2e[] = {
   /* from paper */
   "\xe8\xbb\x92", "\xe7\x9f\xb3", "\xe8\xb6\xb3", "\xe5\xb0\xba",
   /* from dictionary */
   "\xe3\x81\x8b\xe3\x81\x91", "\xe9\x87\x8d\xe3\x81\xad", "\xe4\xbb\xb6", "\xe5\x8b\xba",
   NULL
};

static const char *njd_set_digit_rule_conv_table2e[] = {
   "\xe4\xb8\x89", "1",
   "\xe5\x8d\x83", "1",
   "\xe4\xb8\x87", "1",
   NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class2f[] = {
   /* from paper */
   "\xe9\x9a\x8e",
   NULL
};

static const char *njd_set_digit_rule_conv_table2f[] = {
   "\xe4\xb8\x89", "1",
   NULL, NULL
};

static const char *njd_set_digit_rule_voiced_sound_symbol_list[] = {
   "\xe3\x82\xab", "\xe3\x82\xac",
   "\xe3\x82\xad", "\xe3\x82\xae",
   "\xe3\x82\xaf", "\xe3\x82\xb0",
   "\xe3\x82\xb1", "\xe3\x82\xb2",
   "\xe3\x82\xb3", "\xe3\x82\xb4",
   "\xe3\x82\xb5", "\xe3\x82\xb6",
   "\xe3\x82\xb7", "\xe3\x82\xb8",
   "\xe3\x82\xb9", "\xe3\x82\xba",
   "\xe3\x82\xbb", "\xe3\x82\xbc",
   "\xe3\x82\xbd", "\xe3\x82\xbe",
   "\xe3\x82\xbf", "\xe3\x83\x80",
   "\xe3\x83\x81", "\xe3\x83\x82",
   "\xe3\x83\x84", "\xe3\x83\x85",
   "\xe3\x83\x86", "\xe3\x83\x87",
   "\xe3\x83\x88", "\xe3\x83\x89",
   "\xe3\x83\x8f", "\xe3\x83\x90",
   "\xe3\x83\x92", "\xe3\x83\x93",
   "\xe3\x83\x95", "\xe3\x83\x96",
   "\xe3\x83\x98", "\xe3\x83\x99",
   "\xe3\x83\x9b", "\xe3\x83\x9c",
   NULL, NULL
};

static const char *njd_set_digit_rule_semivoiced_sound_symbol_list[] = {
   "\xe3\x83\x8f", "\xe3\x83\x91",
   "\xe3\x83\x92", "\xe3\x83\x94",
   "\xe3\x83\x95", "\xe3\x83\x97",
   "\xe3\x83\x98", "\xe3\x83\x9a",
   "\xe3\x83\x9b", "\xe3\x83\x9d",
   NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class3[] = {
   /* from paper */
   "\xe6\xa3\x9f", "\xe3\x83\xa0\xe3\x83\x8d",
   /* from dictionary */
   "\xe3\x81\x8b\xe3\x81\x91", "\xe3\x82\xab\xe3\x82\xb1",
   "\xe3\x81\x8f\xe3\x81\xa0\xe3\x82\x8a", "\xe3\x82\xaf\xe3\x83\x80\xe3\x83\xaa",
   "\xe3\x81\x91\xe3\x81\x9f", "\xe3\x82\xb1\xe3\x82\xbf",
   "\xe3\x81\x99\xe3\x81\x98", "\xe3\x82\xb9\xe3\x82\xb8",
   "\xe3\x81\x9d\xe3\x82\x8d\xe3\x81\x84", "\xe3\x82\xbd\xe3\x83\xad\xe3\x82\xa4",
   "\xe3\x81\x9f\xe3\x81\xb3", "\xe3\x82\xbf\xe3\x83\x93",
   "\xe3\x81\xa4\xe3\x81\x8b\xe3\x81\xbf", "\xe3\x83\x84\xe3\x82\xab\xe3\x83\x9f",
   "\xe3\x81\xa4\xe3\x81\x8c\xe3\x81\x84", "\xe3\x83\x84\xe3\x82\xac\xe3\x82\xa4",
   "\xe3\x81\xa4\xe3\x81\xbe\xe3\x81\xbf", "\xe3\x83\x84\xe3\x83\x9e\xe3\x83\x9f",
   "\xe3\x81\xa8\xe3\x81\x8a\xe3\x82\x8a", "\xe3\x83\x88\xe3\x82\xaa\xe3\x83\xaa",
   "\xe3\x81\xa8\xe3\x81\x93\xe3\x82\x8d", "\xe3\x83\x88\xe3\x82\xb3\xe3\x83\xad",
   "\xe3\x81\xa8\xe3\x81\x9b", "\xe3\x83\x88\xe3\x82\xbb",
   "\xe3\x81\xbe\xe3\x82\x8f\xe3\x82\x8a", "\xe3\x83\x9e\xe3\x83\xaf\xe3\x83\xaa",
   "\xe3\x82\xb7\xe3\x83\xbc\xe3\x82\xba\xe3\x83\xb3", "\xe3\x82\xb7\xe3\x83\xbc\xe3\x82\xba\xe3\x83\xb3",
   "\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88", "\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88",
   "\xe6\x8f\xa1\xe3\x82\x8a", "\xe3\x83\x8b\xe3\x82\xae\xe3\x83\xaa",
   "\xe5\x9b\x9e\xe3\x82\x8a", "\xe3\x83\x9e\xe3\x83\xaf\xe3\x83\xaa",
   "\xe6\xa0\xaa", "\xe3\x82\xab\xe3\x83\x96",
   "\xe7\xab\xbf", "\xe3\x82\xb5\xe3\x82\xaa",
   "\xe7\xad\x8b", "\xe3\x82\xb9\xe3\x82\xb8",
   "\xe6\xa1\x81", "\xe3\x82\xb1\xe3\x82\xbf",
   "\xe3\x82\xb1\xe3\x82\xbf", "\xe3\x82\xb1\xe3\x82\xbf",
   "\xe6\x9c\x88", "\xe3\x83\x84\xe3\x82\xad",
   "\xe8\xa8\x80", "\xe3\x82\xb3\xe3\x83\x88",
   "\xe5\x8f\xa3", "\xe3\x82\xaf\xe3\x83\x81",
   "\xe5\xb7\xae\xe3\x81\x97", "\xe3\x82\xb5\xe3\x82\xb7",
   "\xe7\x9a\xbf", "\xe3\x82\xb5\xe3\x83\xa9",
   "\xe5\xb1\xb1", "\xe3\x83\xa4\xe3\x83\x9e",
   "\xe5\x8b\xba", "\xe3\x82\xb7\xe3\x83\xa3\xe3\x82\xaf",
   "\xe5\xb0\xba", "\xe3\x82\xb7\xe3\x83\xa3\xe3\x82\xaf",
   "\xe9\x87\x8d\xe3\x81\xad", "\xe3\x82\xab\xe3\x82\xb5\xe3\x83\x8d",
   "\xe6\x8c\xaf\xe3\x82\x8a", "\xe3\x83\x95\xe3\x83\xaa",
   "\xe9\x87\x9d", "\xe3\x83\x8f\xe3\x83\xaa",
   "\xe5\x88\x87\xe3\x82\x8c", "\xe3\x82\xad\xe3\x83\xac",
   "\xe6\x9d\x9f", "\xe3\x82\xbf\xe3\x83\x90",
   "\xe7\xb6\x9a\xe3\x81\x8d", "\xe3\x83\x84\xe3\x83\x85\xe3\x82\xad",
   "\xe6\x8f\x83", "\xe3\x82\xbd\xe3\x83\xad\xe3\x82\xa4",
   "\xe8\xa2\x8b", "\xe3\x83\x95\xe3\x82\xaf\xe3\x83\xad",
   "\xe6\x9f\xb1", "\xe3\x83\x8f\xe3\x82\xb7\xe3\x83\xa9",
   "\xe5\xbc\xb5\xe3\x82\x8a", "\xe3\x83\x8f\xe3\x83\xaa",
   "\xe9\x80\x9a\xe3\x82\x8a", "\xe3\x83\x88\xe3\x82\xaa\xe3\x83\xaa",
   "\xe6\x8e\xb4\xe3\x81\xbf", "\xe3\x83\x84\xe3\x82\xab\xe3\x83\x9f",
   "\xe5\x9d\xaa", "\xe3\x83\x84\xe3\x83\x9c",
   "\xe7\xae\xb1", "\xe3\x83\x8f\xe3\x82\xb3",
   "\xe9\x89\xa2", "\xe3\x83\x8f\xe3\x83\x81",
   "\xe6\x99\xa9", "\xe3\x83\x90\xe3\x83\xb3",
   "\xe5\x93\x81", "\xe3\x82\xb7\xe3\x83\x8a",
   "\xe7\x93\xb6", "\xe3\x83\x93\xe3\x83\xb3",
   "\xe5\x88\x86\xe3\x81\x91", "\xe3\x83\xaf\xe3\x82\xb1",
   "\xe5\xb9\x95", "\xe3\x83\x9e\xe3\x82\xaf",
   "\xe5\xa4\x9c", "\xe3\x83\xa4",
   "\xe5\xa4\x9c", "\xe3\x83\xa8",
   "\xe7\xb2\x92", "\xe3\x83\x84\xe3\x83\x96",
   "\xe6\x9e\xa0", "\xe3\x83\xaf\xe3\x82\xaf",
   "\xe6\xa3\xb9", "\xe3\x82\xb5\xe3\x82\xaa",
   "\xe3\x81\xa4\xe6\x8a\x98", "\xe3\x83\x84\xe3\x82\xaa\xe3\x83\xaa",
   "\xe3\x81\xa4\xe6\x8a\x98\xe3\x82\x8a", "\xe3\x83\x84\xe3\x82\xaa\xe3\x83\xaa",
   "\xe7\xb2\x92", "\xe3\x83\x84\xe3\x83\x96",
   "\xe3\x81\xa4\xe3\x81\xb6", "\xe3\x83\x84\xe3\x83\x96",
   "\xe3\x81\xa8\xe3\x81\x8d", "\xe3\x83\x88\xe3\x82\xad",
   "\xe9\x87\x8d\xe3\x81\xad", "\xe3\x82\xac\xe3\x82\xb5\xe3\x83\x8d",
   NULL, NULL
};

static const char *njd_set_digit_rule_conv_table3[] = {
   "\xe4\xb8\x80", "\xe3\x83\x92\xe3\x83\x88", "0", "2",
   "\xe4\xba\x8c", "\xe3\x83\x95\xe3\x82\xbf", "0", "2",
   /* "\xe4\xb8\x89", "\xe3\x83\x9f", "1", "1", *//* modified */
   NULL, NULL, NULL, NULL
};

static const char *njd_set_digit_rule_conv_table4[] = {
   "\xe4\xb8\x80", "\xe4\xb8\x80\xe4\xba\xba,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe4\xb8\x80\xe4\xba\xba,\xe3\x83\x92\xe3\x83\x88\xe3\x83\xaa,\xe3\x83\x92\xe3\x83\x88\xe3\x83\xaa,2/3,*",
   "\xe4\xba\x8c", "\xe4\xba\x8c\xe4\xba\xba,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe4\xba\x8c\xe4\xba\xba,\xe3\x83\x95\xe3\x82\xbf\xe3\x83\xaa,\xe3\x83\x95\xe3\x82\xbf\xe3\x83\xaa,3/3,*",
   NULL, NULL
};

static const char *njd_set_digit_rule_conv_table5[] = {
   "\xe4\xb8\x80", "\xe4\xb8\x80\xe6\x97\xa5,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe4\xb8\x80\xe6\x97\xa5,\xe3\x82\xa4\xe3\x83\x81\xe3\x83\x8b\xe3\x83\x81,\xe3\x82\xa4\xe3\x83\x81\xe3\x83\x8b\xe3\x83\x81,4/4,*",
   "\xe4\xba\x8c", "\xe4\xba\x8c\xe6\x97\xa5,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe4\xba\x8c\xe6\x97\xa5,\xe3\x83\x95\xe3\x83\x84\xe3\x82\xab,\xe3\x83\x95\xe3\x83\x84\xe3\x82\xab,3/3,*",
   "\xe4\xb8\x89", "\xe4\xb8\x89\xe6\x97\xa5,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe4\xb8\x89\xe6\x97\xa5,\xe3\x83\x9f\xe3\x83\x83\xe3\x82\xab,\xe3\x83\x9f\xe3\x83\x83\xe3\x82\xab,3/3,*",
   "\xe5\x9b\x9b", "\xe5\x9b\x9b\xe6\x97\xa5,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe5\x9b\x9b\xe6\x97\xa5,\xe3\x83\xa8\xe3\x83\x83\xe3\x82\xab,\xe3\x83\xa8\xe3\x83\x83\xe3\x82\xab,3/3,*",
   "\xe4\xba\x94", "\xe4\xba\x94\xe6\x97\xa5,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe4\xba\x94\xe6\x97\xa5,\xe3\x82\xa4\xe3\x83\x84\xe3\x82\xab,\xe3\x82\xa4\xe3\x83\x84\xe3\x82\xab,3/3,*",
   "\xe5\x85\xad", "\xe5\x85\xad\xe6\x97\xa5,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe5\x85\xad\xe6\x97\xa5,\xe3\x83\xa0\xe3\x82\xa4\xe3\x82\xab,\xe3\x83\xa0\xe3\x82\xa4\xe3\x82\xab,3/3,*",
   "\xe4\xb8\x83", "\xe4\xb8\x83\xe6\x97\xa5,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe4\xb8\x83\xe6\x97\xa5,\xe3\x83\x8a\xe3\x83\x8e\xe3\x82\xab,\xe3\x83\x8a\xe3\x83\x8e\xe3\x82\xab,3/3,*",
   "\xe5\x85\xab", "\xe5\x85\xab\xe6\x97\xa5,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe5\x85\xab\xe6\x97\xa5,\xe3\x83\xa8\xe3\x82\xa6\xe3\x82\xab,\xe3\x83\xa8\xe3\x82\xa6\xe3\x82\xab,3/3,*",
   "\xe4\xb9\x9d", "\xe4\xb9\x9d\xe6\x97\xa5,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe4\xb9\x9d\xe6\x97\xa5,\xe3\x82\xb3\xe3\x82\xb3\xe3\x83\x8e\xe3\x82\xab,\xe3\x82\xb3\xe3\x82\xb3\xe3\x83\x8e\xe3\x82\xab,4/4,*",
   "\xe5\x8d\x81", "\xe5\x8d\x81\xe6\x97\xa5,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe5\x8d\x81\xe6\x97\xa5,\xe3\x83\x88\xe3\x82\xa6\xe3\x82\xab,\xe3\x83\x88\xe3\x83\xbc\xe3\x82\xab,3/3,*",
   NULL, NULL
};
static const char *njd_set_digit_rule_conv_table6[] = {
   "\xe4\xb8\x80", "\xe4\xb8\x80\xe6\x97\xa5\xe9\x96\x93,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe4\xb8\x80\xe6\x97\xa5\xe9\x96\x93,\xe3\x82\xa4\xe3\x83\x81\xe3\x83\x8b\xe3\x83\x81\xe3\x82\xab\xe3\x83\xb3,\xe3\x82\xa4\xe3\x83\x81\xe3\x83\x8b\xe3\x83\x81\xe3\x82\xab\xe3\x83\xb3,4/6,*",
   "\xe4\xba\x8c", "\xe4\xba\x8c\xe6\x97\xa5\xe9\x96\x93,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe4\xba\x8c\xe6\x97\xa5,\xe3\x83\x95\xe3\x83\x84\xe3\x82\xab\xe3\x82\xab\xe3\x83\xb3,\xe3\x83\x95\xe3\x83\x84\xe3\x82\xab\xe3\x82\xab\xe3\x83\xb3,3/5,*",
   "\xe4\xb8\x89", "\xe4\xb8\x89\xe6\x97\xa5\xe9\x96\x93,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe4\xb8\x89\xe6\x97\xa5,\xe3\x83\x9f\xe3\x83\x83\xe3\x82\xab\xe3\x82\xab\xe3\x83\xb3,\xe3\x83\x9f\xe3\x83\x83\xe3\x82\xab\xe3\x82\xab\xe3\x83\xb3,3/5,*",
   "\xe5\x9b\x9b", "\xe5\x9b\x9b\xe6\x97\xa5\xe9\x96\x93,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe5\x9b\x9b\xe6\x97\xa5,\xe3\x83\xa8\xe3\x83\x83\xe3\x82\xab\xe3\x82\xab\xe3\x83\xb3,\xe3\x83\xa8\xe3\x83\x83\xe3\x82\xab\xe3\x82\xab\xe3\x83\xb3,3/5,*",
   "\xe4\xba\x94", "\xe4\xba\x94\xe6\x97\xa5\xe9\x96\x93,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe4\xba\x94\xe6\x97\xa5,\xe3\x82\xa4\xe3\x83\x84\xe3\x82\xab\xe3\x82\xab\xe3\x83\xb3,\xe3\x82\xa4\xe3\x83\x84\xe3\x82\xab\xe3\x82\xab\xe3\x83\xb3,3/5,*",
   "\xe5\x85\xad", "\xe5\x85\xad\xe6\x97\xa5\xe9\x96\x93,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe5\x85\xad\xe6\x97\xa5,\xe3\x83\xa0\xe3\x82\xa4\xe3\x82\xab\xe3\x82\xab\xe3\x83\xb3,\xe3\x83\xa0\xe3\x82\xa4\xe3\x82\xab\xe3\x82\xab\xe3\x83\xb3,3/5,*",
   "\xe4\xb8\x83", "\xe4\xb8\x83\xe6\x97\xa5\xe9\x96\x93,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe4\xb8\x83\xe6\x97\xa5,\xe3\x83\x8a\xe3\x83\x8e\xe3\x82\xab\xe3\x82\xab\xe3\x83\xb3,\xe3\x83\x8a\xe3\x83\x8e\xe3\x82\xab\xe3\x82\xab\xe3\x83\xb3,3/5,*",
   "\xe5\x85\xab", "\xe5\x85\xab\xe6\x97\xa5\xe9\x96\x93,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe5\x85\xab\xe6\x97\xa5,\xe3\x83\xa8\xe3\x82\xa6\xe3\x82\xab\xe3\x82\xab\xe3\x83\xb3,\xe3\x83\xa8\xe3\x82\xa6\xe3\x82\xab\xe3\x82\xab\xe3\x83\xb3,3/5,*",
   "\xe4\xb9\x9d", "\xe4\xb9\x9d\xe6\x97\xa5\xe9\x96\x93,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe4\xb9\x9d\xe6\x97\xa5,\xe3\x82\xb3\xe3\x82\xb3\xe3\x83\x8e\xe3\x82\xab\xe3\x82\xab\xe3\x83\xb3,\xe3\x82\xb3\xe3\x82\xb3\xe3\x83\x8e\xe3\x82\xab\xe3\x82\xab\xe3\x83\xb3,4/6,*",
   "\xe5\x8d\x81", "\xe5\x8d\x81\xe6\x97\xa5\xe9\x96\x93,\xe5\x90\x8d\xe8\xa9\x9e,\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd,*,*,*,*,\xe5\x8d\x81\xe6\x97\xa5,\xe3\x83\x88\xe3\x82\xa6\xe3\x82\xab\xe3\x82\xab\xe3\x83\xb3,\xe3\x83\x88\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xab\xe3\x83\xb3,3/5,*",
   NULL, NULL
};

NJD_SET_DIGIT_RULE_H_END;

#endif                          /* !NJD_SET_DIGIT_RULE_H */
