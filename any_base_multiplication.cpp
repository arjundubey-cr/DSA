#include<iostream>
using namespace std;

#include<iostream>

using namespace std;

int anyBaseToDecimal(int number, int base) {
  int answer = 0, multiplicationFactor = 1;
  while (number > 0) {
    int rem = number % 10;
    answer += rem * (multiplicationFactor);
    multiplicationFactor *= base;
    number = number / 10;
  }
  return answer;
}

int decimalToAnybase(int number, int base) {
  int answer = 0, multiplicationFactor = 1;
  while (number > 0) {
    int rem = number % base;
    answer += rem * (multiplicationFactor);
    multiplicationFactor *= 10;
    number = number / base;
  }
  return answer;
}

int getProduct(int b, int n1, int n2){
     int number1, number2, sum = 0, finalVal = 0;
  number1 = anyBaseToDecimal(n1, b);
  number2 = anyBaseToDecimal(n2, b);
  sum = number2 * number1;
  finalVal = decimalToAnybase(sum, b);
  return finalVal;

}

int main(){
    int b, n1, n2;
    cin>>b>>n1>>n2;
    cout<<getProduct(b,n1,n2)<<endl;
}