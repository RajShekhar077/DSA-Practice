
#include <bits/stdc++.h>
using namespace std;

long long merge(vector<int>& arr, int st, int mid, int end) {
    vector<int> temp;
    int i = st;
    int j = mid + 1;
    long long invCount = 0;

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            invCount += (mid - i + 1);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    for (int k = st; k <= end; k++) {
        arr[k] = temp[k - st];
    }

    return invCount;
}

long long mergeSort(vector<int>& arr, int st, int end) {
    long long invCount = 0;

    if (st >= end) {
        return 0;
    }

    int mid = st + (end - st) / 2;

    invCount += mergeSort(arr, st, mid);
    invCount += mergeSort(arr, mid + 1, end);
    invCount += merge(arr, st, mid, end);

    return invCount;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << mergeSort(arr, 0, n - 1) << endl;

    return 0;
}
