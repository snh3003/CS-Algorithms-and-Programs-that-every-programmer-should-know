#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int m;
    cin>>m;
    int arr[m][m];
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int ans[m][m];
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 1 or arr[m-1-j][i] == 1 or arr[m-1-i][m-1-j] == 1 or arr[j][m-1-i] == 1){
                ans[i][j] = 1;
            }
            else
            {
                ans[i][j] = 0;
            }
            
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}