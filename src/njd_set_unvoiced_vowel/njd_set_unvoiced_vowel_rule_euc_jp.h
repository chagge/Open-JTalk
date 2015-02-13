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
  ̵���Ҳ�: k ky s sh t ty ch ts h f hy p py
  Rule 0 �ե��顼��̵�������ʤ�
  Rule 1 ��ư��Ρ֤Ǥ��פȡ֤ޤ��פΡ֤��פ�̵����
  Rule 2 ư�졤��ư�졤����Ρ֤��פ�̵�������䤹��
  Rule 3 ³����̵�������ʤ�
  Rule 4 ��������ȳˤ�̵�������ʤ�
  Rule 5 ̵���Ҳ�(k ky s sh t ty ch ts h f hy p py)�˰Ϥޤ줿��i�פȡ�u�פ�̵����
         �㳰��s->s, s->sh, f->f, f->h, f->hy, h->f, h->h, h->hy
*/

#define NJD_SET_UNVOICED_VOWEL_FILLER "�ե��顼"
#define NJD_SET_UNVOICED_VOWEL_DOUSHI "ư��"
#define NJD_SET_UNVOICED_VOWEL_JODOUSHI "��ư��"
#define NJD_SET_UNVOICED_VOWEL_JOSHI "����"
#define NJD_SET_UNVOICED_VOWEL_KANDOUSHI "��ư��"
#define NJD_SET_UNVOICED_VOWEL_TOUTEN "��"
#define NJD_SET_UNVOICED_VOWEL_QUESTION "��"
#define NJD_SET_UNVOICED_VOWEL_QUOTATION "��"
#define NJD_SET_UNVOICED_VOWEL_SHI "��"
#define NJD_SET_UNVOICED_VOWEL_MA "��"
#define NJD_SET_UNVOICED_VOWEL_DE "��"
#define NJD_SET_UNVOICED_VOWEL_CHOUON "��"
#define NJD_SET_UNVOICED_VOWEL_SU "��"

static const char *njd_set_unvoiced_vowel_candidate_list1[] = {
   "����",                      /* s i */
   "��",                        /* s u */
   NULL
};

static const char *njd_set_unvoiced_vowel_next_mora_list1[] = {
   "��",                        /* k ky */
   "��",
   "��",
   "��",
   "��",
   "��",                        /* t ty ch ts */
   "��",
   "��",
   "��",
   "��",
   "��",                        /* h f hy */
   "��",
   "��",
   "��",
   "��",
   "��",                        /* p py */
   "��",
   "��",
   "��",
   "��",
   NULL
};

static const char *njd_set_unvoiced_vowel_candidate_list2[] = {
   "�ե�",                      /* f i */
   "��",                        /* h i */
   "��",                        /* f u */
   NULL
};

static const char *njd_set_unvoiced_vowel_next_mora_list2[] = {
   "��",                        /* k ky */
   "��",
   "��",
   "��",
   "��",
   "��",                        /* s sh */
   "��",
   "��",
   "��",
   "��",
   "��",                        /* t ty ch ts */
   "��",
   "��",
   "��",
   "��",
   "��",                        /* p py */
   "��",
   "��",
   "��",
   "��",
   NULL
};

static const char *njd_set_unvoiced_vowel_candidate_list3[] = {
   "����",                      /* ky u */
   "����",                      /* sh u */
   "����",                      /* ch u */
   "�ĥ�",                      /* ts i */
   "�ҥ�",                      /* hy u */
   "�ԥ�",                      /* py u */
   "�ƥ�",                      /* ty u */
   "�ȥ�",                      /* t u */
   "�ƥ�",                      /* t i */
   "��",                        /* k i */
   "��",                        /* k u */
   "��",                        /* sh i */
   "��",                        /* ch i */
   "��",                        /* ts u */
   "��",                        /* p i */
   "��",                        /* p u */
   NULL
};

static const char *njd_set_unvoiced_vowel_next_mora_list3[] = {
   "��",                        /* k ky */
   "��",
   "��",
   "��",
   "��",
   "��",                        /* s sh */
   "��",
   "��",
   "��",
   "��",
   "��",                        /* t ty ch ts */
   "��",
   "��",
   "��",
   "��",
   "��",                        /* h f hy */
   "��",
   "��",
   "��",
   "��",
   "��",                        /* p py */
   "��",
   "��",
   "��",
   "��",
   NULL
};

static const char *njd_set_unvoiced_vowel_mora_list[] = {
   "����",
   "����",
   "����",
   "����",
   "����",
   "����",
   "����",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "���",
   "���",
   "���",
   "�ꥧ",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "�ߥ�",
   "�ߥ�",
   "�ߥ�",
   "�ߥ�",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "�ե�",
   "�ե�",
   "�ե�",
   "�ե�",
   "��",
   "�ԥ�",
   "�ԥ�",
   "�ԥ�",
   "�ԥ�",
   "��",
   "�ӥ�",
   "�ӥ�",
   "�ӥ�",
   "�ӥ�",
   "��",
   "�ҥ�",
   "�ҥ�",
   "�ҥ�",
   "�ҥ�",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "�˥�",
   "�˥�",
   "�˥�",
   "�˥�",
   "��",
   "��",
   "�ɥ�",
   "��",
   "�ȥ�",
   "��",
   "�ǥ�",
   "�ǥ�",
   "�ǥ�",
   "�ǥ�",
   "�ǥ�",
   "��",
   "�ƥ�",
   "�ƥ�",
   "�ƥ�",
   "�ƥ�",
   "�ƥ�",
   "��",
   "��",
   "�ĥ�",
   "�ĥ�",
   "�ĥ�",
   "�ĥ�",
   "��",
   "��",
   "��",
   "����",
   "����",
   "����",
   "����",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "����",
   "��",
   "����",
   "��",
   "����",
   "����",
   "����",
   "����",
   "��",
   "����",
   "����",
   "����",
   "����",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "����",
   "����",
   "����",
   "����",
   "��",
   "����",
   "����",
   "����",
   "����",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "��",
   "����",
   "����",
   "����",
   "��",
   "��",
   "����",
   "��",
   "��",
   "��",
   "��",
   "��",
   NULL
};

NJD_SET_UNVOICED_VOWEL_RULE_H_END;

#endif                          /* !NJD_SET_UNVOICED_VOWEL_RULE_H */
