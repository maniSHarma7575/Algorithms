#include <iostream>
using namespace std;
int maxdivide(int a,int b)
{
	while(a%b==0)
	{
		a=a/b;
	}
	return a;
}

int isUgly(int n)
{
	n=maxdivide(n,2);
	n=maxdivide(n,3);
	n=maxdivide(n,5);
	return n==1?1:0;
}
int findUgly(int n)
{
	int count=1;
	int i=1;
	while(n>count)
	{
		i++;
		if(isUgly(i))
		{
			cout<<i<<endl;
			
			count++;
		}
	}
	return i;
}
int main() {
	int n;
	cin>>n;
	cout<<findUgly(n);
	return 0;
}
