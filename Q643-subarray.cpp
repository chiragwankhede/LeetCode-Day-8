#include<iostream>
#include<vector>
using namespace std;

// Sliding window method to find maximum avg of a subarray -  

double subArray(vector<int>& nums , int k ){
    int n = nums.size();
    int i =0;
    int j = k-1;
    int sum = 0;

    for(int k=i ; k<=j ;k++){
        sum += nums[k];
    }

    int maxSum = sum;
    j++;

    while(j<n){
        sum -= nums[i++];
        sum += nums[j++];
    }

    maxSum = max(maxSum , sum);

    double avg = maxSum / (double)k ;

    return avg;






}



int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 3;
    double result = subArray(nums, k);
    cout << "Maximum average of subarray of size " << k << ": " << result << endl;
    return 0;
}