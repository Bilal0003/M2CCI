def threeSum( nums: list[int]) -> list[list[int]]:
        ans = []

        for i in range (len(nums)):
            for j in range (len(nums)):
                for k in range (len(nums)):
                    if (nums[i] + nums[j] + nums[k] == 0 and i!=j and i!=k and j!=k):
                        ans.append(sorted([nums[i],nums[j],nums[k]]))

        
        return ans

nums=[0,0,0]       
print(threeSum(nums))

