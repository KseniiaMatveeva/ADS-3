// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  int count = 0;
  int i = 0, j = size - 1;
  while (i < j) {
    if (arr[i] == value && arr[j] == value) {
      count += j - i + 1;
      return count;
    }
    int mid = i + (j - i) / 2;
    if (arr[mid] == value) {
      count++;
      while (arr[mid - 1] == value) {
          count++;
          mid--;
        }
      while (arr[mid + 1] == value) {
          count++;
          mid++;
        }
      return count;
     } else if (arr[mid] > value) {
       j = mid;
     } else {
       i = mid + 1;
      }
  }
  return count;
}
