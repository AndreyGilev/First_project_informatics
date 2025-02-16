#include <iostream>
#include <string>
#include "Artificials.h"

using namespace std;

class Sat: public Artificials {
public:
    Sat(): Artificials("New satellite", 0 , 1,0,0) {

    }
    Sat(string name_, float vx, float vy, float vz): Artificials(name_, 0, vx, vy, vz) {

    }

    void broadcast(string msg);
};
