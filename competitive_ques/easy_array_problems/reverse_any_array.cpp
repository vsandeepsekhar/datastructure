#include <iostream>

using namespace std;
 void reverse_array(int array_val[], int st_ar, int end_ar);
 void print_arr(int array_val[], int st_ar, int end_ar);

  void reverse_array(int array_val[], int st_ar, int end_ar){
    int start_arr;
    int end_arr;
    int custom;
    start_arr = st_ar;
    end_arr = end_ar;
    int temp =0;
    cout<<"Entering the while loop"<<endl;
    cin>> custom;
    print_arr(array_val, st_ar, end_ar);

    while(start_arr <= end_arr) {
    temp = array_val[end_arr];
    array_val[end_arr] = array_val[start_arr];
    array_val[start_arr] = temp;
    print_arr(array_val, st_ar, end_ar);
    cin>> custom;
    start_arr = start_arr+1;
    end_arr = end_arr -1;
    cout<<"start_arr: "<<start_arr<<endl;
    cout<<"end_arr: "<<end_arr<<endl;
    }
    cout<<"exiting the while loop"<<endl;
    //Print function
    print_arr(array_val, st_ar, end_ar);
  }
  void print_arr(int array_val[], int st_ar, int end_ar){
      cout<<"Printing Array"<<endl;
      for(int i=st_ar;i<=end_ar;i++){
        cout<<"  "<<array_val[i];
      }
      cout<<endl;
  }


int main()
{
    //driver function
    int array_val[] = {1,2,3,4,5,6};
    int start_arr;
    int end_arr;

    start_arr = 0;
    end_arr = ((sizeof(array_val)/sizeof(int))-1);
    reverse_array(array_val,start_arr,end_arr);


    return 0;
}
