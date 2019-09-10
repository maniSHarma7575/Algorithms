#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	priority_queue<int,vector<int>,greater<int>> pq;
	int n;
	int a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		pq.push(a);
	}
	int count=0;
	while(pq.size()>1)
	{
		int a=pq.top();
		pq.pop();
		int b=pq.top();
		pq.pop();
	
		int c=a+b;
	
		count+=c;
		pq.push(c);
	}
	cout<<count;
	
	return 0;
}
