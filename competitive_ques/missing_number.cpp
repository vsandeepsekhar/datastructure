
#include <iostream>

using namespace std;

int missing_number(int *a, int n){
  int sum_nat = 0;
  int sum = 0;//This formuula
  sum_nat = ((n+1)*(n+2)/2);

  for(int i=0;i<n;i++){
    sum_nat -= *(a+i);
  }

  return (sum_nat);
}



int main(){
  int a[] = {1,2,4,5,6};
  int miss_n =0;
  int n =0;

  n = sizeof(a)/sizeof(int);

  miss_n = missing_number(a,n);

  cout<<"Missing number: "<<miss_n<<endl;
  
  return 0;
}
