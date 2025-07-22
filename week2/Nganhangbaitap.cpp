//Stranger
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
    string s1,s2; cin>>s1>>s2;
    cout<<"Hello "<<s1<<" and "<<s2<<".";
    return 0;
}

//CelsiusTranfer
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
    double c; cin>>c;
    cout<<fixed<<setprecision(2)<<c*9/5+32;
    return 0;
}

//DayOfWeek
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
    int d, m, y;
    cin >> d;
    cin >> m;
    cin >> y;
    int y0 = y - (14 - m) / 12;
    int x = y0 + y0 / 4 - y0 / 100 + y0 / 400;
    int m0 = m + 12 * ((14 - m) / 12) - 2;
    int d0 = (d + x + 31 * m0 / 12) % 7;
    cout << d0 << el;
    return 0;
}

//EuclideanDistance
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
    double x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
    cout<<fixed<<setprecision(2)<< pow(pow(x1-x2,2)+pow(y1-y2,2),1.0/2);
    return 0;
}

//MapScale
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
    double a,b; cin>>a>>b;
    cout<<fixed<<setprecision(1)<<a*(1/b)/100;
    return 0;
}

//RentDepartment
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
    double a; cin>>a;
    cout<<fixed<<setprecision(2)<<a*20;
    return 0;
}

//SecondsToMinutes
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
    ll n; cin>>n;
    cout<<(n%60==0? n/60 : n/60+1);
    return 0;
}

//ShoppingOnline
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
    double n; cin>>n;
    cout<<fixed<<setprecision(2)<< n+n*(0.4) +10;
    return 0;
}

//ThreeSort
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
    ll a[3];
    for(auto &x:a) cin>>x;
    sort(a,a+3,greater<ll>());
    for(auto x:a) cout<<x<<" ";
    return 0;
}

//WindChill
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
    double v,t; cin>>t>>v;
    cout<<fixed<<setprecision(2)<<35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
    return 0;
}