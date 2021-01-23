
#include<iostream>


using namespace std;

int main(){
   int n =5;
   int res;

   res =1;
   for(int i=0;i<=n;i++) {
     if(i!= n){
     cout<<"Multiplying : "<<res<<"with: "<<(n-i)<<endl;
     res = res*(n-i);
     }
     else {
       break;
     }

   }

   cout<<"result is : "<<res;
   return 0;
}
