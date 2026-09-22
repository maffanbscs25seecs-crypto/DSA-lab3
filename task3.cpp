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

int main() {
	//create student record using new
	Student* s = new Student{};
	//check that s is not nullptr before accessing its fields
	if (s != nullptr) {
		//input roll number, full name, marks
		cout << "Enter the student's roll number: ";
		cin >> s->rollNo;
		cout << "Enter the student's full name: ";
		getline(cin >> ws, s->name);
		cout << "Enter the student's marks: ";
		cin >> s->marks;

		//display all details using arrow operator
		cout << endl << "Student details:" << endl;
		cout << "Roll number: " << s->rollNo << endl;
		cout << "Name: " << s->name << endl;
		cout << "Marks: " << s->marks << endl;
	}
	else
		cout << "Error" << endl;

	//release memory and update the student pointer to nullptr
	delete s;
	s = nullptr;

	return 0;
}
