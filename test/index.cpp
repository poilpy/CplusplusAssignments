int rBinarySearch(int sortedArray[], int first, int last, int key) {
   // function:
   //   Searches sortedArray[first]..sortedArray[last] for key.
   // returns: index of the matching element if it finds key,
   //         otherwise  -(index where it could be inserted)-1.
   // parameters:
   //   sortedArray in  array of sorted (ascending) values.
   //   first, last in  lower and upper subscript bounds
   //   key         in  value to search for.
   // returns:
   //   index of key, or -insertion_position -1
   //                 if key is not in the array.

   if (first <= last) {
       int mid = (first + last) / 2;  // compute mid point.
       if (key == sortedArray[mid])
           return mid;   // found it.
       else if (key < sortedArray[mid])
           // Call ourself for the lower part of the array
           return rBinarySearch(sortedArray, first, mid-1, key);
       else
           // Call ourself for the upper part of the array
           return rBinarySearch(sortedArray, mid+1, last, key);
   }
   return -(first + 1);    // failed to find key
}

int main()
{

}
