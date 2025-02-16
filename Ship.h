#include <iostream>
#include <string>
#include "Artificials.h"

using namespace std;

class Ship: public Artificials {
public:
    Ship(): Artificials("New ship", 3, 1, 0, 0, 0, 0, 0) {

    }
    Ship(string name_, int crew_, float vx, float vy, float vz, float rx, float ry, float rz): Artificials(name_, crew_, vx, vy, vz, rx, ry, rz) {

    }

    void accelerate(float a[3], float tau);
};
