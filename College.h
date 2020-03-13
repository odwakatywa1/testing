#ifndef COLLEGE_H
#define COLLEGE_H

#include <string>
#include <iostream>

using namespace std;

class College
{
public:
	College(string date, int collegeID, string name, string location, string stream, string degree1, string degree2);
	College();
	void display();
	

private:
	string date;
	int collegeID;
	string name, location, stream, degree1, degree2;

};

#endif // COLLEGE_H

