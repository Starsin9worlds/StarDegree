#include <iostream>

using namespace std;

long long pos,t,a,b,k;

int main()
{
    cin>>t;

    while (t--)
    {
        pos=0;

        cin>>a>>b>>k;

        pos += (k>>1LL)*(a-b);

        if (k&1)
            pos+=a;

        cout<<pos<<endl;
    }
    return 0;
}
