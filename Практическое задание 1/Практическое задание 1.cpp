#include <iostream>
using namespace std;

int digitroot(int n) {
    if (n < 10) {
        return n;
    }
    else {
        int s = 0;
        while (n != 0) {
            s += n % 10;
            n /= 10;
        }
        return digitroot(s);
    }
}

int* pasteelement(int n, int x[], int num, int pos)
{
    int i;
    int* arr1 = new int[n];
    for (int j = 0; j < n; j++) {
        arr1[j] = x[j];
    }
    n++;
    for (i = n; i >= pos; i--)
        arr1[i] = arr1[i - 1];
    arr1[pos - 1] = num;
    return arr1;
}

int* deleteelement(int* x, int n)
{
    int b[10], j = 0;
    for (int i = 0; i < n; i++) {
        if (digitroot(i) != 7) {
            b[j] = x[i];
            j++;
        }
    }
    for (int i = 0; i < j; i++) {
        x[i] = b[i];
    }
    for (int i = j; i < 10; i++) {
        x[i] = 0;
    }
    cout << endl;
    for (int i = 0; i < j; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
    return x;
}

int main()
{
    setlocale(LC_ALL, "RU");
    cout << "Лабораторная работа №1 по теме Простые алгоритмы сортировки массивов. Гришин Андрей" << endl;
    cout << "Выберите тип массива:\n1. Статический\n2. Динамический\n3. С помощью <vector>" << endl;
    int n; cin >> n;
    switch (n) {
    case 1: {
        const int ARRSIZE = 10;
        int x[ARRSIZE];
        for (int i = 0; i < ARRSIZE; i++) {
            cin >> x[i];
        }
        int r = 1000000;
        int k = 0;
        for (int i = 0; i < ARRSIZE; i++) {
            if (digitroot(i) == 7) {
                if (i < r) {
                    r = i;
                }
                k++;
            }
        }
        if (k == 0) {
            r = 0;
        }
        if (r != 0) {
            int* arr1 = pasteelement(ARRSIZE, x, 666, r);
            int d = ARRSIZE + 1;
            for (int i = 0; i < d; i++) {
                cout << arr1[i] << " ";
            }
            int* arr2 = deleteelement(arr1, d);
        }
        else {
            cout << "Ошибка. Введите другой массив.";
        }
        break;
    }
    case 2: {
        int ARRSIZE;
        cin >> ARRSIZE;
        int* x = new int[ARRSIZE];
        for (int i = 0; i < ARRSIZE; i++) {
            cin >> x[i];
        }
        int r = 1000000;
        int k = 0;
        for (int i = 0; i < ARRSIZE; i++) {
            if (digitroot(i) == 7) {
                if (i < r) {
                    r = i;
                }
                k++;
            }
        }
        if (k == 0) {
            r = 0;
        }
        if (r != 0) {
            int* arr1 = pasteelement(ARRSIZE, x, 666, r);
            int d = ARRSIZE + 1;
            for (int i = 0; i < d; i++) {
                cout << arr1[i] << " ";
            }
            int* arr2 = deleteelement(arr1, d);
        }
        else {
            cout << "Ошибка. Введите другой массив.";
        }
        break;
    }
    case 3: {
        cout << "Не доделано.";
        break;
    }
    default: {
        cout << "Вы ввели неверный номер.";
        break;
    }
    }
}