#include <iostream>
#include "arek.h"

/*ZADANIE 6*/
/*Temat: p�tle, operator logiczny &&, instrukcja break*/
int main()
{
	bool example = true;
	if (example)
	{
		int current_example = 0;
		
		/*Przyk�ad 6.0*/
		/*Funkcja arek::random_int()*/
		if (current_example == 0)
		{
			//Funkcja oznacza podprogram. Fragment kodu kt�ry mo�emy wykona� wywo�uj�c jego nazw�. 
			//Funkcja mo�e mie� argumenty. Analogicznie do funkcji w matematyce, w zale�no�ci od argument�w da r�ny wynik.
			//Og�lne wywo�anie funkcji wygl�da:
			//nazwa_funkcji(argumenty_po_przecinku);
			//
			//je�li funkcja nie ma argument�w wywo�uje si� j� tak:
			//nazwa_funkcji();
			//
			//warto�� funkcji mo�esz przypisywa� do zmniennej:
			//zmienna = nazwa_funkcji();
			//
			//jako argumenty mo�esz przekaza� albo sta�e dane, albo zmienne:
			//nazwa_funkcji(5, 4);
			//nazwa_funkcji(zmienna1, zmienna2);

			//funkcja arek::random_int(int min, int max):
			std::cout << "Pierwsza losowa liczba to: " << arek::random_int(0, 10) << '\n'; //funkcja arek::random_int(int min, int max) zwraca pseudolosow� (na t� chwil� mo�esz uzna�, �e znaczy to to samo co "losow�") liczb� ca�kowit� z przedzia�u <min;max>

			//z wykorzystaniem zmiennych:
			int _min_int = -10;
			int _max_int = 157;

			int _number = arek::random_int(_min_int, _max_int);

			std::cout << "Druga losowa liczba to: " << _number << '\n';
		}
		/*KONIEC PRZYK�AD 6.0*/
		else if (current_example == 1)
		/*Przyk�ad 6.1*/
		/*operator logiczny && */
		{
			// && oznacza AND
			// AND zwraca TRUE gdy zar�wno jego lewa jak i prawa strona s� prawd�, co kontrasuje z OR || kt�remu wystarczy, �e conajmniej jedna strona jest prawdziwa

			int _test_int = 156;

			if ((_test_int % 2 == 0) && (_test_int > 15)) //Dodatkowe nawiasy mog� zosta� u�yte w celach porz�dkowych (jak w matematyce) b�d� estetycznych
			{
				std::cout << "_test_int ma wartosc podzielna przez 2 i wieksza od 15" << '\n';
			}
			
			if ((_test_int == 156) && (_test_int == 166)) //Visual Studio powinien podpowiada� gdy ma pewno��, �e zdanie logiczne jest zdaniem fa�szywym. Je�li tego nie robi, napisz mi, poka�� Ci na screenie.
			{
				std::cout << "niemozliwe, poniewaz _test_int nie moze jednoczesnie wynosic 156 i 166" << '\n';
			}
			
			if ((_test_int > 100) && ((_test_int % 3 == 0) || (_test_int % 5 == 0))) //Zdania logiczne mo�na ze sob� ��czy� tak jak tylko chcesz. Nawiasy s� do tego przydatne
			{
				std::cout << "_test_int jest wieksze od 100 i (_test_int jest podzielne przez 3 lub _test_int jest podzielne przez 5)" << '\n';
			}
		}
		/*KONIEC PRZYK�AD 6.1*/
		else if (current_example == 2)
		/*Przyk�ad 6.2*/
		/*instrukcja break;*/
		{
			//W normalnych warunkach ka�da z p�tli dzia�a "od pocz�tku do ko�ca", jednak jak ju� wspomina�em, mo�liwe s� p�tle niesko�czone.
			//Je�li p�tla jest prawdziwie niesko�czona, to b�dzie obci��eniem dla komputera, i bez u�ycia brzydkich rzeczy, takich jak ctrl+c, zabicie procesu w task managerze, lub wy��czenie komputera nie da si� jej zako�czy�.
			//St�d czasem istnieje potrzeba wykorzystania instrukcji break; kt�ra wymusza zako�czenie p�tli (z�amanie jej), nie wykonuj�c nawet kolejnych linijek jej cia�a.

			while (true) //p�tla niesko�czona, bo true nigdy nie b�dzie fa�szem
			{
				int _breaking_int = 0;

				std::cout << '\n' << "wprowadz 9 aby zakonczyc petle, lub dowolna inna liczbe, aby wykonac ja kolejny raz" << '\n';
				std::cin >> _breaking_int;

				std::cout << "linjka przed break" << '\n';
				if (_breaking_int == 9)
				{
					break;
				}
				std::cout << "linjka po break" << '\n';
			}

			std::cout << "petla zostala zlamana";

		}
		/*KONIEC PRZYK�AD 6.2*/
	}
	else
	{
		bool switch_current_exercise = false;
		/*ZADANIE 6.1*/
		// Powr�t do kodu wypracowanego w poprzednich zadaniach :D
		// Zmodyfikuj go w taki spos�b:
		// 1. wykorzystaj niesko�czon� p�tl�, aby mo�na go u�ywa� wielokrotnie w ramach jednego uruchomienia programu
		// 2. dodaj do menu kolejn� opcj�, kt�ra pozwoli zako�czy� prac� p�tli
		// 2.1 do zako�czenia wykorzystaj instrukcj� break
		// 3. wykorzystaj iterator w celu zliczania ile razy wykonano p�tl�. Po wy�amaniu si� z niej wy�wietl komunikat z t� ilo�ci�
		if (!switch_current_exercise)
		{
			int liczba_jeden = 0;
			int liczba_dwa = 0;
			int u_input = 0;
			int suma = 0;
			bool rigth_try = false;
			bool false_try = true;



			std::cout << "Podaj pierwsza liczbe" << "\n\n";

			std::cin >> liczba_jeden;

			std::cout << "\n";

			std::cout << "#1. Dodawanie                   #" << "\n\n";
			std::cout << "#2. Odejmowanie                 #" << "\n\n";
			std::cout << "#3. Dzielenie                   #" << "\n\n";
			std::cout << "#4. Mnozenie                    #" << "\n\n";


			do
			{
				if (!false_try)
				{
					std::cout << "Wybrales bledny numer dzialania" << "\n\n";
				}

				std::cout << "Podaj numer opcji" << "\n\n";
				std::cin >> u_input;
				std::cout << "\n\n";

				if (u_input == 1 || u_input == 2 || u_input == 3 || u_input == 4)
				{
					rigth_try = true;
				}

				else if (false_try)
				{
					false_try = false;
				}

			} while (rigth_try == false);


			std::cout << "Podaj druga liczbe" << "\n\n";

			std::cin >> liczba_dwa;

			std::cout << "\n";

			switch (u_input)
			{
			case 1:
				suma = liczba_jeden + liczba_dwa;
				std::cout << "Twoj wynik wynosi: " << suma;
				break;

			case 2:
				suma = liczba_jeden - liczba_dwa;
				std::cout << "Twoj wynik wynosi: " << suma;
				break;

			case 3:
				do
				{
					if (!false_try)
					{
						std::cout << "Nie mozna dzielic przez 0";
					}

					if (liczba_dwa != 0)
					{
						suma = liczba_jeden / liczba_dwa;
						std::cout << "Twoj wynik wynosi: " << suma << "\n\n";
						rigth_try = true;
					}
					else if (liczba_dwa == 0)
					{
						false_try = false;
					}
				} while (rigth_try == false);
				break;

			case 4:
				suma = liczba_jeden * liczba_dwa;
				std::cout << "Twoj wynik wynosi: " << suma;
				break;

			default:
				std::cout << "Niepoprawna opcja" << "\n";
			}

			std::cout << "\n";
			std::cout << "Czy juz moge zarabiac 6tys netto?" << "\n";
		}
		/*KONIEC ZADANIE 6.1*/
		else
		/*ZADANIE 6.2*/
		// Napisz program kt�ry:
		// 1. w odpowiedniej p�tli pobierze od u�ytkownika dwie liczby: minimaln� i maksymaln� warto�� losowanej liczby. Liczba minimalna musi by� mniejsza od liczby maksymalnej
		// 2. w odpowiedniej p�tli pobierze od u�ytkownika kolejn� liczb�. Musi by� ona wi�ksza b�d� r�wna minimalne i mniejsza b�d� r�wna od maksymalnej
		// 3. w odpowiedniej p�tli b�dzie losowa� liczb� z przedzia�u tak d�ugo a� b�dzie ona r�wna trzeciej podanej liczbie
		// 3.1. przy pomocy iteratora b�dzie zlicza� ilo�� pr�b wylosowania tej liczby
		// 4. wypisze na konsol�, czy liczba pr�b jest mniejsza od po�owy tej liczby
		{
			
		}
		/*KONIEC ZADANIE 6.2*/
	}
}