#include <iostream>
#include <string>
#include "Artificials.h"
#include "Ship.h"

using namespace std;

void Ship::accelerate(float a[3], float tau) {
    float* v0 = this->get_v();
    float* r_ = new float[3];
    float* v_ = new float[3];
    for (int i = 0; i < 3; i++) {
        r_[i] += v0[i] * tau + a[i] * tau * tau / 2;
        v_[i] += a[i] * tau;
    }
    this->set_r(r_[0], r_[1], r_[2]);
    this->set_v(v_[0], v_[1], v_[2]);
    delete v0;
    delete r_;
    delete v_;
}
