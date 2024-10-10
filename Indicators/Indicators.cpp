#include <iostream>
using namespace std;
//1
//void copyArray(int* src, int* dest, int size) {
//    for (int i = 0; i < size; i++) {
//        *(dest + i) = *(src + i);
//    }
//}
//
//int main() {
//    const int size = 5;
//    int src[size] = { 1, 2, 3, 4, 5 };
//    int dest[size];
//
//    copyArray(src, dest, size);
//
//    cout << "Source array: ";
//    for (int i = 0; i < size; i++) {
//        cout << src[i] << " ";
//    }
//    cout << endl;
//
//    cout << "Destination array: ";
//    for (int i = 0; i < size; i++) {
//        cout << dest[i] << " ";
//    }
//    cout << endl;
//}
//2
//void reverseArray(int* arr, int size) {
//    int* start = arr;
//    int* end = arr + size - 1; 
//
//    while (start < end) {
//        int temp = *start;
//        *start = *end;
//        *end = temp;
//        start++;
//        end--;
//    }
//}
//
//int main() {
//    const int size = 5;
//    int arr[size] = { 1, 2, 3, 4, 5 };
//    reverseArray(arr, size);
//    cout << "Reversed array: ";
//    for (int i = 0; i < size; i++) {
//        cout << *(arr + i) << " "; 
//    }
//    cout << endl;
//}
//3
//void copyArrayReversed(int* src, int* dest, int size) {
//    int* srcPtr = src + size - 1;
//    for (int i = 0; i < size; i++) {
//        *(dest + i) = *srcPtr;
//        srcPtr--;
//    }
//}
//
//int main() {
//    const int size = 5;
//    int src[size] = { 1, 2, 3, 4, 5 };
//    int dest[size];
//    copyArrayReversed(src, dest, size);
//    cout << "Source array: ";
//    for (int i = 0; i < size; i++) {
//        cout << *(src + i) << " ";
//    }
//    cout << endl;
//
//    cout << "Destination array (reversed): ";
//    for (int i = 0; i < size; i++) {
//        cout << *(dest + i) << " ";
//    }
//    cout << endl;
