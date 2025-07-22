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
    char x; cin>>x;
    cout<<(isdigit(x)? x: char(toupper(x)));
    return 0;
}
