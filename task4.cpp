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

//function to display student details
void displayStudent(const Student* s) {
	cout << endl << "Student details:" << endl;
	cout << "Roll number: " << s->rollNo << endl;
	cout << "Name: " << s->name << endl;
	cout << "Marks: " << s->marks << endl;
}

//function to update marks of student
void updateMarks(Student* s, float newMarks) {
	s->marks = newMarks;
}

int main() {
	//create student record dynamically using new
	Student* s = new Student{};
	float newMarks;

	//check that s is not nullptr before accessing its fields
	if (s != nullptr) {
		//input roll number, full name, marks
		cout << "Enter the student's roll number: ";
		cin >> s->rollNo;
		cout << "Enter the student's full name: ";
		getline(cin >> ws, s->name);
		cout << "Enter the student's marks: ";
		cin >> s->marks;

		//display student details using function
		displayStudent(s);

		//get new marks from user and update student record
		cout << endl << "Enter new marks for the student: ";
		cin >> newMarks;
		updateMarks(s, newMarks);

		//display student details again after update
		displayStudent(s);
	}
	else
		cout << "Error" << endl;

	//release memory and update the student pointer to nullptr
	delete s;
	s = nullptr;

	return 0;
}
