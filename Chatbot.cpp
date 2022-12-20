
#include <iostream>
#include <string>
#include "Chatbot.h"
using namespace std;

//Constructor 
Chatbot::Chatbot()
{

}

//Menu for chatbot is called 
void Chatbot::invokeBot()
{
    cout << "Hello! I am your virtual assistant" << endl;
    cout << "I can help you make a selection by: " << endl;

    cout << "***1. Mileage" << endl;
    cout << "***2. Year" << endl;
    cout << "***3. Price Range" << endl << endl;;

    cout << "How would you like to proceed?" << endl;
    cin >> uReply;
}


//allows the user to look at cars based on mileage range selected
void Chatbot::mileageFilter()
{
    cout << "Select Mileage Range..." << endl;
    cout << "*** 1. 0 - 20,000" << endl;
    cout << "*** 2. 20,001 - 80,000" << endl;
    cout << "*** 3. 80,001 - 120,000" << endl;
    cout << "*** 4. 120,001 +" << endl;
    cin >> mRangePick;

    if (mRangePick == 1)
    {
        for(int i = 0; i < 9; i++)
        {
            if (inventory_[i].get_mileage() >= 0 && inventory_[i].get_mileage() <= 20000)
            {
                Car temp = inventory_[i];

                cout << temp << endl;
            }
        }
    }

    if (mRangePick == 2)
    {
        for (int i = 0; i < 9; i++)
        {
            if (inventory_[i].get_mileage() >= 20001 && inventory_[i].get_mileage() <= 80000)
            {
                Car temp = inventory_[i];
                cout << temp << endl;
            }
        }
    }

    if (mRangePick == 3)
    {
        for (int i = 0; i < 9; i++)
        {
            if (inventory_[i].get_mileage() >= 80001 && inventory_[i].get_mileage() <= 120000)
            {
                Car temp = inventory_[i];
                cout << temp << endl;
            }
        }
    }

    if(mRangePick == 4)
    {
        for (int i = 0; i < 9; i++)
        {
            if (inventory_[i].get_mileage() >= 120001)
            {
                Car temp = inventory_[i];
                cout << temp << endl;
            }
        }
    }


}


//allows the user to look at cars based on year range selected
void Chatbot::yearFilter()
{
    cout << "Select year range..." << endl;
    cout << "*** 1. 1990+" << endl;
    cout << "*** 2. 2000+" << endl;
    cout << "*** 3. 2010+" << endl;
    cout << "*** 4. 2020+" << endl;
    cin >> yRangePick;

   if (yRangePick == 1)
    {
        for(int i = 0; i < 9; i++)
        {
            if (inventory_[i].get_year() >= 1990 && inventory_[i].get_year() <= 1999)
            {
                Car temp = inventory_[i];
                cout << temp << endl;
            }
        }
    }

    if (yRangePick == 2)
    {
        for(int i = 0; i < 9; i++)
        {
            if (inventory_[i].get_year() >= 2000 && inventory_[i].get_year() <= 2009)
            {
                Car temp = inventory_[i];
                cout << temp << endl;
            }
        }
    }

    if (yRangePick == 3)
    {
        for(int i = 0; i < 9; i++)
        {
            if (inventory_[i].get_year() >= 2010 && inventory_[i].get_year() <= 2019)
            {
                Car temp = inventory_[i];
                cout << temp << endl;
            }
        }
    }

    if (yRangePick == 4)
    {
        for(int i = 0; i < 9; i++)
        {
            if (inventory_[i].get_year() >= 2020)
            {
                Car temp = inventory_[i];
                cout << temp << endl;
            }
        }
    }
}

//allows the user to look at cars based on price range selected
void Chatbot::priceFilter()
{
    cout << "Select price range..." << endl;
    cout << "*** 1. $0 - $5,000" << endl;
    cout << "*** 2. $5,000 - $15,000" << endl;
    cout << "*** 3. $15,000 - $30,000" << endl;
    cout << "*** 4. $30,000+" << endl;
    cin >> pRangePick;

    if (pRangePick == 1)
    {
        for(int i = 0; i < 9; i++)
        {
            if (inventory_[i].get_price() >= 0 && inventory_[i].get_price() <= 5000)
            {
                Car temp = inventory_[i];
                cout << temp << endl;
            }
        }
    }

    if (pRangePick == 2)
    {
        for (int i = 0; i < 9; i++)
        {
            if (inventory_[i].get_price() >= 5001 && inventory_[i].get_price() <= 15000)
            {
                Car temp = inventory_[i];
                cout << temp << endl;
            }
        }
    }

        if (pRangePick == 3)
    {
        for (int i = 0; i < 9; i++)
        {
            if (inventory_[i].get_price() >= 15001 && inventory_[i].get_price() <= 30000)
            {
                Car temp = inventory_[i];
                cout << temp << endl;
            }
        }
    }

        if (pRangePick == 4)
    {
        for (int i = 0; i < 9; i++)
        {
            if (inventory_[i].get_price() > 30000)
            {
                Car temp = inventory_[i];
                cout << temp << endl;
            }
        }
    }
}


// gets the user reply and then proceeds
int Chatbot::get_uReply()
{
    return uReply;
}
