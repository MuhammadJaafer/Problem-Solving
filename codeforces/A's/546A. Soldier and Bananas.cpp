#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, w, k, sum = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++) {
        sum += k * i;
    }
    if (n >= sum) {
        cout << 0;
    }
    else {
        cout << abs(sum - n);
    }
    return 0;
}