/*
Program: Vector of Objects with Composition

Purpose: This program defines a "Merch" class and a "Supplier" class for representing an item of merchandise in a retail store.
The class definitions are in .h files, and the main driver and method implementations are in .cpp files. The main declares an
empty map of Merch objects, and passes the objects by reference to a method that hardcodes attributes for the Merch and
Supplier classes.

Developer: Michael Cutshall

Created: 3/7/2016
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <stdlib.h>

#include "Merch.h"
#include "Supplier.h"

using namespace std;


//No-Parameter constructor
Supplier::Supplier()
{
	setSupplierID(0);
	setSupplierName("Name");
	setSupplierEmail("Email");
}

//Parameter acceting constructor
Supplier::Supplier(int supplierID, string supplierName, string supplierEmail)
{
	setSupplierID(supplierID);
	setSupplierName(supplierName);
	setSupplierEmail(supplierEmail);
}

//Set and Get methods that point to merchObj
void Supplier::setSupplierID(int supplierID)
{
	this->merchObj.setSupplierID(supplierID);
}

int Supplier::getSupplierID()
{
	return this->merchObj.getSupplierID();
}

void Supplier::setSupplierName(string supplierName)
{
	this->merchObj.setSupplierName(supplierName);
}

string Supplier:: getSupplierName()
{
	return this->merchObj.getSupplierName();
}

void Supplier::setSupplierEmail(string supplierEmail)
{
	this->merchObj.setSupplierEmail(supplierEmail);
}

string Supplier::getSupplierEmail()
{
	return this->merchObj.getSupplierEmail();
}

//method to convert integers to strings
string getIntString(int number)
{
	stringstream sstrm;
	sstrm << number;
	return sstrm.str();
}

//toString method
string Supplier::toString()
{
	string supplierIDStr = getIntString(supplierID);

	string str = "";

	str = merchObj.toString();

	return str;

}
