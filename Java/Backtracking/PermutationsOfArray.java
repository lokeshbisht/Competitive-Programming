// 46. Permutations
// Link : https://leetcode.com/problems/permutations/

// Input: [1,2,3]
// Output:
// [
//   [1,2,3],
//   [1,3,2],
//   [2,1,3],
//   [2,3,1],
//   [3,1,2],
//   [3,2,1]
// ]

class Solution {
    List<List<Integer>> result = new ArrayList<>();
    
    void permute(int[] nums, int start, int end) {        
        if(start == end) {            
            addToList(nums);
        }
        else {
            for(int i = start; i < end; i++) {
                swap(nums, start, i);                
                permute(nums, start + 1, end);
                swap(nums, start, i);
            }
        }
    }
    
    void swap(int[] arr, int i, int j) {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
    
    void addToList(int[] arr) {
        List<Integer> list = new ArrayList<>();
        for(int i : arr) {
            list.add(i);
        }
        result.add(list);
    }
    
    public List<List<Integer>> permute(int[] nums) {
        int n = nums.length;
        if(n == 0) {
            return result;
        }
        permute(nums, 0, n);
        return result;
    }
}