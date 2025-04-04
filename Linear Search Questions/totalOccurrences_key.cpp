#include <iostream>
using namespace std;

// finding total occuurrences of a key in sorted array

int totaloccurrences(int arr[], int n, int key){
	int i=0;
	int count=0;
	
	while(arr[i]<=key){
		
		if(arr[i]==key){
			count=count+1; //if key is present, count gets increased by 1
			
		}
		i++;
	}
	return count; //returns total count of occurrences
}

int main(){
	
	int arr[7]={1,2,3,3,3,3,5};
	
	int key;
	cin>>key;
	cout<<"total occurrences:"<< totaloccurrences(arr,7,key);
}

