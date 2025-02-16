#include <iostream>
using namespace std;
#include "Naturals.h"

int Star::getTimetodeath(){
    return timetodeath;
}

bool Star::isThereHabPlan(){
    if(habitablePlanets > 0){
        return true;
    }
    else{return false;}
}

int Star::getAmountHabPlan(){
    return habitablePlanets;
}