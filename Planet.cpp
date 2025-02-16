#include <iostream>
using namespace std;
#include "Naturals.h"

bool Planet::isThereAtm(){
    return atmosphere;
}

int Planet::getTemperature(){
    return temperature;
}

bool Planet::isThereLive(){
    if(population > 0){
        return true;
    }
    else{return false;}
}

unsigned int Planet::getPopulation(){
    return population;
}