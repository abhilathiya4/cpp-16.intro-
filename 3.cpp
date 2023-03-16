#include<iostream>

using namespace std;

int main(){
	
	int i;
	int arr[100];
	
	cout<<"leap year between 2020 and 3030 are : "<<endl;
	
	for(i=2020 ; i<=3030 ; i++){
		
		if(i%4==0){
			cout<<i;
			
		}
		cout<<" ";
		
	}
	
	
	
	return 0;
}
