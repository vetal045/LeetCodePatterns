    #include <iostream>
    #include <vector>
    
    using namespace std;

    vector<int> twoSum(vector<int>& nums, int target) 
    {
        // Old solution
        // unordered_map<int, int> map;
        // for (int i = 0; i < nums.size(); i++) {
        //     int complement = target - nums[i];
        //     if (map.find(complement) != map.end()) {
        //         return { map[complement], i };
        //     }
        //     map[nums[i]] = i;
        // }
        // return {-1, -1};

        int i = 0, j = i+1;

        while (j < nums.size())
        {
            if (nums[i] + nums[j] == target)
            {
                break;
            }
            ++i;
            j = i + 1;
        }
        
        return {i, j};
    }

    int main()
    {
        vector<int> v{2,7,11,15};
        int target = 9;

        auto v1 = twoSum(v, target);
        cout << "Answer: [" << v1[0] <<", " << v1[1] << "]" << endl;

        return 0;
    }