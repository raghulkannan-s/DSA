# Last updated: 7/18/2025, 6:58:08 PM
class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        i = 1
        for j in range( 2, len(nums) ):
            if nums[j] != nums[i-1]:
                i+=1
                nums[i] = nums[j]                    

        return i+1
            
        