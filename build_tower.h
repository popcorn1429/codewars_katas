#ifndef __build_tower_h__
#define __build_tower_h__

#include "basic_headers.h"

class Kata
{
public:
    std::vector<std::string> towerBuilder(int nFloors)
    {
        std::vector<std::string> tower;
        tower.reserve(nFloors);
        for (int f = 1; f <= nFloors; ++f) {
            tower.push_back(buildOneFloor(f, nFloors));
        }
        return tower;
    }

    std::string buildOneFloor(int f, int n) {
        std::string floor;
        floor.reserve(n * 2 - 1);
        for (int i = 0; i < n - f; ++i)
            floor+=' ';
        
        for (int i = 0; i < f * 2 - 1; ++i)
            floor += '*';

        for (int i = 0; i < n - f; ++i)
            floor += ' ';
        return floor;
    }
};


#endif /*__build_tower_h__*/