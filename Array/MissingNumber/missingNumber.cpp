#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums) //xor
    {
        int n = nums.size();

        int exor = n;

        for (int i = 0; i < n; i++)
        {
            exor ^= nums[i] ^ i;
        }
        return exor;
    }
};

int main()
{
    Solution obj;
    vector<int> nums{9, 6, 4, 2, 3, 5, 7, 0, 1};
    cout << obj.missingNumber(nums) << endl;
    return 0;
}

/*

DIFFERENT APPROACHES

*/

// int missingNumber(vector<int> &nums) //hashtable - extra space
//     {
//         set<int> hashSet;

//         hashSet.insert(nums.begin(), nums.end()); // inserting all the elements of vector inside set

//         for (int i = 0; i <= nums.size(); i++)
//         {
//             //check if set contains i
//             if (!(hashSet.find(i) != hashSet.end())) //set.find(i) != set.end() -> set.find will return set.end() if it does not find the element in set
//             {
//                 return i;
//             }
//         }
//         return -1;
//     }

// int missingNumber(vector<int> &nums)  // O(n^2) time (brute force)
// {
//     for (int i = 0; i <= nums.size(); i++)
//     {
//         bool flag = true;
//         for (int j = 0; j < nums.size(); j++)
//         {
//             if (i == nums.at(j))
//             {
//                 flag = false;
//             }
//         }
//         if (flag)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int missingNumber(vector<int> &nums)  //sorting the vector
// {
//     sort(nums.begin(), nums.end());
//     int n = nums.size();
//     if (nums[0] != 0)
//     {
//         return 0;
//     }
//     if (nums[n - 1] != n)
//     {
//         return n;
//     }
//     for (int i = 1; i <n; i++) //1
//     {
//         int var = i;
//         if (nums[i] != var)
//         {
//             return var;
//         }
//     }
//     return -1;
// }