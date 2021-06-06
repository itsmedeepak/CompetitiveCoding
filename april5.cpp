#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1e9 + 7 
#define FOR(a, c) for (ll(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define PB push_back 
#define POB pop_back 
#define MP make_pair 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll t;
    cin >> t;
    while (t--){ 
        ll n,m,k;
        cin >> n>>m>>k;
        ll arr[n+5][m+1];
        ll count=0;
        FOR(i, n+1){
            FOR(j,m+1){
                if(i==0 || j==0){
                    arr[i][j]=0;
                }
                else{
                    cin>>arr[i][j];
                    if(arr[i][j]>=k){
                        count++;
                    }
                }
            }
        }
        ll i,j;
        for( i=2;i<n+1;i++){
            for( j=1;j<m+1;j++){
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
               // cout<<arr[i][j];
            }
            //cout<<endl;
        }
        ll mn=min(n,m);
        ll od=2;
        double sm=0.0000000;
        ll x,y;
        while(od<=mn){
            for(i=od;i<=n;i++){
                for(j=od;j<=m;j++){
                    x=i-od+1;
                    y=j-od+1;
                     sm=arr[i][j]-arr[x-1][j]-arr[i][y-1]+arr[x-1][y-1];
                }
                ll avg =sm/(od*od);
                if(avg>=k){
                    count+=m-j+1;
                    break;
                }
            }
            od++;
        }
        /*double store1=0;
        FOR(i,m+1){
            FOR(j,n+1){
                arr[i][j]+=store1;
                store1=arr[i][j];

            }
        }

        double store2=0;
        FOR(i,m+1){
            FOR(j,n+1){
                arr[j][i]+=store2;
                store2=arr[j][i];
            }
        }
        ll count=0;
        ll temp=min(m,n);
        for(ll t=1;t<=temp;t++){
            for(ll i=t;i<=n;i++){
                for(ll j=t;j<=m;j++){
                    if((arr[i-t][j-t]+arr[i][j]-arr[i-t][j]-arr[j-t][i])/(t*t)>=k){
                        count++;
                        cout<<count<<endl;
                    }
                }
            }
        }*/
        cout<<count<<"\n";
    }
    return 0;
}