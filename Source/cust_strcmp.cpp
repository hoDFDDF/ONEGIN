#include <stdio.h>
#include <string.h>

int CustomStrCMP(const char* firstString, const char* secondString);
int main(){
    char str1[] = "zzz";
    char str2[] = "aaa";    
    int num1 = strcmp(str1, str2);
    int num2 = CustomStrCMP(str1, str2);
    printf("%d", num1);
    printf("\n%d", num2);
    return 0;
}

int Comparator(char ch1, char ch2) {
    if (ch1 == ch2) return 0;
    return (ch1 > ch2) ? 1: -1;
}


int CustomStrCMP(const char* firstString, const char* secondString) {
    size_t i = 0;
    while (firstString[i] != 0 && secondString[i] != 0) {
        if (firstString[i] == secondString[i]) { 
            //return 0;
            i++;
            continue; 
        }
        return firstString[i]- secondString[i];
    }

}