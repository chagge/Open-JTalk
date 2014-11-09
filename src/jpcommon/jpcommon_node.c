#ifndef JPCOMMON_NODE_C
#define JPCOMMON_NODE_C

#ifdef __cplusplus
#define JPCOMMON_NODE_C_START extern "C" {
#define JPCOMMON_NODE_C_END   }
#else
#define JPCOMMON_NODE_C_START
#define JPCOMMON_NODE_C_END
#endif                          /* __CPLUSPLUS */

JPCOMMON_NODE_C_START;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "jpcommon.h"

void JPCommonNode_initialize(JPCommonNode * node)
{
   node->pron = NULL;
   node->pos = NULL;
   node->ctype = NULL;
   node->cform = NULL;
   node->acc = 0;
   node->chain_flag = -1;
   node->prev = NULL;
   node->next = NULL;
}

void JPCommonNode_set_pron(JPCommonNode * node, const char *str)
{
   if (node->pron != NULL)
      free(node->pron);
   node->pron = strdup(str);
}

void JPCommonNode_set_pos(JPCommonNode * node, const char *str)
{
   if (node->pos != NULL)
      free(node->pos);
   node->pos = strdup(str);
}

void JPCommonNode_set_ctype(JPCommonNode * node, const char *str)
{
   if (node->ctype != NULL)
      free(node->ctype);
   node->ctype = strdup(str);
}

void JPCommonNode_set_cform(JPCommonNode * node, const char *str)
{
   if (node->cform != NULL)
      free(node->cform);
   node->cform = strdup(str);
}

void JPCommonNode_set_acc(JPCommonNode * node, int acc)
{
   node->acc = acc;
}

void JPCommonNode_set_chain_flag(JPCommonNode * node, int flag)
{
   node->chain_flag = flag;
}

const char *JPCommonNode_get_pron(JPCommonNode * node)
{
   return node->pron;
}

const char *JPCommonNode_get_pos(JPCommonNode * node)
{
   return node->pos;
}

const char *JPCommonNode_get_ctype(JPCommonNode * node)
{
   return node->ctype;
}

const char *JPCommonNode_get_cform(JPCommonNode * node)
{
   return node->cform;
}

int JPCommonNode_get_acc(JPCommonNode * node)
{
   return node->acc;
}

int JPCommonNode_get_chain_flag(JPCommonNode * node)
{
   return node->chain_flag;
}

void JPCommonNode_copy(JPCommonNode * node1, JPCommonNode * node2)
{
   JPCommonNode_set_pron(node1, node2->pron);
   JPCommonNode_set_pos(node1, node2->pos);
   JPCommonNode_set_ctype(node1, node2->ctype);
   JPCommonNode_set_cform(node1, node2->cform);
   JPCommonNode_set_acc(node1, node2->acc);
   JPCommonNode_set_chain_flag(node1, node2->chain_flag);
}

void JPCommonNode_print(JPCommonNode * node)
{
   JPCommonNode_fprint(node, stdout);
}

void JPCommonNode_fprint(JPCommonNode * node, FILE * fp)
{
   fprintf(fp, "%s,%s,%s,%s,%d,%d\n", node->pron, node->pos, node->ctype, node->cform, node->acc,
           node->chain_flag);
}

void JPCommonNode_clear(JPCommonNode * node)
{
   if (node->pron != NULL) {
      free(node->pron);
      node->pron = NULL;
   }
   if (node->pos != NULL) {
      free(node->pos);
      node->pos = NULL;
   }
   if (node->ctype != NULL) {
      free(node->ctype);
      node->ctype = NULL;
   }
   if (node->cform != NULL) {
      free(node->cform);
      node->cform = NULL;
   }
   node->acc = 0;
   node->chain_flag = -1;
   node->prev = NULL;
   node->next = NULL;
}

JPCOMMON_NODE_C_END;

#endif                          /* !JPCOMMON_NODE_C */
