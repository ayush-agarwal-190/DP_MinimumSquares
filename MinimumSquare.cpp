#include "bits/stdc++.h"
using namespace std;

#define ss second
#define ff first
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define setBits(x) builtin_popcount(x)
#define vii vector<pii>
#define vi vector<int>
#define vvi vector<vi>

const int N=1e5+2, MOD= 1e9+7;
int dp[N];

int MinSquare(int n){
 if(n==1 ||n==2 ||n==3 ||n==0 )
 return n;

 int ans=MOD;
 for(int i=0;i*i<=n;i++)
 if(dp[n] != MOD)
    return dp[n];
  
    for(int i=1;i*i<=n;i++)
 dp[n]= min(ans, 1+MinSquare(n-i*i));

 return dp[n];

}

signed main(){

 
int n;
cin>>n;

vi dp(n+1,MOD);

dp[0]=0;
dp[1]=1;
dp[2]=2;
dp[3]=3;
for(int i=1;i*i<=n;i++)
{
   for(int j=0;i*i+j<=n;j++)
      {
        dp[i*i+j]=min(dp[i*i + j],1+dp[j]);
      }
}
cout<<dp[n]<<endl;

return 0;

}
