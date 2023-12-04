# include <iostream>
using namespace std;

#include "Inventory.h"
# pragma once



Inventory::Inventory()

{
	itemName = "TBD";

	itemPrice = 0.00;

	unitsAvailable = 0;

}

Inventory::Inventory(string itemName, double itemPrice, int unitsAvailable)

{

	this->itemName = itemName;
	this->itemPrice = itemPrice;
	this->unitsAvailable = unitsAvailable;


}

string Inventory::getItemName()
{
	return itemName;
}

double Inventory::getItemPrice()
{
	return itemPrice;
}
int Inventory::getUnitsAvailable()
{
	return unitsAvailable;


}


void Inventory::setItemName(string itemName)
{
	this->itemPrice = itemName;

}

void Inventory : : setItemPrice(double itemPrice)
{

	this->itemPrice = itemPrice;
}

void Inventory : : setUnitsAvailable(int unitsAvailable)
{
	this->unitsAvailable = unitsAvailable;

}
double Inventory : ;calculateTotalValue()
{

	return itemPrice * unitsAvailable;

}

class Invnentory
{
private:

	string itemName;
	double itemPrice;
	int unitsAvailable;


public:


	void setItemName(string itemName);
	void setItemPrice(double);
	void setUnitsAvailable(int);


	string getItemName();
	double getItemPrice();
	int getUnitsAvailable();

	Inventory();
	Inventory(string itemName, double itemPrice, int unitsAvailable);

	double calculateTotalValue();

};