#include <iostream>
#include <vector>
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

void pasteelement(int n, int x[], int num, int pos)
{
    int i;
    for (i = n; i > pos; i--) {
        x[i] = x[i - 1];
    }
    x[pos] = num;
}

void deleteelement(int x[], int n, int pos)
{
    for (int i = pos; i < n; ++i)
    {
        x[i] = x[i + 1];
    }
}

bool is7(int k) {
    return digitroot(k) == 7;
}

int vibor0() {
    cout << "Выберите тип массива:\n1. Статический\n2. Динамический\n3. С помощью <vector>" << endl;
    int n;
    cin >> n;
    return n;
}

int vibor()
{
    int n;
    cout << "Выберите номер задания" << endl;
    cout << "1. Найти индекс элемента массива, цифровой корень которого равен 7." << endl;
    cout << "2. Вставить новый элемент перед элементом, цифровой корень которого равен 7. Считать, что такое число одно." << endl;
    cout << "3. Удалить элементы массива цифровой корень которых равен 7." << endl;
    cin >> n;
    return n;
}

int main()
{
    setlocale(LC_ALL, "RU");
    cout << "Лабораторная работа №1 по теме Простые алгоритмы сортировки массивов. Гришин Андрей" << endl;
    switch (vibor0()) {
    case 1: {
        switch (vibor()) {
        case 1: {
            const int ARRSIZE = 10;
            int x[ARRSIZE];
            cout << "Заполните 10 элементов массива: ";
            for (int i = 0; i < ARRSIZE; i++) {
                cin >> x[i];
            }
            bool k = false;
            for (int i = 0; i < ARRSIZE; i++) {
                if (digitroot(x[i]) == 7) {
                    cout << "Цифровой корень равен 7 у элемента под индексом " << i;
                    k = true;
                }
            }
            if (k == false) {
                cout << "Элементы с цифровым корнем 7 отсутствуют.";
            }
            cout << endl;
            break;
        }
        case 2: {
            const int ARRSIZE = 10;
            int x[ARRSIZE];
            cout << "Заполните 10 элементов массива: ";
            for (int i = 0; i < ARRSIZE; i++) {
                cin >> x[i];
            }
            int y;
            int r = 1000000;
            int k = 0;
            for (int i = 0; i < ARRSIZE; i++) {
                if (digitroot(x[i]) == 7) {
                    if (i < r) {
                        r = i;
                    }
                    k++;
                }
            }
            if (k == 0) {
                r = 0;
            }
            cout << "Введите элемент для вставки: "; cin >> y;
            if (r != 0) {
                pasteelement(ARRSIZE, x, y, r);
                int d = ARRSIZE + 1;
                for (int i = 0; i < d; i++) {
                    cout << x[i] << " ";
                }
            }
            else {
                cout << "Ошибка. Введите другой массив.";
            }
            break;
        }
        case 3: {
            const int ARRSIZE = 10;
            int x[ARRSIZE];
            cout << "Заполните 10 элементов массива: ";
            for (int i = 0; i < ARRSIZE; i++) {
                cin >> x[i];
            }
            for (int i = 0; i < ARRSIZE; i++) {
                if (digitroot(x[i]) == 7) {
                    deleteelement(x, ARRSIZE, i);
                }
            }
            for (int i = 0; i < ARRSIZE - 1; i++) {
                cout << x[i] << " ";
            }
            break;
        }
        break;
        }
    }
    case 2: {
        switch (vibor()) {
        case 1: {
            int ARRSIZE;
            cout << "Введите размерность массива: ";
            cin >> ARRSIZE;
            int* x = new int[ARRSIZE];
            cout << "Заполните " << ARRSIZE << " элементов массива: ";
            for (int i = 0; i < ARRSIZE; i++) {
                cin >> x[i];
            }
            bool k = false;
            for (int i = 0; i < ARRSIZE; i++) {
                if (digitroot(x[i]) == 7) {
                    cout << "Цифровой корень равен 7 у элемента под индексом " << i << endl;
                    k = true;
                }
            }
            if (k == false) {
                cout << "Элементы с цифровым корнем 7 отсутствуют.";
            }
            cout << endl;
            break;
        }
        case 2: {
            int ARRSIZE;
            cout << "Введите размерность массива: ";
            cin >> ARRSIZE;
            int* x = new int[ARRSIZE];
            cout << "Заполните " << ARRSIZE << " элементов массива: ";
            for (int i = 0; i < ARRSIZE; i++) {
                cin >> x[i];
            }
            int y;
            int r = 1000000;
            int k = 0;
            for (int i = 0; i < ARRSIZE; i++) {
                if (digitroot(x[i]) == 7) {
                    if (i < r) {
                        r = i;
                    }
                    k++;
                }
            }
            if (k == 0) {
                r = 0;
            }
            cout << "Введите элемент для вставки: "; cin >> y;
            if (r != 0) {
                pasteelement(ARRSIZE, x, y, r);
                int d = ARRSIZE + 1;
                for (int i = 0; i < d; i++) {
                    cout << x[i] << " ";
                }
            }
            else {
                cout << "Ошибка. Введите другой массив.";
            }
            break;
        }
        case 3: {
            int ARRSIZE;
            cout << "Введите размерность массива: ";
            cin >> ARRSIZE;
            int* x = new int[ARRSIZE];
            cout << "Заполните " << ARRSIZE << " элементов массива: ";
            for (int i = 0; i < ARRSIZE; i++) {
                cin >> x[i];
            }
            for (int i = 0; i < ARRSIZE; i++) {
                if (digitroot(x[i]) == 7) {
                    deleteelement(x, ARRSIZE, i);
                }
            }
            for (int i = 0; i < ARRSIZE - 1; i++) {
                cout << x[i] << " ";
            }
            break;
        }
        break;
        }
    }
    case 3: {
        switch (vibor()) {
        case 1: {
            int ARRSIZE;
            cout << "Введите размерность массива: ";
            cin >> ARRSIZE;
            vector<int> x(ARRSIZE);
            cout << "Заполните " << ARRSIZE << " элементов массива: ";
            for (int i = 0; i < ARRSIZE; i++) {
                cin >> x[i];
            }
            bool k = false;
            for (int i = 0; i < ARRSIZE; i++) {
                if (digitroot(x[i]) == 7) {
                    cout << "Цифровой корень равен 7 у элемента под индексом " << i;
                    k = true;
                }
            }
            if (k == false) {
                cout << "Элементы с цифровым корнем 7 отсутствуют.";
            }
            cout << endl;
            break;
        }
        case 2: {

        }
        case 3: {

        }
        break;
        }

        /*
        int ARRSIZE;
        cin >> ARRSIZE;
        vector<int> x(ARRSIZE);
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
            x.insert(x.begin() + r-1, 666);
            int d = ARRSIZE + 1;
            for (int i = 0; i < d; i++) {
                cout << x[i] << " ";
            }
            vector<int>::iterator x1;
            x1 = remove_if(x.begin(), x.end(), is7);
        for (int i = 0; i < 10; i++) {
            cout << x1[i] << " ";
        }
        }
        else {
            cout << "Ошибка. Введите другой массив.";
        }
        break;
        */
    }
    default: {
        cout << "Вы ввели неверный номер.";
        break;
    }
    }
}