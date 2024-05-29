#include<iostream>
using namespace std;
class parent{
    protected:
    int x=1;
};
class child: protected parent{
    public:
    void data(){
        cout<<x;
    }
};
int main(){
    child ob;
    ob.data();

    return 0;
}