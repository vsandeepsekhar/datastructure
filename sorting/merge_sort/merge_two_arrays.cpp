#include <iostream>
using namespace std;


void display(int arr[],int size){
  cout<<endl;
  for(int i=0;i<size;i++){
    cout<<" "<<arr[i];
  }
  cout<<endl;
}

void merge_two_sub_arrays(int arr[], int first, int mid, int last){
  cout<<"After calling !"<<endl;
  int i, j, n1, n2, k;

  n1 = (mid - first) +1 ;
  n2 = (last - mid); 
  int L[n1];
  int R[n2];
  //int arr[] = {12,11,13,5,6,7,8};
//  int arr[7];

//  int L[] = {12,11,13};
//  int R[] = {5,6,7,8};
//  
//
//  n1 = 3;
//  n2 = 4;

  
  for(i=0;i<n1;i++){
  cout<<"After calling !..Inside loop"<<endl;
    L[i] = arr[i];
  }

  for(j=0;j<n2;j++){
   R[j] = arr[mid+j];
  }

  i=0;
  j=0;
  k=0;

  cout<<"Left Array"<<endl;
  display(L, 3);
  cout<<"Right Array"<<endl;
  display(R, 4);

  while(i<n1 && j<n2){
      if(L[i] < R[j]){
        cout<<"Comparing "<<L[i]<<"with "<<R[j]<<endl;
        //cout<<"if case"<<endl;
        arr[k] = L[i];
        i++; 
      }
      else {
       cout<<"Comparing "<<L[i]<<"with "<<R[j]<<endl;
       //cout<<"else case"<<endl;
       arr[k] = R[j];
       j++;
      }
      k++;
    }
    
   while(i < n1){
     cout<<"Pushing "<<L[i]<<" in Array"<<endl;
     arr[k] = L[i];
     i++;
     k++;
   }
  
   while(j < n2){
     cout<<"Pushing "<<R[j]<<" in Array"<<endl;
     arr[k] = R[j];
     j++;
     k++;
   }
  
    display(arr,7);
}

int main(){
//  int i, j, n1, n2, k;
  int arr[] = {12,11,13,8,7,6,5};
  int first, last, mid;
  //int arr[7];

//  int L[] = {12,11,13};
//  int R[] = {5,6,7,8};
  

//  n1 = 3;
//  n2 = 4;
//  i=0;
//  j=0;
//  k=0;
//  cout<<"Left Array"<<endl;
//  display(L, 3);
//  cout<<"Right Array"<<endl;
//  display(R, 4);
  first = 0;
  last  = 7;
  mid =0; 
  mid = first + (last - first)/2;

  cout<<"before calling !"<<endl;
  merge_two_sub_arrays(arr, first, mid, last);

  return 0;
}

