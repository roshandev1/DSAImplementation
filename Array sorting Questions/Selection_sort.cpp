#include <iostream>
using namespace std;

int sorting(int arr[],int n){
	
	for(int i=0;i<n-1;i++){
	// keep the 1 element of array and check it with remaining right-side elements
	 	
		int minindex=i; //initialising a minimum index to check other elements with it
		
		for(int j=i+1;j<n;j++){
		// checking for minimum element in the right-side of array	
		
			if(arr[minindex]>arr[j]){
				//if we get value less than chosen element;
				//we will keep saving the index of that min element till all are checked
				minindex=j;
			}
		}
		
		swap(arr[i],arr[minindex]); //swapping the min element with that 1 element which was kept for checking
	}
}

int main(){
	
	int arr[5]={64,25,12,22,11}; //unsorted array
	int n = sizeof(arr)/sizeof(arr[0]); //finding size of array "n"
	
	sorting(arr,n); //calling function "sorting"
	
	cout<<"Printing Sorted Array :"<<endl;
	
	for(int i=0;i<n;i++){
		
		cout<< arr[i]<<" ";
	}
}
