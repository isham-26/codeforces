#include <bits/stdc++.h>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

// Function to check if the input string is a valid IPv4 address
bool isValidIPv4(const string& ip) {
    vector<int> octets;
    stringstream ss(ip);
    string part;

    while (getline(ss, part, '.')) {
        if (part.empty() || !all_of(part.begin(), part.end(), ::isdigit) || stoi(part) < 0 || stoi(part) > 255) {
            return false;
        }
        octets.push_back(stoi(part));
    }

    return octets.size() == 4;
}

// Function to split the IPv4 address string by '.'
vector<int> splitIPv4(const string& ip) {
    vector<int> result;
    stringstream ss(ip);
    string part;
    while (getline(ss, part, '.')) {
        result.push_back(atoi(part.c_str()));  
    }
    return result;
}

// Function to convert IPv4 to compact IPv6 (IPv4-mapped IPv6 address)
void ipv4ToCompactIpv6(const string& ipv4) {
    // Split the IPv4 into 4 octets
    vector<int> octets = splitIPv4(ipv4);

    // Format the IPv4-mapped IPv6: ::FFFF:C0A8:0001
    stringstream ipv6;
    ipv6 << "::FFFF:";

    // Combine the first two octets to form the first part of IPv4 in hexadecimal
    ipv6 << hex << uppercase << setw(2) << setfill('0') << octets[0];
    ipv6 << setw(2) << setfill('0') << octets[1];

    // Add colon and the second part (last two octets) in hexadecimal
    ipv6 << ":" << setw(2) << setfill('0') << octets[2];
    ipv6 << setw(2) << setfill('0') << octets[3];
    cout << ipv6.str() << endl;
}

int main() {
    string ipv4address;
    getline(cin, ipv4address);

    // Validate the IPv4 address
    if (isValidIPv4(ipv4address)) {
        ipv4ToCompactIpv6(ipv4address);
    } else {
        cout << "Invalid input" << endl;
    }

    return 0;
}
