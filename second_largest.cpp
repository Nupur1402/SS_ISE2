#include <bits/stdc++.h>
using namespace std;
bool arr3[10]={FALSE};
int main() {
	int arr1[4]={1,3,5,7};
	int arr2[4]={3,5,6,7};
	
	
	for(int i=0;i<4;i++)
	{
	    int k=arr1[i];
	    arr3[k]=TRUE;
	}
	for(int j=0;j<4;j++)
	{ 
	   int m= arr2[i];
	   if(arr3[m]==TRUE)
	     cout<<m<<endl;
	}
	return 0;
}
