#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>

using namespace std;

// Function to calculate the mean
double calculateMean(const vector<int>& data) {
    double sum = 0;
    for (int num : data) {
        sum += num;
    }
    return sum / data.size();
}

// Function to calculate the median
double calculateMedian(vector<int> data) {
    sort(data.begin(), data.end());
    int n = data.size();
    if (n % 2 == 0) {
        return (data[n / 2 - 1] + data[n / 2]) / 2.0;
    }
    else {
        return data[n / 2];
    }
}

// Function to calculate the mode
int calculateMode(const vector<int>& data) {
    unordered_map<int, int> frequency;
    for (int num : data) {
        frequency[num]++;
    }

    int mode = data[0];
    int maxCount = 0;
    for (auto& pair : frequency) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mode = pair.first;
        }
    }
    return mode;
}

int main() {
    // Sample list of numbers
    vector<int> data = { 1, 2, 3, 4, 5, 5, 6, 7, 8, 9, 9, 9 };

    // Calculate mean
    double mean = calculateMean(data);
    cout << "Mean: " << mean << endl;

    // Calculate median
    double median = calculateMedian(data);
    cout << "Median: " << median << endl;

    // Calculate mode
    int mode = calculateMode(data);
    cout << "Mode: " << mode << endl;

    return 0;
}
