//
// Car.h
// Created by Gerardo Soto on 11/2/21.
#include <iostream>
#ifndef _Car_h_
#define _Car_h_
using namespace std;

class Car
{
protected:
	string brand, model;
	int mileage, year, price;
	
public:
//Constructors
	Car();
  Car(string brand_, string model_, int mileage_, int year_, int price_);
//setters
	void set_brand(string brand_);
	
	void set_model(string model_);
	
	void set_mileage(int mileage_);
	
	void set_year(int year_);
	
	void set_price(int price_);
// end setters
	
// getters
	string get_brand() const {return brand;}
	
	string get_model() const {return model;}

  int get_mileage() const {return mileage;}
	
	int get_year() const {return year;}
	
	int get_price () const {return price;}
//end getters
	
//friend output function
	friend ostream& operator<<(ostream& out, const Car& obj);
	
//frien input function if necessary
	friend istream& operator>>(istream& in, Car& obj);
	

   void change_info();
};//end class

#endif