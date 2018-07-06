#ifndef __convert_string_to_camel_case_h__
#define __convert_string_to_camel_case_h__
#include "basic_headers.h"

#define upper(c)  (('a' <= (c) && (c) <= 'z') ? ((char)(c + 'A' - 'a')) : ((char)c)) 

std::string to_camel_case(std::string text) {
    bool firstWord = true;
    bool startWord = false;

    std::string result;
    result.reserve(text.size());
    const char* p = text.c_str();
    while (*p != '\0') {
        if (*p != '-' && *p != '_') {
            if (!startWord) {
                startWord = true;
                if (firstWord)
                {
                    result += *p;
                    firstWord = false;
                }
                
                else
                    result += upper(*p);
            }
            else {
                result += *p;
            }
        }
        else {
            startWord = false;
        }
        ++p;
    }
    return result;
}


#endif /*__convert_string_to_camel_case_h__*/