//
// Created by 12067 on 3/14/2022.
//

#ifndef UNTITLED42_LOCATION_H
#define UNTITLED42_LOCATION_H
#include "forageable.h"

class location {
public:
    //no args constructor
    location();
    /*
     * lat1,lat2,long1,long2
     * create square of coordinates
     */
    location(double,double,double,double);
    //dependency injection
    location(double,double,double,double,forageable*&);
    ~location();




private:

    //todo, generate data with richdem for elevation and aspect
    //not a void, going to be a gdal/rd object
    void getElevationData();
    void getAspectData();

    //private variables;
    forageable* forageables;
    double lat1;
    double lat2;
    double long1;
    double long2;

    double** elevation;
    double** aspect;
};


#endif //UNTITLED42_LOCATION_H
