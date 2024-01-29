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

/* +:-:+:-:+:-:+:-:+:-:+:-:+:-[ Validator ]:-:+:-:+:-:+:-:+:-:+:-:+:-+:- */

#define MultipleTestCases
#define TestCasesCount 100'00

void VALIDATOR() {


} // inf.readEoln();

/* +:-:+:-:+:-:+:-:+:-:+:-:+:-[ Validator ]:-:+:-:+:-:+:-:+:-:+:-:+:-+:- */

void multiTestCases();

signed main(int argc, char **argv) {
    registerValidation(argc, argv); // to access on input stream "inf"
#ifdef MultipleTestCases
    multiTestCases();
#else
    VALIDATOR();
#endif
    inf.readEof();
    return 0;
}

void multiTestCases() {
    int testCount = inf.readInt(1, TestCasesCount, "test-Count");
    inf.readEoln();
    for (int testcase = 1; testcase <= testCount; ++testcase) {
        setTestCase(testcase);
        VALIDATOR();
    }
}