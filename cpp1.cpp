#include <iostream>
using namespace std;

int cpp1main() 
{
	setlocale(LC_ALL, "Russian");
	cout << "<<� ��� �������� ������� �������>>  " << '\n';
	cout << "<<������� ������� :������ ����� , ����� ������� ���������� ������������ ������ ����� 1>>  " << '\n';
	cout << "<<������� ������� :� �� ����� ������������ .>>  " << '\n';
	cout << "<<������� ������� :���� ����� ������ � �� ������� � ��� ��������� .>>  " << '\n';
	//������� 1 ������
	cout << "---������� 1---" << '\n';
	cout << "<<������ : ������� 1 .� ����� ������� ������ (� ������) �� ����� ���������� >> " << '\n';
	cout << "<<������ :  ��������� ��� ��������� ���� ������ >> " << '\n';
	cout << "____________________" << endl;
	cout << "|" << "int        =" << " " << sizeof(int) << "byte" << "|" << endl;
	cout << "|" << "short int  =" << " " << sizeof(short int) << "byte" << "|" << endl;
	cout << "|" << "long int   =" << " " << sizeof(long int) << "byte" << "|" << endl;
	cout << "|" << "float      =" << " " << sizeof(float) << "byte" << "|" << endl;
	cout << "|" << "double     =" << " " << sizeof(double) << "byte" << "|" << endl;
	cout << "|" << "long double=" << " " << sizeof(long double) << "byte" << "|" << endl;
	cout << "|" << "char       =" << " " << sizeof(char) << "byte" << "|" << endl;
	cout << "|" << "bool       =" << " " << sizeof(bool) << "byte" << "|" << endl;
	cout << "|" << "__________________" << "| " << endl;
	//������� 1 ���������� 

	{//������� 2 ������

		int value;

		setlocale(LC_ALL, "Russian");
		cout << "---������� 2--- " << '\n';
		cout << "������ : ��������� � ������� 2  " << '\n';
		cout << "������:� ��� � ������ �� ����� �������� ������������� � ������  ������ �����.  " << '\n';
		cout << "������ : ����� ������ ����� ,���  " << '\n';
		cout << "�� ����� ����� ->";
		cin >> value;
		int a = value;



		cout << "������ :���� ����� �������� ��� " << '\n';

		unsigned int order1 = 32;
		unsigned int mask0 = 1 << order1 - 1;


		for (int i = 1; i <= order1; i++)
		{
			putchar(value & mask0 ? '1' : '0');
			value <<= 1;
			if (i % 8 == 0)
			{
				putchar(' ');
			}
			if (i % order1 - 1 == 0)
			{
				putchar(' ');
			}
		}

		cout << '\n' << "������ : ������ ��� �������� � ���� , �������� ? " << '\n';
		int vac;

		cout << "� ��������� � ����������� ����� � ����� �� � ��� �������� �� 1 � 0" << '\n';
		cin >> vac;
		if (int(vac) == 1) {
			std::cout << "<<�� �������� Yes >>" << '\n';
			cout << "������ : �� ������� ���������� ������ ��������  ? " << '\n';
			int art;
			cin >> art;
			unsigned int order0 = 32;
			unsigned int mask1 = 1 << order0 - (1 + art);

			for (int i = 1; i <= order0; i++)
			{
				putchar(a & mask1 ? '1' : '0');
				a <<= 1;
				if (i % 8 == 0)
				{
					putchar(' ');
				}
				if (i % order0 - 1 == 0)
				{
					putchar(' ');
				}
			}



		}
		else if (int(vac) == 0) {
			std::cout << "<<�� �������� No >>" << '\n';
			cout << "������ :�� ��� � ���� ���" << '\n';
			cout << "������ :� �������� � ���������� ������� " << '\n';
		}
		else {
			cout << "������ :� ��� �� �������" << '\n';
			cout << "������ ��������� ������� � ���������� ������� " << '\n';
		}






	}//������� 2 �����

	{
		//������� 3 ������ 
		setlocale(LC_ALL, "Russian");
		cout << '\n' << "---������� 3---" << '\n';
		cout << "������ : ����������� ������� 3,���" << '\n';
		cout << "������ : ����� � ������� ���� ����� c ��������� ������ � ���������� ���" << '\n';

		union {
			int tool;
			float nunf;
		};
		setlocale(LC_ALL, "Russian");
		cout << "������ : ����� ���� ����� ,���" << '\n';
		cout << "�� ����� ����� ->";

		cin >> nunf;
		cout << "<<������ �������� �������� ������ , �� ������� ����� ����� :>>" << '\n';

		int order = 32; //���������� ��������
		int mask = 1 << order - 1;//����� �������� ��������� 
		int v = tool;

		for (int i = 0; i < order; i++)
		{
			if (i % 8 == 0)

				cout << (" ");
			cout << (tool & mask ? '1' : '0'); //����� ������ ����� 
			tool <<= 1;
		}
		cout << "\n " << " <----------mantissa-----> <-Expanded->" << "\n ";

		setlocale(LC_ALL, "Russian");
		cout << "������ : ������ ��� �������� � ���� , �������� ? " << '\n';
		string c;
		cout << "<<����� ���� ����� ����� : yes ��� no  ?>>" << '\n';
		setlocale(LC_ALL, "Russian");
	std:cin >> c;


		if (string(c) == "Yes" or string(c) == "yes") {
			cout << "������ :�� ������� ������ �� ������ �������� ����� ? ";
			int vol;
			cin >> vol;
			v <<= vol;
			std::cout << "<<�� �������� Yes � ������ ������ ���� �� ������ ��������>>" << '\n';
			cout << "<<������ ���� � ������ ������ ������>> " << '\n';
			for (int i = 0; i < order; i++)
			{
				if (i % 8 == 0)

					cout << (" ");
				cout << (v & mask ? '1' : '0'); //����� ������ ����� 
				v <<= 1;
			}

			cout << "\n " << " <----------mantissa-----> <-Expanded->" << '\n';
			cout << "������ :������� �� ���� ����������� � �������� � ���������� ������� " << '\n';
		}
		else if (string(c) == "No" or string(c) == "no") {
			std::cout << "<<�� �������� No >>" << '\n';
			cout << "������ :�� ��� � ���� ���" << '\n';
			cout << "������ :� �������� � ���������� ������� " << '\n';
		}
		else {
			cout << "������ :� ��� �� �������" << '\n';
			cout << "������ ��������� ������� � ���������� ������� " << '\n';
		}
	}//������� 3 ����������
	cout << "<<������ : � ��������� ��� ��������� ���� � ���������������  >>  " << '\n';
	cout << "<<������ : � ��������� ������� � ���� ����� ��  ����������   >>  " << '\n';
	cout << "<<������ : ����� �� ���� ��� �� ������ ���������   >>  " << '\n';
	{
		setlocale(LC_ALL, "Russian");
		cout << "   ������� 4\n";

		union {
			double value3;
			int b[2];
		};
		unsigned int order3 = sizeof(double) * 8;
		unsigned int mask3 = 1 << (order3 - 1);

		cout << "������ : ������� ������������  �����: ";
		cin >> value3;

		for (int l = 0; l < order3 / 2; ++l)
		{
			if (l == 1 || 1 % 8 == 0 || l == 12)
			{
				putchar(' ');
			}
			putchar(b[1] & mask3 ? '1' : '0');
			b[1] <<= 1;
		}
		for (int j = 0; j < order3 / 2; ++j)
		{
			if (j % 8 == 0)
			{
				putchar(' ');
			}
			putchar(b[0] & mask3 ? '1' : '0');
			b[0] <<= 1;
		}

	}

	return 0;
}