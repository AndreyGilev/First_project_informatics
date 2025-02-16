#include <iostream>
#include <string>

//����������� ����� ������������� �������� � ��� �����������
#include "Artificials.h"
#include "Ship.h"
#include "Sat.h"
#include "Sta.h"

//����������� ����� ������������ �������� � ��� �����������
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

    Star Solar(200000000, 697000, "Solar", 1000000, 1);
    cout << Solar.getTimetodeath()<<endl;

    Planet Earth(60000000000, 6400, "Earth", 800000, true, 300);
    cout<< Earth.isThereLive()<<endl;

    NatSatellite Moon(736000000, 1738, "Moon", 0);
    cout<< Moon.getMass()<<endl;

    cout << "Job is done" << endl;
    return 0;
}
