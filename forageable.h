//
// Created by 12067 on 3/13/2022.
//
#ifndef UNTITLED42_FORAGEABLE_H
#define UNTITLED42_FORAGEABLE_H

using namespace std:

//parent class
class forageable {

public:

    //constructor
    //string = name
    //int = minElevation
    //int = maxElevation
    //int = beginSeason
    //int = endSeason

    forageable(string, int, int, int, int);
    //overloaded assignment operator
    forageable& operator=(const forageable);
    ~forageable();



private:
    //private instance variables
    string name;
    string elevationData; //richdem
    string aspectData; //richdem
    int maxElevation;
    int minElevation;
    int beginDay;
    int endDay;
    int beginMonth;
    int endMonth;
    int beginYear;
    int endYear;
    int daysDelta;




    double averageDailyElevation;




    double setAspectToElevation();
    //function will return total number of days between two dates
    //int year
    //int month
    //int day
    int rdn(int, int, int );

};


#endif //UNTITLED42_FORAGEABLE_H
