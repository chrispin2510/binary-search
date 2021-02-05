#ifndef BINSRCH_H
#define BINSRCH_H

/**
 *  1. Algorithm BinarySearch(A, n, x)
 *  2. // A is an array of n elements 
 *  4.      low := 0;
 *  5.      high := n-1;
 *  6.      while (low <= high) do
 *  7.          mid := floor(low + high)/2;
 *  8.          if (A[mid] < x) then
 *  9.              low := mid + 1;
 * 10.          else if (A[mid] > x) then
 * 11.              high := mid-1;
 * 12.          else return mid;
 * 13.           endif
 * 14.      endwhile
 * 15.      return -1;      // key not found
 * 15.  end 
 */
template <class T>
int binsrch(T A[], int N, T key)
{
    int low = 0, high = N, mid = 0;
    while (low <= high) 
    {
       mid = (low + high) / 2;
       if (A[mid] < key) 
           low = mid + 1;
       else if (A[mid] > key) 
          high = mid - 1;
      else 
         return mid; 
    }
    return -1;
}

#endif /* BINSRCH_H */
