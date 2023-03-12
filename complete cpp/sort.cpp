#include <algorithm>
#include <iostream>

using namespace std;

bool ascending(int a, int b) {
    return a < b;
}
bool descending(int a, int b) {
    return a < b;
}
int main() {
    int a[] = {77,44,23,64,12,90,81,18};
    int n = sizeof(a) / sizeof(a[0]);

    // sort only the even-indexed elements
    sort(a + 1, a + n, ascending);
    sort(a + 2, a + n, descending);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
