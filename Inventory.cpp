#include <iostream>
#include "Inventory.h"
using namespace std;


//Array of Cars:
Inventory::Inventory():Car()

{
  group1[0] = {Car ("Toyota", "Corolla", 123560, 2006, 5000)};
  group1[1] = {Car ("Honda" ,"Accord",  1000, 2015, 10000)};
  group1[2] = {Car ("Ford", "Runner", 50000, 2021, 60000)};
  group1[3] = {Car ("Mercedez", "C-class", 0, 2022, 42000)};
  group1[4] = {Car ("Volkswagon", "Atlas", 15000, 2017, 15000)};
  group1[5] = {Car ("Lincoln", "Aviator", 20000, 2014,13000)};
  group1[6] = {Car ("Chevrolet", "Blazer", 30000,2010, 10000)};
  group1[7] = {Car ("Kia", "Carnival", 15000, 2018,12000)};
  group1[8] = {Car ("Jeep", "Compass", 13000, 2020, 24000)};
  group1[9] = {Car ("Subaru", "Crosstrek", 25000, 2016, 19000)};
  
}


// outputs the numbers 1-10 for the cars so users can choose a number
void Inventory::output() const{
    
    for(int i=0; i<10; i++){
      
      cout<< i + 1 << group1[i] <<endl;
      
    }
    
  }

 //Get Entry Function Index:
  Car Inventory::getEntry(int index)
  { 
  return group1[index];
  }


//Overloaded '[]' for getting info. from 'Inventory' class
Car& Inventory::operator[](const int index) 
 {
    return group1[index];
 }

