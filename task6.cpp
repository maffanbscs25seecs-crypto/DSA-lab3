//Name: Muhammad Affan
//Registration number: 577327
//Section: BSCS15-E

#include <iostream>
#include <string>
using namespace std;

struct Student {
	int rollNo;
	string name;
	float marks;
};

//function to create a Student record but only if one doesn't already exist
Student* createStudent(Student* s) {
	Student* sptr;
	if (s == nullptr) {
		sptr = new Student{};
		//input roll number, full name, marks
		cout << "Enter the student's roll number: ";
		cin >> sptr->rollNo;
		cout << "Enter the student's full name: ";
		getline(cin >> ws, sptr->name);
		cout << "Enter the student's marks: ";
		cin >> sptr->marks;
	}
	else {
		cout << "A student record already exists" << endl;
		sptr = s;
	}
	return sptr;
}

//function to display student details if student exists
void displayIfExists(const Student* s) {
	if (s != nullptr) {
		cout << "Student details:" << endl;
		cout << "Roll number: " << s->rollNo << endl;
		cout << "Name: " << s->name << endl;
		cout << "Marks: " << s->marks << endl;
	}
	else
		cout << "No record exists" << endl;
}

//function to update marks of student
void updateMarks(Student* s) {
	if (s != nullptr) {
		float newMarks;
		//get new marks from user and update student record
		cout << "Enter new marks for the student: ";
		cin >> newMarks;
		s->marks = newMarks;
	}
	else
		cout << "No record exists" << endl;
}

void deleteStudent(Student* &s) {
	if (s != nullptr) {
		delete s;
		s = nullptr;
		cout << "Student record deleted" << endl;
	}
	else
		cout << "No record exists" << endl;
}

int main() {
	Student* s = nullptr;
	int choice;
	cout << "Welcome to Student Management Program" << endl;

	//display menu repeatedly until user chooses to exit
	do {
		cout << endl << "Menu:" << endl;
		cout << "1: " << "Create student record" << endl;
		cout << "2: " << "Display student record" << endl;
		cout << "3: " << "Update marks of student" << endl;
		cout << "4: " << "Delete student record" << endl;
		cout << "0: " << "Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		//handle invalid menu choices, assuming that user input is always an int
		while (choice < 0 or choice > 4) {
			cout << endl << "Invalid choice. Enter an integer from 0 to 4: ";
			cin >> choice;
		}

		cout << endl;
		//check what option user selected and call the appropriate function
		if (choice == 1)
			s = createStudent(s);
		else if (choice == 2)
			displayIfExists(s);
		else if (choice == 3)
			updateMarks(s);
		else if (choice == 4)
			deleteStudent(s);
	} while (choice != 0);

	//free memory
	delete s;
	s = nullptr;
	cout << "Program exited successfully" << endl;

	return 0;
}
