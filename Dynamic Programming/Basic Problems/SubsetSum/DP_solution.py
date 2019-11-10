def isSubset(set,n,sum):
    subset=[[False for i in range(max(n,sum)+1)] for i in range(max(n,sum)+1)]
    for i in range(n+1):
        subset[i][0]=True
    for j in range(1,sum+1):
        subset[0][j]=False
    for i in range(1,n+1):
        for j in range(1,sum+1):
            if j<set[i-1]:
                subset[i][j]=subset[i-1][j]
            if j>=set[i-1]:
                subset[i][j]=subset[i-1][j] or subset[i-1][j-set[i-1]]
    return subset[n][sum]
def isSubsetsum(n,mylis,sum):
    if sum==0:
        return True
    if n==0 and sum!=0:
        return False
    if mylis[n-1]>sum:
        return isSubsetsum(n-1,mylis,sum)
    return isSubsetsum(n-1,mylis,sum) or isSubsetsum(n-1,mylis,sum-mylis[n-1])
t=int(input())
for _ in range(t):
    n=int(input())
    mylis=list(map(int,input().split(" ")))
    sum=int(input())
    print(isSubsetsum(n,mylis,sum))
    print(isSubsetsum(n,mylis,sum))
