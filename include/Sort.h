#ifndef _SORT_H_
#define  _SORT_H_

#include "StructFuncsParametrs.h"
#include "ComporatorsForQsort.h"

#include <stdlib.h>

void StraightSort(FuncParamets* param);
void ReverseSort(FuncParamets* param);
void BubleSort(FuncParamets* param, const void* first_string, const void* second_string);

#endif //_SORT_H_