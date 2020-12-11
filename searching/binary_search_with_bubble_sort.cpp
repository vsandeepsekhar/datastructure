#include <iostream>

using namespace std;

int* bubble_sort (int b[10]){
    int i=0;int j=0;int temp =0;
    //a has to be static! Why ?
    //Because of The functions are stored in the stack memory, Once the function call is finished the memory allocation is removed in which case this function will return NULL to the calle
    static int a[10];
    int N= (sizeof(a)/sizeof(int));
    for(i=0;i<N;i++){
      a[i] = b[i];
    }
    for(i=0;i<N;i++)
    for(j=0;j<N-i;j++){
      if(a[j] > a[j+1]){
          temp = a[j+1];
          a[j+1] = a[j];
          a[j] = temp;
      }
    }
 //   for(i=0;i<N;i++){
   //     cout<<a[i]<<", ";
    //}
    return a;
}


int main()
{
    //int b[10] = {23,45,67,78,89,90,110,220,340,350};
    int b[10] = {45,23,78,89,67,90,340,110,220,350};
    //int a = bubble_sort (b);
    static int *c;
    int isFound=0;
    int a[10];

    int searchKey = 500;
    int mid =0;
    int high = 0;
    int low = 0;
    int i = 0;
    int nTry = 0;
    cout<<"Low is :"<<low<<endl;
    high = (sizeof(a)/sizeof(int));
    cout<<"High is: "<<high<<endl;
    mid = low + ((high - low)/2);
    cout<<"Mid is : "<<mid<<endl;

    c = bubble_sort(b);
    if(c== NULL){
        printf("Returned sorted array is null");
        exit(0);
    }
    for(i=0;i<10;i++){
        cout<<"The value of received array at: "<<i<<"is: "<<*(c+i)<<endl;
       // printf("The value received at array index a[%0i] is %0d",i,*(c+i));
        a[i] = *(c+i);
        //cout<<a[i]<<" ,";
    }

    //
    for(i=0; i<high;i++){
      if(searchKey == a[mid]){
        cout<<"Match Found\n";
        nTry++;
        cout<<"number of Tries: "<<nTry<<endl;
        isFound = 1;
        break;
      }
      if(searchKey > a[mid]){
            cout<<"SearchKey : "<<searchKey<<"is greater than"<<mid<<endl;
            low = mid+1;
            mid = low + ((high-low)/2);
            cout<<"=================="<<endl;
            cout<<"low is  : "<<low<<endl;
            cout<<"mid is  : "<<mid<<endl;
            cout<<"high is  : "<<mid<<endl;
            cout<<"=================="<<endl;
            nTry++;
      }
      else{
        cout<<"SearchKey : "<<searchKey<<"is less than"<<mid<<endl;
        high = mid-1;
        mid = low + ((high-low)/2);
        cout<<"=================="<<endl;
        cout<<"low is  : "<<low<<endl;
        cout<<"mid is  : "<<mid<<endl;
        cout<<"high is  : "<<high<<endl;
        cout<<"=================="<<endl;
        nTry++;
      }
    }
    if(~isFound)
      cout<<"Match Not Found: "<<"Number of Trys: "<<nTry<<endl;

    return 0;
}
