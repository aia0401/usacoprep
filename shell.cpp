// 2019 January Bronze
// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin ("shell.in");
    ofstream fout ("shell.out");
    int n;
    fin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> g(n);
    for (int i = 0; i < n; i++){
        fin >> a[i] >> b[i] >> g[i];
    }
    int max_count = 0;
    for (int start = 1; start <=3; start++){
        int count = 0;
        vector<int> pos(4);//bc indexes 1 - 3. 0 doesnt count; stays empty
        pos[start] = 1;
        for (int i = 0; i < n; i++){
            swap(pos[a[i]],pos[b[i]]);
            if (pos[g[i]]==1){
                count++;
            }
        }
        max_count = max(max_count, count);
    }
    fout << max_count << endl;

}
