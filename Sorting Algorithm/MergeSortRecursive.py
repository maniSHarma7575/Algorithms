class Sort:
    def __init__(self,arr):
        self.arr=arr
    
    def printElements(self):
        for i in self.arr:
            print(i,end=" ")
    
    def merge(self,l,m,r):
        n1=m-l+1
        n2=r-m

        L=[0]*(n1)
        R=[0]*(n2)

        for i in range(0,n1):
            L[i]=self.arr[l+i]
        for j in range(0,n2):
            R[j]=self.arr[m+1+j]
        i=0
        j=0
        k=l
        while i<n1 and j<n2:
            if L[i]<=R[j]:
                self.arr[k]=L[i]
                i+=1
            else:
                self.arr[k]=R[j]
                j+=1
            k+=1
        while i<n1:
            arr[k]=L[i]
            i+=1
            k+=1
        while j<n2:
            arr[k]=R[j]
            j+=1
            k+=1
    def mergeSort(self,l,r):
        if l<r:
            m=(l+(r-1))/2
            m=int(m)
            Sort.mergeSort(self,l,m)
            Sort.mergeSort(self,m+1,r)
            Sort.merge(self,l,m,r)
            
        
if __name__=="__main__":
    arr=list(map(int,input().split(" ")))
    s=Sort(arr)
    s.mergeSort(0,len(arr)-1)
    s.printElements()
