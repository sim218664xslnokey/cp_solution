#include <bits/stdc++.h>

std::string timeConversion(std::string s) {
    std::string hour_string = s.substr(0, 2);
    int hour = stoi(hour_string);
    size_t pos = s.find("PM");
    if (pos != std::string::npos) {
        if (hour + 12 < 24)
            hour_string = std::to_string(hour+12);
    } else {
        if (hour == 12)
            hour_string = "00";
    }
    return s.replace(0, 2, hour_string).erase(s.size() - 2);
}

int main()
{
    std::ofstream fout(getenv("OUTPUT_PATH"));

    std::string s;
    std::getline(std::cin, s);

    std::string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

