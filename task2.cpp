#include <iostream>
#include <string>
using namespace std;

struct Student {
	int rollNo;
	string name;
	float marks;
};

int main() {
	//declare student variable and pointer to it
	Student s;
	Student* sptr = &s;

	//input roll number, full name, marks
	cout << "Enter the student's roll number: ";
	cin >> s.rollNo;
	cout << "Enter the student's full name: ";
	getline(cin >> ws, s.name);
	cout << "Enter the student's marks: ";
	cin >> s.marks;

	//check that sptr is not nullptr before accessing its fields
	if (sptr != nullptr) {
		//display all details using arrow operator
		cout << endl << "Student details:" << endl;
		cout << "Roll number: " << sptr->rollNo << endl;
		cout << "Name: " << sptr->name << endl;
		cout << "Marks: " << sptr->marks << endl;

		//update marks with new value given by user
		cout << endl << "Enter a new value for marks: ";
		cin >> sptr->marks;

		//display updated record 
		cout << endl << "Student details after update:" << endl;
		cout << "Roll number: " << sptr->rollNo << endl;
		cout << "Name: " << sptr->name << endl;
		cout << "Marks: " << sptr->marks << endl;
	}
	else
		cout << "Error" << endl;

	return 0;
}
