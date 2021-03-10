#include <iostream>

using namespace std;

#define array_1 10
#define array_2 8
#define array_3 5
#define array_4 5

void reversArray (int arr_ex[array_1]){   // for 5.1

    for (int i = 0; i < array_1; i++){

        if (arr_ex[i] == 0){

            arr_ex[i] += 1;

        } else arr_ex[i] -= 1;

        cout <<  arr_ex[i] << " ";
    }
    cout << endl;
}

void arrayRecFunction (int arr1_ex[array_2]){   // for 5.2

    for (int i =0; i < array_2; i++){

        arr1_ex[i] = i*3 + 1;

        cout << arr1_ex[i] << " ";

    }
    cout << endl;
}

bool checkBalance (int *arr2, int sizeArray){  // for 5.3

    bool stateBalance = false;

    int sumElements = 0;

    for (int i = 0; i < sizeArray; i++){
        sumElements += arr2[i];
    }

    int sumParts = 0;

    for (int i = 0; i < sizeArray; i++){
        sumParts += arr2[i];

        if(sumParts == sumElements - sumParts){
            stateBalance = true;
            cout << arr2[i] << " <- point of balance";
        }
    } cout << endl; return stateBalance;
}

void displaceFunction (int *arr3, int n){  // for 5.4 (как сделать для отрицательного n не могу додуматься :(

    for (int i = n + 1; i < array_4; i++){
        cout << arr3[i] << " ";
    }

    for (int i = 0; i < array_4 - n; i++){
        cout << arr3[i] << " ";
    }
}

int main()
{
    // 5.1
    // Задать целочисленный массив, состоящий из элементов 0 и 1. Например: [ 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 ].
    // Написать функцию, заменяющую в принятом массиве 0 на 1, 1 на 0

    int arr[array_1] = {1,1,0,1,0,1,0,0,1,0};
    reversArray(arr);

    // 5.2
    // Задать пустой целочисленный массив размером 8.
    // Написать функцию, которая с помощью цикла заполнит его значениями 1 4 7 10 13 16 19 22;

    int arr1[8];
    arrayRecFunction(arr1);

    // 5.3
    // Написать функцию, в которую передается не пустой одномерный целочисленный массив,
    // функция должна вернуть истину если в массиве есть место, в котором сумма левой и правой части массива равны.
    // Примеры: checkBalance([1, 1, 1, || 2, 1]) → true, checkBalance ([2, 1, 1, 2, 1]) → false, checkBalance ([10, || 1, 2, 3, 4]) → true.

    int arr2[5] = {10, 1, 2, 3, 4};
    checkBalance(arr2, array_3);

    // 5.4
    // Написать функцию, которой на вход подаётся одномерный массив и число n (может быть положительным, или отрицательным),
    // при этом функция должна циклически сместить все элементы массива на n позиций.

    int arr3[array_4] = {1, 2, 3, 4, 5};
    displaceFunction (arr3, 2);

    return 0;
}

