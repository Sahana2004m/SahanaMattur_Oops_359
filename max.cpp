#include <iostream>
using namespace std;

inline int maxNum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Biggest: " << maxNum(10, 20);
    return 0;
}
