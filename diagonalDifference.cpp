#include <bits/stdc++.h>
#include <cmath>

int main () {
    int i, j, n = 0;
    int arr[100][100];
    int sum1 = 0, sum2 = 0;
    int total = 0;

    std::cin >> n;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            std::cin >> arr[i][j];
        }
    }

    for (i = 0; i < n; i++) {
        sum1 += arr[i][i];
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i+j == (n - 1))
                sum2 += arr[i][j];
        }
    }

    total = sum1 - sum2;

    std::cout << std::abs(total) << std::endl;

    return 0;
}


