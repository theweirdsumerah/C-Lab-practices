#include <iostream>
using namespace std;
int main(){
    int s, i, j, max=0, min;
    cout << "Enter value of s: ";
    cin >> s;
    cout<<"Enter the inputs: ";
    int a[s];
    for(i=0; i++ < s; )
        cin >> a[i];
    for(j=0; j++ < s; ){
        if (a[j] > max) max = a[j];
        if (a[j] < min) min = a[j];
    }
    cout << "Max: " << max << "\n" << "Min: " << min;

    return 0;
}