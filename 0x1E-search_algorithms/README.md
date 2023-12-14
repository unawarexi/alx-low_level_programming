# Search Algorithms in C

## What is a Search Algorithm?
A search algorithm is a systematic process for finding a specific item or value within a collection of items. These algorithms are crucial for efficiently locating data in various computer science applications.

## Linear Search
Linear search is a basic search algorithm that iteratively checks each element in a collection until a match is found or the entire collection is traversed. It is suitable for small datasets, 
but its time complexity is O(n), making it less efficient for larger datasets.

```c
int linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;  // Return the index if the target is found
        }
    }
    return -1;  // Return -1 if the target is not found
}
```
## Binary Search
Binary search is an efficient search algorithm that requires the dataset to be sorted. It repeatedly divides the search space in half until the target is found or the search space is empty.
 Its time complexity is O(log n), making it suitable for larger datasets.


```c
int binary_search(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;  // Return the index if the target is found
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;  // Return -1 if the target is not found
}
```
## Choosing the Right Search Algorithm in C
- ### Linear Search: Use when the dataset is small or unsorted.

- ### Binary Search: Use when the dataset is sorted and relatively large.

Consider the characteristics of your data, its size, and whether it's sorted to determine the most suitable search algorithm for your C program. Both linear and binary search have their merits

