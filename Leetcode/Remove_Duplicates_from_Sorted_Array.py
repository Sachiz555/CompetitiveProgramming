nums = []
# https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
# Leetcode 26
def removeDuplicates(nums: list[int]) -> int:
    dynamicLength = len(nums)
    i = 1

    while i < dynamicLength:
        if nums[i-1] == nums[i]:
            del nums[i]
            dynamicLength -= 1
        else:
            i+=1
    return len(nums)
