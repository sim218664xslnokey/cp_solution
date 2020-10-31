#include <bits/stdc++.h>

void func(int arraya[], int arrayb[]) {
    int alice = 0, bob = 0;

    for (int i = 0; i < 3; i++) {
        if (arraya[i] > arrayb[i]) {
            alice++;
        } else if (arraya[i] < arrayb[i]){
            bob++;
        }
    }

    std::cout << alice << " " << bob << std::endl;
    
}


int main() {
    int i;
    int arrayA[3];
    int arrayB[3];

    for (i = 0; i < 3; i++) {
        std::cin >> arrayA[i];
    }

    for (i = 0; i < 3; i++) {
        std::cin >> arrayB[i];
    }

    func(arrayA, arrayB);
    
    return 0;
}

