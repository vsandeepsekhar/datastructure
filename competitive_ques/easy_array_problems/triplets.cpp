/********************************
 *  The problem is to calculate the number of triplets 
 *  in a given array. Here is the brute force solution.
 *  Please Optimize if you can.
 *********************************/

#include<iostream>

using namespace std;

int countTriplet(int arr[], int n)
{
  int count = 0;
  int sum = 0;
//Your code goes here
  for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++){
      if(i == j){
        //Do Nothing
      }
      else {
        //Do Something
        sum = arr[i] + arr[j];
        for(int k=0;k<n;k++){
          if(sum == arr[k]){
            cout<<arr[i]<<"and"<<arr[j]<<"Added to get"<<": "<<sum<<endl;
            count++;
          }
        }
      }
    }
    
  cout<<"count = "<<count<<endl;
   return count; 
}

int main(){

  int arr[] = {1,2,3,5,8,4,7};
  int size = sizeof(arr)/sizeof(int);

  countTriplet(arr,size);

  return 0;
}
