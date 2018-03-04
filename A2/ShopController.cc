#include "ShopController.h"

ShopController::ShopController() {

    initCustomers();

}

void ShopController::launch() {

    int choice;

    while (1) {
        choice = -1;
        view.mainMenu(choice);

        if (choice == 1) {
            view.printCustomers(mechanicShop.getCustomers());
            view.pause();
        } /*else if (choice == 2) {

        } else if (choice == 3) {

        } else if (choice == 4) {

        } ... */

        else {
            break;
        }
    }
}


void ShopController::initCustomers() {

  //CUSTOMER ONE//
  Customer* c= new Customer("Star", "Man", "Solar Orbit", "(888) 518-3752");
  Vehicle* v= new Vehicle("Tesla","Roadster","Cherry Red", 2008, 35462000);
  c->addVehicle(v);
  mechanicShop.addCustomer(c);

  //CUSTOMER TWO//
  c= new Customer("Maurice", "Mooney", "123 Bank Street", "(613) 123-4567");
  v= new Vehicle("Subaru","Forester","Green", 2016, 40000);
  c->addVehicle(v);
  v= new Vehicle("Honda","Accord","White", 2018, 5000);
  c->addVehicle(v);
  mechanicShop.addCustomer(c);

  //CUSTOMER THREE//
  c= new Customer("Abigail", "Atwood", "456 Merivale Road", "(819) 111-2222");
  v= new Vehicle("Volkswagon","Polo","White", 1998, 50000);
  c->addVehicle(v);
  mechanicShop.addCustomer(c);

  //CUSTOMER FOUR//
  c= new Customer("Brooke", "Banding", "1310 Alta Vista Drive", "(613) 222-1111");
  v= new Vehicle("Ford","Fiesta","Red", 2007, 100000);
  c->addVehicle(v);

  v= new Vehicle("Honda","Accord","White", 2018, 5000);
  c->addVehicle(v);

  v= new Vehicle("Toyota","Prius","Blue", 2008, 5001);
  c->addVehicle(v);
  mechanicShop.addCustomer(c);

  //CUSTOMER FIVE//
  c= new Customer("Ethan", "Esser", "24 Sussex Drive", "(613) 992-4793");
  v= new Vehicle("Toyota","Prius","Blue", 2008, 5000);
  c->addVehicle(v);
  mechanicShop.addCustomer(c);

  //CUSTOMER SIX//
  c= new Customer("Eve", "Engram", "420 Queen Street", "(613) 666-9837");
  v= new Vehicle("Honda","Accord","White", 2018, 5000);
  c->addVehicle(v);

  v= new Vehicle("Ferrari", "LaFerrari", "Red", 2018, 1500);
  c->addVehicle(v);

  v= new Vehicle("Toyota","Prius","Blue", 2008, 5000);
  c->addVehicle(v);

  v= new Vehicle("Toyota","Camry","Black", 2018, 500000);
  c->addVehicle(v);
  mechanicShop.addCustomer(c);
}
