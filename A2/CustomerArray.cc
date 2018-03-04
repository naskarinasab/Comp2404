#include "CustomerArray.h"
#include "Customer.h"
#include "defs.h"

//CONSTRUCTOR//
CustomerArray::CustomerArray(){size = 0;}


//DESTRUCTORS//
CustomerArray::~CustomerArray(){
  //no clue
}


//GET METHODS//
int CustomerArray::getSize(){return size;}

Customer*   CustomerArray::get(int custNum){
  if(custNum < MAX_CUSTOMERS){return elements[custNum];}
  return 0;
}

/*Function: add*/
/*in: Customer*/
/*out: int to show if the vehicle was added or not*/
/*Purpose: adds a customer to the CustomerArray*/
int CustomerArray::add(Customer* newCustomer){
  if(size < MAX_CUSTOMERS){
    elements[size] = newCustomer;
    size ++;
    return C_OK;
  }
  return C_NOK;
}
