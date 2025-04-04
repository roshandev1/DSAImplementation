#include <iostream>
using namespace std;

//Find Pivot element (we consider lowest element)in array

int pivot(int arr[],int n){
	
	int start=0;
	int end=n-1;
	
	int mid=(start + (end-start)/2);
	
	while(start<end){
		
		if(arr[mid]>arr[0]){
			
			start=mid+1; // push to right-side of array till we get to 2nd line of array
		}
		else(arr[mid]<arr[0]);{
			
			end=mid; // push to left-side of array with mid-index, till we get pivot element
		}
		mid=(start + (end-start)/2);
	}
	return arr[start];// returns the pivot element; can also write arr[end]
}

int main(){
	
	int arr[6]={7,8,9,1,2,3}; 
	//there are 2 lines in array
	// 1st line has 7,8
	//2nd line has 1,2,3
	
	cout<<"pivot element: "<< pivot(arr,6);
}

