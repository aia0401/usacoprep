// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin ("speeding.in");
    ofstream fout ("speeding.out");
    int n, m;
    fin >> n >> m;

    vector<int> road(100);
    int pos = 0;
    for (int i = 0; i < n; i++){
        int length, speed;
        fin >> length >> speed;
        for (int j = 0; j < length; j++){
            road[pos++] = speed;
        }
    }
    vector<int> bessie(100);
    pos = 0;
    for (int i = 0; i < m; i++){
        int length, speed;
        fin >> length >> speed;
        for (int j = 0; j < length; j++){
            bessie[pos++] = speed;
        }
    }
    
    int max_speed = 0;

    for (int i = 0; i < 100; i++){
        max_speed = max (max_speed, bessie[i]-road[i]);
    }

    fout << max_speed;

}
