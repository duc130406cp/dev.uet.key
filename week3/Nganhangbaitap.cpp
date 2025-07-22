//Integer2
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
    ll x; cin>>x;
    cout<<(sqrt(x)*sqrt(x)==x&&x%3==0&&x%5==1?"YES":"NO");
    return 0;
}

//Multiple
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
    cout<<(b!=0&&a%b==0?"yes":"no");
    return 0;
}

//FahrenheitToCelsius
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
    int a, b;
    cin >> a >> b;
    for (int f = a; f <= b; ++f) 
    {
        double celsius = (f - 32) * 5.0 / 9.0;
        double kelvin = celsius + 273.15;
        cout  << f<<" "  << fixed << setprecision(2) << celsius<<" " << fixed << setprecision(2) << kelvin<<" " << el;
    }
    return 0;
}

//SpecialDouble
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
    cout<<(a%2==0? a: 2*a);
    return 0;
}

//Character
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
    if(islower(x)) cout<<"The upper case character corresponding to "<<x<<" is "<<char(toupper(x));
    else if(isupper(x)) cout<<"The lower case character corresponding to "<<x<<" is "<<char(tolower(x));
    else cout<<x<<" is not a letter";
    return 0;
}

//ValidDate
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
bool isValidDate(const string& date) {
    int day, month, year;
    char delimiter1, delimiter2;
    stringstream ss(date);
    ss >> day >> delimiter1 >> month >> delimiter2 >> year;
    if (delimiter1 != '/' || delimiter2 != '/') return false;
    if (year < 1900 || year > 2100) return false;
    if (month < 1 || month > 12) return false;
    int daysInMonth;
    if (month == 2) {
        daysInMonth = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30; 
    } else {
        daysInMonth = 31; 
    }
    return (day >= 1 && day <= daysInMonth);
}
int main() {
    string date; cin >> date;
    cout << (isValidDate(date) ? "yes" : "no") << endl;
    return 0;
}

//Taxi
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
    int distance; cin >> distance;
    int totalCost = 0;
    if (distance == 1) totalCost = 7000;
    else if (distance <= 30) totalCost = 7000 + (distance - 1) * 5000;
    else totalCost = 7000 + 29 * 5000 + (distance - 30) * 3000;
    cout << totalCost << el;
    return 0;
}

//RentComputer
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
    int startHour, endHour, numberOfMachines;
    cin >> startHour >> endHour >> numberOfMachines;
    int totalCost = 0;
    for (int hour = startHour; hour < endHour; ++hour)
        totalCost += (hour < 17 ? 2500 : 3000);
    totalCost *= numberOfMachines;
    cout << totalCost << endl; 
    return 0;
}

//Salary
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int startHour, endHour;
    cin >> startHour >> endHour;
    int totalSalary = 0;
    for (int hour = startHour; hour < endHour; ++hour)
    {
        totalSalary += (hour < 12 ? 6000 : 7500);
    }
    cout << totalSalary << el;
    return 0;
}

//FourStepsReverse
#include <iostream>
using namespace std;
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}
int main() {
    int A;
    cin >> A;
    if (A < 100 || A > 999) {
        cout << "invalid" << endl;
        return 0;
    }
    int a = A / 100;
    int c = A % 10;
    if (a <= c) {
        cout << "invalid" << endl;
        return 0;
    }
    int A_prime = reverseNumber(A);
    int B = A - A_prime;
    int B_prime = reverseNumber(B);
    cout << B + B_prime << endl;
    return 0;
}

//CheckTriangle
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) cout << "tam giac deu\n";
        else if (a == b || b == c || a == c) cout << "tam giac can\n";
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) cout << "tam giac vuong\n";
        else cout << "tam giac thuong\n";
    } else {
        cout << "khong phai tam giac\n";
    }
    return 0;
}

//CalculateScore
#include <bits/stdc++.h>
using namespace std;
int main() {
    double sobuoihoc, th[10], gk[2], ckst[2];
    cin>>sobuoihoc;
    for(auto &x:th) {
        cin>>x;
        if(x>0) sobuoihoc++;
    }
    for(auto &x:gk) cin>>x;
    for(auto &x:ckst) cin>>x;
    sort(th, th+10, greater<double>());
    if(sobuoihoc<20) {
        cout<<0;
        return 0;
    }
    double tk=0;
    for(int i=0;i<5;i++) tk+=th[i];
    tk=round(tk/5*10)/10*0.2;
    tk+=round((gk[0]+gk[1])/2*10)/10*0.2;
    tk+=round((ckst[0]+ckst[1])*10)/10*0.6;
    cout<<(tk<=10? round(tk*10)/10:10);
    return 0;
}

//FirstEquation
#include <bits/stdc++.h>
using namespace std;
int main() {
    double a, b;
    cin >> a >> b;
    if (a == 0) {
        if (b == 0) cout << "phuong trinh co vo so nghiem" << endl;
        else cout << "phuong trinh vo nghiem" << endl;
    } else {
        cout << fixed << setprecision(2) << -b/a << endl;
    }
    return 0;
}

//SecondDegreeEquation
#include <bits/stdc++.h>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a == 0) {
        if (b == 0) {
            if (c == 0) cout << "phuong trinh co vo so nghiem\n";
            else cout << "phuong trinh vo nghiem\n";
        } else {
            double x = -c / b;
            if(x==-0) x=0;
            cout << "phuong trinh co 1 nghiem\n";
            cout << fixed << setprecision(5) << x << endl;
        }
    } else {
        double delta = b*b - 4*a*c;
        if (delta < 0) cout << "phuong trinh vo nghiem\n";
        else if (delta == 0) {
            double x = -b / (2 * a);
            if(x==-0) x=0;
            cout << "phuong trinh co 1 nghiem\n";
            cout << fixed << setprecision(5) << x << endl;
        } else {
            double x1 = (-b - sqrt(delta)) / (2 * a);
            double x2 = (-b + sqrt(delta)) / (2 * a);
            if (x1 > x2) swap(x1, x2);
            cout << "phuong trinh co 2 nghiem\n";
            if(x1==-0) x1=0;
            if(x2==-0) x2=0;
            cout << fixed << setprecision(5) << x1 << " " << x2 << endl;
        }
    }
    return 0;
}

//QuadraticEquation
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define el "\n"
const int mod=1e9+7;
float ans[4];
int ansCount = 0;
void add(float answer) {
    ans[ansCount++] = answer;
}
void print() {
    sort(ans, ans + ansCount);
    if (ansCount == 0) {
        cout << "phuong trinh vo nghiem" << el;
        return;
    }
    cout << "phuong trinh co " << ansCount << " nghiem" << el;
    for (int i = 0; i < ansCount; i++) cout << fixed << setprecision(5) << ans[i] << " ";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    float a, b, c;
    cin >> a >> b >> c;
    if (a == 0) {
        if (b == 0) {
            cout << (c == 0 ? "phuong trinh co vo so nghiem" : "phuong trinh vo nghiem") << el;
            return 0;
        } else {
            float x = -c / b;
            if (fabs(x) < 1e-6) add(0.0);
            else if (x > 0) {
                add(sqrt(x));
                add(-sqrt(x));
            }
        }
    } else {
        float delta = b * b - 4 * a * c;
        if (delta == 0) {
            float x = -b / (2 * a);
            if (fabs(x) < 1e-6) add(0.0);
            else if (x > 0) {
                add(sqrt(x));
                add(-sqrt(x));
            }
        } else if (delta > 0) {
            float x1 = (-b - sqrt(delta)) / (2 * a);
            float x2 = (-b + sqrt(delta)) / (2 * a);
            if (fabs(x1) < 1e-6) add(0.0);
            else if (x1 > 0) {
                add(sqrt(x1));
                add(-sqrt(x1));
            }
            if (fabs(x2) < 1e-6) add(0.0);
            else if (x2 > 0) {
                add(sqrt(x2));
                add(-sqrt(x2));
            }
        }
    }
    print();
    return 0;
}
