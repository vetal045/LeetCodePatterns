# 1 Two Pointers
Short explanation: The Two Pointers pattern involves using two pointers to efficiently traverse and manipulate elements in a data structure. It is commonly used for tasks such as finding pairs, subarrays, or subsets that meet specific conditions.

```cpp
#include <vector>

void twoPointers(std::vector<int>& nums) {
    int left = 0;  // Initialize the left pointer
    int right = nums.size() - 1;  // Initialize the right pointer
    
    while (left < right) {  // Iterate until the pointers meet
        // Perform operations with nums[left] and nums[right]
        // Adjust the pointers based on specific conditions
        left++;  // Move the left pointer
        right--;  // Move the right pointer
    }
}
```

## When to use this pattern:

**Use the Two Pointers pattern when:**
- Searching for pairs: For example, finding two elements that add up to a target sum:
```
while (left < right) {
    int sum = nums[left] + nums[right];
    if (sum == target) {
        // Found the pair
        break;
    } else if (sum < target) {
        left++;
    } else {
        right--;
    }
}
```

- Looking for subarrays or subsets: For example, finding a subarray with the maximum sum:
```
int maxSum = 0;
int windowSum = 0;
while (right < nums.size()) {
    windowSum += nums[right];
    if (right >= k - 1) {
        maxSum = std::max(maxSum, windowSum);
        windowSum -= nums[left];
        left++;
    }
    right++;
}
```

- It is often used with sorted arrays or when optimizing time complexity by avoiding nested iterations.

## Time complexity
The Two Pointers pattern achieves an optimal time complexity of O(n), where n is the size of the input data structure. Both pointers traverse the data structure in a single pass, resulting in efficient and linear performance.