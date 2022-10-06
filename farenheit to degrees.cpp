// program to convert farenheit to degree celcius
#include <iostream>
using namespace std;
float c(int f);
int main(){
int f;
float celcius;
cout<<"enter the farenheit";
cin>>f;
celcius=c(f);
cout<<"the degree is"<<endl;
return 0;
}
float c(int f){
float celcius;
celcius =5/9*(-32);
return celcius;
}
