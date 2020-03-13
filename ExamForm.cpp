#include "ExamForm.h"
#include <string>
#include <iostream>

using namespace std;

ExamForm::ExamForm(int sID, string d, int examID, string sName, string fName, string addr, string str, string deg)
//	:studentID(studentID), date(date), examFormID(examFormID), studentName(studentName), fatherName(fatherName), address(address), stream(stream), degree(degree)
{
	studentID = sID;
	date = d;
	examFormID = examID;
	studentName = sName;
	fatherName = fName;
	address = addr;
	stream = str;
	degree = deg;
}
ExamForm::ExamForm()
{

}

void ExamForm::display()
{
	cout << "Student Name:  " << studentName << "       ";
	cout << "Exam Form ID:  " << examFormID << "       ";
	cout << "Degree:  " << degree << "       ";
}