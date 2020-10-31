#include <bits/stdc++.h>

int main(void) {
    int arr[1000];
    int i, n; 
    int sum = 0;

    std::cin >> n;

    for (i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    for (i = 0; i < n; i++) 
    {
        sum = sum + arr[i];
    }

    std::cout << sum << std::endl;

    return 0;
}

