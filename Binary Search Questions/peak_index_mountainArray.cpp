#include <iostream>
using namespace std;

//PEAK index of mountain array
//using Linear search
/*
int peakIndex(int arr[],int n){
	
	int max=INT_MIN;
	int i=0;
	int ans;
	while(i<n){
		
		if(max<arr[i]){
			max=arr[i];
			ans= i;
		}
		i++;		
	}
	return ans;
}

int main(){
	
	int arr[4]={0,3,2,1};
	
	cout<<"peak index:"<< peakIndex(arr,4);
}
*/
//Using binary search

int peakIndex(int arr[],int n){
	
	int start=0;
	int end=n-1;
	
	int mid=(start+(end-start)/2);
	
	while(start<=end){
		
		if(arr[mid]<arr[mid+1]){
			start=mid+1; //here going to right side array, to get peak value
		}
		else(arr[mid]>arr[mid+1]);{
			
			end=mid; //here going to left side array with end as previous mid index, so that to include that value(of mid index)
	    }
		
		
		mid=(start+(end-start)/2);
	}
	return start; //returns index of peak value
}

int main(){
	
	int arr[4]={3,4,5,1};
	
	cout<<"peak index:"<< peakIndex(arr,4);
}
