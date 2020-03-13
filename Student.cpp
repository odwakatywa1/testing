#include "Student.h"
#include <string>
#include <iostream>

using namespace std;

Student::Student(string d, int sID, string sName, string fName, string addr, string c, string s, 
		string zc, string cnumber, string std, string str, string deg)
	/*:date(date), studentID(studentID), studentName(studentName), fatherName(fatherName), address(address), city(city), state(state),
	zipcode(zipcode), contactnumber(contactnumber), stdCode(stdCode), stream(stream), degree(degree)*/
{
	date = d;
	studentID = sID;
	studentName = sName;
	fatherName = fName;
	address = addr;
	city = c;
	state = s;
	zipcode = zc;
	contactNumber = cnumber;
	stdCode = std;
	stream = str;
	degree = deg;
}
Student::Student()
{

}
void Student::display()
{
	cout << "Student ID:  " << studentID << "       ";
	cout << "Name:  " << studentName << "       ";
	cout << "Contact Number:  " << contactNumber << "       ";
}

