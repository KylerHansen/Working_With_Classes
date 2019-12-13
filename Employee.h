#pragma once
#include <string>
#include <iostream>
#include "Date.h"
#include "Address.h"

using namespace std;

class Employee {

private:
	string name;

	Date date; //composition relationship

	Address* address; //aggregation relationship

	

public:
	Employee(string a_name, int a_year, int a_month, int a_day) : date(a_year, a_month, a_day), name(a_name), address(nullptr) {}
	
	~Employee() {
		if (address != nullptr)
			delete address;
	}

	void setAddress(string a_street, string a_city) {
		if (address != nullptr)
			delete address;
		address = new Address(a_street, a_city);
	}
	
	void display() {
		cout << name << endl;

		if (address != nullptr)
			address->display();

		date.display();
	}

	friend ostream& operator<<(ostream& out, Employee& me) {
		out << me.name << " "<< me.date;

		if (me.address != nullptr)
			out << " " << *me.address;
		return out;
	}
};