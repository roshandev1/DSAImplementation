#include<iostream>
using namespace std;
#include <vector>

vector<int> reverseArray(vector<int> v){
	
	int start=0;
	int end= (v.size()-1);
	
	while(start<=end){
		
		swap(v[start],v[end]);
		start++;
		end--;
	}
	
	cout<<"Printing reverse inside function array :"<<endl;
	for(int i=0;i<v.size();i++){
		
		cout<<v[i]<<" ";
		
	}

	
}

int main(){
	
	vector<int> v;
	
	v.push_back(11);
	v.push_back(9);
	v.push_back(4);
	v.push_back(3);
	v.push_back(1);
	
	cout<<"Printing given array"<<endl;
	for(int i=0;i<v.size();i++){
		
		cout<<v[i]<<" ";
		
	}
	cout<<endl;
	
	reverseArray(v);
	
	
}
