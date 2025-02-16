#include <iostream>
using namespace std;
#include "Naturals.h"

bool NatSatellite::isThereLive(){
    if(population > 0){
        return true;
    }
    else{return false;}
}

unsigned int NatSatellite::getPopulation(){
    return population;
}