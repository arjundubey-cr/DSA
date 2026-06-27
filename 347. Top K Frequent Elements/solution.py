class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        counter = {}
        frequency = [[] for _ in range(len(nums)+1)] #[ [],[],[],[] ]
        result = []

        # Each number's frequency
        for num in nums:
            counter[num] = 1 + counter.get(num, 0)
        
        # Numbers grouped by frequency
        for num,count in counter.items():
            frequency[count].append(num)

        for i in range(len(frequency)-1, 0, -1):
            for num in frequency[i]:
                result.append(num)
                if len(result) == k:
                    return result