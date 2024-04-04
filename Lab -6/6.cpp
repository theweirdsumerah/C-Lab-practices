#include<iostream>
using namespace std;
class Library{
    string title, author;
    int year;
    public: 
    void Setdata(){
        cout<<"Enter Title of the book: ";
        getline(cin, title);
        cout<<"Enter name of the author of "<<"'"<<title<<"':";
        getline(cin, author);
        cout<<"Enter the publication year of "<<"'"<<title<<"':";
        cin>>year;
        cin.ignore();
    }
    void getdata(){
        cout<<endl;
        cout<<"Title of the book: "<<title<<endl;
        cout<<"Name of author: "<<author<<endl;
        cout<<"Publication year: "<<year<<endl;
    }
};
int main(){
    Library Book1, Book2, Book3;
    Book1.Setdata();
    Book2.Setdata();
    Book3.Setdata();
    Book1.getdata();
    Book2.getdata();
    Book3.getdata();

    return 0;
}