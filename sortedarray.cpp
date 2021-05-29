#include<bits/stdc++.h>
using namespace std;
bool sorted_or_unsorted(int a[10],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		return false;
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	int s=sorted_or_unsorted(arr,n);
	if(s)
	  cout<<"sorted array";
	else
	   cout<<"unsorted array";
}
