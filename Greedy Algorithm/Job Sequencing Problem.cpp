#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Job
{
	char id;
	int profit;
	int dead;
};
bool comp(Job a,Job b)
{
	return a.profit>b.profit;
}
void schedule(Job arr[],int n)
{
	sort(arr,arr+n,comp);
	bool slot[n];
	for(int i=0;i<n;i++)
	{
		slot[i]=false;
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		
		for(int j=min(n,arr[i].dead)-1;j>=0;j--)
		{
			if(slot[j]==false)
			{
				slot[j]=true;
				sum+=arr[i].profit;
				break;
			}
		}
	}
	cout<<sum;
}
int main() {
	Job arr[]={{'a',30,4},{'b',25,4},{'c',35,3},{'f',12,1},{'g',5,2},{'d',20,2},{'e',15,3}};
	int n=sizeof(arr)/sizeof(arr[0]);
	schedule(arr,n);
	return 0;
}
