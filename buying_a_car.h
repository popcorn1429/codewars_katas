#ifndef __buying_a_car_h__
#define __buying_a_car_h__

#include "basic_headers.h"

class BuyCar
{
public:
    static std::vector<int> nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth);
};

std::vector<int> BuyCar::nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth) {
    int iMonth = 0;
    int iLeftOver = 0;
    double fStartPriceOld = startPriceOld;
    double fStartPriceNew = startPriceNew;
    while (fStartPriceOld + savingperMonth*iMonth < fStartPriceNew) {
        ++iMonth;  //work hard for a month to get more money~
        if (iMonth % 2 == 0) {
            fStartPriceOld *= (99.5 - percentLossByMonth) / 100.0;
            fStartPriceNew *= (99.5 - percentLossByMonth) / 100.0;
        }
        else {
            fStartPriceOld *= (100 - percentLossByMonth) / 100.0;
            fStartPriceNew *= (100 - percentLossByMonth) / 100.0;
        }
    }

    iLeftOver = fStartPriceOld + savingperMonth * iMonth - fStartPriceNew;
    return {iMonth, iLeftOver};
}


#endif /*__buying_a_car_h__*/