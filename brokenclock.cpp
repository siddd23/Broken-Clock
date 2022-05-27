#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

#ifdef DEBUG
#define int128 long long
#else
#define int128 __int128
#endif // DEBUG

const int128 bck11 = 15709090909091;    //  (4*mod + 1) // 11
const int128 mod = 12*60*60* (int128)1e9; // find ticks in 12 h

bool f(int TN, int128 a, int128 b, int128 c) {
    int128 t = (((b-a) * bck11) % mod + mod) % mod;
    if ((708 * t - c + b) % mod == 0) {
        ll n = t % (ll)1e9;
        t /= 1e9;
        ll s = t % 60;
        t /= 60;
        ll m = t % 60;
        ll h = t / 60;
        cout << "Case #" << TN << ": " << h << " " << m << " " << s << " " << n << "\n";
        
        return true;
    }
    else return false;
}

signed main() {
    
    int T;
    cin >> T;
    for (int TN = 1; TN <= T; TN++) {
        ll ta, tb, tc;
        cin >> ta >> tb >> tc;
        int128 a = ta, b = tb, c = tc;
        if (f(TN, a, b, c) || f(TN, a, c, b) || f(TN, b, a, c) || f(TN, b, c, a) || f(TN, c, a, b) || f(TN, c, b, a)) {
    
        }
        else {
            cout << "Problem" << "\n";
        }
    }

    return 0;
}
