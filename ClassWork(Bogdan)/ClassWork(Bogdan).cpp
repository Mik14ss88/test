#include <iostream>
#include <algorithm>
using namespace std;

// Сортировка пузырьками
void sort() {
    int arr[5] = {8, 12, 1, 3, 0};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << i << " " << " элемент " << arr[i] << endl;
    }
}


int main() {
    setlocale(LC_ALL, "Rus");
    srand(time(0)); // Генерация рандомных чисел

    /*int mass[5] = {1, 4, 3, 2,  5};

    int n = sizeof(mass) / sizeof(mass[0]);

    sort(mass, mass + n);

    for (int i = 0; i < 5; i++) {
        cout << mass[i];
    }*/
    
    sort();


  
}


