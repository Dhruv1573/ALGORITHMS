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
void generate_Permutation(char *in,int i)
{
	if(in[i]=='\0')
	{
		cout<<in<<endl;
		return;
	}
	for(int j=i;in[j]!='\0';j++)
	{
		swap(in[i],in[j]);
		generate_Permutation(in,i+1);
		swap(in[i],in[j]);
	}
}
void solve()
{
	lint t;
	cin>>t;
	testcase(t)
	{
		lint n,k,q;
		string s;
		char in[100];
		cin>>in;
		generate_Permutation(in,0);	
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