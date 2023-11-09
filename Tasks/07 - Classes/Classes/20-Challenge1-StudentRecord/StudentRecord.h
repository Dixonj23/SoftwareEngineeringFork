#pragma once
#include <iostream>
using namespace std;

class StudentRecord
{
private:
	string studentFirstName;
	string studentLastName;
	string fullName;			//Calculated as: studentFirstName + " " + studentLastName
	int studentID = 0;

	// Used to update the student full name property
	void updateFullName() {
		fullName = studentFirstName + " " + studentLastName;
	}

public:
	//Constructor
	StudentRecord(string firstName, string lastName, int ID) {
		studentFirstName = firstName;
		studentLastName = lastName;
		studentID = ID;
	}

	//Display details about the student in the terminal, including ID and full name
	void display() {
		cout << "Student Name = " << getFullName() << endl;
		cout << "Student ID = " << getID() << endl;
		
	}

	// *********************** Getters *********************** 

	//Returns copy of full name (as a string) - First name, followed by a space, followed by Last name
	string getFullName()	
	{
		updateFullName();
		return fullName;
	}

	//Returns a copy of the ID (as an integer)
	int getID()			
	{
		return studentID;
	}

	// *********************** Setters *********************** 

	//Update the first name
	void updateFirstName(string firstName)
	{
		studentFirstName = firstName;
		updateFullName();
	}

	//Update the last name
	void updateLastName(string lastName)
	{
		studentLastName = lastName;
		updateFullName();
	}
};

