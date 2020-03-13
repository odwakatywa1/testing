#include "College.h"
#include <string>
#include <iostream>

using namespace std;

College::College(string d, int cID, string n, string loc, string str, string deg1, string deg2)
//	:date(date), collegeID(collegeID), name(name), location(location), stream(stream), degree1(degree1), degree2(degree2)
{
	date = d;
	collegeID = cID;
	name = n;
	location = loc;
	stream = str;
	degree1 = deg1;
	degree2 = deg2;
}
College::College()
{

}

void College::display()
{
	cout << "College ID:  " << collegeID << "       ";
	cout << "Name:  " << name << "       ";
	cout << "Location:  " << location << "       ";
}



