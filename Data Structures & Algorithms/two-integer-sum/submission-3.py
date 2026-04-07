class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        answer = []
        
        for i in range(0, len(nums)):
            print(i)
            for j in range(0, len(nums)):
                print(j)
                if(nums[i] + nums[j] == target and i != j):
                    answer.append(i)
                    print(i)
                    answer.append(j)
                    print(j)
                    return answer
        return answer