#include <iostream>
#include <string>
#include "Artificials.h"
#include "Ship.h"

using namespace std;

void Ship::accelerate(float a[3], float tau) {
    cout << "Acceleration started" << endl;
    float* v0 = get_v();
    float* r0 = get_r();

    /*float* v0 = new float[3];
    v0[0] = 0;
    v0[1] = 0;
    v0[2] = 0;
    float* r0 = new float[3];
    r0[0] = 0;
    r0[1] = 0;
    r0[2] = 0;*/

    float* r_ = new float[3];
    float* v_ = new float[3];
    //cout << "Arrays created" << endl;
    for (int i = 0; i < 3; i++) {
        r_[i] = r0[i] + v0[i] * tau + a[i] * tau * tau / 2;
        v_[i] = v0[i] + a[i] * tau;
        //cout << "Iteration ended" << endl;
    }
    //cout << "Cycle ended" << endl;
    set_r(r_[0], r_[1], r_[2]);
    set_v(v_[0], v_[1], v_[2]);
    cout << "Ship properties updated" << endl;
    /*delete[] r0;
    cout << "r0 erased" << endl;
    delete[] v0;
    cout << "v0 erased" << endl;*/
    delete[] r_;
    cout << "r_ erased" << endl;
    delete[] v_;
    cout << "v_ erased" << endl;
    cout << "Finishing acceleration" << endl;
}
