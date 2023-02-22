#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "Student.h"

using namespace std;

int main()
{
	Student student[5];
	string name;
	int grade;
	string highestName = student[0].getName();
	int highestGrade = student[0].getGrade();

	ofstream outfile("Report.txt");
	if (!outfile.is_open())
	{
		cout << "File not fount" << endl;
	}
	
	for (int i = 0; i <= 4; i++)
	{
		do {
			cout << "Enter name: ";
			cin >> name;
			student[i].setName(name);
		} while (name.empty() || name.find(' ') != string::npos || !isupper(name[0]));

		do {
			cout << "Enter grade: ";
			cin >> grade;
			student[i].setGrade(grade);
		} while (grade < 1 || grade > 100);

		if (student[i].getGrade() > highestGrade)
		{
			highestName = student[i].getName();
			highestGrade = student[i].getGrade();
		}
		outfile << name << "\t\t | \t\t" << grade << "%" << endl;
		system("cls");
	}

	cout << "Student info: " << endl;
	for (int j = 0; j <= 4; j++)
	{
		student[j].printInfo();
	}
	cout << "The highest student is: " << highestName << "\n"
		"With a grade of: " << highestGrade << "\n";


	return 0;
}
