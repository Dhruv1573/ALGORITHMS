#include<bits/stdc++.h>
using namespace std;
#define lint long long int
#define first f
#define second s
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define MAXN 100001
#define len length()
#define testcase(t) for(int i=0;i<t;i++)

lint fibtp(lint n,lint dp[])
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	if(dp[n]!=-1)
		return dp[n];

	lint ans=fibtp(n-1,dp)+fibtp(n-2,dp);
	return dp[n]=ans;
	//cout<<"Precomputed "<<dp[n]<<endl;
}
lint fibbtm(lint n)
{
	lint dp[100]={0};
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}
void solve()
{
	lint t;
	cin>>t;
	testcase(t)
	{
		lint n,k,q;
		string s;
		char c;
		cin>>n;
		lint a[n];
		//for(int i=0;i<n;i++)
		//	cin>>a[i];
		lint dp[100];
		memset(dp,-1,sizeof(dp));
		cout<<fibbtm(n)<<endl;
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	solve();
}