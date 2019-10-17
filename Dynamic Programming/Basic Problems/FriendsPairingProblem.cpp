#include <iostream>
using namespace std;
int countPairingFriend(int n)
{
	int dp[n+1];
	for(int i=1;i<=n;i++)
	{
		if(i<=2)
		{
			dp[i]=i;
		}
		else
		{
			dp[i]=dp[i-1]+(i-1)*dp[i-2];
		}
		
	}
	return dp[n];
}

int main() {
	int n;
	cin>>n;
	cout<<countPairingFriend(n);
	return 0;
}
