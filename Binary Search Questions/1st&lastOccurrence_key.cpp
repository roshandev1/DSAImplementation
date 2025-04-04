#include <iostream>
using namespace std;

//1st and last position of an element in sorted array
// Binary Search Algorithmaa

// to find first occurrence(index) of key
int firstOccurrence(int arr[],int n,int key){
	
	int start=0;
	int end=n-1;
	
	int mid=(start +(end-start)/2 );
	
	int ans=-1;
	
	while(start<=end){
		
		if(arr[mid]==key){
			ans=mid;
			end=mid-1; //to move left-side of array from mid index to get 1st occurrence
		}
		else if (arr[mid]<key){
			start=mid + 1; // to move to right-side of array from mid index
		}
		else{
			end=mid-1; // to move to left-side of array from mid index
		}
		mid=(start +(end-start)/2 );
	}
	return ans; //returns 1st occurrence(index)of key
	
}
// to find last occurrence(index) of key
int lastOccurrence(int arr[],int n,int key){
	
	int start=0;
	int end=n-1;
	
	int mid=(start +(end-start)/2 );
	
	int ans=-1;
	
	while(start<=end){
		
		if(arr[mid]==key){
			ans=mid;
			start=mid+1; //to move right-side of array from mid index to get last occurrence
		}
		else if (arr[mid]<key){
			start=mid + 1; // to move to right-side of array from mid index
		}
		else{
			end=mid-1; // to move to left-side of array from mid index
		}
		mid=(start +(end-start)/2 );
	}
	return ans; //returns 1st occurrence(index)of key
	
}

int main(){
	
	int arr[8]={0,0,1,1,2,2,2,2};
	int key;
	cin>>key;
	
	//pair <int,int> p;
	
	//p.first = firstOccurrence(arr,8,key);
	//p.second = lastOccurrence(arr,8,key);
	
	cout<< "1st occurrence of key is:"<< firstOccurrence(arr,8,key)<<endl;
	cout<< "last occurrence of key is:"<< lastOccurrence(arr,8,key);
	
}
