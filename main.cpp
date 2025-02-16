#include <iostream>
#include <string>

//Подтягиваем класс искусственных объектов и его наследников
#include "Artificials.h"
#include "Ship.h"
#include "Sat.h"
#include "Sta.h"

//Подтягиваем класс естественных объектов и его наследников
#include "Naturals.h"

using namespace std;

int main() {
    cout << "Hello, world!" << endl;

    Ship voyager1("Voyager-1", 0, 4, 8, 0, 7000, 0, 0);
    float* v = voyager1.get_v();
    cout << v[0] << " " << v[1] << " " << v[2] << endl;

    float a[3] = {10, 10, 10};
    //cout << "Noot!" << endl;
    voyager1.accelerate(a, 10);
    //cout << "Noot!" << endl;
    v = voyager1.get_v();
    float* r = voyager1.get_r();
    //cout << v[0] << " " << v[1] << " " << v[2] << endl;
    //cout << r[0] << " " << r[1] << " " << r[2] << endl;

    Sat sputnik("PS-1", 0, 8, 0, 6586, 0, 0);
    sputnik.broadcast("Labouring for Soviet Union!");

    Sta tiangong("Tiangong SS", 6, 8, 0, 0, 0, 7000, 0, 6);
    tiangong.detach_module();
    tiangong.timelapse(1e6);

    int m = tiangong.get_modules();
    float age = tiangong.get_age();
    cout << m << " " << age << endl;

    cout << "Job is done" << endl;
    return 0;
}
