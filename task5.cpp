#include <iostream>
#include <string>
using namespace std;

struct Student {
	int rollNo;
	string name;
	float marks;
};

//function to display student details if student exists
void displayIfExists(const Student* s) {
	if (s != nullptr) {
		cout << "Student details:" << endl;
		cout << "Roll number: " << s->rollNo << endl;
		cout << "Name: " << s->name << endl;
		cout << "Marks: " << s->marks << endl;
	}
	else
		cout << "No record available" << endl;
}

int main() {
	//initialise Student pointer to nullptr
	Student* s = nullptr;

	//call the function before allocation
	cout << "Before allocation:" << endl;
	displayIfExists(s);

	//allocate a Student record
	s = new Student{};
	//check that s is not nullptr before accessing its fields
	if (s != nullptr) {
		//input roll number, full name, marks
		cout << endl << "Enter the student's roll number: ";
		cin >> s->rollNo;
		cout << "Enter the student's full name: ";
		getline(cin >> ws, s->name);
		cout << "Enter the student's marks: ";
		cin >> s->marks;
	}
	else
		cout << "Error" << endl;

	//call the function after allocation
	cout << endl << "After allocation:" << endl;
	displayIfExists(s);

	//release memory and update the student pointer to nullptr
	delete s;
	s = nullptr;

	//call the function after deletion
	cout << endl << "After deletion:" << endl;
	displayIfExists(s);

	return 0;
}
