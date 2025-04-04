#include <iostream>
using namespace std;
#include <vector>

void mergesort(int arr1[],int n, int arr2[],int m, int arr3[], int o){
	
	int i=0,j=0,k=0;
	for(;i<n && j<m;){
		
		if (arr1[i]<arr2[j]){
			
			arr3[k]=arr1[i];
			i++;
			k++;
		
		}
		
		else {
			
			arr3[k]=arr2[j];
			j++;
			k++;
			
		}
		
	}
	
	while(i<n){
		
		arr3[k]=arr1[i];
		i++;
		k++;
	}
	
	while(j<m){
		
		arr3[k]=arr2[j];
		j++;
		k++;
	}	
	
	for(int r=0;r<o;r++){
		
		cout<< arr3[r]<<" ";
	}	
}



int main(){
	
	int arr1[5]={1,3,5,7,9};
	int n= sizeof(arr1)/sizeof(arr1[0]);
	
	int arr2[3]={2,4,6};
	int m=sizeof(arr2)/sizeof(arr2[0]);
	
	int arr3[8];
	int o= n+m;
	
	mergesort(arr1,n,arr2,m,arr3,o);
	
	
	
}
