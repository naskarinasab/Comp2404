#include "Vehicle.h"


/*** CONSTRUCTORS ***/
Vehicle::Vehicle(string newMake, string newModel, string newColour, int newYear, int newMilage){
  make = newMake;
  model = newModel;
  colour = newColour;
  year = newYear;
  mileage = newMilage;
}

/*** GET/SET METHODS ***/
int       Vehicle::getYear(){return year;}
int       Vehicle::getMilage(){return mileage;}
string    Vehicle::getMake(){return make;}
string    Vehicle::getModel(){return model;}
string    Vehicle::getColour(){return colour;}


/*** ADD/REMOVE METHODS ***/
