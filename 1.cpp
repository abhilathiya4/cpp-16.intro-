#include<iostream>

using namespace std;

int main(){
	int n;
	
	cout<<"enter no of elements: ";
	cin>>n;
	
	int arr[n],i;
	
   for(i=0 ; i<n ; i++){
   	 cout<<"enter your elemets: ";
     cin>>arr[i];
     }
     
     cout<<"\n even number are : ";
     for(i=0; i<n; i++)
   {
      if(arr[i]%2==0)
         cout<<arr[i]<<" ";
   }
   cout<<endl;
   

	
	
	return 0;
}
