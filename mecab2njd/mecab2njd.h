#ifndef MECAB2NJD_H
#define MECAB2NJD_H

#ifdef __cplusplus
#define MECAB2NJD_H_START extern "C" {
#define MECAB2NJD_H_END   }
#else
#define MECAB2NJD_H_START
#define MECAB2NJD_H_END
#endif                          /* __CPLUSPLUS */

MECAB2NJD_H_START;

void mecab2njd(NJD * njd, char **feature, int size);

MECAB2NJD_H_END;

#endif                          /* !MECAB2NJD_H */
