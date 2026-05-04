#ifndef _FILL_STR_H_
#define _FILL_STR_H_

#include <sys/stat.h>
#include <stdio.h>
#include <assert.h>

struct FuncParamets{
    FILE* file_ptr;
    
    size_t file_num_str;
    size_t file_size;

    char* buffer;
    char** strPtr; // TODO: str_ptr
    size_t buffer_size;
    size_t positon_of_zero_element;

    struct stat stat_buf;
};
#endif //_FILL_STR_H
