#ifndef NJD2JPCOMMON_H
#define NJD2JPCOMMON_H

#ifdef __cplusplus
#define NJD2JPCOMMON_H_START extern "C" {
#define NJD2JPCOMMON_H_END   }
#else
#define NJD2JPCOMMON_H_START
#define NJD2JPCOMMON_H_END
#endif                          /* __CPLUSPLUS */

NJD2JPCOMMON_H_START;

void njd2jpcommon(JPCommon * jpcommon, NJD * njd);

NJD2JPCOMMON_H_END;

#endif                          /* !NJD2JPCOMMON_H */
