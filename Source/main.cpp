#include "BufferAndStrPtrFuncs.h"
#include "Sort.h"

int main(){

    FuncParamets param = {};
    printf("\nhello1");
    FillBuffer(&param);
    printf("\nhello2");
    FillStrPtr(&param);
    printf("\n");
    printf("%llu", param.file_num_str);
    printf("\nAAAAAAAAAA");
    
    StraightSort(&param);
    ReverseSort(&param);
    //Swap(&param);
    //BubleSort(&param, (const char* const*)param->)
    PrintBufferToAnotherFILE(&param);
    CleanUp(&param);
    return 0;
}