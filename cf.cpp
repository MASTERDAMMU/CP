#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,i;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        ll a[n];
        ll rem=0;
        for(i=0;i<n;i++)
        {
            cin >> a[i];

        }
        ll sum=0;
        for(i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum<k)
            {
                cout<< i+1 << endl;
                break;
            }
            sum-=k;
        }
        if(i==n)
        {
            cout << n + (sum/k)+1<< endl;
        }
            }

}
