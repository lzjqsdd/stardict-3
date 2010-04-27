#ifndef _TextOutHook_H_
#define _TextOutHook_H_

#if BUILDING_DLL
# define DLLIMPORT __declspec (dllexport)
#else /* Not BUILDING_DLL */
# define DLLIMPORT __declspec (dllimport)
#endif /* Not BUILDING_DLL */

#include "InterProcessCommunication.h"

/* return value in utf-8 */
char* ExtractFromEverything(HWND WND, POINT Pt, int *BeginPos);

DLLIMPORT void GetWord (TCurrentMode *P);


#endif /* _TextOutHook_H_ */
