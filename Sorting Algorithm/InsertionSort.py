class Sort:
    def __init__(self,arr):
        self.arr=arr
    def BubbleSort(self):
        for i in range(len(self.arr)):
            for j in range(i+1,len(self.arr)):
                if self.arr[i]<=self.arr[j]:
                    temp=self.arr[i]
                    self.arr[i]=self.arr[j]
                    self.arr[j]=temp
    def printElements(self):
        for i in self.arr:
            print(i,end=" ")
    def SelectionSort(self):
        for i in range(0,len(self.arr)):
            minpos=i
            for j in range(minpos+1,len(self.arr)):
                if self.arr[minpos]>=self.arr[j]:
                    minpos=j
            temp=self.arr[minpos]
            self.arr[minpos]=self.arr[i]
            self.arr[i]=temp
    def InsertionSort(self):
        for i in range(1,len(self.arr)):
            j=i
            while j>=0 and self.arr[j]<self.arr[j-1]:
                temp=self.arr[j]
                self.arr[j]=self.arr[j-1]
                self.arr[j-1]=temp
                j=j-1
            
                
if __name__=="__main__":
    mylis=list(map(int,input().split(" ")))
    s=Sort(mylis)
    s.InsertionSort()
    s.printElements()
