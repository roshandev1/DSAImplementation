#include <iostream>
using namespace std;

//find square root using binary search, but in 'double' (up to 3 places)

//1st finding sqaure-root in integer value
int sqrtInteger(int n){
	
	//taking an array from 0 to n number, as sqrt of n would be present in this 'search space' i.e (1-n)
	int start=0;
	int end=n;
	
	int mid= (start + (end-start)/2);
	
	int ans=0;
	
	//applying binary search in the chosen array
	while(start<=end){
		
		int sqr = (mid*mid);
		
		if(sqr==n){
			return mid;
		}
		
		else if (sqr<n){
			ans=mid;
			start=mid+1;
		}
		
		else
		{
			end=mid-1;	
		}
		mid=(start + (end-start)/2);
	}
	return ans; //returning sqrt in int form
}

//using integer value of square-root to get double value (i.e with decimal)
double sqrtDouble(int n,int precision,int tempsol){
	// precesion is upto how many places we want from decimal point e.g precision=3, then 6.123
	// taking temporary sol of int value of sqrt
	
	double factor=1; //initialising a 'double' value
	double ans= tempsol;
	
	// loop goes on till 3 places of precision; and sqr of j (tempsol) less than n
	for(int i=0;i<precision;i++){
		
		factor=factor/10; //it becomes 0.1
		
		// loop goes on till square of j is less than n
		for(double j=ans;j*j<n;j=j+factor){
			
			ans=j;
			
		}
	}
	return ans; //returns 'double' form of square-root of n upto 3 places of precision
}

int main(){
	int n;
	cin>>n;
	 
	int tempsol= sqrtInteger(n); //storing square-root in int value as a temporary solution
	
	cout<<"square root of "<<n<<" in integer form :"<<tempsol<<endl; 
	cout<<"square root of "<<n<<" in double form :"<< sqrtDouble(n,3,tempsol);
}
