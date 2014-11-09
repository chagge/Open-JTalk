#ifndef TEXT2MECAB_H
#define TEXT2MECAB_H

#ifdef __cplusplus
#define TEXT2MECAB_H_START extern "C" {
#define TEXT2MECAB_H_END   }
#else
#define TEXT2MECAB_H_START
#define TEXT2MECAB_H_END
#endif                          /* __CPLUSPLUS */

TEXT2MECAB_H_START;

void text2mecab(char *output, const char *input);

TEXT2MECAB_H_END;

#endif                          /* !TEXT2MECAB_H */
