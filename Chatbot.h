
#include <iostream>
#include <string>
#include "Inventory.h"

#ifndef CHATBOT_H_
#define CHATBOT_H_

class Chatbot : public Inventory
{
protected:
  
	int uReply; //all these are used to take input from user when they navigate a menu
	int mRangePick;
	int yRangePick;
	int pRangePick;

public:
  // Constructor 
    Chatbot();
  // function that calls the chatbot
    void invokeBot();
  // function that gets user reply
    int get_uReply();
  // fucntion for mileageFilter
    void mileageFilter();
  // function for yearFilter
    void yearFilter();
  // function for priceFilter
    void priceFilter();
  
};

#endif