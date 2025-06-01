// generator.cpp
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = rand() % 10 + 1;
    cout << n << endl;
    for (int i = 0; i < n; i++) cout << rand() % 100 << " ";
    cout << endl;
    return 0;
}
