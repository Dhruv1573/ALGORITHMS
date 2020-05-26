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
lint min_coin_topdown(lint n,lint a[],lint m,lint dp[])
{
	if(n==0)
		return 0;
	if(dp[n]!=0)
		return dp[n];
	lint ans=INT_MAX;
	for(int i=0;i<m;i++)
	{
		if(n-a[i]>=0)
		{
			lint subprob=min_coin_topdown(n-a[i],a,m,dp);
			ans=min(ans,subprob+1);
		}
	}
	return dp[n]=ans;
}
lint min_coin_BottomUp(lint n,lint a[],lint m)
{
	lint dp[100]={0};
	for(int i=1;i<=n;i++)
	{
		dp[i]=INT_MAX;
		for(int j=0;j<m;j++)
		{
			if(i-a[j]>=0)
			{
				lint x=dp[i-a[j]];
				dp[i]=min(dp[i],x+1);
			}
		}
	}
	if(dp[n]==INT_MAX)
		return -1;
	else
		return dp[n];
}
void solve()
{
	lint t;
	cin>>t;
	testcase(t)
	{
		lint n,k,q,m;
		string s;
		char c;
		cin>>n>>m;
		lint a[n];
		for(int i=0;i<m;i++)
			cin>>a[i];
		lint dp[100]={0};
		cout<<min_coin_BottomUp(n,a,m);
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