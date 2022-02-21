#include <stdio.h>
// fungsi untuk tukar nilai
void swap(int *a, int *b) {
 int temp = *a;
 *a = *b;
 *b = temp;
}
void selectionSort(int array[], int size) {
 for (int step = 0; step < size - 1; step++) {
 int min_idx = step;
 for (int i = step + 1; i < size; i++) {
 // Kalo mau descending, tukar > menjadi <
 // Pilih nilai terkecil/minimum
 if (array[i] < array[min_idx])
 min_idx = i;
 }
 // taruh nilai min ke posisi
 swap(&array[min_idx], &array[step]);
 }
}
// fungsi untuk cetak array
void printArray(int array[], int size) {
 for (int i = 0; i < size; ++i) {
 printf("%d ", array[i]);
 }
 printf("\n");
}
int main() {
 int data[] = {23, 67, 89, 5, 45, 20, 15, 27};
 int size = sizeof(data) / sizeof(data[0]);
 selectionSort(data, size);
 printf("Array setelah disusun dari kecil ke besar (Acsending):\n");
 printArray(data, size);
}
