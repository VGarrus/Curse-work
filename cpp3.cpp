#include <iostream>
#include <chrono>
#include <utility>
#include "windows.h"
using namespace std;
using namespace chrono;

int cpp3main()
{


    setlocale(LC_ALL, "russian");
    srand(time(0));
    int i, max, min, j, N, M, a[20][20], b[20][20];
    // N ���������� ����
    N = 6;
    // M ���������� ��������

    M = 6;

    //cout << "��������� ��������� ������� �������� ���  " << "\n";
    min = 1;
    max = 99;

    int* pN = &N, * pM = &M;//���������
    //���� �� ���������� i, � ������� ���������� ������ �������
    for (i = 0; i < *pN; i++) { // ���������� �������
        //���� �� ���������� j, � ������� ���������� �������			
        for (j = 0; j < *pM; j++) {
            //"���������" ���������� �������		
            a[i][j] = rand() % (max - min + 1) + min;
            //������� �������
            b[i][j] = 0;
        }
    }
    for (int i = 0; i < M; i++) { // ����� �������
        for (int j = 0; j < M; j++) {
            cout << "    " << b[i][j];

            Sleep(100);


        }
        cout << endl;
    }

    HANDLE hStdout;
    COORD destCoord;
    hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

    for (int i = 0; i < *pM; i++)
    {
        destCoord.X = 0 + 4;
        destCoord.Y = i;
        SetConsoleCursorPosition(hStdout, destCoord);
        cout << a[i][0];
        cout.flush();
        Sleep(200);
    }
    for (int i = 5; i >= 0; i--)
    {
        destCoord.X = 1 + 8;
        destCoord.Y = i;
        SetConsoleCursorPosition(hStdout, destCoord);
        cout << a[i][1];
        cout.flush();
        Sleep(200);
    }
    for (int i = 0; i < *pM; i++)
    {
        destCoord.X = 2 + 12;
        destCoord.Y = i;
        SetConsoleCursorPosition(hStdout, destCoord);
        cout << a[i][2];
        cout.flush();
        Sleep(200);
    }
    for (int i = 5; i >= 0; i--)
    {
        destCoord.X = 3 + 16;
        destCoord.Y = i;
        SetConsoleCursorPosition(hStdout, destCoord);
        cout << a[i][3];
        cout.flush();
        Sleep(200);
    }
    for (int i = 0; i < *pM; i++)
    {
        destCoord.X = 4 + 20;
        destCoord.Y = i;
        SetConsoleCursorPosition(hStdout, destCoord);
        cout << a[i][4];
        cout.flush();
        Sleep(200);
    }
    for (int i = 5; i >= 0; i--)
    {
        destCoord.X = 5 + 24;
        destCoord.Y = i;

        SetConsoleCursorPosition(hStdout, destCoord);
        cout << a[i][5];
        cout.flush();
        Sleep(200);
    }
    {
        destCoord.X = 5 + 28;
        destCoord.Y = i;

        SetConsoleCursorPosition(hStdout, destCoord);
        cout << "";
        cout.flush();
        Sleep(200);
    }
    cout << "\n" << " ";
    system("pause");

    {
        //������� ���
        //����� �
        system("cls");

        for (int i = 0; i < (N / 2); i++) {
            for (int j = 0; j < N; j++) {
                swap(a[i][j], a[i + (N / 2)][j]);
            }
        }
        for (int i = 0; i < (N / 2); i++) {
            for (int j = 0; j < (N / 2); j++) {
                swap(a[i][j], a[i + (N / 2)][j + (N / 2)]);
            }
        }
        //����� �������
        for (int i = 0; i < *pM; i++)
        {
            destCoord.X = 0 + 4;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][0];
            cout.flush();
            Sleep(50);
        }
        for (int i = 5; i >= 0; i--)
        {
            destCoord.X = 1 + 8;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][1];
            cout.flush();
            Sleep(50);
        }
        for (int i = 0; i < *pM; i++)
        {
            destCoord.X = 2 + 12;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][2];
            cout.flush();
            Sleep(50);
        }
        for (int i = 5; i >= 0; i--)
        {
            destCoord.X = 3 + 16;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][3];
            cout.flush();
            Sleep(50);
        }
        for (int i = 0; i < *pM; i++)
        {
            destCoord.X = 4 + 20;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][4];
            cout.flush();
            Sleep(50);
        }
        for (int i = 5; i >= 0; i--)
        {
            destCoord.X = 5 + 24;
            destCoord.Y = i;

            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][5];
            cout.flush();
            Sleep(50);
        }
        {
            destCoord.X = 5 + 28;
            destCoord.Y = i;

            SetConsoleCursorPosition(hStdout, destCoord);
            cout << "";
            cout.flush();
            Sleep(50);
        }
        cout << "\n" << " ";
        system("pause");
    }
    {//����� �
        system("cls");
        for (int i = 0; i < (N / 2); i++) {
            for (int j = 0; j < N; j++) {
                if (j < (N / 2)) {
                    swap(a[i][j], a[i + (N / 2)][j + (N / 2)]);
                }
                else {
                    swap(a[i][j], a[i + (N / 2)][j - (N / 2)]);
                }
            }
        }
        //����� �������   
        for (int i = 0; i < *pM; i++)
        {
            destCoord.X = 0 + 4;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][0];
            cout.flush();
            Sleep(50);
        }
        for (int i = 5; i >= 0; i--)
        {
            destCoord.X = 1 + 8;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][1];
            cout.flush();
            Sleep(50);
        }
        for (int i = 0; i < *pM; i++)
        {
            destCoord.X = 2 + 12;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][2];
            cout.flush();
            Sleep(50);
        }
        for (int i = 5; i >= 0; i--)
        {
            destCoord.X = 3 + 16;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][3];
            cout.flush();
            Sleep(50);
        }
        for (int i = 0; i < *pM; i++)
        {
            destCoord.X = 4 + 20;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][4];
            cout.flush();
            Sleep(50);
        }
        for (int i = 5; i >= 0; i--)
        {
            destCoord.X = 5 + 24;
            destCoord.Y = i;

            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][5];
            cout.flush();
            Sleep(50);
        }
        {
            destCoord.X = 5 + 28;
            destCoord.Y = i;

            SetConsoleCursorPosition(hStdout, destCoord);
            cout << "";
            cout.flush();
            Sleep(50);
        }
        cout << "\n" << " ";
        system("pause");
    }
    {//����� �
        system("cls");
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < (N / 2); j++) {
                swap(a[i][j], a[i][j + (N / 2)]);
            }
        }
        //����� �������   
        for (int i = 0; i < *pM; i++)
        {
            destCoord.X = 0 + 4;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][0];
            cout.flush();
            Sleep(50);
        }
        for (int i = 5; i >= 0; i--)
        {
            destCoord.X = 1 + 8;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][1];
            cout.flush();
            Sleep(50);
        }
        for (int i = 0; i < *pM; i++)
        {
            destCoord.X = 2 + 12;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][2];
            cout.flush();
            Sleep(50);
        }
        for (int i = 5; i >= 0; i--)
        {
            destCoord.X = 3 + 16;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][3];
            cout.flush();
            Sleep(50);
        }
        for (int i = 0; i < *pM; i++)
        {
            destCoord.X = 4 + 20;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][4];
            cout.flush();
            Sleep(50);
        }
        for (int i = 5; i >= 0; i--)
        {
            destCoord.X = 5 + 24;
            destCoord.Y = i;

            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][5];
            cout.flush();
            Sleep(50);
        }
        {
            destCoord.X = 5 + 28;
            destCoord.Y = i;

            SetConsoleCursorPosition(hStdout, destCoord);
            cout << "";
            cout.flush();
            Sleep(50);
        }
        cout << "\n" << " ";
        system("pause");



    }
    {//����� D
        system("cls");
        for (int i = 0; i < (N / 2); i++) {
            for (int j = 0; j < N; j++) {
                swap(a[i][j], a[i + (N / 2)][j]);
            }
        }
        //����� �������   
        for (int i = 0; i < *pM; i++)
        {
            destCoord.X = 0 + 4;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][0];
            cout.flush();
            Sleep(50);
        }
        for (int i = 5; i >= 0; i--)
        {
            destCoord.X = 1 + 8;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][1];
            cout.flush();
            Sleep(50);
        }
        for (int i = 0; i < *pM; i++)
        {
            destCoord.X = 2 + 12;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][2];
            cout.flush();
            Sleep(50);
        }
        for (int i = 5; i >= 0; i--)
        {
            destCoord.X = 3 + 16;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][3];
            cout.flush();
            Sleep(50);
        }
        for (int i = 0; i < *pM; i++)
        {
            destCoord.X = 4 + 20;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][4];
            cout.flush();
            Sleep(50);
        }
        for (int i = 5; i >= 0; i--)
        {
            destCoord.X = 5 + 24;
            destCoord.Y = i;

            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][5];
            cout.flush();
            Sleep(50);
        }
        {
            destCoord.X = 5 + 28;
            destCoord.Y = i;

            SetConsoleCursorPosition(hStdout, destCoord);
            cout << "";
            cout.flush();
            Sleep(50);
        }
        cout << "\n" << " ";
        system("pause");
    }
    {
    }




    {//������� 4
        {
            int value0;
            string znak;

        Menu: {

            cout << "������� �������� ('+', '-', '*', '/')\n";
            cin >> znak;
            cout << "������� ��������)\n";
            cin >> value0;
            }

        if (znak == "+") {
            for (int i = 0; i < N; i++)
                for (int j = 0; j < N; j++)
                    a[i][j] += value0;
        }
        else if (znak == "-") {
            for (int i = 0; i < N; i++)
                for (int j = 0; j < N; j++)
                    a[i][j] -= value0;
        }
        else if (znak == "*") {
            for (int i = 0; i < N; i++)
                for (int j = 0; j < N; j++)
                    a[i][j] *= value0;
        }
        else if (znak == "/") {
            for (int i = 0; i < N; i++)
                for (int j = 0; j < N; j++)
                    a[i][j] /= value0;
        }
        else {
            goto Menu;
        }

        system("cls");
        for (int i = 0; i < *pM; i++)
        {
            destCoord.X = 0 + 4;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][0];
            cout.flush();
            Sleep(50);
        }
        for (int i = 5; i >= 0; i--)
        {
            destCoord.X = 1 + 8;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][1];
            cout.flush();
            Sleep(50);
        }
        for (int i = 0; i < *pM; i++)
        {
            destCoord.X = 2 + 12;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][2];
            cout.flush();
            Sleep(50);
        }
        for (int i = 5; i >= 0; i--)
        {
            destCoord.X = 3 + 16;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][3];
            cout.flush();
            Sleep(50);
        }
        for (int i = 0; i < *pM; i++)
        {
            destCoord.X = 4 + 20;
            destCoord.Y = i;
            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][4];
            cout.flush();
            Sleep(50);
        }
        for (int i = 5; i >= 0; i--)
        {
            destCoord.X = 5 + 24;
            destCoord.Y = i;

            SetConsoleCursorPosition(hStdout, destCoord);
            cout << a[i][5];
            cout.flush();
            Sleep(50);
        }
        {
            destCoord.X = 5 + 28;
            destCoord.Y = i;

            SetConsoleCursorPosition(hStdout, destCoord);
            cout << "";
            cout.flush();
            Sleep(50);
        }
        cout << "\n" << " ";
        system("pause");

        cout << "\n";
        }
    }

    {
        cout << " ������� �� ��������";
    }
   
    return 0;

}