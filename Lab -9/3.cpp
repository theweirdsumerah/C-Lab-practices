#include<iostream>
using namespace std;
class Mammals{
    public:
    void mamget(){
        cout<<"I am mammal"<<endl;
    }
};
class MarineAnimals{
    public:
    void marget(){
        cout<<"I am a marine animal"<<endl;
    }
};
class BlueWhale : public Mammals, public MarineAnimals{
    public:
    void whaget(){
        cout<<"I belong to both the categories: Mammals as well as Marine Animals respectively"<<endl;
    }
};
int main(){
    Mammals a;
    MarineAnimals b;
    BlueWhale c;
    a.mamget();
    b.marget();
    c.whaget();
    c.mamget();
    c.marget();
}