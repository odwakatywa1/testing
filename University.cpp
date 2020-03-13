// University.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iomanip>
#include <map>
#include "Student.h"
#include "College.h"
#include "ExamForm.h"

using namespace std;

map<int, Student> students;
map<int, College> colleges;
map<int, ExamForm> examForms;


//PROTOTYPES
void mainMenu();
void displayMenu();
void displayCollege();
void displayStudent();
void displayExamForm();
void displayExamSchedule();
void displayResults();
void entryMenu();
void enterStudent();
void enterCollege();
void enterExamForm();
void enterResults();
void enquiryMenu();
void collegeEnquiry();
void studentEnquiry();
void performanceMenu();
void annualReport();
void foundation();
void modificationMenu();
void modifyCollege();
void modifyStudent();


int main()
{
    cout << setw(30) << internal << "UNIVERSITY MANAGEMENT SYSTEM" << endl;
    cout << endl;

    mainMenu();
}

void mainMenu()
{

    cout << setw(30) << internal << "Main Menu" << endl;
    cout << endl;

    int choice;
    

    cout << "1. ENTRY" << endl;
    cout << "2. DISPLAY" << endl;
    cout << "3. ENQUIRY" << endl;
    cout << "4. MODIFICATION" << endl;
    cout << "5. PERFORMANCE" << endl;
    cout << "6. EXIT" << endl;

    

    cin >> choice;

    switch (choice)
    {
        case 1:entryMenu();
            break;
        case 2:displayMenu();
            break;
        case 3:enquiryMenu();
            break;
        case 4:modificationMenu();
            break;
        case 5:performanceMenu();
            break;
        case 6:
            return;
            break;

    }
}
void displayMenu()
{

    cout << setw(30) << internal << "Display Menu" << endl;
    cout << endl;

    //DISPLAY MENU
    cout << "1. COLLEGE" << endl;
    cout << "2. STUDENT" << endl;
    cout << "3. EXAM FORM" << endl;
    cout << "4. EXAM SCHEDULE" << endl;
    cout << "5. RESULT" << endl;
    cout << "6. BACK TO PREVIOUS MENU" << endl;

    int choice;
    cin >> choice;

    switch (choice)
    {
        case 1:displayCollege();
            break;
        case 2:displayStudent();
            break;
        case 3:displayExamForm();
            break;
        case 4:displayExamSchedule();
            break;
        case 5:displayResults();
            break;
        case 6:mainMenu();
            break;
    }
}
void displayCollege()
{
    cout << "Enter college id: " << endl;
    int id;
    cin >> id;

    College college = colleges[id];
    college.display();
}
void displayStudent()
{
    cout << "Enter student id: " << endl;
    int id;
    cin >> id;

    Student student = students[id];
    student.display();
}
void displayExamForm()
{
    cout << "Enter exam form id: " << endl;
    int id;
    cin >> id;

    ExamForm examForm = examForms[id];
    examForm.display();
}

void displayExamSchedule()
{

}
void displayResults()
{

}
//////////////////////////////////////END OF DISPLAY MENU


/////////////////////////////////////////////////////////////////ENTRY
void entryMenu()
{

    cout << setw(30) << internal << "Entry Menu" << endl;
    cout << endl;


    //ENTRY MENU
    cout << "1. COLLEGE" << endl;
    cout << "2. STUDENT" << endl;
    cout << "3. EXAM" << endl;
    cout << "4. RESULT" << endl;
    cout << "5. BACK TO PREVIOUS MENU" << endl;

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:enterCollege();
        break;
    case 2:enterStudent();
        break;
    case 3:enterExamForm();
        break;
    case 4:enterResults();
        break;
    case 5:
        mainMenu();
        break;

    default:
        cout << "Option not recognized" << endl;
        break;
    }
}

void enterStudent()
{
    string date;
    string studentName, fatherName, address, city, state, zipcode, stdCode, contactNumber, stream, degree;
    int studentID;

    cout << setw(30) << right << "<0> - EXIT" << endl;

    cout << "DATE- " << endl;
    cin >> date;
    cout << "STUDENT ID- " << endl;
    cin >> studentID;
    cout << "STUDENT NAME- " << endl;
    cin >> studentName;
    cout << "FATHER NAME- " << endl;
    cin >> fatherName;
    cout << "ADDRESS- " << endl;
    cin >> address;
    cout << "CITY- " << endl;
    cin >> city;
    cout << "STATE- " << endl;
    cin >> state;
    cout << "ZIP CODE- " << endl;
    cin >> zipcode;
    cout << "CONTACT NO.- " << endl;
    cin >> contactNumber;
    cout << "STD CODE- " << endl;
    cin >> stdCode;
    cout << "STUDENT STREAM- " << endl;
    cin >> stream;
    cout << "STUDENT DEGREE- " << endl;
    cin >> degree;

    char choice;
    cout << endl;
    cout << "DO YOU WANT TO SAVE THE RECORD? (Y/N)" << endl;
    cin >> choice;

    Student studentEntry(date, studentID, studentName, fatherName, address, city, state, zipcode, contactNumber, stdCode, stream, degree);


    switch (choice)
    {
    case 'Y':
        students.insert(pair<int, Student>(studentID, studentEntry));
        entryMenu();
        break;

    case 'N':
        entryMenu();
        break;

    default:
        cout << "Option not recognized" << endl;
        entryMenu();
    }



    students.insert(pair<int, Student>(studentID, studentEntry));

}
void enterCollege()
{
    //COLLEGE ENTRY 

    cout << setw(30) << right << "<0> - EXIT" << endl;

    string date;
    int collegeID;
    string name, location, stream, degree1, degree2;

    cout << setw(30) << right << "<0> - EXIT" << endl;

    cout << "DATE- " << endl;
    cin >> date;
    cout << "COLLEGE ID- " << endl;
    cin >> collegeID;
    cout << "NAME- " << endl;
    cin >> name;
    cout << "LOCATION- " << endl;
    cin >> location;
    cout << "STREAM- " << endl;
    cin >> stream;
    cout << "DEGREE I- " << endl;
    cin >> degree1;
    cout << "DEGREE II- " << endl;
    cin >> degree2;

    College collegeEntry(date, collegeID, name, location, stream, degree1, degree2);

    cout << endl;
    cout << "DO YOU WANT TO SAVE THE RECORD? (Y/N)" << endl;
    int choice;
    cin >> choice;

    switch (choice)
    {
    case 'Y':
        colleges.insert(pair<int, College>(collegeID, collegeEntry));
        entryMenu();
        break;

    case 'N':
        entryMenu();
        break;

    default:
        cout << "Option not recognized" << endl;
        entryMenu();
    }

    

}
void enterExamForm()
{
    int studentID;
    string date;
    int examFormID;
    string studentName, fatherName, address, stream, degree;
    //EXAM FORM ENTRY

    cout << setw(30) << right << "<0> - EXIT" << endl;
    cout << "ENTER THE STUDENT ID- " << endl;
    cin >> studentID;
    cout << "DATE- " << endl;
    cin >> date;
    cout << "EXAM FORM ID- " << endl;
    cin >> examFormID;
    cout << "NAME- " << endl;
    cin >> studentName;
    cout << "FATHER NAME- " << endl;
    cin >> fatherName;
    cout << "ADDRESS- " << endl;
    cin >> address;
    cout << "STREAM- " << endl;
    cin >> stream;
    cout << "DEGREE- " << endl;
    cin >> degree;


    ExamForm ExamFormEntry(studentID, date, examFormID, studentName, fatherName, address, stream, degree);

    cout << endl;
    cout << "DO YOU WANT TO SAVE THE RECORD? (Y/N)" << endl;
    int choice;
    cin >> choice;

    switch (choice)
    {
        case 'Y':
            examForms.insert(pair<int, ExamForm>(studentID, ExamFormEntry));
            entryMenu();
            break;

        case 'N':
            entryMenu();
            break;

        default:
            cout << "Option not recognized" << endl;
            entryMenu();
    }


}

void enterResults()
{

}
/////////////////////////////////////////////////////////////////////END OF ENTRY MENU



//////////////////////////////////////////////////////////////////ENQUIRY MENU
void enquiryMenu()
{

    cout << setw(30) << internal << "Enquiry Menu" << endl;
    cout << endl;

    cout << "1. COLLEGE" << endl;
    cout << "2. STUDENT" << endl;
    cout << "3. BACK TO PREVIOUS MENU" << endl;

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1://collegeEnquiry();
        break;
    case 2://studentEnquiry();
        break;
    case 3:
        mainMenu();
        break;
    default:
        cout << "Option not recognized" << endl;
        break;
    }
}

void collegeEnquiry()
{

}
void studentEnquiry()
{

}

//////////////////////////////////////////////////////////END OF ENQUIRY MENU


//////////////////////////////////////////////////////////PERFORMANCE MENU
void performanceMenu()
{
    cout << setw(30) << internal << "Performance Menu" << endl;
    cout << endl;


    cout << "1. ANNUAL REPORT" << endl;
    cout << "2. FOUNDATION" << endl;
    cout << "3. BACK TO PREVIOUS MENU" << endl;

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:annualReport();
        break;
    case 2:foundation();
        break;
    case 3:
        mainMenu();
        break;
    default:
        cout << "Option not recognized" << endl;
        break;
    }
}

void annualReport()
{
    int topN;
}


void foundation()
{

}


//////////////////////////////////////////////////////////END OF PERFORMANCE MENU


////////////////////////////////////////////////////////////MODIFICATION MENU

void modificationMenu()
{

    cout << setw(30) << internal << "Modification Menu" << endl;
    cout << endl;

    int choice;


    cout << "1. MODIFY COLLEGE" << endl;
    cout << "2. MODIFY STUDENT" << endl;
    cout << "3. BACK TO PREVIOUS MENU" << endl;

    cin >> choice;

    switch (choice)
    {
    case 1:modifyCollege();
        break;
    case 2:modifyStudent();
        break;
    case 3:
        mainMenu();
        break;
    default:
        cout << "Option not recognized" << endl;
        break;
    }
}

void modifyCollege()
{
    int collegeID;
    cout << "Enter college id of the college you want to modify" << endl;
    cin >> collegeID;


}
void modifyStudent()
{
    int studentID;
    cout << "Enter student id of the student you want to modify" << endl;
    cin >> studentID;
}

////////////////////////////////////////////////////////////END OF MODIFICATION MENU

