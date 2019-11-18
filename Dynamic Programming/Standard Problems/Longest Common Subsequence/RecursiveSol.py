#Longest Common subsequence recursive solution
#File Created by Manish Sharma
def lcs(x,n,y,m):
	if n==0 or m==0:
		return 0
	elif x[n-1]==y[m-1]:
		return 1+lcs(x,n-1,y,m-1)
	else:
		return max(lcs(x,n-1,y,m),lcs(x,n,y,m-1))
x=input()
y=input()
print(lcs(x,len(x),y,len(y)))
