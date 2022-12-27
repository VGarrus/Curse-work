#include <iostream>
using namespace std;

int cpp1main() 
{
	setlocale(LC_ALL, "Russian");
	cout << "<<К вам подходит статный мужчина>>  " << '\n';
	cout << "<<Статный мужчина :Добрый вечер , перед началом выполнения Практической работы номер 1>>  " << '\n';
	cout << "<<Статный мужчина :Я бы хотел представится .>>  " << '\n';
	cout << "<<Статный мужчина :Меня зовут Виктор и на сегодня я ваш дворецкий .>>  " << '\n';
	//Задание 1 начало
	cout << "---Задание 1---" << '\n';
	cout << "<<Виктор : Задание 1 .Я вывел сколько памяти (в байтах) на вашем компьютере >> " << '\n';
	cout << "<<Виктор :  отводится под различные типы данных >> " << '\n';
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
	//Задание 1 законченно 

	{//Задание 2 начало

		int value;

		setlocale(LC_ALL, "Russian");
		cout << "---Задание 2--- " << '\n';
		cout << "Виктор : Переходим к заданию 2  " << '\n';
		cout << "Виктор:В нем я выведу на экран двоичное представление в памяти  целого числа.  " << '\n';
		cout << "Виктор : Прошу ввести число ,сэр  " << '\n';
		cout << "Вы ввели число ->";
		cin >> value;
		int a = value;



		cout << "Виктор :Ваше число выгледит так " << '\n';

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

		cout << '\n' << "Виктор : Хотите его сдвинуть в лево , господин ? " << '\n';
		int vac;

		cout << "К сожелению у програмиста лапки и здесь да и нет заменены на 1 и 0" << '\n';
		cin >> vac;
		if (int(vac) == 1) {
			std::cout << "<<Вы ответили Yes >>" << '\n';
			cout << "Виктор : На сколько символоввы хотите сдвинуть  ? " << '\n';
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
			std::cout << "<<Вы ответили No >>" << '\n';
			cout << "Виктор :На нет и суда нет" << '\n';
			cout << "Виктор :Я перехожу к следующему заданию " << '\n';
		}
		else {
			cout << "Виктор :я вас не понимаю" << '\n';
			cout << "Виктор огорченно перешол к следующему заданию " << '\n';
		}






	}//Задание 2 конец

	{
		//Задание 3 начало 
		setlocale(LC_ALL, "Russian");
		cout << '\n' << "---Задание 3---" << '\n';
		cout << "Виктор : Представляю задание 3,сэр" << '\n';
		cout << "Виктор : Здесь я попрошу ваше число c плавующей точкой и преобразую его" << '\n';

		union {
			int tool;
			float nunf;
		};
		setlocale(LC_ALL, "Russian");
		cout << "Виктор : Прошу ваше число ,сэр" << '\n';
		cout << "Вы ввели число ->";

		cin >> nunf;
		cout << "<<Виктор приносит подносит поднос , на котором лежит число :>>" << '\n';

		int order = 32; //количество разрядов
		int mask = 1 << order - 1;//Маска побитого сравнения 
		int v = tool;

		for (int i = 0; i < order; i++)
		{
			if (i % 8 == 0)

				cout << (" ");
			cout << (tool & mask ? '1' : '0'); //вывод самого числа 
			tool <<= 1;
		}
		cout << "\n " << " <----------mantissa-----> <-Expanded->" << "\n ";

		setlocale(LC_ALL, "Russian");
		cout << "Виктор : Хотите его сдвинуть в лево , господин ? " << '\n';
		string c;
		cout << "<<Перед вами встал выбор : yes или no  ?>>" << '\n';
		setlocale(LC_ALL, "Russian");
	std:cin >> c;


		if (string(c) == "Yes" or string(c) == "yes") {
			cout << "Виктор :На сколько знаков вы хотите сдвинуть число ? ";
			int vol;
			cin >> vol;
			v <<= vol;
			std::cout << "<<Вы ответили Yes и Виктор спешно ушел за другим подносом>>" << '\n';
			cout << "<<Виктор ушел и принес другой поднос>> " << '\n';
			for (int i = 0; i < order; i++)
			{
				if (i % 8 == 0)

					cout << (" ");
				cout << (v & mask ? '1' : '0'); //вывод самого числа 
				v <<= 1;
			}

			cout << "\n " << " <----------mantissa-----> <-Expanded->" << '\n';
			cout << "Виктор :Надеюсь вы рады результатом я перехожу к следующему заданию " << '\n';
		}
		else if (string(c) == "No" or string(c) == "no") {
			std::cout << "<<Вы ответили No >>" << '\n';
			cout << "Виктор :На нет и суда нет" << '\n';
			cout << "Виктор :Я перехожу к следующему заданию " << '\n';
		}
		else {
			cout << "Виктор :я вас не понимаю" << '\n';
			cout << "Виктор огорченно перешол к следующему заданию " << '\n';
		}
	}//Задание 3 законченно
	cout << "<<Виктор : К сожелению мой создатель плох в програмировании  >>  " << '\n';
	cout << "<<Виктор : И четвертое задание у него долго не  получалось   >>  " << '\n';
	cout << "<<Виктор : Прошу не бить его он обещял подтянуть   >>  " << '\n';
	{
		setlocale(LC_ALL, "Russian");
		cout << "   Задание 4\n";

		union {
			double value3;
			int b[2];
		};
		unsigned int order3 = sizeof(double) * 8;
		unsigned int mask3 = 1 << (order3 - 1);

		cout << "Виктор : Введите вещественное  число: ";
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