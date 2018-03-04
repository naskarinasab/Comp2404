#include <stdio.h>
#include <string.h>

#define MAX_STR 32
#define MAX_VEHICLES 4
#define MAX_CUSTOMERS 6

typedef struct {
  char make[MAX_STR];
  char model[MAX_STR];
  char colour[MAX_STR];
	int year;
  int mileage;
} VehicleType;

typedef struct {
	char firstName[MAX_STR];
  char lastName[MAX_STR];
  int numV;
  VehicleType indVehicles[MAX_VEHICLES];
} CustomerType;

/*Function: print_vehicle*/
/*in: vehicle*/
/*out: void so nothing */
/*Purpose: Prints out to terminal the details of the vehicle*/
void print_vehicle(VehicleType *v) {
  printf("%d %s %s, %s, %dKM\n",v->year, v->make, v->model, v->colour, v->mileage );
}

/*Function: print_customer*/
/*in: customer*/
/*out: void so nothing */
/*Purpose: Prints out to terminal the customer's name + cars (and details of the cars) they owns*/
void print_customer(CustomerType *c) {
  printf("%s %s, %d vehicle(s).\n", c->firstName, c->lastName, c->numV);
  for(int i = 0; i<(c->numV); i++){
    print_vehicle(&c->indVehicles[i]);
  }

}


/*Function: add_vehicle*/
/*in: customer and a vehicle */
/*out: int to show if the vehicle was added or not*/
/*Purpose: Adds a vehicle to a customer's current vehicles array*/
int add_vehicle(CustomerType *customer, VehicleType *vehicle) {

  if(customer->numV < MAX_VEHICLES){ //checks to see if there is room for the vehicle
    customer->indVehicles[customer->numV] = *vehicle;
    customer->numV++;
    return 0;
  }
  return -1;

}

/*Function: create_customer*/
/*in: first and last name strings*/
/*out: the new customer instance*/
/*Purpose: initialises a new instance of a customer*/
CustomerType create_customer(char* fname, char* lname) {
  CustomerType c;
  strcpy(c.firstName, fname);
  strcpy(c.lastName, lname);
  c.numV = 0;
  return c;
}

/*Function: create_vehicle*/
/*in: chars for make, model, colour, and ints for year and mileage*/
/*out: the new vehicle instance*/
/*Purpose: initialises a new instance of a vehicle*/
VehicleType create_vehicle(char* make, char* model, char* colour, int year, int mileage) {
  VehicleType v;
  strcpy(v.make, make);
  strcpy(v.model, model);
  strcpy(v.colour, colour);
  v.year = year;
  v.mileage = mileage;
  return v;
}

int main() {
    CustomerType customers[MAX_CUSTOMERS];
    /*Customer 1*/
    customers[0] = create_customer("Navid","Askari Nasab");
    VehicleType vCustomer1 = create_vehicle("Ford","Fiesta","Red",2007, 100000);
    add_vehicle(&customers[0], &vCustomer1);

    /*Customer 2*/
    customers[1] = create_customer("Ben","Franklin");
    VehicleType vCustomer2 = create_vehicle("Subaru","Forester","Green",2016, 40000);
    add_vehicle(&customers[1], &vCustomer2);

    /*Customer 3*/
    customers[2] = create_customer("Rob","Cesternino");
    VehicleType vCustomer3 = create_vehicle("Honda","Accord","White",2018, 5000);
    add_vehicle(&customers[2], &vCustomer3);
    vCustomer3 = create_vehicle("Volkswagen","Beetle","White",1972, 5000);
    add_vehicle(&customers[2], &vCustomer3);

    /*Customer 4*/
    customers[3] = create_customer("Tony","Vlachos");
    VehicleType vCustomer4 = create_vehicle("Toyota","Camry","Black",2010, 50000);
    add_vehicle(&customers[3], &vCustomer4);

    /*Customer 5*/
    customers[4] = create_customer("Stephen","Fishbach");
    VehicleType vCustomer5 = create_vehicle("Toyota","Carolla","Green",2013, 80000);
    add_vehicle(&customers[4], &vCustomer5);
    vCustomer5 = create_vehicle("Toyota","Rav4","Gold",2015, 20000);
    add_vehicle(&customers[4], &vCustomer5);
    vCustomer5 = create_vehicle("Toyota","Prius","Blue",2017, 10000);
    add_vehicle(&customers[4], &vCustomer5);

    /*Customer 6*/
    customers[5] = create_customer("Meredith","Grey");
    VehicleType vCustomer6 = create_vehicle("GM","Envoy","Purple",2012, 60000);
    add_vehicle(&customers[5], &vCustomer6);
    vCustomer6 = create_vehicle("GM","Escalade","Black",2016, 40000);
    add_vehicle(&customers[5], &vCustomer6);
    vCustomer6 = create_vehicle("GM","Malibu","Red",2015,20000);
    add_vehicle(&customers[5], &vCustomer6);
    vCustomer6 = create_vehicle("GM","Trailblazer","Orange",2012, 90000);
    add_vehicle(&customers[5], &vCustomer6);
    /*SHOULD NOT WORK*/
    vCustomer6 = create_vehicle("Chevrolet","Tahoe","Red",2017, 90000);
    add_vehicle(&customers[5], &vCustomer6);

    for(int i = 0; i<6; i++){
      print_customer(&customers[i]);
      printf("\n");
    }

}
