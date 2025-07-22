//AbsoluteValue
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
    cout<<fixed<<setprecision(2)<<abs(a);
    return 0;
}

//Max
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
    ll a,b; cin>>a>>b; cout<<max(a,b);
    return 0;
}

//AllEqual
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
    cout<<(a==b&&b==c? "true":"false");
    return 0;
}

//Divisibility
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
    cout<<(a%7==0&&b%7==0?"true":"false");
    return 0;
}

//CheckEvenOdd
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
    ll a; cin>>a;
    cout<<(a%2==0?"true":"false");
    return 0;
}

//Grade
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
    double score; cin>>score;
    if (score >= 9.0 && score <= 10.0) cout<< "A+";
    else if (score >= 8.5 && score < 9.0) cout<< "A";
    else if (score >= 8.0 && score < 8.5) cout<< "B+";
    else if (score >= 7.0 && score < 8.0) cout<< "B";
    else if (score >= 6.5 && score < 7.0) cout<< "C+";
    else if (score >= 5.5 && score < 6.5) cout<< "C";
    else if (score >= 5.0 && score < 5.5) cout<< "D+";
    else if (score >= 4.0 && score < 5.0) cout<< "D";
    else cout<< "F";
    return 0;
}

//Graduation
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
    double gpa; cin>>gpa;
    if (gpa >= 3.6) cout<< "Xuat sac";
    else if (gpa >= 3.2) cout<< "Gioi";
    else if (gpa >= 2.5) cout<< "Kha";
    else if (gpa >= 2.0) cout<< "Trung binh";
    else cout<< "Khong ra duoc truong";
    return 0;
}

//GymnasticScorer
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
    double a[6];
    for(auto &x:a) cin>>x;
    sort(a,a+6);
    double ans=0;
    for(int i=1;i<5;i++)
    {
        ans+=a[i];
    }
    cout<<fixed<<setprecision(1)<<ans/4;
    return 0;
}

//Hurricane
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
    double TraMy; cin>>TraMy;
    if (TraMy < 74) cout<< 0;
    else if (TraMy >= 74 && TraMy <= 95) cout<< 1; 
    else if (TraMy >= 96 && TraMy <= 110) cout<< 2; 
    else if (TraMy >= 111 && TraMy <= 130) cout<< 3; 
    else if (TraMy >= 131 && TraMy <= 155) cout<< 4; 
    else cout<< 5;
    return 0;
}

//NumberInRange
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
    double x; cin>>x;
    cout<<(x>0&&x<1? "true":"false");
    return 0;
}

//Season
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
    ll month,day; cin>>day>>month;
    if ((month == 3 && day >= 21) || (month == 4) || (month == 5) || (month == 6 && day <= 21))
    {
        cout<< "Spring";
    } 
    else if ((month == 6 && day >= 22) || (month == 7) || (month == 8) || (month == 9 && day <= 22))
    {
        cout<< "Summer"; 
    } 
    else if ((month == 9 && day >= 23) || (month == 10) || (month == 11) || (month == 12 && day <= 21))
    {
        cout<< "Autumn"; 
    } 
    else 
    {
        cout<< "Winter"; 
    }
    return 0;
}