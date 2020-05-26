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

int knapsackTopDown(int wt[],int prices[],int w,int n,int dp[][1001])
{
	if(n==0||w==0)
		return 0;
	if(dp[n][w]!=-1)
	return dp[n][w];
	if(wt[n-1]<=w)
		return dp[n][w]=max(prices[n-1]+knapsack(wt,prices,w-wt[n-1],n-1,dp),knapsack(wt,prices,w,n-1,dp));
	else
		return dp[n][w]=knapsack(wt,prices,w,n-1,dp);
}
int knapsackBottomUp(int wt[],int prices[],int w,int n)
{
	int dp[n+1][w+1];
	for(int i=0;i<n+1;i++)
		for(int j=0;j<w+1;j++)
			if(i==0||j==0)
				dp[i][j]=0;
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<w+1;j++)
		{
			if(j-wt[i-1]>=0)
				dp[i][j]=max(prices[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
			else
				dp[i][j]=dp[i-1][j];
		}
	}
	return dp[n][w];
}
void solve()
{
	lint t;
	cin>>t;
	testcase(t)
	{
		int n,w,q;
		string s;
		char c;
		cin>>n>>w;
		int wt[n],prices[n];
		for(int i=0;i<n;i++)
			cin>>prices[i];
		for(int i=0;i<n;i++)
			cin>>wt[i];
		cout<<knapsackTopDown(wt,prices,w,n)<<endl;
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