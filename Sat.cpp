#include <iostream>
#include <string>
#include "Artificials.h"
#include "Sat.h"

using namespace std;

void Sat::broadcast(string msg)  {
    cout << this->get_name() << " broadcasts: '" << msg << "'" << endl;
}
