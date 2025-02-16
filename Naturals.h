#include <iostream>
using namespace std;

class Naturals{
    public:
        Naturals(double mass_, double size_, string name_): mass(mass_), size(size_), name(name_){
        }
        double getMass();
        double getSize();
        string getName();
    private:
        double mass;
        double size;
        string name;
};

class Star:public Naturals{
    public:
    Star(double mass_, double size_, string name_, int timetodeath_, int habitablePlanets_):Naturals(mass_, size_, name_), timetodeath(timetodeath_), habitablePlanets(habitablePlanets_){

    }

    int getTimetodeath();

    bool isThereHabPlan();

    int getAmountHabPlan();

    private:
        int timetodeath;
        int habitablePlanets;
};

class Planet:public Naturals{
    public:
    Planet(double mass_, double size_, string name_, unsigned int population_, bool atmosphere_, int temperature_):Naturals(mass_, size_, name_), population(population_), atmosphere(atmosphere_), temperature(temperature_){

    }

    bool isThereAtm();

    int getTemperature();

    bool isThereLive();

    unsigned int getPopulation();
    private:
    unsigned int population;
    bool atmosphere;
    int temperature;
};

class NatSatellite:public Naturals{
    public:
    NatSatellite(double mass_, double size_, string name_, unsigned int population_):Naturals(mass_, size_, name_), population(population_){

    }

    bool isThereLive();

    unsigned int getPopulation();
    private:
    unsigned int population;
};