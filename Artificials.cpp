#include <iostream>
#include <string>
#include "Artificials.h"

using namespace std;

void Artificials::timelapse(float tau) {
    age += tau / 3.154e+7;
    for (int i = 0; i < 3; i++) {
        r[i] += v[i] * tau;
    }
}

float Artificials::get_age() { return age; }
void Artificials::set_age(float age_) { age = age_; }

float* Artificials::get_r() { return r; }
void Artificials::set_r(float rx, float ry, float rz) {
    r[0] = rx;
    r[1] = ry;
    r[2] = rz;
}

float* Artificials::get_v() { return v; }
void Artificials::set_v(float vx, float vy, float vz) {
    v[0] = vx;
    v[1] = vy;
    v[2] = vz;
}

string Artificials::get_name() { return name; }
void Artificials::set_name(string name_) { name = name_; }
