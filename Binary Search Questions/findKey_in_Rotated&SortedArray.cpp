#include <iostream>
using namespace std;

//Search a key in a rotated and sorted array

//1st finding index of pivot element (to get a start of 2nd rotated array)
int searchpivot(int arr[],int n){
	
	int start=0;
	int end=n-1;
	
	int mid=(start + (end-start)/2);
	
	while(start<end){
		
		if(arr[mid]>arr[0]){
			
			start=mid+1;
		}
		else(arr[mid]<arr[0]);{
			
			end=mid;
		}
		mid=(start + (end-start)/2);
	}
	return start; //returns index of pivot element
}

// searching for key in 2 lines and then applying binary search
int searchkey(int arr[],int n,int key){
	
	int pivot = searchpivot(arr,6); //takes index of pivot element
	
	if(arr[pivot]<= key <=arr[n-1]){
		//if key present then goes to 2nd line of rotated array
		
		int start=pivot;
		int end=n-1;
		int mid=(start + (end-start)/2);
		
		//applying binary search to find key
		while(start<=end){
			if (arr[mid]==key){
			   cout<<"yes present in index :"<< mid;
			   return mid;
		    }
		
		    else if(arr[mid]>key){ 
			  end=mid-1;
		    }
		    else{
			   start=mid+1; 
		    }
		
		    mid=(start + (end-start)/2);
		}
		
	}
	else (arr[0]<=key<=arr[pivot-1]);{
		//if key is present here, wil go to 1st line of rotated array
		int start=0;
		int end=(pivot-1);
	    int  mid=(start + (end-start)/2);
	    
	    // applying binary search to find index of key
	    while(start<=end){
	    	if (arr[mid]==key){
	    	   cout<<"yes present in index :"<< mid;
		       return mid;
		    }
		
		    else if(arr[mid]>key){ 
			   end=mid-1;
		    }
		    else{
			   start=mid+1; 
		    }
		
	     	mid=(start + (end-start)/2);
		}
	    
	}
	
			
}

int main(){
	
	int arr[6]={7,8,9,1,2,3};
	//there are 2 lines in array
	// 1st line has 7,8,9
	//2nd line has 1,2,3
	
	int key;
	cin>>key;
	searchkey(arr,6,key);
}
