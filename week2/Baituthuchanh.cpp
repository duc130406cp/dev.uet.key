//OperationOne
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
    ll a,b,c; cin>>a>>b>>c;
    cout<< (a+b)*(a-c);
    return 0;
}

//operationTwo
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
    ll a,b; cin>>a>>b;
    cout<<a + b + a * b;
    return 0;
}

//CharDataType
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
    char a; cin>>a;
    cout<< char(a+ ('A'-'a'));
    return 0;
}

//Double
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
    ll n; cin>>n; cout<<2*n;
    return 0;
}

//AverageOfSix
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
    double a,b,c,d,e,f; cin>>a>>b>>c>>d>>e>>f;
    cout<<fixed<<setprecision(2)<<((a+b+c)+2*(d+e)+3*f)/(1+1+1+2+2+3);
    return 0;
}

//BMI - Body Mass Index
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
    double kg,m; cin>>kg>>m;
    cout<<fixed<<setprecision(2)<<kg/pow(m,2);
    return 0;
}

//CurrencyConversion
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
    ll vnd; cin>>vnd;
    cout<<fixed<<setprecision(2)<<(1.0*vnd/22.765/1000);
    return 0;
}

//Distance
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
    double a,b;
    cin>>a>>b;
    cout<<fixed<<setprecision(2)<<pow(1.0*a*a+b*b,1.0/2);
    return 0;
}

//Greeting
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
    string s; getline(cin,s);
    cout<<"Nice to meet you, "<<s<<"!";
    return 0;
}

//ModAndDiv
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
    ll a,b; cin>>a>>b;
    cout<<a/b<<" "<<a%b;
    return 0;
}
