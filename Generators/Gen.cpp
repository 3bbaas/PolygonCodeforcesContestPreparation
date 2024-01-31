#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

#define ln '\n'
#define ll long long
#define ld long double
#define N ((int)2e5 + 5)
#define oo ((ll)1e17 + 9)
#define mod ((ll)1e9 + 7)
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define alr(arr) arr.rbegin(), arr.rend()
#define kill(x) return void(cout << x << ln)
#define init(ar, n) memset((ar), n, sizeof (ar))
#define db(xx) cout << #xx << ": " << xx << ln
#define fix(pre) cout << setprecision(pre) << fixed


/* +:-:+:-:+:-:+:-:+:-:+:-:+:-[ Gen-Class ]:-:+:-:+:-:+:-:+:-:+:-:+:-+:- */

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
template<typename T>
using ui = uniform_int_distribution<T>;


class Gen {
public:
    template<typename T = int>
    T get(T Min = 0, T Max = 1e8) {
        ui<T> value(Min, Max);
        return value(rng);
    }

    template<typename T = int>
    vector<T> getArr(int size, int srt = 0, T Min = 0, T Max = 1e8) {
        vector<T> vec(size);
        for (auto &i: vec) i = get<T>(Min, Max);
        if (srt == 1) { sort(vec.begin(), vec.end(), greater<>()); }
        else if (srt == 2) { sort(vec.begin(), vec.end()); }
        else shuffle(vec.begin(), vec.end(), rng);
        return vec;
    }

    template<typename T = int>
    vector<T> getDistinctArr(int size, int srt = 0, T Min = 0, T Max = 1e8) {
        vector<T> vec(size);
        set<T> s;
        while (s.size() < size) { s.insert(gen(Min, Max)); }
        int idx = 0;
        for (auto &i: s) vec[idx++] = i;
        if (srt == 1) { sort(vec.begin(), vec.end(), greater<>()); }
        else if (srt == -1) shuffle(vec.begin(), vec.end(), rng);
        return vec;
    }

    char getChar(bool CASE = false) { // Not Sure ....
        char a = 'a', b = 'z';
        if (CASE) { a = 'A', b = 'Z'; }
        ui<char> ret(a, b);
        return ret(rng);
    }

    string getString(int size, int upr = 0) { // Not Sure ....
        string ret;
        if (upr) for (int i = 0; i < size; ++i) { ret += getChar(true); }
        else for (int i = 0; i < size; ++i) { ret += getChar(); }
        return ret;
    }

    string getBinary(int size, bool DT = false) {
        string ret;
        while (size--)ret += to_string(get(0, 1));
        if (DT) return stoll(ret), ret;
        return ret;
    }

};
/* +:-:+:-:+:-:+:-:+:-:+:-:+:-[ Gen-Class ]:-:+:-:+:-:+:-:+:-:+:-:+:-+:- */

/* +:-:+:-:+:-:+:-:+:-:+:-:+:-[ Generator ]:-:+:-:+:-:+:-:+:-:+:-:+:-+:- */
#define LOCAL
#define FILES 5
//#define MultipleTestCase

void s0lve() {
    Gen gen;
//    gen.get<ll>(1, 1e5);
//    auto v = gen.getArr(11);
//    for (auto itr: v) cout << itr << ' ';


    cout << '\n';
}

/* +:-:+:-:+:-:+:-:+:-:+:-:+:-[ Generator ]:-:+:-:+:-:+:-:+:-:+:-:+:-+:- */

void main2() {
    int tst = 1;
#ifdef MultipleTestCase
    tst = rnd.next(1, 100'00);
    cout << tst << '\n';
#endif
    while (tst--) s0lve();
}

signed main(int argc, char **argv) {
    registerGen(argc, argv, 1);
#ifdef LOCAL
    for (int i = 0; i < FILES; ++i) {
        string FILE = R"(Generators\tests\testCase-)" + to_string(i) + ".txt";
        freopen(FILE.c_str(), "w", stdout);
        main2();
    }
#else
    main2();
#endif
    return 0;
}

