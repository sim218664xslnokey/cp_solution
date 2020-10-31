#include <bits/stdc++.h>

int main() {
    int arr[100];
    int n = 0, i;
    int positive = 0, negative = 0, zero = 0;    

    std::cin >> n;

    for(i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    for (i = 0; i < n; i++) {
        if (arr[i] == 0) {
            zero += 1;
        } else if (arr[i] <= 0) {
            negative += 1;
        } else {
            positive += 1;
        }
    }
    
    std::cout << static_cast<double>(positive) / n << std::endl;
    std::cout << static_cast<double>(negative) / n << std::endl;
    std::cout << static_cast<double>(zero) / n << std::endl;

    return 0;
}

