def LinearSearch(arr,k):
    for i in arr:
        if i==k:
            print("element found at position: ",arr.index(i)+1)
            return
    print("Element Not found: ")
if __name__=="__main__":
    mylis=list(map(int,input().split(" ")))
    k=int(input())
    LinearSearch(mylis,k)
    
