#Longest Palindromic Subsequence Recursive Solution
#File created by Manish Sharma
def lpsdp(X):
    n=len(X)
    L=[[0 for x in range(n)] for x in range(n)]
    for i in range(n):
        L[i][i]=1
    for k in range(2,n+1):
        for i in range(n-k+1):
            j=i+k-1
            if X[i]==X[j] and k==2:
                L[i][j]=2
            elif X[i]==X[j]:
                L[i][j]=L[i+1][j-1]+2
            else:
                L[i][j]=max(L[i][j-1],L[i+1][j])
    return L[0][n-1]
def lps(X,i,j):
    #print(i,j)
    if i==j:
        return 1
    elif (X[i]==X[j]) and (j==(i+1)):
        return 2
    elif X[i]==X[j]:
        return lps(X,i+1,j-1)+2
    else:
        return max(lps(X,i+1,j),lps(X,i,j-1))
X=input()
print(lps(X,0,len(X)-1))
print(lpsdp(X))
