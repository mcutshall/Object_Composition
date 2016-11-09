/*
Program: Vector of Objects with Composition

Purpose: This program defines a "Merch" class and a "Supplier" class for representing an item of merchandise in a retail store.
The class definitions are in .h files, and the main driver and method implementations are in .cpp files. The main declares an
empty map of Merch objects, and passes the objects by reference to a method that hardcodes attributes for the Merch and
Supplier classes.

Developer: Michael Cutshall

Created: 3/7/2016
*/

#pragma once
#ifndef Merch
#define MERCH
#include <string>
#include <ctime>

using namespace std;

class Merch
{
public:

	Merch();//default, no-parameter constructor

	Merch(int, string, string, double, int, int, string, string);//parameter accepting constructor

	//setter methods
	void setItemNum(int);
	void setName(string);
	void setDescription(string);
	void setPrice(double);
	void setQuantity(int);
	void setSupplierID(int);
	void setSupplierName(string);
	void setSupplierEmail(string);;

	//getter methods
	int getItemNum();
	string getName();
	string getDescription();
	double getPrice();
	int getQuantity();
	int getSupplierID();
	string getSupplierName();
	string getSupplierEmail();

	string toString();

private:
	
	//attributes
	string name, description, supplierName, supplierEmail;
	int itemNum, quantity, supplierID;
	double price;

			
};
#endif
