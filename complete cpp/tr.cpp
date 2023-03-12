#include <algorithm>
#include <iostream>

using namespace std;

bool zig_zag(int a, int b) {
    return a > b;
}

int main() {
    int a[] = {4,3,7,8,6,2,1};
    int n = sizeof(a) / sizeof(a[0]);

    sort(a, a + n, zig_zag);

    // rearrange the elements in the desired order
    for (int i = 0; i < n - 1; i += 2) {
        swap(a[i], a[i + 1]);
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

