#include <bits/stdc++.h>
#include "names.cpp"
#include "testlib.h"

using namespace std;

using ll = long long;
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

    string getName() {
        return Names::names[get(0, 2737)];
    }

};