#include <iostream>
#include <fstream> 
#include <string>
#include <windows.h>
using namespace std;


string text;

//������ �������
void NOPROBEL(string ctext) {

    for (int i = 0; i < ctext.size(); i++)
    {
        if (ctext[i] == ' ' && ctext[i + 1] == ' ')
            while (ctext[i + 1] == ' ')
                ctext.erase((i + 1), 1);
    }
    text = ctext;
    cout << "2.1) ������ ������ �������: " << text << "\n";
}
//������������� �����
void NOZNAK(string ctext) {

    for (int i = 0; i <= ctext.size(); i++)
    {
        if ((ctext[i] == '.' || ctext[i] == ',' || ctext[i] == '?' || ctext[i] == '!' || ctext[i] == ':' || ctext[i] == ';') && (ctext[i + 1] == '.' || ctext[i + 1] == ',' || ctext[i + 1] == '?' || ctext[i + 1] == '!' || ctext[i + 1] == ':' || ctext[i + 1] == ';'))
            if (ctext[i] == '.' && ctext[i + 1] == '.' && ctext[i + 2] == '.' && ctext[i + 3] == ' ')
                i += 3;
            else
            {
                while (ctext[i + 1] == '.' || ctext[i + 1] == ',' || ctext[i + 1] == '?' || ctext[i + 1] == '!' || ctext[i + 1] == ':' || ctext[i + 1] == ';')
                    ctext.erase((i + 1), 1);
            }
    }
    text = ctext;
    cout << "2.2) ������ ������ ����� : " << text << "\n";
}
//������������ ��������� ������
void Proverka(string ctext)
{

    for (int i = 0; i < ctext.size(); i++)
    {
        if (ctext[i] == ' ')
            i += 2;
        ctext[i] = tolower(ctext[i]);
    }
    text = ctext;
    cout << "2.3) ���������� ������ ����� : " << text << "\n";
}
//����� �������� 
void Obratno() {

    int a = 0;
    text += " ";//�������� � ����� ������

    for (int i = text.length(); i >= 0; i--)
    {
        if (text[i] == ' ')
        {
            for (int j = i + 1; j <= (i + a); j++)
            {
                cout << text[j];
            }
            a = 0;
        }
        a++;
    }
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') break;
        cout << text[i];
    }

}

char n;
void deleteCim(string ctext) {

    for (int i = 0; i < ctext.size(); i++)
    {
        if (ctext[i] == n)
            while (ctext[i] == n)
                ctext[i] = ' ';
    }
    text = ctext;
    cout << "4(������� 3))����� ����� << " << n << " >> : " << text << "\n";
}

int cpp4main()
{
    
    setlocale(LC_ALL, "Russian");
    //  1 ������� 
    {
        int input;
    Menu: {
        cout << "��� �� ������ ������ \n"
            "1. �������� ����� ������� \n"
            "2. � ����� �� ���� ������ ����������\n";
        cin >> input;
        }
    if (input == 1) { // �������� ������
        cout << "������� ��������� ���� " << "\n";
        cout << "������ :ThE             prOgraMMer ,,,,,,,, hAs PAWs " << "\n";

        cin.ignore();
        getline(cin, text);
    }

    else if (input == 2) { // � ������
        cout << "��� �� ��� " << "\n";
        text = "He IS gOnE     tO bEd     ,,,,,,,,,,,,,   DoNT WAKE HiM UP";
    }
    else
        goto Menu;
    cout << "\n";
    cout << "1) �������� ������ �������� ���: " << text << "\n";
    }
    // 2 �������
    {
        NOPROBEL(text);
        NOZNAK(text);
        Proverka(text);
        cout << "2(����)) � ����� ��������: " << text << "\n";
    }
    // 3 �������
    {
        cout << "3(������� 1)) C����� � �������� �������: ";
        Obratno();
    }
    // 4 �������
    {
        cout << "\n";
        cout << "4(������� 3))������� ������ ������� ������ ������� : ";
        cin >> n;
        cout << "\n";
        deleteCim(text);
    }
    // �����
    {
        cout << "\n";
        cout << "\n";
        cout << "             ����� " << "\n";
        cout << "____________*_____*" << "\n";
        cout << "___________*_*****_*" << "\n";
        cout << "__________*_(O)_(O)_*" << "\n";
        cout << "_________**____V____**" << "\n";
        cout << "_________**_________**" << "\n";
        cout << "_________**_________**" << "\n";
        cout << "__________*_________*" << "\n";
        cout << "___________***___***" << "\n";
        cout << "       � � ������ ���� " << "\n";
    }


    return 0;
}