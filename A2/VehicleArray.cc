#include "VehicleArray.h"
#include "Vehicle.h"
#include "defs.h"

//CONSTRUCTORS//
VehicleArray::VehicleArray(){
  size = 0;
}

///DESTRUCTORS//
VehicleArray::~VehicleArray(){
  //no clue
}

//GET METHODS//
int      VehicleArray::getSize(){return size;}

Vehicle* VehicleArray::get(int vehNum){
  if(vehNum < MAX_VEHICLES){return elements[vehNum];}
  return 0;
}

/*Function: add*/
/*in: vehicle*/
/*out: int to show if the vehicle was added or not*/
/*Purpose: adds a customer to the VehicleArray*/
int VehicleArray::add(Vehicle* newVehicle){
  if(size < MAX_VEHICLES){
    elements[size] = newVehicle;
    size++;
    return C_OK;
  }
  return C_NOK;
}
