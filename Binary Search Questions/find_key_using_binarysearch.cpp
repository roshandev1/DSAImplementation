#include <iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){ //initializing FUNCTION 
	
	int start=0;
	int end= (size -1);
	
	int mid=(start + end)/2; // can use (mid= (start + (end-start)/2)) -> to accomodate INT_MAX value
	
	while(start<=end){
		
		if (arr[mid]==key){
			return mid; //if key present in array, will return index value of key
		}
		
		else if(arr[mid]>key){ //to go to the left-side part of array from mid index 
			end=mid-1;
		}
		else{
			start=mid+1; //to go to the right-side part of array from mid index 
		}
		
		mid=(start+end)/2;
	}
	return -1; // if key not present, will return -1
}

int main(){
	
	int arr[6]= {1,2,3,4,5,6}; //initializing an array with 6 elements
	
	int key; 
	cin>>key; //taking input of KEY to be found
	
	int index= binarysearch(arr,6,key); //accessing function of binary search
	
	cout<<"index of key is:"<< index; 
}

