#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	char arr[100],i;
	cout<<"enter your sentence : ";
	cin>>arr[i];
	
	for(i=0; arr[i]!='\0';i++)  
    {
        if(arr[i]>='A' && arr[i]<='Z')
         arr[i]+=32;
        else if(arr[i]>='a' && arr[i]<='z')
         arr[i]-=32;
 	}
 	
 	cout<<"\n after toggle case : "<<arr;
	
	return 0;
}
