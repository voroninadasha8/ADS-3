// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int start = 0;
  int end = size - 1;
  int count = 0;
  while (start <= end) {
    int mid = (start + end) / 2;
    if (arr[mid] < value) {
      start = mid + 1;
    } else if (arr[mid] > value) {
      end = mid - 1;
    } else if (arr[mid] == value) {
      count++;
      int newmid = mid - 1;
      while (arr[newmid] == value && newmid >= start) {
        count++;
        newmid--;
      }
      newmid = mid + 1;
      while (arr[newmid] == value && newmid <= end) {
        count++;
        newmid++;
      }
      return count;
    }
  }
  return 0; // если ничего не найдено
}
