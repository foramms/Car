// Car.cpp
// Created by Gerardo Soto on 11/2/21.

#include "Car.h"
//#include "Inventory.h"

//Constructor
Car::Car(){
	
	brand = "N/A";
	
	model = "N/A";
	
	mileage = 0;
	
	year = 0;
	
	price = 0;
	
}
//constructor With parameters
Car::Car(string brand_, string model_, int mileage_, int year_, int price_){
	
	brand = brand_;
	
	model = model_;
	
	mileage = mileage_;
	
	year = year_;
	
	price = price_;

}

//setters
void Car::set_brand(string brand_){
	
	brand = brand_;
}

void Car::set_model(string model_){
	
	model = model_;
}

void Car::set_mileage(int mileage_){
	
	mileage = mileage_;
}

void Car::set_year(int year_){
	
	year = year_;
}

void Car::set_price(int price_){
	
	price = price_;
}


//end setters 

//Sold function
void Car::change_info(){
  
  brand ="Sold";
  model= "Sold";
  mileage = 0;
	year = 0;
	price = 0;
}//

//friend output function
ostream& operator<<(ostream& out, const Car& obj){
	
  cout<< "  " << "Make: " << obj.get_brand() <<endl;
	
	cout<< "   " << "Model: " << obj.get_model() <<endl;
	
	cout<< "   " << "Mileage: " << obj.get_mileage() <<endl;
	
	cout<< "   " << "Year: " << obj.get_year() <<endl;
	
	cout<< "   " << "Price: " << obj.get_price() <<endl;
	
	return out;
}