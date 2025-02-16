#include <iostream>
#include <string>
#include "Artificials.h"

using namespace std;

class Sta: public Artificials {
public:
    Sta(): Artificials("New station", 10, 1,0,0), modules(2) {

    }
    Sta(string name_, unsigned int crew_, float vx, float vy, float vz, unsigned int modules_): Artificials(name_, crew_, vx, vy, vz), modules(modules_) {

    }

    void attach_module();
    void detach_module();

    unsigned int get_modules();

private:
    unsigned int modules;
};
