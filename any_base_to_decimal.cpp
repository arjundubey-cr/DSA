#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int number, base, multiplicationFactor=1;
    cin>>number>>base;
    int answer=0;
    while(number>0){
        int rem = number%10;
        answer+=rem*(multiplicationFactor);
        multiplicationFactor*=base;
        number = number/10;
    }
    cout<<answer<<"\n";
    
}