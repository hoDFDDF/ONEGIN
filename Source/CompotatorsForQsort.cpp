#include "ComporatorsForQsort.h"

int StraightCustomStrCMP(const void* first_string, const void* second_string) {
    assert(first_string != nullptr);
    assert(second_string != nullptr);
    const char* first_str = *(const char* const*)first_string;
    const char* second_str = *(const char* const*)second_string;

    size_t index_first_str = 0, index_second_str = 0;

    while (first_str[index_first_str] != '\0' && second_str[index_second_str] != '\0') {
    
        if (!isalpha(first_str[index_first_str])) {
            index_first_str++;
            continue;
        } if (!isalpha(second_str[index_second_str])) {
            index_second_str++;
            continue;
        }

        char str1 = tolower(first_str[index_first_str]);
        char str2 = tolower(second_str[index_second_str]);

        if (str1 != str2) {
            return str1 - str2;
        }
        index_first_str++;
        index_second_str++;
    }

    return tolower(first_str[index_first_str]) - tolower(second_str[index_second_str]);
}

int ReverseCustomStrCMP(const void* first_string, const void* second_string) {
    assert(first_string != nullptr);
    assert(second_string != nullptr);
    const char* first_str = *(const char* const*)(first_string);
    const char* second_str = *(const char* const*)(second_string);
    
    size_t first_str_count = strlen(first_str);  
    size_t second_str_count = strlen(second_str);

    while (first_str_count != 0 && second_str_count != 0) {

        char str1 = tolower(first_str[first_str_count]);
        char str2 = tolower(second_str[second_str_count]);

        if (!isalpha(str1)) {
            first_str_count--;
            continue;
        }
        
        if (!isalpha(str2)) {
            second_str_count--;
            continue;
        }
        
        if (str1 != str2) {
            return str1 - str2;
        }

        first_str_count--;
        second_str_count--;
    }

    return tolower(first_str[first_str_count]) - tolower(second_str[second_str_count]);
}
