#Longest Palindromic Subsequence Recursive Solution
#File created by Manish Sharma
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
