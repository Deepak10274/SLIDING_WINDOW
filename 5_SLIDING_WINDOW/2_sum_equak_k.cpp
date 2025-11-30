#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, -1, -5, 3, -3, 4, -4, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 6; // subarray sum we want
    int prefixsum = 0;
    int total = 0;

    unordered_map<int, int> mp;
    mp[0] = 1;  

    for (int i = 0; i < n; i++) {
        prefixsum += arr[i];

    
        if (mp.count(prefixsum - k)) {
            total += mp[prefixsum - k];
        }

     
        mp[prefixsum]++;
    }

    cout << "Total subarrays with sum = 6 : " << total << endl;

    return 0;
}
