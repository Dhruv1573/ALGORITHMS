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
lint power(lint a,lint b)
{
	//Base Case
	if(b==0)
		return 1;
	return a*power(a,b-1);
}
lint Fast_Power(lint a,lint b)
{
	if(b==0)
		return 1;
	lint small_ans=Fast_Power(a,b/2);
	small_ans=small_ans*small_ans;
	if(b&1)
		return small_ans*a;
	else
		return small_ans;
}
void solve()
{
	lint t;
	cin>>t;
	testcase(t)
	{
		lint n,k,q,a,b;
		string s;
		char c;
		cin>>a>>b;
		cout<<Fast_Power(a,b)<<endl;
		
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