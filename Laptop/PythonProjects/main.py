def longestPeak(array):
    i = 1
    MaxPeak = 0
    while i < len(array) - 1 :
        isPeak = array[i] > array[i-1] and array[i] > array[i+1]
        if not isPeak:
            i+=1
            continue
                
        LeftIdx = i-2
        while LeftIdx >= 0 and array[LeftIdx] < array[LeftIdx + 1]:
            LeftIdx -= 1

        RightIdx = i+2
        while RightIdx < len(array) and array[RightIdx] < array[RightIdx - 1]:
            RightIdx += 1

        CurrentPeak = RightIdx - LeftIdx - 1
        MaxPeak = max(MaxPeak,CurrentPeak) 
        i = RightIdx
    return MaxPeak
    pass


array1 = [1, 2, 3, 3, 4, 0, 10, 6, 5, -1, -3, 2, 3]
print(longestPeak(array1))
