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
int min_step_topdown(lint n,lint dp[])
{
	if(n==1)
		return 0;
	if(dp[n]!=0)
		return dp[n];
	lint op1,op2,op3;
	op1=op2=op3=INT_MAX;
	if(n%3==0)
		op1=min_step_topdown(n/3,dp);
	if(n%2==0)
		op2=min_step_topdown(n/2,dp);
	op3=min_step_topdown(n-1,dp);
	lint ans=min(op1,min(op2,op3))+1;
	return dp[n]=ans;
}
int min_step_bottomup(int n)
{
	lint dp[100]={0};
	dp[1]=0;
	int op1,op2,op3;
	for(int i=2;i<=n;i++)
	{
		op1=op2=op3=INT_MAX;
		if(i%3==0)
			op1=dp[i/3];
		if(n%2==0)
			op2=dp[i/2];

			op3=dp[i-1];
		dp[i]=min(op1,min(op2,op3))+1;
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
	//	for(int i=0;i<n;i++)
	//		cin>>a[i];
		lint dp[100]={0};
		cout<<min_step_topdown(n,dp)<<endl;
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