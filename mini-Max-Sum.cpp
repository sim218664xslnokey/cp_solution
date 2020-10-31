#include <bits/stdc++.h>
#include <vector>


void minAndMax(const std::vector<int> &getArr) {
    long int first = 0, last = 0;

    for (auto iter = getArr.begin(); iter != std::prev(getArr.end()); ++iter) 
        first += *iter;

    for (auto it = std::next(getArr.begin()); it != getArr.end(); ++it)
        last += *it;    
    
    std::cout << first << " " << last << std::endl;
}


int main() {
    std::vector<int> arrayvec;
    int input;

    while (std::cin >> input)
        arrayvec.push_back(input);

    sort(arrayvec.begin(), arrayvec.end());

    minAndMax(arrayvec);

    return 0;
}

