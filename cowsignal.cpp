// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    ofstream fout ("cowsignal.out");
    ifstream fin ("cowsignal.in");
	int m, n, k; 
    fin >> m >> n >> k;
    char a[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            fin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++){
        for (int ik = 0; ik < k; ik++){
            for (int j = 0; j < n; j++){
                for (int jk = 0; jk < k; jk++){
                    fout << a[i][j];
                }
            }
        fout << "\n";
        }
    }
}
