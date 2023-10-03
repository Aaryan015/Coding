#User function Template for python3



def maxArea(A,le):
    #code here
    l = 0
    r = len(A) - 1
    max_area = 0

    while l < r:
        l1, r1 = A[l], A[r]
        current_area = min(l1, r1) * (r - l)
        max_area = max(current_area, max_area)

        if l1 <= r1:
            l += 1
        else:
            r -= 1

    return max_area





#{ 
 # Driver Code Starts
#Initial Template for Python 3



for _ in range(0,int(input())):
    
    n = int(input())
    l = list(map(int,input().split()))
    
    print(maxArea(l,n))
    
    
# } Driver Code Ends