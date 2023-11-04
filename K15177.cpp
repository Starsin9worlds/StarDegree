#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int n,d,p;

#define ll long long
#define N 200005

ll a[N];
ll cnt;

ll minn (ll aa, ll bb)
{
    return (aa<bb?aa:bb);
}

int main()
{
    cin>>n>>d>>p;

    for (int i=1; i<=n; i++)
        cin>>a[i];

    sort (a+1, a+n+1, greater <int> ());

    for (int i=1; i<=n;)
    {
        int pj=i+d-1;
        ll ans=0;

        for (int j=i; j<=pj && j<=n; j++)
            ans+=a[j];
        
        cnt+=minn(ans, p);

        i=pj+1;
    }

    cout<<cnt<<endl;
    return 0;
}
