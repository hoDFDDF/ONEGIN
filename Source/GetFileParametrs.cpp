#include "GetFileParametrs.h"

void GetFileSize(FuncParamets* param){ // void
    assert(param != nullptr);
    
    stat("ONEGIN.txt", &(param->stat_buf));

    param->file_size = param->stat_buf.st_size;
    param->buffer_size = param->stat_buf.st_size + 1; // TODO param->buffer_size = param->stat_buf.st_size + 1;
}

size_t GetNumberStrings(FuncParamets* param){ // TODO: GetNumberStrings()

    assert(param != nullptr);
    
    param->file_num_str = 0;
    char* pos = param->buffer;
    //printf("AAAAAAAAAAAAAAAAA");
    while ((pos = strchr(pos, '\n')) != NULL){  
        param->file_num_str++;
        *pos = '\0';
        pos++;

    }
    //printf("%u", param->file_num_str);
   
    return param->file_num_str;
}

