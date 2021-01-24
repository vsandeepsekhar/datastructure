#include <iostream>

using namespace std;

int duplicate(int arr[]){

  static int freq[5];
  int res =0;

  for(int i=0;i<=5;i++){
    freq[arr[i]] = freq[arr[i]] + 1;
    if(freq[arr[i]] > 1) {
      res = arr[i];
      for(int j=0;j<5;j++){
        cout<<freq[j]<<",";
      }
      break;
    }
    else 
     continue;
  }
  return res;
}

int main(){
  int dcate;
  int a[] = {2,3,4,1,5,1};
  dcate = duplicate(a);

  cout<<"Most duplicate number: "<<dcate;

  return 0;
}




