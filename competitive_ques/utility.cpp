#include <iostream>

using namespace std;

void squareroot(){
   int x=0;
    cout<<"Enter the number for squareroot:";
    cin>>x;
    int i = 0;
    int res =0;

    while(res <= x){
            if((x == 1) || (x==2) || (x==0)){
              cout<<"square root is: "<< x<<endl;
              exit(0);
            }
            i++;
            res = i*i;
            cout<<"square is "<<res<<endl;
            cout<<"Trying for i="<<i<<endl;

    }

    cout<<"square root is: "<< (i-1);
}
int fibonaci_generator(long long int n){
 long long int i = 0;
 long long int j = 1;
 long long int k =0;
 long long int temp =0;

 while (k<n){
        if (i==0){
          cout<<i<<", ";
          cout<<j<<", ";
        }
        else {
            cout<<j<<", ";
        }
    temp  = j;
    j = i+j;
    i = temp;
    k++;
 }
}
int  nth_fibonaci_number(long long int n){
    if(n<=1)
        return n;
    else
      return (nth_fibonaci_number(n - 1) + nth_fibonaci_number(n-2));
}
int main()
{
  squareroot();
  fibonaci_generator(20);
  int p;
  //Employes brute force method
  p = nth_fibonaci_number(20);
  cout<<"Return nth Fibonaci number :"<<p;
  return 0;
}
