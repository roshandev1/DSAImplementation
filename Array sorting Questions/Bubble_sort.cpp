#include <iostream>
using namespace std;

int bubbleSort(int arr[],int n){
	
	bool swapped; // taking this for Optimisation of code
	
	for(int i=1;i<n;i++){ //can also write "for(int i=0;i<n;n=n-1)"
	// round from 1st element to that element which is not sorted (total rounds = n-1)
		
		for(int j=0;j<n-i;j++){ //can also write "for(int j=0;j<n-1;j++)"
		// loop for checking each element with neighbour,till (n-1)th element as last element gets sorted with 2nd last
		
		    if(arr[j]>arr[j+1]){
			//checking chosen element is bigger than neighbour or not
			
			    swap(arr[j],arr[j+1]); //if bigger,than swap those elements
			    swapped=true;
		    }
		    
	    }
	    if(swapped==false){
	    // if there are 0 swaps in a whole for-loop, then break the outermost for-loop and end the function	
	    // it means the array is already sorted
	    	break;
		}
		
	}
	
}

int main(){
	cout<<"Enter Number of elements in array";
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cout<<"Enter" << i+1 << "element: \n";
		cin>>arr[i];
		
	}

	cout<<"your entered array is \n";		
	for(int i=0;i<n;i++){
		
		cout<<arr[i]<<" ";
	}
	
//	int arr[6]={10,1,-7,6,14,9};
	
//	int n= sizeof(arr)/sizeof(arr[0]);
	
	bubbleSort(arr,n); // calling function "bubbleSort"
	
	cout<<"Printing sorted array :"<<endl;
	
	for(int i=0;i<n;i++){
		
		cout<<arr[i]<<" ";
	}
}
