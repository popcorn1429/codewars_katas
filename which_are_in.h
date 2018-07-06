#ifndef __which_are_in_h__
#define __which_are_in_h__
#include "basic_headers.h"

class WhichAreIn
{

public:
    static std::vector<std::string> inArray(std::vector<std::string> &array1, std::vector<std::string> &array2);
};

std::vector<std::string> WhichAreIn::inArray(std::vector<std::string> &array1, std::vector<std::string> &array2)
{
    std::vector<std::string> words;
    for (const string& s1 : array1) {
        for (const string& s2 : array2) {
            if (s2.find(s1) != string::npos) {
                words.push_back(s1);
                break;
            }
        }
    }

    std::sort(words.begin(), words.end());
    return words;
}



#endif /*__which_are_in_h__*/