#include<bits/stdc++.h>
using namespace std;
void arrange(int arr[],int n)
{
	int ind=0;
	int i=0;
	while(i<=n)
	{
		if(i%2!=0)
		{
			arr[ind++]=i;
		}
		i++;
	}
	i=n;
	while(i>=1)
	{
		if(i%2==0)
		{
			arr[ind++]=i;
		}
		i--;
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	
	arrange(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
