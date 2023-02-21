#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string name;
	int grade;

public:
	//constructors
	Student() : name(""), grade(0) {}
	Student(string n, int g) : name(n), grade(g) {}

	//Getters
	string getName() const
	{
		return name;
	}
	int getGrade() const
	{
		return grade;
	}

	//Setters
	void setName(string n)
	{
		name = n;
	}
	void setGrade(int g)
	{
		grade = g;
	}

	//function
	void printInfo() const
	{
		cout << "____________________________________________________" << endl;
		cout << name << "\t\t | \t\t" << grade << "%" << endl;
		cout << "____________________________________________________" << endl;
	}
};

