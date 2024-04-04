#include<iostream>
using namespace std;
class person{
    string name;
    int age;
    public:
    void get_data(){
        cout<<"Enter the name of the person: "<<endl;
        getline(cin, name);
        cout<<"Enter the age of "<<name<<":";
        cin>>age;        
    }
    void put_data(){
        cout<<endl<<"Name of the person: "<<name<<endl;
        cout<<"Age of "<<name<<": "<<age<<endl;
    }
};
int main(){
    person wafi;
    wafi.get_data();
    wafi.put_data();

    return 0;
}
