/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class HeapSort
{
	
	void heapify(int arr[],int n,int i)
	{
		int largest=i;
		int l=2*i+1;
		int r=2*i+2;
		
		if(l<n && arr[l] > arr[largest])
			largest=l;
		if(r<n && arr[r] > arr[largest])
			largest=r;
		if(largest!=i)
		{
			int temp=arr[i];
			arr[i]=arr[largest];
			arr[largest]=temp;
			heapify(arr,n,largest);
		}
		
	}
	void heapSort(int arr[],int n)
	{
		for(int i=n/2-1;i>=0;i--)
			heapify(arr,n,i);
		for(int i=n-1;i>=0;i--)
		{
			int temp=arr[0];
			arr[0]=arr[i];
			arr[i]=temp;
			heapify(arr,i,0);
		}
	
	}
	
}
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int n=6;
		int[] arr={12,11,13,5,6,7};
		HeapSort s=new HeapSort();
		s.heapSort(arr,6);
			for(int i=0;i<n;i++)
		{
			System.out.print(arr[i]+" ");
		}
	}
}
