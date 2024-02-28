#include<iostream>
using namespace std;
void primechk(int a, int b){
    int p, i;
    for(i=a; i<=b; i++){
        if(i==0 || i==1)
            continue;
            p=1;
        for(int j=2; j<=i/2; j++){
            if(i%j==0){
                p=0;
                break;
            }
        }
        if(p!=0){
            cout<<i<<", ";
        }
    }
  
}
int main(){
	int x,y;
	cout << "Insert lower limit: ";
	cin >> x;
	cout << "Insert upper limit: ";
	cin >> y;
    primechk(x, y);
	return 0;
}