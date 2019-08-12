def BinarySearch(arr,start,end,k):
    if end-start<=0:
        return -1
    mid=(start+end)//2
    if arr[mid]==k:
        return mid+1
    elif arr[mid]<k:
        return BinarySearch(arr,mid+1,end,k)
    else:
        return BinarySearch(arr,start,mid-1,k)
    

if __name__=="__main__":
    mylis=list(map(int,input().split(" ")))
    k=int(input())
    print(BinarySearch(mylis,0,len(mylis)-1,k))
    
