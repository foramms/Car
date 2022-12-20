//Created by Foram Shah
#include <iostream>
#include "Car.h"
#ifndef PAYMENT_H
#define PAYMENT_H
using namespace std;

//Class Here

class Payment 
{
  //Private variables
  private:
  string username;
  string userlastname;
  int userage;
  string carinfo;
  string useremail;
  string verification;
  string paymenttype;

  public:
  //Constructor
  Payment ();
  //Setter and getter for username
  void setusername(string username1);
  string getusername() const;
  //setter and getter for userlastname
  void setuserlastname(string userlastname1);
  string getuserlastname()  const;
  //setter and getter for userage;
  void setuserage(int userage1);
  int getuserage()const; 
  //setter and getter for car info
  void  setcarinfo(string carinfo1);
  string getcarinfo () const;
  //setter and getter for useremail
  void setuseremail(string useremail1);
  string getuseremail()const;
  //setter and getter for verification
  void setverification (string verification1);
  string getuserverfication() const;
  //setter and getter for paymenttype
  void setpaymenttype(string userpaymenttype);
  string getpaymenttype()const;
  //checking verification function
  string checkingverification();
  
  //overloaded input and output functions 
  friend ostream& operator <<(ostream& out, const Payment& obj);
  friend istream& operator >>(istream& in, Payment& obj);

};

#endif