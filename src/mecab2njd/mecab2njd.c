#ifndef MECAB2NJD_C
#define MECAB2NJD_C

#ifdef __cplusplus
#define MECAB2NJD_C_START extern "C" {
#define MECAB2NJD_C_END   }
#else
#define MECAB2NJD_C_START
#define MECAB2NJD_C_END
#endif                          /* __CPLUSPLUS */

MECAB2NJD_C_START;

#include <stdio.h>
#include <stdlib.h>

#include "njd.h"
#include "mecab2njd.h"

void mecab2njd(NJD * njd, char **feature, int size)
{
   int i;
   NJDNode *node;

   for (i = 0; i < size; i++) {
      node = (NJDNode *) calloc(1, sizeof(NJDNode));
      NJDNode_initialize(node);
      NJDNode_load(node, feature[i]);
      NJD_push_node(njd, node);
   }
}

MECAB2NJD_C_END;

#endif                          /* !MECAB2NJD_C */
