#include <iostream>
#include <bitset>

using namespace std;

void new_fn(int x, int y) {
    cout << "x: " << bitset<8>(x) << endl
        << "y: " << bitset<8>(y) << endl;

    int z1 = x & y;
    cout << "x & y = " << bitset<8>(z1) << ';' << endl;
    int z2 = x | y;
    cout << "x | y = " << bitset<8>(z2) << ';' << endl;
    int z3 = x ^ y;
    cout << "x ^ y = " << bitset<8>(z3) << ';' << endl;
    int z4 = ~x;
    cout << "~x = " << bitset<8>(z4) << ';' << endl;

    int z5 = x << 1;
    cout << "x << 1 = " << bitset<8>(z5) << ';' << endl;
    int z6 = x >> 2;
    cout << "x >> 2 = " << bitset<8>(z6) << ';' << endl;

    int x1 = 1 << 2;
    int x2 = 1 << 3;
    int x_and = x1 | x2;
    cout << "x_and = " << bitset<8>(x_and) << ';' << endl;
}

int main() {
    int x = 0b0110;
    int y = 0b0011;

    new_fn(x, y);

    return 0;
}