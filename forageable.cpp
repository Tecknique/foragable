//
// Created by 12067 on 3/13/2022.
//

#include "forageable.h"
using namespace std:


//constructor
forageable::forageable(string name, int minElevation, int maxElevation, int beginDay, int endDay, int beginMonth, int endMonth, int beginYear, int endYear) {
    this->name = name;
    this->minElevation = minElevation;
    this->maxElevation = maxElevation;
    this->beginDay = beginDay;
    this->endDay = endDay;
    this->beginMonth = beginSeason;
    this->endMonth = endSeason;
    this->beginYear = beginYear;
    this->endYear = endYear;

    this->daysDelta = rdn(this->beginYear,this->beginMonth,this->beginDay) - rdn(this->endYear,this->endMonth,this->endDay);

    this->averageDailyElevation = (double)(this->maxElevation-this->minElevation)/(double)this->daysDelta;

}

//function will return total number of days
int rdn(int y, int m, int d) { /* Rata Die day one is 0001-01-01 */
    if (m < 3)
        y--, m += 12;
    return 365*y + y/4 - y/100 + y/400 + (153*m - 457)/5 + d - 306;
}

//overloaded assignment operator
forageable &operator=(const forageable) {
}

//destructor
forageable::~forageable() {
}

}