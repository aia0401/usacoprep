// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin ("blist.in");
    ofstream fout ("blist.out");
	int n;
    fin >> n;
    vector<int> s(n);
    vector<int> t(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++){
        fin >> s[i] >> t[i] >> b[i];
    }
    int max_count = 0;

    for (int time = 0; time < 1000; time++){
        int count = 0;
        for (int i = 0; i < n; i++){
            if (time >= s[i] && time <= t[i]){
                count+=b[i];
            }
        }
        max_count = max(max_count, count);
    }

    fout << max_count;
}
