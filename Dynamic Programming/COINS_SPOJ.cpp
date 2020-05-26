#include<bits/stdc++.h>
using namespace std;
#define lint long long int
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define MAXN 100001
#define len length()
#define testcase(t) for(int i=0;i<t;i++)
map<int,lint>dp;
lint coins(lint n)
{
	if(n==0)
		return 0;

	if(dp[n]!=0)
			return dp[n];
		//cout<<dp[n]<<endl;
	return dp[n]=max(n,coins(n/2)+coins(n/3)+coins(n/4));
}
void solve()
{
	int n;
	while(scanf("%d",&n)==1) 
	{
		lint ans=coins(n);
		cout<<ans<<endl;
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