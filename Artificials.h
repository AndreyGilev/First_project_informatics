#ifndef ARTIFICIALS_H
#define ARTIFICIALS_H


#include <iostream>
#include <string>

using namespace std;

class Artificials {
public:
    Artificials(): age(0.0), name("New spacecraft"), crew(0), v{0,0,0}, r{0,0,0} {
    }
    Artificials(string name_, int crew_, float vx, float vy, float vz, float rx, float ry, float rz): age(0.0), name(name_), crew(crew_) {
        for(int i = 0; i < 3; i++) {
            v[0] = vx;
            v[1] = vy;
            v[2] = vz;

            r[0] = rx;
            r[1] = ry;
            r[2] = rz;

        }
    }

    void timelapse(float tau);


    float get_age();
    void set_age(float age_);

    float* get_r();
    void set_r(float rx, float ry, float rz);

    float* get_v();
    void set_v(float vx, float vy, float vz);

    string get_name();
    void set_name(string name_);

private:
    float age;
    float v[3];
    float r[3];
    string name;
    unsigned int crew;
};

#endif // ARTIFICIALS_H
