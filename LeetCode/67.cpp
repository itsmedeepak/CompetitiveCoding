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
    string s1,s2;
    cin>>s1>>s2; 
    int n=s1.size();
    int m=s2.size();
    int dif=abs(n-m);
    if(n>m){
      string  str =string(dif,'0');
      s2=str+s2;
    }
    if(n<m){
      string  str =string(dif,'0');
      s1=str+s1;
    }
    string ans="";
    bool carry=0;
    for(int i=s1.size()-1;i>=0;i--){
        if((s1[i]=='1'&&s2[i]=='0'&& carry==0)||(s1[i]=='0'&&s2[i]=='1'&& carry==0)){
            ans+='1';
            carry=0;
            continue;
        }
        if((s1[i]=='1'&&s2[i]=='0'&& carry==1)||(s1[i]=='0'&&s2[i]=='1'&& carry==1)){
            ans+='0';
            carry=1;
        }
        if(s1[i]=='1'&&s2[i]=='1' && carry==0){
            ans+='0';
            carry=1;
            continue;
        }
        if(s1[i]=='1'&&s2[i]=='1' && carry==1){
            ans+='1';
            carry=1;
        }
        if(s1[i]=='0'&& s2[i]=='0' && carry==0){
            ans+='0';
            carry=0;
            continue;
        }
        if(s1[i]=='0'&& s2[i]=='0' && carry==1){
            ans+='1';
            carry=0;

            
        }
        
    }
    if(carry==1){
        ans+='1';
    }
     reverse(ans.begin(),ans.end());
    cout<<ans;
     return 0;
}