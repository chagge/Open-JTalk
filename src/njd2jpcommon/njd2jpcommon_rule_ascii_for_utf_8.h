#ifndef NJD2JPCOMMON_RULE_H
#define NJD2JPCOMMON_RULE_H

#ifdef __cplusplus
#define NJD2JPCOMMON_RULE_H_START extern "C" {
#define NJD2JPCOMMON_RULE_H_END   }
#else
#define NJD2JPCOMMON_RULE_H_START
#define NJD2JPCOMMON_RULE_H_END
#endif                          /* __CPLUSPLUS */

NJD2JPCOMMON_RULE_H_START;

static const char *njd2jpcommon_pos_list[] = {
   "\xe3\x81\x9d\xe3\x81\xae\xe4\xbb\x96", "\xe9\x96\x93\xe6\x8a\x95", "*", "*", "\xe3\x81\x9d\xe3\x81\xae\xe4\xbb\x96",
   "\xe3\x83\x95\xe3\x82\xa3\xe3\x83\xa9\xe3\x83\xbc", "*", "*", "*", "\xe6\x84\x9f\xe5\x8b\x95\xe8\xa9\x9e",
   "\xe6\x84\x9f\xe5\x8b\x95\xe8\xa9\x9e", "*", "*", "*", "\xe6\x84\x9f\xe5\x8b\x95\xe8\xa9\x9e",
   "\xe8\xa8\x98\xe5\x8f\xb7", "\xe3\x82\xa2\xe3\x83\xab\xe3\x83\x95\xe3\x82\xa1\xe3\x83\x99\xe3\x83\x83\xe3\x83\x88", "*", "*", "\xe8\xa8\x98\xe5\x8f\xb7",
   "\xe8\xa8\x98\xe5\x8f\xb7", "\xe4\xb8\x80\xe8\x88\xac", "*", "*", "\xe8\xa8\x98\xe5\x8f\xb7",
   "\xe8\xa8\x98\xe5\x8f\xb7", "\xe6\x8b\xac\xe5\xbc\xa7\xe9\x96\x8b", "*", "*", "\xe8\xa8\x98\xe5\x8f\xb7",
   "\xe8\xa8\x98\xe5\x8f\xb7", "\xe6\x8b\xac\xe5\xbc\xa7\xe9\x96\x89", "*", "*", "\xe8\xa8\x98\xe5\x8f\xb7",
   "\xe8\xa8\x98\xe5\x8f\xb7", "\xe5\x8f\xa5\xe7\x82\xb9", "*", "*", "\xe8\xa8\x98\xe5\x8f\xb7",
   "\xe8\xa8\x98\xe5\x8f\xb7", "\xe7\xa9\xba\xe7\x99\xbd", "*", "*", "\xe8\xa8\x98\xe5\x8f\xb7",
   "\xe8\xa8\x98\xe5\x8f\xb7", "\xe8\xaa\xad\xe7\x82\xb9", "*", "*", "\xe8\xa8\x98\xe5\x8f\xb7",
   "\xe5\xbd\xa2\xe5\xae\xb9\xe8\xa9\x9e", "\xe8\x87\xaa\xe7\xab\x8b", "*", "*", "\xe5\xbd\xa2\xe5\xae\xb9\xe8\xa9\x9e",
   "\xe5\xbd\xa2\xe5\xae\xb9\xe8\xa9\x9e", "\xe6\x8e\xa5\xe5\xb0\xbe", "*", "*", "\xe6\x8e\xa5\xe5\xb0\xbe\xe8\xbe\x9e-\xe5\xbd\xa2\xe5\xae\xb9\xe8\xa9\x9e\xe7\x9a\x84",
   "\xe5\xbd\xa2\xe5\xae\xb9\xe8\xa9\x9e", "\xe9\x9d\x9e\xe8\x87\xaa\xe7\xab\x8b", "*", "*", "\xe5\xbd\xa2\xe5\xae\xb9\xe8\xa9\x9e",
   "\xe5\x8a\xa9\xe8\xa9\x9e", "\xe6\xa0\xbc\xe5\x8a\xa9\xe8\xa9\x9e", "\xe4\xb8\x80\xe8\x88\xac", "*", "\xe5\x8a\xa9\xe8\xa9\x9e-\xe6\xa0\xbc\xe5\x8a\xa9\xe8\xa9\x9e",
   "\xe5\x8a\xa9\xe8\xa9\x9e", "\xe6\xa0\xbc\xe5\x8a\xa9\xe8\xa9\x9e", "\xe5\xbc\x95\xe7\x94\xa8", "*", "\xe5\x8a\xa9\xe8\xa9\x9e-\xe6\xa0\xbc\xe5\x8a\xa9\xe8\xa9\x9e",
   "\xe5\x8a\xa9\xe8\xa9\x9e", "\xe6\xa0\xbc\xe5\x8a\xa9\xe8\xa9\x9e", "\xe9\x80\xa3\xe8\xaa\x9e", "*", "\xe5\x8a\xa9\xe8\xa9\x9e-\xe6\xa0\xbc\xe5\x8a\xa9\xe8\xa9\x9e",
   "\xe5\x8a\xa9\xe8\xa9\x9e", "\xe4\xbf\x82\xe5\x8a\xa9\xe8\xa9\x9e", "*", "*", "\xe5\x8a\xa9\xe8\xa9\x9e-\xe4\xbf\x82\xe5\x8a\xa9\xe8\xa9\x9e",
   "\xe5\x8a\xa9\xe8\xa9\x9e", "\xe7\xb5\x82\xe5\x8a\xa9\xe8\xa9\x9e", "*", "*", "\xe5\x8a\xa9\xe8\xa9\x9e-\xe7\xb5\x82\xe5\x8a\xa9\xe8\xa9\x9e",
   "\xe5\x8a\xa9\xe8\xa9\x9e", "\xe6\x8e\xa5\xe7\xb6\x9a\xe5\x8a\xa9\xe8\xa9\x9e", "*", "*", "\xe5\x8a\xa9\xe8\xa9\x9e-\xe6\x8e\xa5\xe7\xb6\x9a\xe5\x8a\xa9\xe8\xa9\x9e",
   "\xe5\x8a\xa9\xe8\xa9\x9e", "\xe7\x89\xb9\xe6\xae\x8a", "*", "*", "\xe5\x8a\xa9\xe8\xa9\x9e-\xe3\x81\x9d\xe3\x81\xae\xe4\xbb\x96",
   "\xe5\x8a\xa9\xe8\xa9\x9e", "\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8c\x96", "*", "*", "\xe5\x8a\xa9\xe8\xa9\x9e-\xe3\x81\x9d\xe3\x81\xae\xe4\xbb\x96",
   "\xe5\x8a\xa9\xe8\xa9\x9e", "\xe5\x89\xaf\xe5\x8a\xa9\xe8\xa9\x9e", "*", "*", "\xe5\x8a\xa9\xe8\xa9\x9e-\xe5\x89\xaf\xe5\x8a\xa9\xe8\xa9\x9e",
   "\xe5\x8a\xa9\xe8\xa9\x9e", "\xe5\x89\xaf\xe5\x8a\xa9\xe8\xa9\x9e\xef\xbc\x8f\xe4\xb8\xa6\xe7\xab\x8b\xe5\x8a\xa9\xe8\xa9\x9e\xef\xbc\x8f\xe7\xb5\x82\xe5\x8a\xa9\xe8\xa9\x9e", "*", "*", "\xe5\x8a\xa9\xe8\xa9\x9e-\xe3\x81\x9d\xe3\x81\xae\xe4\xbb\x96",
   "\xe5\x8a\xa9\xe8\xa9\x9e", "\xe4\xb8\xa6\xe7\xab\x8b\xe5\x8a\xa9\xe8\xa9\x9e", "*", "*", "\xe5\x8a\xa9\xe8\xa9\x9e-\xe3\x81\x9d\xe3\x81\xae\xe4\xbb\x96",
   "\xe5\x8a\xa9\xe8\xa9\x9e", "\xe9\x80\xa3\xe4\xbd\x93\xe5\x8c\x96", "*", "*", "\xe5\x8a\xa9\xe8\xa9\x9e-\xe3\x81\x9d\xe3\x81\xae\xe4\xbb\x96",
   "\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e", "*", "*", "*", "\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e",
   "\xe6\x8e\xa5\xe7\xb6\x9a\xe8\xa9\x9e", "*", "*", "*", "\xe6\x8e\xa5\xe7\xb6\x9a\xe8\xa9\x9e",
   "\xe6\x8e\xa5\xe9\xa0\xad\xe8\xa9\x9e", "\xe5\xbd\xa2\xe5\xae\xb9\xe8\xa9\x9e\xe6\x8e\xa5\xe7\xb6\x9a", "*", "*", "\xe6\x8e\xa5\xe9\xa0\xad\xe8\xbe\x9e",
   "\xe6\x8e\xa5\xe9\xa0\xad\xe8\xa9\x9e", "\xe6\x95\xb0\xe6\x8e\xa5\xe7\xb6\x9a", "*", "*", "\xe6\x8e\xa5\xe9\xa0\xad\xe8\xbe\x9e",
   "\xe6\x8e\xa5\xe9\xa0\xad\xe8\xa9\x9e", "\xe5\x8b\x95\xe8\xa9\x9e\xe6\x8e\xa5\xe7\xb6\x9a", "*", "*", "\xe6\x8e\xa5\xe9\xa0\xad\xe8\xbe\x9e",
   "\xe6\x8e\xa5\xe9\xa0\xad\xe8\xa9\x9e", "\xe5\x90\x8d\xe8\xa9\x9e\xe6\x8e\xa5\xe7\xb6\x9a", "*", "*", "\xe6\x8e\xa5\xe9\xa0\xad\xe8\xbe\x9e",
   "\xe5\x8b\x95\xe8\xa9\x9e", "\xe8\x87\xaa\xe7\xab\x8b", "*", "*", "\xe5\x8b\x95\xe8\xa9\x9e",
   "\xe5\x8b\x95\xe8\xa9\x9e", "\xe6\x8e\xa5\xe5\xb0\xbe", "*", "*", "\xe6\x8e\xa5\xe5\xb0\xbe\xe8\xbe\x9e-\xe5\x8b\x95\xe8\xa9\x9e\xe7\x9a\x84",
   "\xe5\x8b\x95\xe8\xa9\x9e", "\xe9\x9d\x9e\xe8\x87\xaa\xe7\xab\x8b", "*", "*", "\xe5\x8b\x95\xe8\xa9\x9e-\xe9\x9d\x9e\xe8\x87\xaa\xe7\xab\x8b",
   "\xe5\x89\xaf\xe8\xa9\x9e", "*", "*", "*", "\xe5\x89\xaf\xe8\xa9\x9e",
   "\xe5\x89\xaf\xe8\xa9\x9e", "\xe4\xb8\x80\xe8\x88\xac", "*", "*", "\xe5\x89\xaf\xe8\xa9\x9e",
   "\xe5\x89\xaf\xe8\xa9\x9e", "\xe5\x8a\xa9\xe8\xa9\x9e\xe9\xa1\x9e\xe6\x8e\xa5\xe7\xb6\x9a", "*", "*", "\xe5\x89\xaf\xe8\xa9\x9e",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe3\x82\xb5\xe5\xa4\x89\xe6\x8e\xa5\xe7\xb6\x9a", "*", "*", "\xe5\x90\x8d\xe8\xa9\x9e-\xe3\x82\xb5\xe5\xa4\x89\xe6\x8e\xa5\xe7\xb6\x9a",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe3\x83\x8a\xe3\x82\xa4\xe5\xbd\xa2\xe5\xae\xb9\xe8\xa9\x9e\xe8\xaa\x9e\xe5\xb9\xb9", "*", "*", "\xe5\x90\x8d\xe8\xa9\x9e-\xe6\x99\xae\xe9\x80\x9a\xe5\x90\x8d\xe8\xa9\x9e",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe4\xb8\x80\xe8\x88\xac", "*", "*", "\xe5\x90\x8d\xe8\xa9\x9e-\xe6\x99\xae\xe9\x80\x9a\xe5\x90\x8d\xe8\xa9\x9e",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe5\xbc\x95\xe7\x94\xa8\xe6\x96\x87\xe5\xad\x97\xe5\x88\x97", "*", "*", "\xe5\x90\x8d\xe8\xa9\x9e-\xe6\x99\xae\xe9\x80\x9a\xe5\x90\x8d\xe8\xa9\x9e",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe5\xbd\xa2\xe5\xae\xb9\xe5\x8b\x95\xe8\xa9\x9e\xe8\xaa\x9e\xe5\xb9\xb9", "*", "*", "\xe5\xbd\xa2\xe7\x8a\xb6\xe8\xa9\x9e",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe5\x9b\xba\xe6\x9c\x89\xe5\x90\x8d\xe8\xa9\x9e", "\xe4\xb8\x80\xe8\x88\xac", "*", "\xe5\x90\x8d\xe8\xa9\x9e-\xe5\x9b\xba\xe6\x9c\x89\xe5\x90\x8d\xe8\xa9\x9e",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe5\x9b\xba\xe6\x9c\x89\xe5\x90\x8d\xe8\xa9\x9e", "\xe4\xba\xba\xe5\x90\x8d", "\xe4\xb8\x80\xe8\x88\xac", "\xe5\x90\x8d\xe8\xa9\x9e-\xe5\x9b\xba\xe6\x9c\x89\xe5\x90\x8d\xe8\xa9\x9e",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe5\x9b\xba\xe6\x9c\x89\xe5\x90\x8d\xe8\xa9\x9e", "\xe4\xba\xba\xe5\x90\x8d", "\xe5\xa7\x93", "\xe5\x90\x8d\xe8\xa9\x9e-\xe5\x9b\xba\xe6\x9c\x89\xe5\x90\x8d\xe8\xa9\x9e",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe5\x9b\xba\xe6\x9c\x89\xe5\x90\x8d\xe8\xa9\x9e", "\xe4\xba\xba\xe5\x90\x8d", "\xe5\x90\x8d", "\xe5\x90\x8d\xe8\xa9\x9e-\xe5\x9b\xba\xe6\x9c\x89\xe5\x90\x8d\xe8\xa9\x9e",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe5\x9b\xba\xe6\x9c\x89\xe5\x90\x8d\xe8\xa9\x9e", "\xe7\xb5\x84\xe7\xb9\x94", "*", "\xe5\x90\x8d\xe8\xa9\x9e-\xe5\x9b\xba\xe6\x9c\x89\xe5\x90\x8d\xe8\xa9\x9e",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe5\x9b\xba\xe6\x9c\x89\xe5\x90\x8d\xe8\xa9\x9e", "\xe5\x9c\xb0\xe5\x9f\x9f", "\xe4\xb8\x80\xe8\x88\xac", "\xe5\x90\x8d\xe8\xa9\x9e-\xe5\x9b\xba\xe6\x9c\x89\xe5\x90\x8d\xe8\xa9\x9e",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe5\x9b\xba\xe6\x9c\x89\xe5\x90\x8d\xe8\xa9\x9e", "\xe5\x9c\xb0\xe5\x9f\x9f", "\xe5\x9b\xbd", "\xe5\x90\x8d\xe8\xa9\x9e-\xe5\x9b\xba\xe6\x9c\x89\xe5\x90\x8d\xe8\xa9\x9e",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe6\x95\xb0", "*", "*", "\xe5\x90\x8d\xe8\xa9\x9e-\xe6\x95\xb0\xe8\xa9\x9e",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe6\x8e\xa5\xe7\xb6\x9a\xe8\xa9\x9e\xe7\x9a\x84", "*", "*", "\xe5\x90\x8d\xe8\xa9\x9e-\xe6\x99\xae\xe9\x80\x9a\xe5\x90\x8d\xe8\xa9\x9e",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe6\x8e\xa5\xe5\xb0\xbe", "\xe3\x82\xb5\xe5\xa4\x89\xe6\x8e\xa5\xe7\xb6\x9a", "*", "\xe6\x8e\xa5\xe5\xb0\xbe\xe8\xbe\x9e-\xe5\x90\x8d\xe8\xa9\x9e\xe7\x9a\x84",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe6\x8e\xa5\xe5\xb0\xbe", "\xe4\xb8\x80\xe8\x88\xac", "*", "\xe6\x8e\xa5\xe5\xb0\xbe\xe8\xbe\x9e-\xe5\x90\x8d\xe8\xa9\x9e\xe7\x9a\x84",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe6\x8e\xa5\xe5\xb0\xbe", "\xe5\xbd\xa2\xe5\xae\xb9\xe5\x8b\x95\xe8\xa9\x9e\xe8\xaa\x9e\xe5\xb9\xb9", "*", "\xe6\x8e\xa5\xe5\xb0\xbe\xe8\xbe\x9e-\xe5\xbd\xa2\xe7\x8a\xb6\xe8\xa9\x9e\xe7\x9a\x84",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe6\x8e\xa5\xe5\xb0\xbe", "\xe5\x8a\xa9\xe6\x95\xb0\xe8\xa9\x9e", "*", "\xe6\x8e\xa5\xe5\xb0\xbe\xe8\xbe\x9e-\xe5\x90\x8d\xe8\xa9\x9e\xe7\x9a\x84",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe6\x8e\xa5\xe5\xb0\xbe", "\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e\xe8\xaa\x9e\xe5\xb9\xb9", "*", "\xe6\x8e\xa5\xe5\xb0\xbe\xe8\xbe\x9e-\xe5\x90\x8d\xe8\xa9\x9e\xe7\x9a\x84",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe6\x8e\xa5\xe5\xb0\xbe", "\xe4\xba\xba\xe5\x90\x8d", "*", "\xe6\x8e\xa5\xe5\xb0\xbe\xe8\xbe\x9e-\xe5\x90\x8d\xe8\xa9\x9e\xe7\x9a\x84",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe6\x8e\xa5\xe5\xb0\xbe", "\xe5\x9c\xb0\xe5\x9f\x9f", "*", "\xe6\x8e\xa5\xe5\xb0\xbe\xe8\xbe\x9e-\xe5\x90\x8d\xe8\xa9\x9e\xe7\x9a\x84",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe6\x8e\xa5\xe5\xb0\xbe", "\xe7\x89\xb9\xe6\xae\x8a", "*", "\xe6\x8e\xa5\xe5\xb0\xbe\xe8\xbe\x9e-\xe5\x90\x8d\xe8\xa9\x9e\xe7\x9a\x84",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe6\x8e\xa5\xe5\xb0\xbe", "\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd", "*", "\xe6\x8e\xa5\xe5\xb0\xbe\xe8\xbe\x9e-\xe5\x90\x8d\xe8\xa9\x9e\xe7\x9a\x84",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe4\xbb\xa3\xe5\x90\x8d\xe8\xa9\x9e", "\xe4\xb8\x80\xe8\x88\xac", "*", "\xe4\xbb\xa3\xe5\x90\x8d\xe8\xa9\x9e",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe4\xbb\xa3\xe5\x90\x8d\xe8\xa9\x9e", "\xe7\xb8\xae\xe7\xb4\x84", "*", "\xe4\xbb\xa3\xe5\x90\x8d\xe8\xa9\x9e",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe5\x8b\x95\xe8\xa9\x9e\xe9\x9d\x9e\xe8\x87\xaa\xe7\xab\x8b\xe7\x9a\x84", "*", "*", "\xe5\x90\x8d\xe8\xa9\x9e-\xe6\x99\xae\xe9\x80\x9a\xe5\x90\x8d\xe8\xa9\x9e",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe7\x89\xb9\xe6\xae\x8a", "\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e\xe8\xaa\x9e\xe5\xb9\xb9", "*", "\xe5\x90\x8d\xe8\xa9\x9e-\xe6\x99\xae\xe9\x80\x9a\xe5\x90\x8d\xe8\xa9\x9e",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe9\x9d\x9e\xe8\x87\xaa\xe7\xab\x8b", "\xe4\xb8\x80\xe8\x88\xac", "*", "\xe5\x90\x8d\xe8\xa9\x9e-\xe9\x9d\x9e\xe8\x87\xaa\xe7\xab\x8b",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe9\x9d\x9e\xe8\x87\xaa\xe7\xab\x8b", "\xe5\xbd\xa2\xe5\xae\xb9\xe5\x8b\x95\xe8\xa9\x9e\xe8\xaa\x9e\xe5\xb9\xb9", "*", "\xe5\x90\x8d\xe8\xa9\x9e-\xe9\x9d\x9e\xe8\x87\xaa\xe7\xab\x8b",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe9\x9d\x9e\xe8\x87\xaa\xe7\xab\x8b", "\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e\xe8\xaa\x9e\xe5\xb9\xb9", "*", "\xe5\x90\x8d\xe8\xa9\x9e-\xe9\x9d\x9e\xe8\x87\xaa\xe7\xab\x8b",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe9\x9d\x9e\xe8\x87\xaa\xe7\xab\x8b", "\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd", "*", "\xe5\x90\x8d\xe8\xa9\x9e-\xe9\x9d\x9e\xe8\x87\xaa\xe7\xab\x8b",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe9\x9d\x9e\xe8\x87\xaa\xe7\xab\x8b", "*", "*", "\xe5\x90\x8d\xe8\xa9\x9e-\xe9\x9d\x9e\xe8\x87\xaa\xe7\xab\x8b",
   "\xe5\x90\x8d\xe8\xa9\x9e", "\xe5\x89\xaf\xe8\xa9\x9e\xe5\x8f\xaf\xe8\x83\xbd", "*", "*", "\xe5\x90\x8d\xe8\xa9\x9e-\xe6\x99\xae\xe9\x80\x9a\xe5\x90\x8d\xe8\xa9\x9e",
   "\xe9\x80\xa3\xe4\xbd\x93\xe8\xa9\x9e", "*", "*", "*", "\xe9\x80\xa3\xe4\xbd\x93\xe8\xa9\x9e",
   NULL, NULL, NULL, NULL, NULL
};

static const char *njd2jpcommon_cform_list[] = {
   "*", "*",
   "\xe3\x82\xac\xe3\x83\xab\xe6\x8e\xa5\xe7\xb6\x9a", "\xe3\x81\x9d\xe3\x81\xae\xe4\xbb\x96",
   "\xe9\x9f\xb3\xe4\xbe\xbf\xe5\x9f\xba\xe6\x9c\xac\xe5\xbd\xa2", "\xe5\x9f\xba\xe6\x9c\xac\xe5\xbd\xa2",
   "\xe4\xbb\xae\xe5\xae\x9a\xe5\xbd\xa2", "\xe4\xbb\xae\xe5\xae\x9a\xe5\xbd\xa2",
   "\xe4\xbb\xae\xe5\xae\x9a\xe7\xb8\xae\xe7\xb4\x84\xef\xbc\x91", "\xe4\xbb\xae\xe5\xae\x9a\xe5\xbd\xa2",
   "\xe4\xbb\xae\xe5\xae\x9a\xe7\xb8\xae\xe7\xb4\x84\xef\xbc\x92", "\xe4\xbb\xae\xe5\xae\x9a\xe5\xbd\xa2",
   "\xe5\x9f\xba\xe6\x9c\xac\xe5\xbd\xa2", "\xe5\x9f\xba\xe6\x9c\xac\xe5\xbd\xa2",
   "\xe5\x9f\xba\xe6\x9c\xac\xe5\xbd\xa2-\xe4\xbf\x83\xe9\x9f\xb3\xe4\xbe\xbf", "\xe5\x9f\xba\xe6\x9c\xac\xe5\xbd\xa2",
   "\xe7\x8f\xbe\xe4\xbb\xa3\xe5\x9f\xba\xe6\x9c\xac\xe5\xbd\xa2", "\xe5\x9f\xba\xe6\x9c\xac\xe5\xbd\xa2",
   "\xe4\xbd\x93\xe8\xa8\x80\xe6\x8e\xa5\xe7\xb6\x9a", "\xe9\x80\xa3\xe4\xbd\x93\xe5\xbd\xa2",
   "\xe4\xbd\x93\xe8\xa8\x80\xe6\x8e\xa5\xe7\xb6\x9a\xe7\x89\xb9\xe6\xae\x8a", "\xe9\x80\xa3\xe4\xbd\x93\xe5\xbd\xa2",
   "\xe4\xbd\x93\xe8\xa8\x80\xe6\x8e\xa5\xe7\xb6\x9a\xe7\x89\xb9\xe6\xae\x8a\xef\xbc\x92", "\xe9\x80\xa3\xe4\xbd\x93\xe5\xbd\xa2",
   "\xe6\x96\x87\xe8\xaa\x9e\xe5\x9f\xba\xe6\x9c\xac\xe5\xbd\xa2", "\xe5\x9f\xba\xe6\x9c\xac\xe5\xbd\xa2",
   "\xe6\x9c\xaa\xe7\x84\xb6\xe3\x82\xa6\xe6\x8e\xa5\xe7\xb6\x9a", "\xe6\x9c\xaa\xe7\x84\xb6\xe5\xbd\xa2",
   "\xe6\x9c\xaa\xe7\x84\xb6\xe3\x83\x8c\xe6\x8e\xa5\xe7\xb6\x9a", "\xe6\x9c\xaa\xe7\x84\xb6\xe5\xbd\xa2",
   "\xe6\x9c\xaa\xe7\x84\xb6\xe3\x83\xac\xe3\x83\xab\xe6\x8e\xa5\xe7\xb6\x9a", "\xe6\x9c\xaa\xe7\x84\xb6\xe5\xbd\xa2",
   "\xe6\x9c\xaa\xe7\x84\xb6\xe5\xbd\xa2", "\xe6\x9c\xaa\xe7\x84\xb6\xe5\xbd\xa2",
   "\xe6\x9c\xaa\xe7\x84\xb6\xe7\x89\xb9\xe6\xae\x8a", "\xe6\x9c\xaa\xe7\x84\xb6\xe5\xbd\xa2",
   "\xe5\x91\xbd\xe4\xbb\xa4\xef\xbd\x85", "\xe5\x91\xbd\xe4\xbb\xa4\xe5\xbd\xa2",
   "\xe5\x91\xbd\xe4\xbb\xa4\xef\xbd\x89", "\xe5\x91\xbd\xe4\xbb\xa4\xe5\xbd\xa2",
   "\xe5\x91\xbd\xe4\xbb\xa4\xef\xbd\x92\xef\xbd\x8f", "\xe5\x91\xbd\xe4\xbb\xa4\xe5\xbd\xa2",
   "\xe5\x91\xbd\xe4\xbb\xa4\xef\xbd\x99\xef\xbd\x8f", "\xe5\x91\xbd\xe4\xbb\xa4\xe5\xbd\xa2",
   "\xe9\x80\xa3\xe7\x94\xa8\xe3\x82\xb4\xe3\x82\xb6\xe3\x82\xa4\xe6\x8e\xa5\xe7\xb6\x9a", "\xe9\x80\xa3\xe7\x94\xa8\xe5\xbd\xa2",
   "\xe9\x80\xa3\xe7\x94\xa8\xe3\x82\xbf\xe6\x8e\xa5\xe7\xb6\x9a", "\xe9\x80\xa3\xe7\x94\xa8\xe5\xbd\xa2",
   "\xe9\x80\xa3\xe7\x94\xa8\xe3\x83\x86\xe6\x8e\xa5\xe7\xb6\x9a", "\xe9\x80\xa3\xe7\x94\xa8\xe5\xbd\xa2",
   "\xe9\x80\xa3\xe7\x94\xa8\xe3\x83\x87\xe6\x8e\xa5\xe7\xb6\x9a", "\xe9\x80\xa3\xe7\x94\xa8\xe5\xbd\xa2",
   "\xe9\x80\xa3\xe7\x94\xa8\xe3\x83\x8b\xe6\x8e\xa5\xe7\xb6\x9a", "\xe9\x80\xa3\xe7\x94\xa8\xe5\xbd\xa2",
   "\xe9\x80\xa3\xe7\x94\xa8\xe5\xbd\xa2", "\xe9\x80\xa3\xe7\x94\xa8\xe5\xbd\xa2",
   NULL, NULL
};

static const char *njd2jpcommon_ctype_list[] = {
   "*", "*",
   "\xe3\x82\xab\xe5\xa4\x89\xe3\x83\xbb\xe3\x82\xaf\xe3\x83\xab", "\xe3\x82\xab\xe8\xa1\x8c\xe5\xa4\x89\xe6\xa0\xbc",
   "\xe3\x82\xab\xe5\xa4\x89\xe3\x83\xbb\xe6\x9d\xa5\xe3\x83\xab", "\xe3\x82\xab\xe8\xa1\x8c\xe5\xa4\x89\xe6\xa0\xbc",
   "\xe3\x82\xb5\xe5\xa4\x89\xe3\x83\xbb\xe2\x88\x92\xe3\x82\xb9\xe3\x83\xab", "\xe3\x82\xb5\xe8\xa1\x8c\xe5\xa4\x89\xe6\xa0\xbc",
   "\xe3\x82\xb5\xe5\xa4\x89\xe3\x83\xbb\xe2\x88\x92\xe3\x82\xba\xe3\x83\xab", "\xe3\x82\xb5\xe8\xa1\x8c\xe5\xa4\x89\xe6\xa0\xbc",
   "\xe3\x82\xb5\xe5\xa4\x89\xe3\x83\xbb\xe3\x82\xb9\xe3\x83\xab", "\xe3\x82\xb5\xe8\xa1\x8c\xe5\xa4\x89\xe6\xa0\xbc",
   "\xe3\x83\xa9\xe5\xa4\x89", "\xe3\x83\xa9\xe8\xa1\x8c\xe5\xa4\x89\xe6\xa0\xbc",
   "\xe4\xb8\x80\xe6\xae\xb5", "\xe4\xb8\x80\xe6\xae\xb5",
   "\xe4\xb8\x80\xe6\xae\xb5\xe3\x83\xbb\xe3\x82\xaf\xe3\x83\xac\xe3\x83\xab", "\xe4\xb8\x80\xe6\xae\xb5",
   "\xe4\xb8\x80\xe6\xae\xb5\xe3\x83\xbb\xe5\xbe\x97\xe3\x83\xab", "\xe4\xb8\x80\xe6\xae\xb5",
   "\xe4\xb8\x8b\xe4\xba\x8c\xe3\x83\xbb\xe3\x82\xab\xe8\xa1\x8c", "\xe4\xba\x8c\xe6\xae\xb5",
   "\xe4\xb8\x8b\xe4\xba\x8c\xe3\x83\xbb\xe3\x82\xac\xe8\xa1\x8c", "\xe4\xba\x8c\xe6\xae\xb5",
   "\xe4\xb8\x8b\xe4\xba\x8c\xe3\x83\xbb\xe3\x82\xbf\xe8\xa1\x8c", "\xe4\xba\x8c\xe6\xae\xb5",
   "\xe4\xb8\x8b\xe4\xba\x8c\xe3\x83\xbb\xe3\x83\x80\xe8\xa1\x8c", "\xe4\xba\x8c\xe6\xae\xb5",
   "\xe4\xb8\x8b\xe4\xba\x8c\xe3\x83\xbb\xe3\x83\x8f\xe8\xa1\x8c", "\xe4\xba\x8c\xe6\xae\xb5",
   "\xe4\xb8\x8b\xe4\xba\x8c\xe3\x83\xbb\xe3\x83\x9e\xe8\xa1\x8c", "\xe4\xba\x8c\xe6\xae\xb5",
   "\xe4\xb8\x8b\xe4\xba\x8c\xe3\x83\xbb\xe5\xbe\x97", "\xe4\xba\x8c\xe6\xae\xb5",
   "\xe5\xbd\xa2\xe5\xae\xb9\xe8\xa9\x9e\xe3\x83\xbb\xe3\x82\xa2\xe3\x82\xa6\xe3\x82\xaa\xe6\xae\xb5", "\xe5\xbd\xa2\xe5\xae\xb9\xe8\xa9\x9e",
   "\xe5\xbd\xa2\xe5\xae\xb9\xe8\xa9\x9e\xe3\x83\xbb\xe3\x82\xa4\xe3\x82\xa4", "\xe5\xbd\xa2\xe5\xae\xb9\xe8\xa9\x9e",
   "\xe5\xbd\xa2\xe5\xae\xb9\xe8\xa9\x9e\xe3\x83\xbb\xe3\x82\xa4\xe6\xae\xb5", "\xe5\xbd\xa2\xe5\xae\xb9\xe8\xa9\x9e",
   "\xe4\xba\x94\xe6\xae\xb5\xe3\x83\xbb\xe3\x82\xab\xe8\xa1\x8c\xe3\x82\xa4\xe9\x9f\xb3\xe4\xbe\xbf", "\xe4\xba\x94\xe6\xae\xb5",
   "\xe4\xba\x94\xe6\xae\xb5\xe3\x83\xbb\xe3\x82\xab\xe8\xa1\x8c\xe4\xbf\x83\xe9\x9f\xb3\xe4\xbe\xbf", "\xe4\xba\x94\xe6\xae\xb5",
   "\xe4\xba\x94\xe6\xae\xb5\xe3\x83\xbb\xe3\x82\xab\xe8\xa1\x8c\xe4\xbf\x83\xe9\x9f\xb3\xe4\xbe\xbf\xe3\x83\xa6\xe3\x82\xaf", "\xe4\xba\x94\xe6\xae\xb5",
   "\xe4\xba\x94\xe6\xae\xb5\xe3\x83\xbb\xe3\x82\xac\xe8\xa1\x8c", "\xe4\xba\x94\xe6\xae\xb5",
   "\xe4\xba\x94\xe6\xae\xb5\xe3\x83\xbb\xe3\x82\xb5\xe8\xa1\x8c", "\xe4\xba\x94\xe6\xae\xb5",
   "\xe4\xba\x94\xe6\xae\xb5\xe3\x83\xbb\xe3\x82\xbf\xe8\xa1\x8c", "\xe4\xba\x94\xe6\xae\xb5",
   "\xe4\xba\x94\xe6\xae\xb5\xe3\x83\xbb\xe3\x83\x8a\xe8\xa1\x8c", "\xe4\xba\x94\xe6\xae\xb5",
   "\xe4\xba\x94\xe6\xae\xb5\xe3\x83\xbb\xe3\x83\x90\xe8\xa1\x8c", "\xe4\xba\x94\xe6\xae\xb5",
   "\xe4\xba\x94\xe6\xae\xb5\xe3\x83\xbb\xe3\x83\x9e\xe8\xa1\x8c", "\xe4\xba\x94\xe6\xae\xb5",
   "\xe4\xba\x94\xe6\xae\xb5\xe3\x83\xbb\xe3\x83\xa9\xe8\xa1\x8c", "\xe4\xba\x94\xe6\xae\xb5",
   "\xe4\xba\x94\xe6\xae\xb5\xe3\x83\xbb\xe3\x83\xa9\xe8\xa1\x8c\xe3\x82\xa2\xe3\x83\xab", "\xe4\xba\x94\xe6\xae\xb5",
   "\xe4\xba\x94\xe6\xae\xb5\xe3\x83\xbb\xe3\x83\xa9\xe8\xa1\x8c\xe7\x89\xb9\xe6\xae\x8a", "\xe4\xba\x94\xe6\xae\xb5",
   "\xe4\xba\x94\xe6\xae\xb5\xe3\x83\xbb\xe3\x83\xaf\xe8\xa1\x8c\xe3\x82\xa6\xe9\x9f\xb3\xe4\xbe\xbf", "\xe4\xba\x94\xe6\xae\xb5",
   "\xe4\xba\x94\xe6\xae\xb5\xe3\x83\xbb\xe3\x83\xaf\xe8\xa1\x8c\xe4\xbf\x83\xe9\x9f\xb3\xe4\xbe\xbf", "\xe4\xba\x94\xe6\xae\xb5",
   "\xe5\x9b\x9b\xe6\xae\xb5\xe3\x83\xbb\xe3\x82\xb5\xe8\xa1\x8c", "\xe5\x9b\x9b\xe6\xae\xb5",
   "\xe5\x9b\x9b\xe6\xae\xb5\xe3\x83\xbb\xe3\x82\xbf\xe8\xa1\x8c", "\xe5\x9b\x9b\xe6\xae\xb5",
   "\xe5\x9b\x9b\xe6\xae\xb5\xe3\x83\xbb\xe3\x83\x8f\xe8\xa1\x8c", "\xe5\x9b\x9b\xe6\xae\xb5",
   "\xe5\x9b\x9b\xe6\xae\xb5\xe3\x83\xbb\xe3\x83\x90\xe8\xa1\x8c", "\xe5\x9b\x9b\xe6\xae\xb5",
   "\xe4\xb8\x8a\xe4\xba\x8c\xe3\x83\xbb\xe3\x83\x80\xe8\xa1\x8c", "\xe4\xba\x8c\xe6\xae\xb5",
   "\xe4\xb8\x8a\xe4\xba\x8c\xe3\x83\xbb\xe3\x83\x8f\xe8\xa1\x8c", "\xe4\xba\x8c\xe6\xae\xb5",
   "\xe7\x89\xb9\xe6\xae\x8a\xe3\x83\xbb\xe3\x82\xb8\xe3\x83\xa3", "\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e",
   "\xe7\x89\xb9\xe6\xae\x8a\xe3\x83\xbb\xe3\x82\xbf", "\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e",
   "\xe7\x89\xb9\xe6\xae\x8a\xe3\x83\xbb\xe3\x82\xbf\xe3\x82\xa4", "\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e",
   "\xe7\x89\xb9\xe6\xae\x8a\xe3\x83\xbb\xe3\x83\x80", "\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e",
   "\xe7\x89\xb9\xe6\xae\x8a\xe3\x83\xbb\xe3\x83\x87\xe3\x82\xb9", "\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e",
   "\xe7\x89\xb9\xe6\xae\x8a\xe3\x83\xbb\xe3\x83\x8a\xe3\x82\xa4", "\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e",
   "\xe7\x89\xb9\xe6\xae\x8a\xe3\x83\xbb\xe3\x83\x8c", "\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e",
   "\xe7\x89\xb9\xe6\xae\x8a\xe3\x83\xbb\xe3\x83\x9e\xe3\x82\xb9", "\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e",
   "\xe7\x89\xb9\xe6\xae\x8a\xe3\x83\xbb\xe3\x83\xa4", "\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e",
   "\xe4\xb8\x8d\xe5\xa4\x89\xe5\x8c\x96\xe5\x9e\x8b", "\xe4\xb8\x8d\xe5\xa4\x89\xe5\x8c\x96",
   "\xe6\x96\x87\xe8\xaa\x9e\xe3\x83\xbb\xe3\x82\xad", "\xe6\x96\x87\xe8\xaa\x9e\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e",
   "\xe6\x96\x87\xe8\xaa\x9e\xe3\x83\xbb\xe3\x82\xb1\xe3\x83\xaa", "\xe6\x96\x87\xe8\xaa\x9e\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e",
   "\xe6\x96\x87\xe8\xaa\x9e\xe3\x83\xbb\xe3\x82\xb4\xe3\x83\x88\xe3\x82\xb7", "\xe6\x96\x87\xe8\xaa\x9e\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e",
   "\xe6\x96\x87\xe8\xaa\x9e\xe3\x83\xbb\xe3\x83\x8a\xe3\x83\xaa", "\xe6\x96\x87\xe8\xaa\x9e\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e",
   "\xe6\x96\x87\xe8\xaa\x9e\xe3\x83\xbb\xe3\x83\x99\xe3\x82\xb7", "\xe6\x96\x87\xe8\xaa\x9e\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e",
   "\xe6\x96\x87\xe8\xaa\x9e\xe3\x83\xbb\xe3\x83\x9e\xe3\x82\xb8", "\xe6\x96\x87\xe8\xaa\x9e\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e",
   "\xe6\x96\x87\xe8\xaa\x9e\xe3\x83\xbb\xe3\x83\xaa", "\xe6\x96\x87\xe8\xaa\x9e\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e",
   "\xe6\x96\x87\xe8\xaa\x9e\xe3\x83\xbb\xe3\x83\xab", "\xe6\x96\x87\xe8\xaa\x9e\xe5\x8a\xa9\xe5\x8b\x95\xe8\xa9\x9e",
   NULL, NULL
};

NJD2JPCOMMON_RULE_H_END;

#endif                          /* !NJD2JPCOMMON_RULE_H */
