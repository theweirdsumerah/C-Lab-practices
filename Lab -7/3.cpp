#include<iostream>
using namespace std;
class Employee{
    string name, address;
    double salary, join_year;
    public:
    void setInfo(){
        cout<<"Enter name of employee: ";
        getline(cin, name);
        cout<<"Enter address of "<<name<<": ";
        getline(cin, address);
        cout<<"Enter joining year of "<<name<<": ";
        cin>>join_year;
        cout<<"Enter salary of "<<name<<": ";
        cin>>salary;
        cin.ignore();
    }
    void getInfo(){
        cout<<name<<"\t"<<join_year<<"\t\t"<<address<<"\t"<<salary<<"\t"<<endl;
    }
};
int main(){
    Employee emp1, emp2, emp3;
    emp1.setInfo();
    emp2.setInfo();
    emp3.setInfo();
    cout<<"Name\tYear of joining\tAddress\tSalary "<<endl;
    emp1.getInfo();
    emp2.getInfo();
    emp3.getInfo();
    return 0;
}