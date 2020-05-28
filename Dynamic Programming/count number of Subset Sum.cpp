	/*
		Author :- Dhruv Kumar
		Amity University jaipur

	*/
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
lint subsetSum(lint a[],lint sum,lint n)
{
	
	lint dp[n+1][sum+1];
	memset(dp,0,sizeof(dp));
	for(int i=0;i<n+1;i++)
		dp[i][0]=1;
	for(int j=1;j<sum+1;j++)
		dp[0][j]=0;
	
		for(int i=1;i<n+1;i++)
		{
			for(int j=1;j<sum+1;j++)
			{
				if(a[i-1]<=j)
					dp[i][j]=dp[i-1][j-a[i-1]]+dp[i-1][j];
				else
					dp[i][j]=dp[i-1][j];
			}
		}
		return dp[n][sum];
	

}
void solve()
{
	lint t;
	cin>>t;
	testcase(t)
	{
		lint n,k,q,sum;
		string s;
		char c;
		cin>>n>>sum;
		lint a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cout<<subsetSum(a,sum,n)<<endl;
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