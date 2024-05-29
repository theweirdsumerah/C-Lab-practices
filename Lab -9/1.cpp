#include<iostream>
using namespace std;
class A{
    public:
    int n1 = 1;
};
class B{
    public:
    int n2 = 2;
};
class C : public A, public B{
    public:
    int n3 = n1 + n2;
};
int main(){
    C w;
    cout<<w.n3;
}