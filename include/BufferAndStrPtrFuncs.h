#ifndef _BUFF_FUNCS_
#define _BUFF_FUNCS_

#include "StructFuncsParametrs.h"
#include "GetFileParametrs.h"

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void FillBuffer(FuncParamets* param);
void PrintBufferToAnotherFILE(FuncParamets* param);
void FillStrPtr(FuncParamets* param);
void CleanUp(FuncParamets* param);

#endif