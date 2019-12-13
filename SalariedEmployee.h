#pragma once
#include <iostream>
#include <string>
#include "Employee.h"

class SalariedEmployee :public Employee {  //inherits traits from employee class. 

private:
	double salary;

public:
	SalariedEmployee(string a_name, int a_year, int a_month, int a_day, double a_salary) : Employee(a_name, a_year, a_month, a_day), salary(a_salary){}

	void display() {
		Employee::display();
		cout << salary << endl;
	}

	friend ostream& operator<<(ostream& out, SalariedEmployee& me) {
		out << (Employee&)me << " " << me.salary;
		return out;
	}

};