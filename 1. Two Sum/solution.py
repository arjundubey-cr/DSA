class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        passed = {}
        i = 0
        for num in nums:
            second = target - num
            if second in passed:
                return [passed[second], i]
            passed[num] = i
            i+=1