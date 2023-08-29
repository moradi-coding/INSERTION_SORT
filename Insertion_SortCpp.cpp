#include <iostream>

template <class T>
void INSERTION_SORT(T A[], int n) {
    for (int i = 1; i < n; i++) {
        T key = A[i];
        int j = i - 1;

        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = key;
    }
}

int main()
{
    double A[] = { 5, 2.3, 4, 6, 1, 3 };
    int n = 6;
    INSERTION_SORT(A, n);
    for (int i = 0; i < n; i++) {
        std::cout << A[i] << " ";
    }

    
}
