#include "Sort.h"

void StraightSort(FuncParamets* param){
    assert(param != nullptr);
    qsort(param->strPtr, param->file_num_str, sizeof(param->strPtr[0]), StraightCustomStrCMP); 
   
}

void ReverseSort(FuncParamets* param){
    qsort(param->strPtr, param->file_num_str, sizeof(param->strPtr[0]), ReverseCustomStrCMP);
}

void BubleSort(FuncParamets* param, const void* first_string, const void* second_string){
    assert(param != nullptr);
    assert(first_string != nullptr);
    assert(second_string != nullptr);
    const char* first_str = *(const char* const*)(first_string);
    const char* second_str = *(const char* const*)(second_string);
    
    int cmp = StraightCustomStrCMP(first_str, second_str);
    for (size_t index_first_str = 0; index_first_str < param->file_num_str; index_first_str++) {
        for (size_t index_second_str = 0; index_second_str < param->file_num_str - index_first_str; 
                                                                                index_second_str) {
                if (cmp > 0) {
                    char const* temp = first_str;
                    first_str = second_str;
                    second_str = temp; 
                }
        }
    }   
}

