#include <iostream>
using namespace std;

int main() {
	ifstream fin ("mixmilk.in");
    ofstream fout ("mixmilk.out");
    int n = 3;
    vector<int> capacity(n);
    vector<int> milk(n);
    for (int i = 0; i < n; i++){
        fin >> capacity[i];
        fin >> milk[i];
    }
    for (int i = 0; i < 100; i++){
        int b1 = i%n;
        int b2 = (i+1)%n;
        int pour = min(milk[b1], (capacity[b2] - milk[b2]));
        milk[b1]-=pour;
        milk[b2]+=pour;
    }
    for (int i = 0; i < n; i++){
        fout << milk[i] << endl;
    }
}