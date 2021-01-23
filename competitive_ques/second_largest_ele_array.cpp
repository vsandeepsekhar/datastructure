// This code find the second largest number in the array



#include <iostream>

using namespace std;

int second_largest(int a[5]){

  int lar_2 = 0;
  int lar = 0;
  for(int i=0;i<5;i++){
    if(a[i] > lar){
	    lar_2 = lar;
	    lar = a[i];
	    cout<<"Largest is : "<<lar<<endl;
    }
    else {
	    if(a[i] > lar_2){
		    lar_2 = a[i];
		    cout<<"second Largest: "<<lar_2<<endl;
	    }
    }
  }
  return lar_2;
}


int main()
{
   int p[5] = {5,89,4,0,98};
   cout<<"printing Array"<<endl;
   for(int i=0; i<5;i++){
     cout<<", "<<p[i];
   }
   cout<<endl;
   int q = 0;
   q = second_largest(p);
   cout<<"Second largest element: "<<q<<endl;
   return 0;
}
