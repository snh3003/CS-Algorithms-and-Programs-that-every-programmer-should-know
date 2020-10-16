#include<iostream>
#include<vector>
#include<map>
#include<iterator>
#include<algorithm>
#define ll long long int 
using namespace std;
int main() {
ll i,d=0;
ll n; 
  
cin>>n;
vector <ll> v[n];
  map<vector<ll>,ll> ar;
  for(i=0;i<n;i++)
  {ll a,b,c;
    cin>>a>>b>>c;
   v[i].push_back(a);
   v[i].push_back(b);
   v[i].push_back(c);
   sort(v[i].begin(),v[i].end());
   ar[v[i]]++;
  }
  map<vector<ll>,ll>::iterator t;
  for(t=ar.begin();t!=ar.end();t++)
  {if(t->second==1)
    d++;
  }
  cout<<d;
  
	return 0;
}
