#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int anyBaseToDecimal(int number, int base){
    int answer=0, multiplicationFactor=1;
    while(number>0){
        int rem = number%10;
        answer+=rem*(multiplicationFactor);
        multiplicationFactor*=base;
        number = number/10;
    }
    return answer;
}

int decimalToAnybase(int number, int base){
    int answer=0, multiplicationFactor=1;
    while(number>0){
        int rem = number%base;
        answer+=rem*(multiplicationFactor);
        multiplicationFactor*=10;
        number = number/base;
    }
    return answer;
}
int main(){
    int number, baseInitial, baseTarget;
    cin>>number>>baseInitial>>baseTarget;
    int decimalValue = anyBaseToDecimal(number, baseInitial);
    int finalBaseValue = decimalToAnybase(decimalValue, baseTarget);
    cout<<finalBaseValue;
}