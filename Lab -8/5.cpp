#include<iostream>
#include<cstring>
using namespace std;
class lowcase{    
    public:
    string lowercase = "sumerah";
};
class upcase : public lowcase{
    public: 
    string uppercase;
    int i,a;
    void convert(){
        for(i=0; i<lowercase.length(); i++){
            a = int(lowercase[i]);
            cout<<char(a-32);
        }
    }
};
int main(){
    lowcase w;
    upcase s;
    s.convert();
}