//Created by Foram Shah
#include <iostream>
using namespace std;
#include "Payment.h"
#include "Car.h"


//Program Definitions Here


//Constructor 
Payment :: Payment ()
{
  username = "NA";
  userlastname = "NA";
  userage = 0;
  carinfo = "NA";
  useremail = "NA";
  verification = "NA";
}

//Setter for username
void Payment :: setusername(string username1)
{
  username = username1;
}

//getter for username
string Payment :: getusername()  const
{
  return username;
}

//setter for user last name
void Payment :: setuserlastname(string userlastname1)
{
  userlastname = userlastname1;
}


//getter for user last name
string Payment :: getuserlastname() const
{
  return userlastname;
}
  
//setter for user age
void Payment :: setuserage(int userage1)
{
  userage = userage1;
}
  
// getter for user age
int Payment :: getuserage() const
{
  return userage;
}

//setter for car info
void Payment :: setcarinfo(string carinfo1)
{
  carinfo = carinfo1;
}

//getter for car info
string Payment :: getcarinfo ()const
{
  return carinfo;
}

//setter for useremail
void Payment :: setuseremail(string useremail1)
{
  useremail = useremail1;
}

//getter for user email
string Payment :: getuseremail() const
{
  return useremail;
}

//setter for verification
void Payment :: setverification (string verification1)
{
  verification = verification1;
}

//getter for verification
string Payment :: getuserverfication() const
{
  return verification;
}
 
//setter for payment type
void Payment :: setpaymenttype(string userpaymenttype)
{
  paymenttype = userpaymenttype;
}

//getter for payment type
string Payment :: getpaymenttype()const
{
  return paymenttype;
}

//overloading output function
ostream& operator <<(ostream& out, const Payment& obj)
{
  out << "\n******\nCONFIRMATION OF PAYMENT\nName: " << obj.getusername() << "\nLast Name: "<< obj.getuserlastname() <<  "\nAge: " << obj.getuserage() <<"\nPayment Method: " <<obj.getpaymenttype() <<"\nReceipt will be: " << obj.getuseremail() << "\nTHANK YOU FOR SHOPPING\n";
  return out;
}


//overlaoding input function
istream& operator >>(istream& in, Payment& obj)
{
  string usernameinput;
  string otherlastname;
  int otheruserage;
  string choosereceipttype;
  string otheruseremail;
  string otherpaymenttype;

  cout << "\n*******\nEnter Name: ";
  in >> usernameinput; 
  obj.setusername(usernameinput);
  cout << "Enter Last Name: ";
  in >> otherlastname;
  obj.setuserlastname(otherlastname);
  cout << "Enter Your Age: ";
  in >> otheruserage;
  obj.setuserage(otheruserage);
  cout << "Type of Payment (Cash, Credit): ";
  in >> otherpaymenttype;
  obj.setpaymenttype(otherpaymenttype);
  cout << "Email Receipt or Printed Receipt: " ;
  in >> choosereceipttype;

  if (choosereceipttype == "Print"|| choosereceipttype == "PRINT"|| choosereceipttype == "print")
  {
    cout << "Your Receipt will be Printed";
    otheruseremail = "Print";
    obj.setuseremail(otheruseremail);
  }
  else if (choosereceipttype == "Email" || choosereceipttype == "email" || choosereceipttype == "EMAIL")
  {
    cout << "Please enter your email: ";
    in >>otheruseremail;
    obj.setuseremail(otheruseremail); 
  }
  

  return in;

}
