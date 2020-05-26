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
#define endl "\n"
#define space " "
lint ladders_TopDown(lint n,lint k,lint dp[])
{
	//Base Case
	if(n==0)
		return 1;
	lint ways=0;
	if(dp[n]!=0)
		return dp[n];
	for(int i=1;i<=k;i++)
	{
		if(n-i>=0)
		ways+=ladders_TopDown(n-i,k,dp);
	}
	return dp[n]=ways;
}
lint ladders_BottomUp(lint n,lint k)
{
	lint dp[100]={0};
	dp[0]=1;
	lint ways=0;
	for(int i=1;i<=n;i++)
	{
		dp[i]=0;
		for(int j=1;j<=k;j++)
		{
			if(i-j>=0)
				dp[i]+=dp[i-j];
		}
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
		cin>>n>>k;
		lint dp[100]={0};
		cout<<ladders_BottomUp(n,k)<<endl;
		
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	solve();
}