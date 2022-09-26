#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int x, tempX, reverse=0;
    
    cin >> x;
    tempX = x;
    cout << "tempX: "<<tempX<<endl;
    while(tempX > 0){
        reverse += tempX % 10;
        tempX /= 10;
        if(tempX > 0) reverse *= 10;
        cout << reverse <<endl;
    }
    if(reverse == x){
        cout <<"true\n";
        return true;
    }
    else return false;

    return 0;
}