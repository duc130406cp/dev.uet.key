#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define el "\n"
const int mod=1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    double a1,b1,c1,a2,b2,a3;cin>>a1>>b1>>c1>>a2>>b2>>a3;
    cout<<fixed<<setprecision(1)<<((a2+b2)*2+(a1+b1+c1)+a3*3)/10;
    return 0;
}
