//Dynamic programming Fibonnaci Series
#include <iostream>
using namespace std;
int fibo(int n)
{
	int c[n+1];
	c[0]=0;
	c[1]=1;
	cout<<c[0]<<" "<<c[1]<<" ";
	for(int i=2;i<=n;i++)
	{
		c[i]=c[i-1]+c[i-2];
		cout<<c[i]<<" ";
		
	}
	return c[n+1];

}

int main() {
	int n;
	cin>>n;
	fibo(n);
	
	return 0;
}
