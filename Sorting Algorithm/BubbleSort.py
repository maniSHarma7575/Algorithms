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
if __name__=="__main__":
    mylis=list(map(int,input().split(" ")))
    s=Sort(mylis)
    s.BubbleSort()
    s.printElements()
