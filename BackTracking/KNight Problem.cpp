#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
void solve()
{
	int t;
	cin>>t;
	int count1=1;
	testcase(t)
	{
		  int n;
        cin>>n;
        int k1;
        int A[n];
        for(int j=0;j<n;j++){
            cin>>A[j];
        }
        int su[n];
        su[0]=A[0];
        for(int j=1;j<n;j++){
            su[j]=su[j-1]+A[j];
        }
        int ans=0;
        int k=0;
        for(int j=0;j<n;j++){
            k=0;
            int sq=sqrt(su[j]);
            if(sq*sq==su[j]){
                ans++;
            }
            while(k!=j){
                sq=sqrt(su[j]-su[k]);
                if(sq*sq ==(su[j]-su[k]) ){
                    ans++;
                }
                k++;
            }
        }

			cout<<"Case #"<<count1<<": "<<ans<<endl;
			count1++;
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