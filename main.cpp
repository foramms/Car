//CSS2A - Final project
//Aurelio Lopez, Alejandro Quezada, Foram Shah, Gerardo Soto
//December 9, 2021
//Ms. Gutierrez


#include <iostream>
using namespace std;
#include "Car.h"
#include "Payment.h"
#include "Chatbot.h"
#include "Inventory.h"

int main()
{
  //variables needed to run code in main
  int userchoice;
  string userchoice2;
  int chooseindex;
  
  Inventory Car;//Car is an object of class Inventory
  //if group1 is an object of class car
  
//do while loop to run the main menu
do{

  cout << "\n******************\nWelcome to CSS2A Car Dealership team! \n";
  cout << "Would you like to: \n1. See all inventory\n2. Need help in choosing a car\n3. Exit\n";
  cin >> userchoice;

//shows all inventory if choose 1
  if (userchoice == 1)
  {
    Car.output();
    cout << "Did you like any of these choices? Y or N\n";
    cin >> userchoice2;
    //helps them buy a car if like a car
    if (userchoice2 == "Y" || userchoice2 == "y" || userchoice2 == "Yes")
  {
        {
          cout << "Which car would you like to buy please pick a number:\n";
          cin >> chooseindex;
          
          Car.getEntry(chooseindex-1);

          cout << "\n********\nSOLD: Car "<< chooseindex << "\n";
          cout<< Car.getEntry(chooseindex-1) <<endl;

          }
          Payment firstuser;
          string usernameinput;
          string userlastnameinput;
          cout << "\n********\nCongratulations on choosing to buy a car!\nPlease answer the following questions to complete your purchase:\n";
          
          cin >> firstuser;
          cout <<firstuser;
          //Sold test
          Car.getEntry(chooseindex).change_info();
  }
  //if do not like a car then the loops breaks and takes them to end of code
  else if (userchoice2 == "N"||userchoice2 == "n"||userchoice2 == "No")
    {
   break;
    }

}
//chatbot is called if choose choice 2
else if  (userchoice == 2)
{
  Chatbot prompt; //creates prompt
  prompt.invokeBot(); //bot is invoked, dialogue begins in console here

  if (prompt.get_uReply() == 1) //if '1' is picked from menu of chatbot, mileage filter is called
    {
        prompt.mileageFilter();
            cout << "Did you like any of these choices? Y or N\n";
            cin >> userchoice2;
            //helps them buy a car if they like a car
            if (userchoice2 == "Y" || userchoice2 == "y" || userchoice2 == "Yes")
              {
                 {
                    cout << "Which car would you like to buy please pick a number:\n";
                        cin >> chooseindex;
                      Car.getEntry(chooseindex);
                      cout << "\n********\nSOLD: Car "<< chooseindex << "\n";
                      Car.change_info();
                     cout<< Car <<endl;

                  }
                  //payment is able to be completed of chosen car
                  Payment firstuser;
                   string usernameinput;
                   string userlastnameinput;
                    cout << "\n********\nCongratulations on choosing to buy a car!\nPlease answer the following questions to complete your purchase:\n";
                    cin >> firstuser;
                    cout <<firstuser;
                    

                }
                //if do not like car, loops breaks and takes them to end of program
                else if (userchoice2 == "N"||userchoice2 == "n"||userchoice2 == "No")
                {
                break;
                }
    }

  if (prompt.get_uReply() == 2) //if '2' is picked from menu of chatbot, year filter is called
    {
        prompt.yearFilter();
          cout << "Did you like any of these choices? Y or N\n";
          cin >> userchoice2;
          //helps them buy a car if they like a car
          if (userchoice2 == "Y" || userchoice2 == "y" || userchoice2 == "Yes")
            {
              {
                cout << "Which car would you like to buy please pick a number:\n";
                cin >> chooseindex;
                Car.getEntry(chooseindex);
                cout << "\n********\nSOLD: Car "<< chooseindex << "\n";
                Car.change_info();
                cout<< Car <<endl;

              }
              //payment is able to be completed of chosen car
                Payment firstuser;
                string usernameinput;
                string userlastnameinput;
                cout << "\n********\nCongratulations on choosing to buy a car!\nPlease answer the following questions to complete your purchase:\n";
                cin >> firstuser;
                cout <<firstuser;

            }
            //if do not like car, loops breaks and takes them to end of program
            else if (userchoice2 == "N"||userchoice2 == "n"||userchoice2 == "No")
              {
                break;
              }
        
    }

  if (prompt.get_uReply() == 3) //if '3' is picked from menu of chatbot, price filter is called
    {
        prompt.priceFilter();
        cout << "Did you like any of these choices? Y or N\n";
        cin >> userchoice2;
        //helps them buy a car if they like a car
        if (userchoice2 == "Y" || userchoice2 == "y" || userchoice2 == "Yes")
          {
            {
              cout << "Which car would you like to buy please pick a number:\n";
              cin >> chooseindex;
              Car.getEntry(chooseindex);
              cout << "\n********\nSOLD: Car "<< chooseindex << "\n";
              Car.change_info();
              cout<< Car <<endl;
            }
            //payment is able to be completed of chosen car
              Payment firstuser;
              string usernameinput;
              string userlastnameinput;
              cout << "\n********\nCongratulations on choosing to buy a car!\nPlease answer the following questions to complete your purchase:\n";
              cin >> firstuser;
              cout <<firstuser;

            }
            //if do not like car, loops breaks and takes them to end of program
            else if (userchoice2 == "N"||userchoice2 == "n"||userchoice2 == "No")
              {
                break;
              }

}
}

//main menu keeps running while main menu choices are 1 or 2
} while (userchoice == 1 || userchoice == 2);


//outputs at the end of the code
cout << "\nThank You for visiting our Dealership! Please come again soon\n";

}