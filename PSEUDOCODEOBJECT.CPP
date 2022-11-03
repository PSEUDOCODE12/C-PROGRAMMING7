// class of addition
#include <iostream>
using namespace std;
class addition{
public:
int a;
int b;
int c;
int sum(){
    return(a+b+c);
}
int product(){
    return (a*b*c);
}
};
int main() {
  addition add1;
  int x,y,z,Add,multi;
  x = add1.a=22;
  y = add1.b=30;
  z = add1.c=50;
  Add=add1.sum();
  multi=add1.product();
  
    cout << "sum is:"<<Add<<endl;
    cout<< "product is:"<<multi<<endl;
    return 0;
}