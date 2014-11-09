#ifndef NJD_SET_ACCENT_PHRASE_RULE_H
#define NJD_SET_ACCENT_PHRASE_RULE_H

#ifdef __cplusplus
#define NJD_SET_ACCENT_PHRASE_RULE_H_START extern "C" {
#define NJD_SET_ACCENT_PHRASE_RULE_H_END   }
#else
#define NJD_SET_ACCENT_PHRASE_RULE_H_START
#define NJD_SET_ACCENT_PHRASE_RULE_H_END
#endif                          /* __CPLUSPLUS */

NJD_SET_ACCENT_PHRASE_RULE_H_START;

/*
  Rule 01 �ǥե���ȤϤ��äĤ���
  Rule 02 ��̾��פ�Ϣ³�Ϥ��äĤ���
  Rule 03 �ַ��ƻ�פθ�ˡ�̾��פ��������̤Υ�������ȶ��
  Rule 04 ��̾��,����ư��촴�פθ�ˡ�̾��פ��������̤Υ�������ȶ��
  Rule 05 ��ư��פθ�ˡַ��ƻ��or��̾��פ��������̤Υ�������ȶ��
  Rule 06 ������ס�����³��ס���Ϣ�λ�פ�ñ�ȤΥ�������ȶ��
  Rule 07 ��̾��,�����ǽ�סʤ��٤ơ��ʤɡˤ�ñ�ȤΥ�������ȶ��
  Rule 08 �ֽ����or�ֽ�ư��ס���°��ˤ����ˤ��äĤ���
  Rule 09 �ֽ����or�ֽ�ư��ס���°��ˤθ�Ρֽ���ס��ֽ�ư��װʳ��ʼ�Ω��ˤ��̤Υ�������ȶ��
  Rule 10 ��*,�����פθ�Ρ�̾��פ��̤Υ�������ȶ��
  Rule 11 �ַ��ƻ�,��Ω�פϡ�ư��,Ϣ��*��or�ַ��ƻ�,Ϣ��*��or�ֽ���,��³����,�ơ�or�ֽ���,��³����,�ǡפ���³����������ˤ��äĤ���
  Rule 12 ��ư��,��Ω�פϡ�ư��,Ϣ��*��or��̾��,������³�פ���³����������ˤ��äĤ���
  Rule 13 ��̾��פθ�ˡ�ư���or�ַ��ƻ��or��̾��,����ư��촴�פ��������̤Υ�������ȶ��
  Rule 14 �ֵ���פ�ñ�ȤΥ�������ȶ��
  Rule 15 ����Ƭ��פ�ñ�ȤΥ�������ȶ��
  Rule 16 ��*,*,*,���פθ�Ρ�̾��פ��̤Υ�������ȶ��
  Rule 17 ��̾��פθ�Ρ�*,*,*,̾�פ��̤Υ�������ȶ��
  Rule 18 ��*,�����פ����ˤ��äĤ���
*/

#define NJD_SET_ACCENT_PHRASE_MEISHI "̾��"
#define NJD_SET_ACCENT_PHRASE_KEIYOUSHI "���ƻ�"
#define NJD_SET_ACCENT_PHRASE_DOUSHI "ư��"
#define NJD_SET_ACCENT_PHRASE_FUKUSHI "����"
#define NJD_SET_ACCENT_PHRASE_SETSUZOKUSHI "��³��"
#define NJD_SET_ACCENT_PHRASE_RENTAISHI "Ϣ�λ�"
#define NJD_SET_ACCENT_PHRASE_JODOUSHI "��ư��"
#define NJD_SET_ACCENT_PHRASE_JOSHI "����"
#define NJD_SET_ACCENT_PHRASE_KIGOU "����"
#define NJD_SET_ACCENT_PHRASE_KEIYOUDOUSHI_GOKAN "����ư��촴"
#define NJD_SET_ACCENT_PHRASE_FUKUSHI_KANOU "�����ǽ"
#define NJD_SET_ACCENT_PHRASE_SETSUBI "����"
#define NJD_SET_ACCENT_PHRASE_HIJIRITSU "��Ω"
#define NJD_SET_ACCENT_PHRASE_RENYOU "Ϣ��"
#define NJD_SET_ACCENT_PHRASE_SETSUZOKUJOSHI "��³����"
#define NJD_SET_ACCENT_PHRASE_SAHEN_SETSUZOKU "������³"
#define NJD_SET_ACCENT_PHRASE_TE "��"
#define NJD_SET_ACCENT_PHRASE_DE "��"
#define NJD_SET_ACCENT_PHRASE_SETTOUSHI "��Ƭ��"
#define NJD_SET_ACCENT_PHRASE_SEI "��"
#define NJD_SET_ACCENT_PHRASE_MEI "̾"

NJD_SET_ACCENT_PHRASE_RULE_H_END;

#endif                          /* !NJD_SET_ACCENT_PHRASE_RULE_H */
