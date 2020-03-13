#ifndef EXAMFORM_H
#define EXAMFORM_H

#include <string>
#include <iostream>

using namespace std;

class ExamForm
{
public:

	ExamForm();
	ExamForm(int studentID, string date, int examFormID, string studentName, string fatherName, string address, string stream, string degree);
	void display();
	
private:
	int studentID, examFormID;
	string date, studentName, fatherName, address, stream, degree;

	//Just a test comment

};
#endif // EXAMFORM.H

