// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin ("shuffle.in");
    ofstream fout ("shuffle.out");
    int n;
    fin >> n;
    vector <int> pos(n);
    vector <int> id(n);
    for (int i = 0; i < n; i++){
        fin >> pos[i];
        pos[i]-=1;
    }
    for (int i = 0; i < n; i++){
        fin >> id[i];
    }
    for (int i = 0; i < 3; i++){
        vector <int> temp(n);
        for (int j = 0; j < n; j++){
            temp[j] = id[pos[j]];
        }
        id = temp;
    }
    for (int i = 0; i < n; i++){
        fout << id[i] << endl;
    }
    
}
