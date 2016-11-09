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
#include <string>
#ifndef _Supplier
#define _Supplier

using namespace std;

class Supplier
{
public:
	Supplier();//Default, no-parameter constructor

	Supplier(int, string, string);//Parameter accepting constructor

	//setter methods
	void setSupplierID(int);
	void setSupplierName(string);
	void setSupplierEmail(string);

	//getter methods
	int getSupplierID();
	string getSupplierName();
	string getSupplierEmail();

	string toString();

private:

	//attriubutes
	int supplierID;
	string supplierName;
	string supplierEmail;

	Merch merchObj;
};

#endif