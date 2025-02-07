#include <stdio.h>
const int TAM = 100000;

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = (low - 1);

        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int pi = i + 1;

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main() {
    int n, i = 0, l = 0, m = 0, N, E[TAM], O[TAM], V[TAM];
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &n);
        V[i] = n;
        i++;
    }

    for (i = 0; i < N; i++) {
        if (V[i] % 2 == 0) {
            E[l] = V[i];
            l++;
        } else {
            O[m] = V[i];
            m++;
        }
    }

    quicksort(E, 0, l - 1);

    quicksort(O, 0, m - 1);

    for (i = 0; i < l; i++) {
        printf("%d\n", E[i]);
    }

    for (i = m - 1; i >= 0; i--) {
        printf("%d\n", O[i]);
    }

    return 0;
}
