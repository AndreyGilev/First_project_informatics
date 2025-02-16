#include <iostream>
#include <string>
#include "Artificials.h"
#include "Sta.h"

using namespace std;

void Sta::attach_module() {
    modules++;
}
void Sta::detach_module() {
    modules--;
}

unsigned int Sta::get_modules() { return modules; }
