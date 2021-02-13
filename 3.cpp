#include <iostream>
using namespace std;

int main() {
    int a;
    int n;
    cin >> a >> n;
    
    cout << (n + a - 2) % 7 + 1;
    return 0;
}
