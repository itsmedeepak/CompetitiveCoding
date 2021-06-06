#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1e9 + 7 
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
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
   string s;
   getline(cin,s);
   int n=s.size();
   int c=0;
   for(int i=1;i<=n;i++){
       if(s[i]==' ' && s[i-1]!=' '&& i+1<n){
           ++c;
       }
   }
   if(s[n-1]!=' '&& n>0){
       cout<<c+1;
   }
   else{
       cout<<c;
   }
   
  // cout<<s[0];
 // cout<<c;
   
}