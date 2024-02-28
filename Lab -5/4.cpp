#include<iostream>
using namespace std;
class card{
    string title, author;
    int BookNo;

public:
    void store(){
        cout<<"Enter the Title of books: ";
        cin>>title;
        cout<<"Enter the Name of Author: ";
        cin>>author; 
        cout<<"Enter the Number of books in hand: ";
        cin>>BookNo;
    }
    void display(){
        cout<<"Title of the book: "<<title<<endl;
        cout<<"Name of author: "<<author<<endl;
        cout<<"Number of Books in hand: "<<BookNo<<endl;
    }

};
int main(){
    card n;
    n.store();
    n.display();

    return 0;
}

