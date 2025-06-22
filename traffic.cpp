// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	ifstream fin ("traffic.in");
    ofstream fout ("traffic.out");
    int n;
    fin >> n;
    vector<string> a(n);
    vector<int> b(n);
    vector<int> c(n);
    for (int i = 0; i < n; i++){
        fin >> a[i] >> b[i] >> c[i];
    }
    int low = 0; 
    int high = 1e9;
    for (int i = n-1; i >= 0; i--){
        if (a[i] == "none"){
            low = max(low, b[i]);
            high = min (high, c[i]);
        }
        else if (a[i] == "on"){
            low-=b[i];
            high-=c[i];
            low = max(0, low);
        }
        else if (a[i] == "off"){
            low+=b[i];
            high+=c[i];
        }
    }

    fout << low << " " << high << endl;

    for (int i = 0; i < n; i++){
        if (a[i] == "none"){
            low = max (low, b[i]);
            high = min (high, c[i]);
            low = max(0, low);
        }
        else if (a[i] == "on"){
            low += b[i];
            high += c[i];
        }
        else if (a[i] == "off"){
            low -= b[i];
            high -= c[i];
            low = max(0, low);
        }
    }    

    fout << low << " " << high;
}
