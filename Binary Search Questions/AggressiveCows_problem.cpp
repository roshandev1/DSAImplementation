#include <iostream>
using namespace std;
#include <algorithm>

// Aggressive cows problem
// place cows c1 and c2, so that their distance between them is maximum

bool isPossible(int stalls[],int n, int c, int mid){
	
	int cowCount=1;
	int lastPos=stalls[0]; //allocating position to the cow C1
	
	for(int i=0;i<n;i++){
		
		if((stalls[i]-lastpos)>=mid){ //now getting distance b/w C1 and other cow i.e C2; and going on
			
			cowCount++;
			
			if(cowCount==c){ 
				
				return true; //if distance b/w two cows becomes more than mid value and
				//if cow count becomes equal to given no. of cow; then return true
			}
			
			lastpos = stalls[i]; // allocating position to new cow for e.g C2
		}
		
	}
	return false; 	
}

int cowAllocation(int stalls[],int n, int c){
	
	sort(stalls, stalls + n); //sorting the given array "stalls"
	//to use sort function, we included <algorithm>
	//we sorted the stalls array to use it in isPossible function
	
	int start=0;// min distance b/w the cows (can be in the same stall)
	
	int maxi=-1;
	// End is maximum distance b/w the cows (difference b/w last position and 1st position of stall)
	for(int i=0;i<n;i++){
		maxi=max(maxi,stalls[i]);
	}
	
	int end=maxi-stalls[0]; //max stall no. minus min stall no.; to get end

	int mid= (start + (end-start)/2);
	
	int ans=-1;
	
	while(start<=end){
		
		if(isPossible(stalls,n,c,mid)){
			ans=mid; 
			start=mid+1; //if true go to right side of array to find max value
		}
		else{
			end=mid-1; // if false go to left side of array
		}
		mid= (start + (end-start)/2);
	}
	return ans; //returns the max distance b/w the cows
}

int main(){
	
	int stalls[5]={4,2,1,3,6};//Here elements of array is the position of the stall, with n(5) number of stalls
	int n = sizeof(stalls)/sizeof(stalls[0]); //we get n i.e size of array 'stalls'
	int c=2; // initialising number of aggressive cows
	
	cout<<"Maximum distance between the aggressive cows placed in 2 stalls is : "<< cowAllocation(stalls,n,c);
	
}
