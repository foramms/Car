#include<iostream>
#include "Car.h"


#ifndef INVENTORY
#define INVENTORY

class Inventory : public Car
 {
  protected:
  // array of 10 objects created for cars 
  Car group1[10];

  public:
  //Constructor
  Inventory();
  
  //gets get_Mileage from object 
  int get_Mileage(int index) const {return group1[index].get_mileage();}
  
  //Overloaded '[]' for getting info. from 'Inventory' class
  Car& operator[](const int index);
  

  // outputs the numbers 1-10 for the cars so users can choose a number
  void output() const;
  
  //Get Entry Function Index:
    Car getEntry(int index);

  //Car change_info();

  }static inventory_;
  
#endif
