#include <iostream>
using namespace std;

//Find Total no. of occurrences of 'key' in a sorted array
// Using binary search

//1st getting 1st occurrence
int firstOccurrence(int arr[],int n,int key){
	
	int start=0;
	int end=n-1;
	
	int mid=(start +(end-start)/2 );
	
	int ans=-1;
	
	while(start<=end){
		
		if(arr[mid]==key){
			ans=mid;
			end=mid-1;
		}
		else if (arr[mid]<key){
			start=mid + 1;
		}
		else{
			end=mid-1;
		}
		mid=(start +(end-start)/2 );
	}
	return ans;
	
}
//2nd getting last occurrence
int lastOccurrence(int arr[],int n,int key){
	
	int start=0;
	int end=n-1;
	
	int mid=(start +(end-start)/2 );
	
	int ans=-1;
	
	while(start<=end){
		
		if(arr[mid]==key){
			ans=mid;
			start=mid+1;
		}
		else if (arr[mid]<key){
			start=mid + 1;
		}
		else{
			end=mid-1;
		}
		mid=(start +(end-start)/2 );
	}
	return ans;
	
}
// 3rd getting total occurrences and returning the answer
int totaloccurrences(int arr[],int n, int key){
	
	int ans= ((lastOccurrence(arr,7,key) - firstOccurrence(arr,7,key))+1); //formula for total occurrence
	return ans;
}

int main(){
	
	int arr[7]={1,2,3,3,3,3,5};
	
	int key;
	cin>>key;
	cout<<"total occurrences:"<< totaloccurrences(arr,7,key);
}


