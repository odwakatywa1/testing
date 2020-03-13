#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

using namespace std;

class Student
{
public:
	Student(string date, int studentID, string studentName, string fatherName, string address, string city, string state,
		string zipcode, string contactnumber, string stdCode, string stream, string degree);
	Student();
	void display();
	

private:
	string date;
	string studentName, fatherName, address, city, state, zipcode, stdCode, contactNumber, stream, degree;
	int studentID;
};

#endif // STUDENT_H


