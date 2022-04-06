#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int max = nums.size() / 2;
        set<int> hashSet;
        hashSet.insert(nums.begin(), nums.end()); //inserting distinct elements in hashSet from the vector

        for (int i = 0; i < hashSet.size(); i++)
        {
            //to get element at i'th index in hashSet
            set<int>::iterator it = hashSet.begin();
            advance(it, i); //it moves iterator to i'th index

            int elementCount = count(nums.begin(), nums.end(), *it); // counting number of occurrence of element in the vector (*it-> will give the value at that iterator)
            if (elementCount > max)
            {
                return *it;
            }
        }
        return -1;
    }
};

int main()
{
    Solution obj;
    vector<int> nums{2, 2, 1, 1, 1, 2, 2};

    cout << obj.majorityElement(nums);

    return 0;
}