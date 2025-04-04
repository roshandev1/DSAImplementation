#include <iostream>
using namespace std;

//PEAK index of mountain array
//using Linear search

int peakIndex(int arr[],int n){
	
	int max=INT_MIN; //INT_MIN is least value of integer
	int i=0;
	int ans;
	
	while(i<n){ 
		
		if(max<arr[i]){
			max=arr[i]; //get peak value of array
			ans= i;
		}
		i++;		
	}
	return ans; //returns peak index
}

int main(){
	
	int arr[4]={0,3,2,1};
	
	cout<<"peak index:"<< peakIndex(arr,4);
}
