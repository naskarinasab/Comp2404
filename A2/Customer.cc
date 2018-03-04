#include <iostream>
using namespace std;
#include "Customer.h"


int Customer::nextId = 1000;

//CONSTRUCTORS//
Customer::Customer(string firstN, string lastN, string add, string phone){
  id = nextId;
  nextId++; // increase id by 1
  firstName = firstN;
  lastName = lastN;
  address = add;
  phoneNumber = phone;
}

//GET/SET METHODS//
int       Customer::getId(){return id;}
string    Customer::getFname(){return firstName;}
string    Customer::getLname(){return lastName;}
string    Customer::getAddress(){return address;}
string    Customer::getPhoneNumber(){return phoneNumber;}
int       Customer::getNumVehicles(){return vehicles.getSize();}

VehicleArray& Customer::getVehicles(){return vehicles;}



int Customer::addVehicle(Vehicle *newVehicle){
  return vehicles.add(newVehicle);
}
