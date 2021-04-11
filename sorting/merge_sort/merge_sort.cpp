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
  
  for(i=0;i<n1;i++){
  cout<<"After calling !..Inside loop"<<endl;
    L[i] = arr[first + i];
  }

  for(j=0;j<n2;j++){
   R[j] = arr[mid+ 1+ j];
  }

  i=0;
  j=0;
  k= first;

  cout<<"Left Array"<<endl;
  display(L, n1);
  cout<<"Right Array"<<endl;
  display(R, n2);

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
  
    display(arr,last);
}

void mergesort(int arr[], int first, int last){
  int mid;
  if(first >= last){
  	return; //recursive return
  }
  cout<<"Inside Mergesort"<<endl;
  mid = first + (last - first)/2;
  //mergesort(arr,first, (mid-1));
  //mergesort(arr,mid, last);
  mergesort(arr,first, mid);
  mergesort(arr,mid+1, last);
  merge_two_sub_arrays(arr, first, mid, last);
}

int main(){
	
  int arr[] = {12,11,13,5,8,7,6,5,10,1235698};
  int first, last, mid;
  int size =0;
  size = sizeof(arr)/sizeof(int); 
  first = 0;
  last  = size -1;
  mid =0; 
  // mid = first + (last - first)/2;

  // cout<<"before calling !"<<endl;
  // merge_two_sub_arrays(arr, first, mid, last);
  mergesort(arr, first, last);
  display(arr,size);
  return 0;
}

