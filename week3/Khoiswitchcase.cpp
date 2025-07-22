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
    ll day,month; cin>>day>>month;
    switch (month) {
        case 3:
            if (day >= 21) cout<< "Bach Duong";
            else cout<< "Song Ngu";
            break;
        case 4:
            if (day <= 19) cout<< "Bach Duong";
            else cout<< "Kim Nguu";
            break;
        case 5:
            if (day <= 20) cout<< "Kim Nguu";
            else cout<< "Song Tu";
            break;
        case 6:
            if (day <= 21) cout<< "Song Tu";
            else cout<< "Cu Giai";
            break;
        case 7:
            if (day <= 22) cout<< "Cu Giai";
            else cout<< "Su Tu";
            break;
        case 8:
            if (day <= 22) cout<< "Su Tu";
            else cout<< "Xu Nu";
            break;
        case 9:
            if (day <= 22) cout<< "Xu Nu";
            else cout<< "Thien Binh";
            break;
        case 10:
            if (day <= 23) cout<< "Thien Binh";
            else cout<< "Thien Yet";
            break;
        case 11:
            if (day <= 22) cout<< "Thien Yet";
            else cout<< "Nhan Ma";
            break;
        case 12:
            if (day <= 21) cout<< "Nhan Ma";
            else cout<< "Ma Ket";
            break;
        case 1:
            if (day <= 19) cout<< "Ma Ket";
            else cout<< "Bao Binh";
            break;
        case 2:
            if (day <= 18) cout<< "Bao Binh";
            else cout<< "Song Ngu";
            break;
    }
    return 0;
}
