class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        nums_temp = set(nums)
        if (len(nums) != len(nums_temp)):
            return True
        return False
        