/*
The problem statement is to find the maximum number of 1's in a sequence provided that if we flip any one zero will give us the maximum of that sequence.
For Eg. The Array arr[]={1,1,0,1,1,1,1,0,1,1} if we can flip the first 0 at index location 2 then we can make this as 7
*/


#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int sequenceOnesTotal =0;
	int arr[]={1,1,0,1,1,1,1,0,1,1};//Input
	std::vector<int> myList;
	int len;
	
	std::cout << "Size:"<< sizeof(arr)<< std::endl;
	for(int i=0;i< sizeof(arr)/4;i++){
	    if(arr[i] == 1){
	        sequenceOnesTotal++;
	        if(sequenceOnesTotal >0 && i==((sizeof(arr)/4) -1)){
	            myList.push_back(sequenceOnesTotal);
	        }
	    }
	    else {
	        if(sequenceOnesTotal >0){
	          myList.push_back(sequenceOnesTotal);    
	        }
	        myList.push_back(arr[i]);
	        sequenceOnesTotal =0;
	    }
	}
	
	for(auto x: myList)
	  std::cout<<x<<"\t";
	  
	std::cout<<"size of myList: "<<myList.size()<<endl;
	int maxLength =0;
	
	for(int j=0; j< myList.size(); j=j+2){
	    
	    //std::cout<<"Element at List Index: "<<j<<"Value: "<<myList[j]<<endl;
	    len = myList[0];//Always assign the first element   
	    if((j+1) < myList.size()){
	         len += (myList.at(j+1) == 0) ? 1:0;
	         std::cout<<"Adding "<<myList.at(j+1)<<"to: "<<len<<endl;
	    }
	    if((j+2) < myList.size()){
	         len += myList.at(j+2);
	         std::cout<<"Adding "<<myList.at(j+2)<<"to: "<<len<<endl;
	    }
	    
	    if(len > maxLength) {
	        maxLength = len;
	    }
	    
	}
	std::cout<<"MaxLength : "<<maxLength<<endl;
  	return 0;
}
