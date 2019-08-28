class QuickSort:
    arr=list()
    def __init__(self,arr):
        self.arr=arr
    def swap(self,a,b):
        t=a
        a=b
        b=t
    def quicksort(self,p,r):
        if p<r:
            q=QuickSort.Partition(self,p,r)
            QuickSort.quicksort(self,p,q-1)
            QuickSort.quicksort(self,q+1,r)
    def Partition(self,p,r):
        x=self.arr[r]
        i=p-1
        for j in range(p,r):
            if self.arr[j]<=x:
                i=i+1
                self.arr[i],self.arr[j]=self.arr[j],self.arr[i]
        self.arr[i+1],self.arr[r]=self.arr[r],self.arr[i+1]
        return i+1
    def printlist(self):
        print(self.arr)
if __name__=="__main__":
    mylis=list(map(int,input().split(" ")))
    s=QuickSort(mylis);
    s.quicksort(0,len(mylis)-1)
    print(s.printlist())
    
