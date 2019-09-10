// Author Manish Sharma


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool sortby(pair<int,int> a,pair<int,int> b)
{
	double r1=a.first/a.second;
	double r2=b.first/b.second;
	return r1>r2;
}

int main() {

	int n,w;
	cin>>n>>w;
	vector<pair<int,int>> arr;
	int a,b;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		pair<int,int> p1;
		p1.first=a;
		p1.second=b;
		arr.push_back(p1);
	}
	sort(arr.begin(),arr.end(),sortby);
	int cur=0;
	double final=0.0;
	for(int i=0;i<n;i++)
	{
		if(cur+arr[i].second<=w)
		{
			cur=cur+arr[i].second;
			final+=arr[i].first;
		
		}
		else
		{
			int remain=abs(w-cur);
		double y=(double)(arr[i].first/arr[i].second);
			final+=arr[i].first*((double)remain/arr[i].second);
			break;
		}
	}
	cout<<final;
	return 0;
}	
