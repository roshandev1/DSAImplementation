#include <iostream>
using namespace std;

// Book Allocation problem
// Allocate books to m students such that maximum number of pages assigned to a student is minimum
// find this minimum value

bool isPossible(int books[],int n,int m,int mid){
	
	int studentcount=1; //initialising student count with 1, will go upto m
	int pagesum=0;
	
	for(int i=0;i<n;i++){
		
		if((pagesum + books[i])<=mid){
			
			pagesum=pagesum + books[i];
		}
		else{
			
			studentcount+=1;
			
			if(studentcount>m || books[i]>mid){ 
			//as student count gets more than m or element gets more than mid value,the get false
				return false;
			}
			pagesum=books[i]; //initiates pagesum to new student
		}
		
	}
	return true;	
}

int allocatebooks(int books[],int n, int m){
	
	int start=0;
	
	int sum=0;
	//applying loop to get end value that is sum of all the pages i.e elements
	for(int i=0;i<n;i++){
		
		sum= sum + books[i];
	}
	
	int end=sum;
	
	int mid= (start + (end-start)/2);
	int ans;
	
	while(start<=end){
		
		if (isPossible(books,n,m,mid)){
			//if bool is true
			ans=mid;
			end=mid-1; //
		}
		else{
			//if bool is false
			start=mid+1;
		}
		mid= (start + (end-start)/2);
	}
	return ans; //will get min of maximum pages to be allocated to a student
}

int main(){
	
	int books[4]={10,20,30,40}; //elements of array is number of pages
	int m=2; // Initialising number of students
	
	cout<< "minimum of maximum number of books allocated to a student is :"<<allocatebooks(books,4,m); 
	//here 4 i.e size of array is 'n' i.e number of books
}


















