#include <iostream>
#include <bits/stdc++.h>
#define vi long long
#define pb push_back
using namespace std;
void merge(vi arr[],int beg,int mid,int end,int maxele)
{
	int i=beg;
	int j=mid+1;
	int k=beg;
	while(i<=mid && j<=end)
	{
		if(arr[i]%maxele<=arr[j]%maxele)
		{
			arr[k]=arr[k]+(arr[i]%maxele)*maxele;
			k++;
			i++;
		}
		else
		{
			arr[k]=arr[k]+(arr[j]%maxele)*maxele;
			k++;
			j++;
		}
	}
	while(i<=mid)
	{
		arr[k]=arr[k]+(arr[i]%maxele)*maxele;
		k++;
		i++;
	}
	while(j<=end)
	{
		arr[k]=arr[k]+(arr[j]%maxele)*maxele;
		k++;
		j++;
	}
	for(int i=beg;i<=end;i++)
	{
		arr[i]=arr[i]/maxele;
	}
}
void mergeSortRec(vi arr[],int beg,int end,int maxele)
{
	if(beg<end)
	{
		int mid=(beg+end)/2;
		mergeSortRec(arr,beg,mid,maxele);
		mergeSortRec(arr,mid+1,end,maxele);
		merge(arr,beg,mid,end,maxele);
	}
}
void MergeSort(vi arr[],int n)
{
	int maxele=*max_element(arr,arr+n)+1;
	mergeSortRec(arr,0,n-1,maxele);
}

int main() {
	vi arr[10001];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	MergeSort(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
