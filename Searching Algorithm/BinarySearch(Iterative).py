def BinarySearch(arr,start,end,k):
    mid=(start+end)//2
    while arr[mid]!=k and start<=end:
        if(arr[mid]==k):
            return mid+1
        elif arr[mid]<k:
            start=mid+1
        else:
            end=mid-1
        mid=(start+end)//2
    if(arr[mid]==k):
        return mid+1
    else:
        return -1
    

if __name__=="__main__":
    mylis=list(map(int,input().split(" ")))
    k=int(input())
    print(BinarySearch(mylis,0,len(mylis)-1,k))
    
