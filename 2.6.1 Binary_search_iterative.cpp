#include<bits/stdc++.h> //works like magic in c++
#include<algorithm>
using namespace std;

// This is comment in c++
// my code
int bin_search(int arr[], int n, int key)
{
	int l,h,mid;
	l=0;
	h=n-1;
	while(l<=h)
	{
		mid = (l+h)/2;
		if(arr[mid] == key)
		return mid;
		
		else if(arr[mid] > key)
		{
			h = mid -1;
		}
		else
		{
			l = mid + 1;
		}
	}
	return 0;
}
int main()
{
	int arr[]={10,20,30,40,50};
	int size = sizeof(arr)/sizeof(arr[0]);
     
    int result = bin_search(arr,size,40);
	(result == -1) ? printf("Element is present") : printf("Elemet is present at %d",result); 
	return 0;
}
