#include<iostream>
#include<vector>
using namespace std;

// We have to remove duplicate element and return the value of K i.e last index of array with unique element- 

int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        int i = j + 1;

        while (i < n) {
            if (nums[i] == nums[j]) {
                i++;
            } else {
                j++;
                nums[j] = nums[i];
                i++;
            }
        }
        return j + 1;
    }



int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5, 5, 6};
    int k = removeDuplicates(nums);
    cout << "Last index of array of unique element: " << k << endl;

    return 0;
}