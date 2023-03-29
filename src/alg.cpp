// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int res = 0;
  int i = 0;
  for (i; i <= size; i++) {
    if (arr[i] == value) {
      res += 1;
    }
    return res;
  }
  return 0; // если ничего не найдено
}
