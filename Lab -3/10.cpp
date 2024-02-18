#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int x = 0;
    char i[100000];
    fgets(i,100000, stdin);

    for (int j = 1; i[j] != '\0'; j++)
        x++;

    cout << x;
    return 0;
}