#ifndef NJD_SET_UNVOICED_VOWEL_RULE_H
#define NJD_SET_UNVOICED_VOWEL_RULE_H

#ifdef __cplusplus
#define NJD_SET_UNVOICED_VOWEL_RULE_H_START extern "C" {
#define NJD_SET_UNVOICED_VOWEL_RULE_H_END   }
#else
#define NJD_SET_UNVOICED_VOWEL_RULE_H_START
#define NJD_SET_UNVOICED_VOWEL_RULE_H_END
#endif                          /* __CPLUSPLUS */

NJD_SET_UNVOICED_VOWEL_RULE_H_START;

/*
  \xe7\x84\xa1\xe5\xa3\xb0\xe5\xad\x90\xe9\x9f\xb3: k ky s sh t ty ch ts h f hy p py
  Rule 0 \xe3\x83\x95\xe3\x82\xa3\xe3\x83\xa9\xe3\x83\xbc\xe3\x81\xaf\xe7\x84\xa1\xe5\xa3\xb0\xe5\x8c\x96\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84
  Rule 1 \xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e\xe3\x81\xae\xe3\x80\x8c\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x8d\xe3\x81\xa8\xe3\x80\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x8d\xe3\x81\xae\xe3\x80\x8c\xe3\x81\x99\xe3\x80\x8d\xe3\x81\x8c\xe7\x84\xa1\xe5\xa3\xb0\xe5\x8c\x96
  Rule 2 \xe5\x8b\x95\xe8\xa9\x9e\xef\xbc\x8c\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e\xef\xbc\x8c\xe5\x8a\xa9\xe8\xa9\x9e\xe3\x81\xae\xe3\x80\x8c\xe3\x81\x97\xe3\x80\x8d\xe3\x81\xaf\xe7\x84\xa1\xe5\xa3\xb0\xe5\x8c\x96\xe3\x81\x97\xe3\x82\x84\xe3\x81\x99\xe3\x81\x84
  Rule 3 \xe7\xb6\x9a\xe3\x81\x91\xe3\x81\xa6\xe7\x84\xa1\xe5\xa3\xb0\xe5\x8c\x96\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84
  Rule 4 \xe3\x82\xa2\xe3\x82\xaf\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x88\xe6\xa0\xb8\xe3\x81\xa7\xe7\x84\xa1\xe5\xa3\xb0\xe5\x8c\x96\xe3\x81\x97\xe3\x81\xaa\xe3\x81\x84
  Rule 5 \xe7\x84\xa1\xe5\xa3\xb0\xe5\xad\x90\xe9\x9f\xb3(k ky s sh t ty ch ts h f hy p py)\xe3\x81\xab\xe5\x9b\xb2\xe3\x81\xbe\xe3\x82\x8c\xe3\x81\x9f\xe3\x80\x8ci\xe3\x80\x8d\xe3\x81\xa8\xe3\x80\x8cu\xe3\x80\x8d\xe3\x81\x8c\xe7\x84\xa1\xe5\xa3\xb0\xe5\x8c\x96
         \xe4\xbe\x8b\xe5\xa4\x96\xef\xbc\x9as->s, s->sh, f->f, f->h, f->hy, h->f, h->h, h->hy
*/

#define NJD_SET_UNVOICED_VOWEL_FILLER "\xe3\x83\x95\xe3\x82\xa3\xe3\x83\xa9\xe3\x83\xbc"
#define NJD_SET_UNVOICED_VOWEL_DOUSHI "\xe5\x8b\x95\xe8\xa9\x9e"
#define NJD_SET_UNVOICED_VOWEL_JODOUSHI "\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e"
#define NJD_SET_UNVOICED_VOWEL_JOSHI "\xe5\x8a\xa9\xe8\xa9\x9e"
#define NJD_SET_UNVOICED_VOWEL_KANDOUSHI "\xe6\x84\x9f\xe5\x8b\x95\xe8\xa9\x9e"
#define NJD_SET_UNVOICED_VOWEL_TOUTEN "\xe3\x80\x81"
#define NJD_SET_UNVOICED_VOWEL_QUESTION "\xef\xbc\x9f"
#define NJD_SET_UNVOICED_VOWEL_QUOTATION "\xe2\x80\x99"
#define NJD_SET_UNVOICED_VOWEL_SHI "\xe3\x82\xb7"
#define NJD_SET_UNVOICED_VOWEL_MA "\xe3\x83\x9e"
#define NJD_SET_UNVOICED_VOWEL_DE "\xe3\x83\x87"
#define NJD_SET_UNVOICED_VOWEL_CHOUON "\xe3\x83\xbc"
#define NJD_SET_UNVOICED_VOWEL_SU "\xe3\x82\xb9"

static const char *njd_set_unvoiced_vowel_candidate_list1[] = {
   "\xe3\x82\xb9\xe3\x82\xa3",                      /* s i */
   "\xe3\x82\xb9",                        /* s u */
   NULL
};

static const char *njd_set_unvoiced_vowel_next_mora_list1[] = {
   "\xe3\x82\xab",                        /* k ky */
   "\xe3\x82\xad",
   "\xe3\x82\xaf",
   "\xe3\x82\xb1",
   "\xe3\x82\xb3",
   "\xe3\x82\xbf",                        /* t ty ch ts */
   "\xe3\x83\x81",
   "\xe3\x83\x84",
   "\xe3\x83\x86",
   "\xe3\x83\x88",
   "\xe3\x83\x8f",                        /* h f hy */
   "\xe3\x83\x92",
   "\xe3\x83\x95",
   "\xe3\x83\x98",
   "\xe3\x83\x9b",
   "\xe3\x83\x91",                        /* p py */
   "\xe3\x83\x94",
   "\xe3\x83\x97",
   "\xe3\x83\x9a",
   "\xe3\x83\x9d",
   NULL
};

static const char *njd_set_unvoiced_vowel_candidate_list2[] = {
   "\xe3\x83\x95\xe3\x82\xa3",                      /* f i */
   "\xe3\x83\x92",                        /* h i */
   "\xe3\x83\x95",                        /* f u */
   NULL
};

static const char *njd_set_unvoiced_vowel_next_mora_list2[] = {
   "\xe3\x82\xab",                        /* k ky */
   "\xe3\x82\xad",
   "\xe3\x82\xaf",
   "\xe3\x82\xb1",
   "\xe3\x82\xb3",
   "\xe3\x82\xb5",                        /* s sh */
   "\xe3\x82\xb7",
   "\xe3\x82\xb9",
   "\xe3\x82\xbb",
   "\xe3\x82\xbd",
   "\xe3\x82\xbf",                        /* t ty ch ts */
   "\xe3\x83\x81",
   "\xe3\x83\x84",
   "\xe3\x83\x86",
   "\xe3\x83\x88",
   "\xe3\x83\x91",                        /* p py */
   "\xe3\x83\x94",
   "\xe3\x83\x97",
   "\xe3\x83\x9a",
   "\xe3\x83\x9d",
   NULL
};

static const char *njd_set_unvoiced_vowel_candidate_list3[] = {
   "\xe3\x82\xad\xe3\x83\xa5",                      /* ky u */
   "\xe3\x82\xb7\xe3\x83\xa5",                      /* sh u */
   "\xe3\x83\x81\xe3\x83\xa5",                      /* ch u */
   "\xe3\x83\x84\xe3\x82\xa3",                      /* ts i */
   "\xe3\x83\x92\xe3\x83\xa5",                      /* hy u */
   "\xe3\x83\x94\xe3\x83\xa5",                      /* py u */
   "\xe3\x83\x86\xe3\x83\xa5",                      /* ty u */
   "\xe3\x83\x88\xe3\x82\xa5",                      /* t u */
   "\xe3\x83\x86\xe3\x82\xa3",                      /* t i */
   "\xe3\x82\xad",                        /* k i */
   "\xe3\x82\xaf",                        /* k u */
   "\xe3\x82\xb7",                        /* sh i */
   "\xe3\x83\x81",                        /* ch i */
   "\xe3\x83\x84",                        /* ts u */
   "\xe3\x83\x94",                        /* p i */
   "\xe3\x83\x97",                        /* p u */
   NULL
};

static const char *njd_set_unvoiced_vowel_next_mora_list3[] = {
   "\xe3\x82\xab",                        /* k ky */
   "\xe3\x82\xad",
   "\xe3\x82\xaf",
   "\xe3\x82\xb1",
   "\xe3\x82\xb3",
   "\xe3\x82\xb5",                        /* s sh */
   "\xe3\x82\xb7",
   "\xe3\x82\xb9",
   "\xe3\x82\xbb",
   "\xe3\x82\xbd",
   "\xe3\x82\xbf",                        /* t ty ch ts */
   "\xe3\x83\x81",
   "\xe3\x83\x84",
   "\xe3\x83\x86",
   "\xe3\x83\x88",
   "\xe3\x83\x8f",                        /* h f hy */
   "\xe3\x83\x92",
   "\xe3\x83\x95",
   "\xe3\x83\x98",
   "\xe3\x83\x9b",
   "\xe3\x83\x91",                        /* p py */
   "\xe3\x83\x94",
   "\xe3\x83\x97",
   "\xe3\x83\x9a",
   "\xe3\x83\x9d",
   NULL
};

static const char *njd_set_unvoiced_vowel_mora_list[] = {
   "\xe3\x83\xb4\xe3\x83\xa7",
   "\xe3\x83\xb4\xe3\x83\xa5",
   "\xe3\x83\xb4\xe3\x83\xa3",
   "\xe3\x83\xb4\xe3\x82\xa9",
   "\xe3\x83\xb4\xe3\x82\xa7",
   "\xe3\x83\xb4\xe3\x82\xa3",
   "\xe3\x83\xb4\xe3\x82\xa1",
   "\xe3\x83\xb4",
   "\xe3\x83\xb3",
   "\xe3\x83\xb2",
   "\xe3\x83\xb1",
   "\xe3\x83\xb0",
   "\xe3\x83\xaf",
   "\xe3\x83\xad",
   "\xe3\x83\xac",
   "\xe3\x83\xab",
   "\xe3\x83\xaa\xe3\x83\xa7",
   "\xe3\x83\xaa\xe3\x83\xa5",
   "\xe3\x83\xaa\xe3\x83\xa3",
   "\xe3\x83\xaa\xe3\x82\xa7",
   "\xe3\x83\xaa",
   "\xe3\x83\xa9",
   "\xe3\x83\xa8",
   "\xe3\x83\xa7",
   "\xe3\x83\xa6",
   "\xe3\x83\xa5",
   "\xe3\x83\xa4",
   "\xe3\x83\xa3",
   "\xe3\x83\xa2",
   "\xe3\x83\xa1",
   "\xe3\x83\xa0",
   "\xe3\x83\x9f\xe3\x83\xa7",
   "\xe3\x83\x9f\xe3\x83\xa5",
   "\xe3\x83\x9f\xe3\x83\xa3",
   "\xe3\x83\x9f\xe3\x82\xa7",
   "\xe3\x83\x9f",
   "\xe3\x83\x9e",
   "\xe3\x83\x9d",
   "\xe3\x83\x9c",
   "\xe3\x83\x9b",
   "\xe3\x83\x9a",
   "\xe3\x83\x99",
   "\xe3\x83\x98",
   "\xe3\x83\x97",
   "\xe3\x83\x96",
   "\xe3\x83\x95\xe3\x82\xa9",
   "\xe3\x83\x95\xe3\x82\xa7",
   "\xe3\x83\x95\xe3\x82\xa3",
   "\xe3\x83\x95\xe3\x82\xa1",
   "\xe3\x83\x95",
   "\xe3\x83\x94\xe3\x83\xa7",
   "\xe3\x83\x94\xe3\x83\xa5",
   "\xe3\x83\x94\xe3\x83\xa3",
   "\xe3\x83\x94\xe3\x82\xa7",
   "\xe3\x83\x94",
   "\xe3\x83\x93\xe3\x83\xa7",
   "\xe3\x83\x93\xe3\x83\xa5",
   "\xe3\x83\x93\xe3\x83\xa3",
   "\xe3\x83\x93\xe3\x82\xa7",
   "\xe3\x83\x93",
   "\xe3\x83\x92\xe3\x83\xa7",
   "\xe3\x83\x92\xe3\x83\xa5",
   "\xe3\x83\x92\xe3\x83\xa3",
   "\xe3\x83\x92\xe3\x82\xa7",
   "\xe3\x83\x92",
   "\xe3\x83\x91",
   "\xe3\x83\x90",
   "\xe3\x83\x8f",
   "\xe3\x83\x8e",
   "\xe3\x83\x8d",
   "\xe3\x83\x8c",
   "\xe3\x83\x8b\xe3\x83\xa7",
   "\xe3\x83\x8b\xe3\x83\xa5",
   "\xe3\x83\x8b\xe3\x83\xa3",
   "\xe3\x83\x8b\xe3\x82\xa7",
   "\xe3\x83\x8b",
   "\xe3\x83\x8a",
   "\xe3\x83\x89\xe3\x82\xa5",
   "\xe3\x83\x89",
   "\xe3\x83\x88\xe3\x82\xa5",
   "\xe3\x83\x88",
   "\xe3\x83\x87\xe3\x83\xa7",
   "\xe3\x83\x87\xe3\x83\xa5",
   "\xe3\x83\x87\xe3\x83\xa3",
   "\xe3\x83\x87\xe3\x82\xa7",
   "\xe3\x83\x87\xe3\x82\xa3",
   "\xe3\x83\x87",
   "\xe3\x83\x86\xe3\x83\xa7",
   "\xe3\x83\x86\xe3\x83\xa5",
   "\xe3\x83\x86\xe3\x83\xa3",
   "\xe3\x83\x86\xe3\x82\xa7",
   "\xe3\x83\x86\xe3\x82\xa3",
   "\xe3\x83\x86",
   "\xe3\x83\x85",
   "\xe3\x83\x84\xe3\x82\xa9",
   "\xe3\x83\x84\xe3\x82\xa7",
   "\xe3\x83\x84\xe3\x82\xa3",
   "\xe3\x83\x84\xe3\x82\xa1",
   "\xe3\x83\x84",
   "\xe3\x83\x83",
   "\xe3\x83\x82",
   "\xe3\x83\x81\xe3\x83\xa7",
   "\xe3\x83\x81\xe3\x83\xa5",
   "\xe3\x83\x81\xe3\x83\xa3",
   "\xe3\x83\x81\xe3\x82\xa7",
   "\xe3\x83\x81",
   "\xe3\x83\x80",
   "\xe3\x82\xbf",
   "\xe3\x82\xbe",
   "\xe3\x82\xbd",
   "\xe3\x82\xbc",
   "\xe3\x82\xbb",
   "\xe3\x82\xba\xe3\x82\xa3",
   "\xe3\x82\xba",
   "\xe3\x82\xb9\xe3\x82\xa3",
   "\xe3\x82\xb9",
   "\xe3\x82\xb8\xe3\x83\xa7",
   "\xe3\x82\xb8\xe3\x83\xa5",
   "\xe3\x82\xb8\xe3\x83\xa3",
   "\xe3\x82\xb8\xe3\x82\xa7",
   "\xe3\x82\xb8",
   "\xe3\x82\xb7\xe3\x83\xa7",
   "\xe3\x82\xb7\xe3\x83\xa5",
   "\xe3\x82\xb7\xe3\x83\xa3",
   "\xe3\x82\xb7\xe3\x82\xa7",
   "\xe3\x82\xb7",
   "\xe3\x82\xb6",
   "\xe3\x82\xb5",
   "\xe3\x82\xb4",
   "\xe3\x82\xb3",
   "\xe3\x82\xb2",
   "\xe3\x82\xb1",
   "\xe3\x82\xb0",
   "\xe3\x82\xaf",
   "\xe3\x82\xae\xe3\x83\xa7",
   "\xe3\x82\xae\xe3\x83\xa5",
   "\xe3\x82\xae\xe3\x83\xa3",
   "\xe3\x82\xae\xe3\x82\xa7",
   "\xe3\x82\xae",
   "\xe3\x82\xad\xe3\x83\xa7",
   "\xe3\x82\xad\xe3\x83\xa5",
   "\xe3\x82\xad\xe3\x83\xa3",
   "\xe3\x82\xad\xe3\x82\xa7",
   "\xe3\x82\xad",
   "\xe3\x82\xac",
   "\xe3\x82\xab",
   "\xe3\x82\xaa",
   "\xe3\x82\xa9",
   "\xe3\x82\xa8",
   "\xe3\x82\xa7",
   "\xe3\x82\xa6\xe3\x82\xa9",
   "\xe3\x82\xa6\xe3\x82\xa7",
   "\xe3\x82\xa6\xe3\x82\xa3",
   "\xe3\x82\xa6",
   "\xe3\x82\xa5",
   "\xe3\x82\xa4\xe3\x82\xa7",
   "\xe3\x82\xa4",
   "\xe3\x82\xa3",
   "\xe3\x82\xa2",
   "\xe3\x82\xa1",
   "\xe3\x83\xbc",
   NULL
};

NJD_SET_UNVOICED_VOWEL_RULE_H_END;

#endif                          /* !NJD_SET_UNVOICED_VOWEL_RULE_H */
