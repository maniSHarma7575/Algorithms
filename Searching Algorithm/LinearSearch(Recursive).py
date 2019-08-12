def LinearSearch(arr,k):
    if len(arr)==1:
        if arr[0]==k:
            print("Search Successfull:")
            return True
        else:
            print("Unsuccessfull:")
            return False
            
    if arr[0]==k:
        print("Search Successfull:")
        return True
    else:
        LinearSearch(arr[1:],k)

if __name__=="__main__":
    mylis=list(map(int,input().split(" ")))
    k=int(input())
    LinearSearch(mylis,k)
    
