#pragma once
#include<string>
#include<iostream>
using namespace std;

class Date {  //composit relationship to Employee. Date is the part. 

private:
	int year;
	int month;
	int day;

public:
	Date(int a_year, int a_month, int a_day):year(a_year), month(a_month),day(a_day) {}

	void display(){
		cout << month << " " << day << " " << year << endl;
	}

	friend ostream& operator<<(ostream& out, Date& me) {
		out << me.month << me.day << me.day;
		return out;
	}
};