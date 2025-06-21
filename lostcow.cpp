// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
int main(){

ifstream fin ("lostcow.in");
ofstream fout ("lostcow.out");
int x, y;
fin >> x >> y;
int total = 0;
int distance = 1;
int direction = 1;
int current = x;
while (true){
    int next = x + distance * direction;
    if (current <=y && y <= next || current >= y && y >= next){
        total += abs(current - y);
        break;
    }
    else{
        total += abs(current - next);
        direction *= -1;
        distance *= 2;
        current = next;
    }
}

fout << total;

}