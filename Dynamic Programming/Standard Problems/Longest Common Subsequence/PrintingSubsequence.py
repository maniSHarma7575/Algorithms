#Longest Common subsequence Printing solution
#File Created by Manish Sharma
def printsub(B,X,i,j):
    if i==0 or j==0:
        return
    if B[i][j]=='<':
        printsub(B,X,i-1,j-1)
        print(X[i-1],end="")
    elif B[i][j]=='^':
        printsub(B,X,i-1,j)
    else:
        printsub(B,X,i,j-1)
def printsb(L,X,Y,i,j):
    if i==0 or j==0:
        return
    elif X[i-1]==Y[j-1]:
        printsb(L,X,Y,i-1,j-1)
        print(X[i-1],end="")
    else:
        if L[i-1][j]>=L[i][j-1]:
            printsb(L,X,Y,i-1,j)
        else:
            printsb(L,X,Y,i,j-1)
def lcs(X , Y): 
    m = len(X) 
    n = len(Y) 
    L = [[None]*(n+1) for i in range(m+1)]
    B = [[None]*(n+1) for i in range(m+1)]
    for i in range(m+1): 
        for j in range(n+1): 
            if i == 0 or j == 0 : 
                L[i][j] = 0
                B[i][j] = '&'
            elif X[i-1] == Y[j-1]: 
                L[i][j] = L[i-1][j-1]+1
                B[i][j]='<'
            else: 
                L[i][j] = max(L[i-1][j] , L[i][j-1])
                if L[i-1][j]>= L[i][j-1]:
                    B[i][j]='^'
                else:
                    B[i][j]=' '
  
    # L[m][n] contains the length of LCS of X[0..n-1] & Y[0..m-1]
    for i in B:
        print(i)
    printsub(B,X,m,n)
    print(" ")
    printsb(L,X,Y,m,n)
    print(" ")
    return L[m][n]
x=input()
y=input()
print(lcs(x,y))
