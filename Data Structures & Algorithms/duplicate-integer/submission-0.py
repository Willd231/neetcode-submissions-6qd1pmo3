class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        status = False
        for i in range(0, len(nums)):
            if(nums.count(nums[i]) > 1):
                status = True;
        return status