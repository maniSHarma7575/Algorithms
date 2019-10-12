//Memomization(Top Down Approach)
#include <iostream>
using namespace std;
#define max 100
#define NIL -1
int fibon[max];
void intialize()
{
	for(int i=0;i<max;i++)
	{
		fibon[i]=NIL;
	}
}
int fibo(int n)
{
	if(n<=1)
	{
	fibon[n]=n;
	return n;
	}
	else
	{
		if(fibon[n]!=NIL)
		{
			return fibon[n];
		}
		else
		{
			return (fibon[n]=fibo(n-1)+fibo(n-2));
		}
	}
	
}

int main() {
	int n;
	cin>>n;
	intialize();
	cout<<fibo(n);
	return 0;
}
