#include <iostream>
using namespace std;

// using FOR LOOP
/*
int insertionSort(int arr[],int n){
	//considering the 1st element as sorted
	
	for(int i=1;i<n;i++){
	// loop for rounds i.e Total rounds =(n-1)
		
		int temp=arr[i];
		
		int j=i-1;
		for(;j>=0;j--){
		// loop for comparing
			
			if(arr[j]>temp){
			// shifting to the right
				
				arr[j+1]= arr[j];
			}
			
			else{
				
				break;
			}
		}
		
		arr[j+1]=temp;// placing the element from unsorted array to the sorted array
	}	
}
*/

int insertionSort(int arr[],int n){
	
	for(int i=1;i<n;i++){
		
		int temp=arr[i];
		int j=i-1;
		
		while(j>=0 && arr[j]>temp){
			
			arr[j+1]=arr[j];
			j--;
		}
		
		arr[j+1]=temp;
	}
}

int main(){
	
	int arr[7]={10,1,7,4,8,2,11};
	
	int n= sizeof(arr)/sizeof(arr[0]);
	
	insertionSort(arr,n);
	
	cout<<"Printing Sorted Array :"<<endl;
	
	for(int i=0;i<n;i++){
		
		cout<<arr[i]<<" ";
		
	}
}
