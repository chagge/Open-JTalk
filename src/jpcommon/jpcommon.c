#ifndef JPCOMMON_C
#define JPCOMMON_C

#ifdef __cplusplus
#define JPCOMMON_C_START extern "C" {
#define JPCOMMON_C_END   }
#else
#define JPCOMMON_C_START
#define JPCOMMON_C_END
#endif                          /* __CPLUSPLUS */

JPCOMMON_C_START;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "jpcommon.h"

void JPCommon_initialize(JPCommon * jpcommon)
{
   jpcommon->head = NULL;
   jpcommon->tail = NULL;
   jpcommon->label = NULL;
}

void JPCommon_push(JPCommon * jpcommon, JPCommonNode * node)
{
   if (jpcommon->head == NULL) {
      jpcommon->head = node;
   } else {
      jpcommon->tail->next = node;
      node->prev = jpcommon->tail;
   }
   jpcommon->tail = node;
}

void JPCommon_make_label(JPCommon * jpcommon)
{
   JPCommonNode *node = jpcommon->head;

   /* initialize */
   if (jpcommon->label != NULL)
      JPCommonLabel_clear(jpcommon->label);
   else
      jpcommon->label = (JPCommonLabel *) calloc(1, sizeof(JPCommonLabel));
   JPCommonLabel_initialize(jpcommon->label);
   /* push word */
   for (node = jpcommon->head; node != NULL; node = node->next)
      JPCommonLabel_push_word(jpcommon->label, JPCommonNode_get_pron(node),
                              JPCommonNode_get_pos(node),
                              JPCommonNode_get_ctype(node),
                              JPCommonNode_get_cform(node),
                              JPCommonNode_get_acc(node), JPCommonNode_get_chain_flag(node));
   /* make label */
   JPCommonLabel_make(jpcommon->label);
}

int JPCommon_get_label_size(JPCommon * jpcommon)
{
   if (jpcommon->label != NULL)
      return JPCommonLabel_get_size(jpcommon->label);
   else
      return 0;
}

char **JPCommon_get_label_feature(JPCommon * jpcommon)
{
   if (jpcommon->label != NULL)
      return JPCommonLabel_get_feature(jpcommon->label);
   else
      return NULL;
}

void JPCommon_print(JPCommon * jpcommon)
{
   JPCommon_fprint(jpcommon, stdout);
}

void JPCommon_fprint(JPCommon * jpcommon, FILE * fp)
{
   JPCommonNode *node;

   for (node = jpcommon->head; node != NULL; node = node->next)
      JPCommonNode_fprint(node, fp);
}

void JPCommon_refresh(JPCommon * jpcommon)
{
   JPCommon_clear(jpcommon);
   JPCommon_initialize(jpcommon);
}

void JPCommon_clear(JPCommon * jpcommon)
{
   JPCommonNode *node;

   while (jpcommon->head != NULL) {
      node = jpcommon->head->next;
      JPCommonNode_clear(jpcommon->head);
      free(jpcommon->head);
      jpcommon->head = node;
   }
   jpcommon->tail = NULL;

   if (jpcommon->label != NULL) {
      JPCommonLabel_clear(jpcommon->label);
      free(jpcommon->label);
   }
   jpcommon->label = NULL;
}

JPCOMMON_C_END;

#endif                          /* !JPCOMMON_C */
