#include<bits/stdc++.h>
#include <iostream>
using namespace std;
bool isSubsetsum(vector<int> v,int n,int sum)
{
	if(sum>0 && n==0)return false;
	if(sum==0)
	{
		return true;
	}
	if(v[n-1]>sum)
	{
		return isSubsetsum(v,n-1,sum);
	}
	return isSubsetsum(v,n-1,sum) || isSubsetsum(v,n-1,sum-v[n-1]);
	
}

int main() {
	int a,n,sum;
	vector<int> v;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
		
	}
	cin>>sum;
	cout<<isSubsetsum(v,n,sum);
	return 0;
}
