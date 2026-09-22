#include <iostream>
#include <string>
using namespace std;

struct Student {
	int rollNo;
	string name;
	float marks;
};

int main() {
	//declare student variable
	Student s;
	//input roll number, full name, marks
	cout << "Enter the student's roll number: ";
	cin >> s.rollNo;
	cout << "Enter the student's full name: ";
	getline(cin >> ws, s.name);
	cout << "Enter the student's marks: ";
	cin >> s.marks;

	//display all details
	cout << endl << "Student details:" << endl;
	cout << "Roll number: " << s.rollNo << endl;
	cout << "Name: " << s.name << endl;
	cout << "Marks: " << s.marks << endl;

	return 0;
}
