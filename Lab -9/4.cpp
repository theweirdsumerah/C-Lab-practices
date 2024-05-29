#include<iostream>
using namespace std;
class Employee {
public:
	string w,s;
	void work(){
		cout << "Name: ";
		cin >> w;
	}
	void getSalary(){
		cout << "Salary: ";
		cin >> s;
	}
};
class HRmaneger : public Employee{
public:
	string w;
	void addEmployee(){
		cout << "New Employee: ";
		cin >> w;
	}
	void work(){
		addEmployee();
		getSalary();
		cout << "ID: " << w << endl << "salary:" << s;
	}
};
int main(){
	HRmaneger ob;
	ob.work();
	system("pause>0");
}
