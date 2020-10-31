#include <bits/stdc++.h>

int main() {

    int i;
    long arr[100];
    long sum = 0;
    int lim;

    std::cin >> lim;

    for (i = 0; i < lim; i++) {
        std::cin >> arr[i];
    }

    for (i = 0; i < lim; i++) {
        sum = sum + arr[i];
    }

    std::cout << sum << std::endl;

    return 0;
}

