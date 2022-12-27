#include <iostream>
#include <chrono>
#include <utility>

using namespace std;
using namespace chrono;
using std::swap;

int cpp2main(){
     setlocale(LC_ALL, "russian");
    cout << "|| Задание 1 Создаем супер пупер рандомный массив ||" << "\n";
   
    srand(time(0));
    //*Создание нужного массива 
    int* array, max, min, maxnumber, minnumber, n, average, averagebubblesort;
    //cin>> n;
    n = 100;
    array = new int[n];
    cout << "Ваш массив выгледит так: " << "\n";
    min = -99;
    max = 99;
    //*Рандомное его запонение  
    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % (max - min + 1) + min;
        cout << array[i] << " ";
    }
    cout << " " << "\n";
    int a = 1;
    while (a == 1)
    {
        cout << "___________________________________________________________________________________" << "\n";
        cout << "|" << "________________________Действия с не отсортированным массивом____________________" << "|" << "\n";
        cout << "|" << "1 -Найти max min Average                                                          " << "|" << "\n";
        cout << "|" << "2 -Вывести индексы всех элементов, которые равны среднему значению                " << "|" << "\n";
        cout << "|" << "3 -Сортировать массив                                                             " << "|" << "\n";
        cout << "|" << "                                                                                  " << "|" << "\n";
        cout << "|" << "________________________Действия с отсортированным массивом_______________________" << "|" << "\n";
        cout << "|" << "4 -Найти Max Min Average                                                          " << "|" << "\n";
        cout << "|" << "5 - Вывести индексы всех элементов, которые равны среднему значению               " << "|" << "\n";
        cout << "|" << "6 - Вывести количество элементов в отсортированном массиве, которые меньше числа a" << "|" << "\n";
        cout << "|" << "7 - Вывести количество элементов в отсортированном массиве, которые больше числа b" << "|" << "\n";
        cout << "|" << "8 - Меняет местами элементы массива, индексы которых вводит пользователь          " << "|" << "\n";
        cout << "|" << "9 - Бинарный поиск                                                                " << "|" << "\n";
        cout << "|" << "10 - Выход из программы                                                           " << "|" << "\n";
        cout << "|" << "__________________________________________________________________________________" << "|" << "\n";



        int keyss;
        cin >> keyss;
        switch (keyss)
        {

        case 1:
        {
            cout << "------------------------------------------------------------ " << endl;
            cout << "||Задание 3 и 4(1) В неотсортированном массиве находим Max Min Average||" << "\n";
            // ***Получаем момент времени_1

            auto start0 = chrono::steady_clock::now();

            {
                //*нахождение максимального и минимального значения в неотсортированном  
                maxnumber = minnumber = array[0];
                for (int i = 1; i < n; i++)
                {
                    if (maxnumber < array[i]) maxnumber = array[i];
                    if (minnumber > array[i]) minnumber = array[i];
                }
                cout << "Максимальное значение массива  " << maxnumber << "\n";
                cout << "Минимальное  значение массива  " << minnumber << "\n";
                average = (maxnumber + minnumber) / 2;
                cout << "Среднее значение массива  " << average << "\n";
            }
            //*** Заканчиваем момент времени_1

            auto end0 = chrono::steady_clock::now();

            cout << "Время за которое находится Max min average в несортированном: "
                << chrono::duration_cast<chrono::nanoseconds>(end0 - start0).count()
                << " ns" << endl;
            break;
        }
        case 2: {
            cout << "------------------------------------------------------------ " << endl;
            cout << "||Задание 4(2) Вывести индексы всех элементов, которые равны среднему значению в несортированном||" << "\n";
            maxnumber = minnumber = array[0];
            for (int i = 1; i < n; i++)
            {
                if (maxnumber < array[i]) maxnumber = array[i];
                if (minnumber > array[i]) minnumber = array[i];
            }

            auto start4 = chrono::steady_clock::now();

            {
                int index0 = 0, call0 = 0;



                for (int ib = 0; ib < n; ib++)
                {

                    if (array[ib] == average) {
                        call0++;
                    }

                    if (array[ib] == average)
                    {
                        cout << "Индекс числа равного среднему значению: " << ib << "\n";
                        index0 = 1;
                    }





                }
                if (call0 > 0) {
                    cout << "Количество чисел равных среднему значению: " << call0 << "\n";
                }
                if (index0 == 0)
                {
                    cout << "Количсетво чисел равных среднему значению: 0 " << "\n";
                }
            }


            auto end4 = chrono::steady_clock::now();

            cout << "Время за которое находится Max min average в несортированном: "
                << chrono::duration_cast<chrono::nanoseconds>(end4 - start4).count()
                << " ns" << endl;
            break;
        }
        case 3:
        {

            cout << "------------------------------------------------------------ " << endl;

            cout << "                СОРТИРОВАННЫЙ МАССИВ                         " << endl;

            cout << "------------------------------------------------------------ " << endl;
            cout << "|| Задание 2 Сортируем массив Пузырковой сортировкой||" << "\n";


            // ***Получаем момент времени_2
            auto start1 = chrono::steady_clock::now();

            for (int i = 0; i < 100; i++) {
                for (int j = 0; j < 99; j++) {
                    if (array[j] > array[j + 1]) {
                        int b = array[j];
                        array[j] = array[j + 1]; // меняем местами
                        array[j + 1] = b;
                    }
                }
            }

            // ***Заканчиваем момент времени_2  
            auto end1 = chrono::steady_clock::now();

            cout << "Время за которое сортируется массив пузырковой сортировкой: "
                << chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count()
                << " ns" << endl;


            cout << "Массив в отсортированном виде: ";
            for (int i = 0; i < 100; i++) {
                cout << array[i] << " "; // выводим элементы массива
            }
            cout << "  " << "\n";
            break;
        }
        case 4:
        {
            for (int i = 0; i < 100; i++) {
                for (int j = 0; j < 99; j++) {
                    if (array[j] > array[j + 1]) {
                        int b = array[j];
                        array[j] = array[j + 1]; // меняем местами
                        array[j + 1] = b;
                    }
                }
            }

            cout << "\n" << "------------------------------------------------------------ " << endl;
            cout << "||Задание 3 и 4(1) В отсортированном массиве находим Max Min Average||" << "\n";
            int maxnumberbubblesort, minnumberbubblesort;

            auto start2 = chrono::steady_clock::now();

            maxnumberbubblesort = array[99];
            minnumberbubblesort = array[0];
            averagebubblesort = (maxnumberbubblesort + minnumberbubblesort) / 2;

            cout << "\n" << "Максимальное число bubble sort: " << maxnumberbubblesort << "\n";
            cout << "Минимальное число bubble sort: " << minnumberbubblesort << "\n";
            cout << "Среднее значение bubble sort: " << averagebubblesort << "\n";

            auto end2 = chrono::steady_clock::now();
            cout << "Время за которое находится Max min average в отсортированном bubble sort: "
                << chrono::duration_cast<chrono::nanoseconds>(end2 - start2).count()
                << " ns" << endl;
            break;
        }

        case 5: {
            for (int i = 0; i < 100; i++) {
                for (int j = 0; j < 99; j++) {
                    if (array[j] > array[j + 1]) {
                        int b = array[j];
                        array[j] = array[j + 1]; // меняем местами
                        array[j + 1] = b;
                    }
                }
            }
            int maxnumberbubblesort, minnumberbubblesort;
            maxnumberbubblesort = array[99];
            minnumberbubblesort = array[0];
            averagebubblesort = (maxnumberbubblesort + minnumberbubblesort) / 2;

            cout << "\n" << "------------------------------------------------------------ " << endl;
            cout << "||Задание 4(2) Вывести индексы всех элементов, которые равны среднему значению в сортированном||" << "\n";
            auto start5 = chrono::steady_clock::now();
            {
                cout << "Среднее значение bubble sort: " << averagebubblesort << "\n";
                int index = 0, call = 0;
                for (int ia = 0; ia < n; ia++)
                {

                    if (array[ia] == averagebubblesort) {
                        call++;
                    }

                    if (array[ia] == averagebubblesort)
                    {
                        cout << "Индекс числа равного среднему значению: " << ia << "\n";
                        index = 1;
                    }





                }
                if (call > 0) {
                    cout << "Количество чисел равных среднему значению: " << call << "\n";
                }
                if (index == 0)
                {
                    cout << "Количсетво чисел равных среднему значению: 0 " << "\n";
                }
            }
            auto end5 = chrono::steady_clock::now();

            cout << "Время за которое находится Max min average в несортированном: "
                << chrono::duration_cast<chrono::nanoseconds>(end5 - start5).count()
                << " ns" << endl;


            break;
        }
        case 6:
        {
            for (int i = 0; i < 100; i++) {
                for (int j = 0; j < 99; j++) {
                    if (array[j] > array[j + 1]) {
                        int b = array[j];
                        array[j] = array[j + 1]; // меняем местами
                        array[j + 1] = b;
                    }
                }
            }
            cout << "\n" << "------------------------------------------------------------ " << endl;
            cout << "||Задание 6 Вывести количество элементов в отсортированном массиве, которые меньше числа a ||" << "\n";
            cout << "Введите до какого числа вы хотите увидеть числа в массиве : ";
            {
                int a;
                cin >> a;
                for (int i = 0; i < n; i++)
                {
                    if (a > array[i]) {
                        cout << array[i] << " ";
                    }
                    if (a < array[i]) {
                        break;
                    }
                }
            }
            break;
        }
        case 7:
        {
            for (int i = 0; i < 100; i++) {
                for (int j = 0; j < 99; j++) {
                    if (array[j] > array[j + 1]) {
                        int b = array[j];
                        array[j] = array[j + 1]; // меняем местами
                        array[j + 1] = b;
                    }
                }
            }
            cout << "||Задание 7 Вывести количество элементов в отсортированном массиве, которые больше числа b ||" << "\n";
            cout << "Введите до какого числа вы хотите увидеть числа в массиве : ";
            {
                int b;
                cin >> b;
                for (int i = 99; i > 0; i--)
                {
                    if (b < array[i]) {
                        cout << array[i] << " ";
                    }
                    if (b > array[i]) {
                        break;
                    }
                }


            }

            break;
        }
        case 8:
        {
            for (int i = 0; i < 100; i++) {
                for (int j = 0; j < 99; j++) {
                    if (array[j] > array[j + 1]) {
                        int b = array[j];
                        array[j] = array[j + 1]; // меняем местами
                        array[j + 1] = b;
                    }
                }
            }
            cout << "||Задание 8 Меняет местами элементы массива, индексы которых вводит пользователь.  ||" << "\n";
            int civ1, civ2;
            cout << "Какие числа массива вы хотите поменять" << "\n";
            cout << " Индекс 1 : ";
            cin >> civ1;
            cout << " Индекс 2 : ";
            cin >> civ2;
            cout << " Вы поменяли местами числа " << "\n";
            cout << "Число 1 = " << array[civ1] << "  Число 2 = " << array[civ2] << "\n";

            auto start8 = chrono::steady_clock::now();

            swap(array[civ1], array[civ2]);

            auto end8 = chrono::steady_clock::now();

            cout << "Время за которое находится Max min average в несортированном: "
                << chrono::duration_cast<chrono::nanoseconds>(end8 - start8).count()
                << " ns" << endl;

            for (int i = 0; i < n; i++)
            {

                cout << array[i] << " ";
            }

            break;
        }
        case 9: {
                    for (int i = 0; i < 100; i++) {
                        for (int j = 0; j < 99; j++) {
                            if (array[j] > array[j + 1]) {
                                int b = array[j];
                                array[j] = array[j + 1]; // меняем местами
                                array[j + 1] = b;
                            }
                        }
                    }
        cout << "||Задание 9 Бинарный Поиск  ||" << "\n";
                int left = -99, right = 99;
                int mid, key;

                cout << "Введите число которок хотите найти : ";
                cin >> key;
                while(left < right) {
                    mid = (left + right) / 2;
                    

                    if (array[mid] > key)
                        right = mid;
                    else
                        left = mid + 1;
                }
                right -= 1;
                if (array[right] == key)
                    cout << "\nТакое число в массиве есть\n";
                else
                    cout << "\nТакого числа в массиве нет\n";
        
         break;
        }
        case 10: {
            cout << "      ______________________________________" << "\n";
            cout << "      |        Спасибо за внимание!        |" << "\n";
            cout << "      |____________________________________|" << "\n";



            cout << "           ░░░░░▄▄▀▀▀▀▀▀▀▀▀▄▄░░░░░" << "\n";
            cout << "           ░░░░█░░░░░░░░░░░░░█░░░░ " << "\n";
            cout << "           ░░░█░░░░░░░░░░▄▄▄░░█░░░ " << "\n";
            cout << "           ░░░█░░▄▄▄░░▄░░███░░█░░░ " << "\n";
            cout << "           ░░░▄█░▄░░░▀▀▀░░░▄░█▄░░░ " << "\n";
            cout << "           ░░░█░░▀█▀█▀█▀█▀█▀░░█░░░ " << "\n";
            cout << "           ░░░▄██▄▄▀▀▀▀▀▀▀▄▄██▄░░░ " << "\n";
            cout << "           ░▄█░█▀▀█▀▀▀█▀▀▀█▀▀█░█▄░ " << "\n";
            cout << "           ▄▀░▄▄▀▄▄▀▀▀▄▀▀▀▄▄▀▄▄░▀▄ " << "\n";
            cout << "           █░░░░▀▄░█▄░░░▄█░▄▀░░░░█ " << "\n";
            cout << "           ░▀▄▄░█░░█▄▄▄▄▄█░░█░▄▄▀░ " << "\n";
            cout << "           ░░░▀██▄▄███████▄▄██▀░░░ " << "\n";
            cout << "           ░░░████████▀████████░░░ " << "\n";
            cout << "           ░░▄▄█▀▀▀▀█░░░█▀▀▀▀█▄▄░░ " << "\n";
            cout << "           ░░▀▄▄▄▄▄▀▀░░░▀▀▄▄▄▄▄▀░░ " << "\n";
            cout << "________________________________________________________" << "\n";
            cout << "|  Какая коробка всегда с нами? Черепная! Бадум тсссссс|" << "\n";
            cout << "|______________________________________________________|" << "\n";
            a = 0;
        }

        }
    }
    return 0;
}