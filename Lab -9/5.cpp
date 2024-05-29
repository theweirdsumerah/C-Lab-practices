#include<iostream>
using namespace std;
class Vehicle {
public:
	void drive(){
		cout << "new car";
	}
};
class car : public Vehicle{
public:
	void drive(){
		cout << "repair car";
	}
};
int main(){
	car ob;
	ob.drive();
	system("pause>0");
}
