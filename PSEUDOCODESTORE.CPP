//c++ program to store value entered by user
#include <iostream>
using namespace std;
int main() {
int i,j,k;
// This array can store up to 12 elements(2*3*2)
int test[2][3][3]={{{(1,2,3),
                     (4,5,6),
                     (7,8,9)
},
                     (7,8,9),
                     (10,11,12),
                     (11,12,13)
}
};
//displaying the values with proper index
for(int i=0;i<2;++i){
for(int j=0;j<3;++j){
for(int k=0;k<3;++k){
cout<<"test["<<i<<"]["<<j<<"]["<<k<<"]="<<test[i][j][k]<<endl;
       }
    }
 };
return 0;
}