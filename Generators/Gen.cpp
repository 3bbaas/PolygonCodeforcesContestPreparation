#include <bits/stdc++.h>
#include "testlib.h"
#include "GeneratorClass.cpp"

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

/* +:-:+:-:+:-:+:-:+:-:+:-:+:-[ Generator ]:-:+:-:+:-:+:-:+:-:+:-:+:-+:- */
#define FILES 5
//#define MultipleTestCase

void s0lve() {
    Gen gen;




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
    for (int i = 0; i < FILES; ++i) {
        string FILE = R"(Generators\tests\testCase-)" + to_string(i) + ".txt";
        freopen(FILE.c_str(), "w", stdout);
        main2();
    }
    return 0;
}

