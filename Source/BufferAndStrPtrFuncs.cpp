#include "BufferAndStrPtrFuncs.h"

void FillBuffer(FuncParamets* param){
    printf("1!\n");
    assert(param != nullptr);
    
    GetFileSize(param);
    //printf("%lld\n",size);

    param->buffer = (char*)calloc(param->buffer_size, sizeof(char));

    int file_descriptor = open("ONEGIN.txt", O_RDWR);
    size_t bytes_read = read(file_descriptor, param->buffer, param->buffer_size);
    
    param->buffer[bytes_read] = '\0';
    //printf("%s", param->buffer);
    close(file_descriptor);
}

void PrintBufferToAnotherFILE(FuncParamets* param){
    assert(param != 0);
    printf("bububu\n");
    fprintf(stderr, "penis");
    param->file_ptr = fopen("ONEGIN_RESULT.txt", "w");
    
    if (param->file_ptr == NULL) {
        fprintf(stderr,"FILE can't be open");
    } 

    printf("\nitt");
    for (size_t i = 0; i < param->file_num_str; i++) { //
        fprintf(param->file_ptr, "%s\n", param->strPtr[i]);
    }

    fclose(param->file_ptr);
}

void FillStrPtr(FuncParamets* param){
    printf("\nhell");
    assert(param != nullptr);
    size_t size_str = GetNumberStrings(param);
    printf("\nhello5");
    param->strPtr = (char**)calloc(size_str, sizeof(char*));
    
    printf("\nhello");
    param->positon_of_zero_element = 0;
    char* pos = param->buffer;
    
    for (int i = 0; i < param->file_num_str; i++) {

        param->strPtr[param->positon_of_zero_element] = pos;
        pos += strlen(pos) + 1;
        param->positon_of_zero_element++;
            
    }
    printf("HELLOO\n");
}

void CleanUp(FuncParamets* param){ 
    free(param->buffer);
    free(param->strPtr);
}
