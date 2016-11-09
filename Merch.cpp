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
#include "Merch.h"
#include "Supplier.h"
#include <string>
#include <sstream>

using namespace std;

//create the no-parameter default constructor
Merch::Merch()
{
	setItemNum(0);
	setName("");
	setDescription("");
	setPrice(0.0);
	setQuantity(0);
	setSupplierID(0);
	setSupplierName("");
	setSupplierEmail("");
}

//create the parameter accepting constructor
Merch::Merch(int itemNum, string name, string description, double price, int quantity, int supplierID, string supplierName,
			string supplierEmail)
{
	setItemNum(itemNum);
	setName(name);
	setDescription(description);
	setPrice(price);
	setQuantity(quantity);
	setSupplierID(supplierID);
	setSupplierName(supplierName);
	setSupplierEmail(supplierEmail);

}

//create the set and get methods for each attribute.
void Merch::setItemNum(int itemNum) {
	this->itemNum = itemNum;
}

int Merch::getItemNum() {
	return itemNum;
}

void Merch::setName(string name) {
	this->name = name;
}

string Merch::getName() {
	return name;
}

void Merch::setDescription(string description) {
	this->description = description;
}

string Merch::getDescription() {
	return description;
}

void Merch::setPrice(double price) {
	this->price = price;
}

double Merch::getPrice() {
	return price;
}

void Merch::setQuantity(int quantity) {
	this->quantity = quantity;
}

int Merch::getQuantity() {
	return quantity;
}

void Merch::setSupplierID(int supplierID)
{
	this->supplierID = supplierID;
}

int Merch::getSupplierID()
{
	return supplierID;
}

void Merch::setSupplierName(string supplierName)
{
	this->supplierName = supplierName;
}

string Merch::getSupplierName()
{
	return supplierName;
}

void Merch::setSupplierEmail(string supplierEmail)
{
	this->supplierEmail = supplierEmail;
}

string Merch::getSupplierEmail()
{
	return supplierEmail;
}

//this method converts integers to strings
string getIntegerStr(int number) {

	stringstream sstrm;
	sstrm << number;
	return sstrm.str();
}

//this method converts doubles to strings.
string getDoubleStr(double number) {
	stringstream ss;
	ss << number;
	return ss.str();
}

//this method calls the methods to convert numbers to strings, then returns the attributes as a formatted string. 
string Merch::toString() {	

	string itemStr = getIntegerStr(itemNum);
	string priceStr = getDoubleStr(price);
	string quantityStr = getIntegerStr(quantity);
	string suppIDStr = getIntegerStr(supplierID);


	return (" Item Number   : " + itemStr + "\n" + 
			" Name          : " + name + "\n" +
			" Description   : " + description + "\n" +
			" Price         : " + "$" + priceStr + "\n" +
			" Quantity      : " + quantityStr + "\n" +
			" Supplier ID   : " + suppIDStr + "\n" +
			" Supplier Name : " + supplierName + "\n" +
			" Supplier Email: " + supplierEmail + "\n");
}