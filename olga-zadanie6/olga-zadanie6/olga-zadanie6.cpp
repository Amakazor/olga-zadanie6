#include <iostream>
#include "arek.h"

/*ZADANIE 6*/
/*Temat: pêtle, operator logiczny &&, instrukcja break*/
int main()
{
	bool example = true;
	if (example)
	{
		int current_example = 0;
		
		/*Przyk³ad 6.0*/
		/*Funkcja arek::random_int()*/
		if (current_example == 0)
		{
			//Funkcja oznacza podprogram. Fragment kodu który mo¿emy wykonaæ wywo³uj¹c jego nazwê. 
			//Funkcja mo¿e mieæ argumenty. Analogicznie do funkcji w matematyce, w zale¿noœci od argumentów da ró¿ny wynik.
			//Ogólne wywo³anie funkcji wygl¹da:
			//nazwa_funkcji(argumenty_po_przecinku);
			//
			//jeœli funkcja nie ma argumentów wywo³uje siê j¹ tak:
			//nazwa_funkcji();
			//
			//wartoœæ funkcji mo¿esz przypisywaæ do zmniennej:
			//zmienna = nazwa_funkcji();
			//
			//jako argumenty mo¿esz przekazaæ albo sta³e dane, albo zmienne:
			//nazwa_funkcji(5, 4);
			//nazwa_funkcji(zmienna1, zmienna2);

			//funkcja arek::random_int(int min, int max):
			std::cout << "Pierwsza losowa liczba to: " << arek::random_int(0, 10) << '\n'; //funkcja arek::random_int(int min, int max) zwraca pseudolosow¹ (na t¹ chwilê mo¿esz uznaæ, ¿e znaczy to to samo co "losow¹") liczbê ca³kowit¹ z przedzia³u <min;max>

			//z wykorzystaniem zmiennych:
			int _min_int = -10;
			int _max_int = 157;

			int _number = arek::random_int(_min_int, _max_int);

			std::cout << "Druga losowa liczba to: " << _number << '\n';
		}
		/*KONIEC PRZYK£AD 6.0*/
		else if (current_example == 1)
		/*Przyk³ad 6.1*/
		/*operator logiczny && */
		{
			// && oznacza AND
			// AND zwraca TRUE gdy zarówno jego lewa jak i prawa strona s¹ prawd¹, co kontrasuje z OR || któremu wystarczy, ¿e conajmniej jedna strona jest prawdziwa

			int _test_int = 156;

			if ((_test_int % 2 == 0) && (_test_int > 15)) //Dodatkowe nawiasy mog¹ zostaæ u¿yte w celach porz¹dkowych (jak w matematyce) b¹dŸ estetycznych
			{
				std::cout << "_test_int ma wartosc podzielna przez 2 i wieksza od 15" << '\n';
			}
			
			if ((_test_int == 156) && (_test_int == 166)) //Visual Studio powinien podpowiadaæ gdy ma pewnoœæ, ¿e zdanie logiczne jest zdaniem fa³szywym. Jeœli tego nie robi, napisz mi, poka¿ê Ci na screenie.
			{
				std::cout << "niemozliwe, poniewaz _test_int nie moze jednoczesnie wynosic 156 i 166" << '\n';
			}
			
			if ((_test_int > 100) && ((_test_int % 3 == 0) || (_test_int % 5 == 0))) //Zdania logiczne mo¿na ze sob¹ ³¹czyæ tak jak tylko chcesz. Nawiasy s¹ do tego przydatne
			{
				std::cout << "_test_int jest wieksze od 100 i (_test_int jest podzielne przez 3 lub _test_int jest podzielne przez 5)" << '\n';
			}
		}
		/*KONIEC PRZYK£AD 6.1*/
		else if (current_example == 2)
		/*Przyk³ad 6.2*/
		/*instrukcja break;*/
		{
			//W normalnych warunkach ka¿da z pêtli dzia³a "od pocz¹tku do koñca", jednak jak ju¿ wspomina³em, mo¿liwe s¹ pêtle nieskoñczone.
			//Jeœli pêtla jest prawdziwie nieskoñczona, to bêdzie obci¹¿eniem dla komputera, i bez u¿ycia brzydkich rzeczy, takich jak ctrl+c, zabicie procesu w task managerze, lub wy³¹czenie komputera nie da siê jej zakoñczyæ.
			//St¹d czasem istnieje potrzeba wykorzystania instrukcji break; która wymusza zakoñczenie pêtli (z³amanie jej), nie wykonuj¹c nawet kolejnych linijek jej cia³a.

			while (true) //pêtla nieskoñczona, bo true nigdy nie bêdzie fa³szem
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
		/*KONIEC PRZYK£AD 6.2*/
	}
	else
	{
		bool switch_current_exercise = false;
		/*ZADANIE 6.1*/
		// Powrót do kodu wypracowanego w poprzednich zadaniach :D
		// Zmodyfikuj go w taki sposób:
		// 1. wykorzystaj nieskoñczon¹ pêtlê, aby mo¿na go u¿ywaæ wielokrotnie w ramach jednego uruchomienia programu
		// 2. dodaj do menu kolejn¹ opcjê, która pozwoli zakoñczyæ pracê pêtli
		// 2.1 do zakoñczenia wykorzystaj instrukcjê break
		// 3. wykorzystaj iterator w celu zliczania ile razy wykonano pêtlê. Po wy³amaniu siê z niej wyœwietl komunikat z t¹ iloœci¹
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
		// Napisz program który:
		// 1. w odpowiedniej pêtli pobierze od u¿ytkownika dwie liczby: minimaln¹ i maksymaln¹ wartoœæ losowanej liczby. Liczba minimalna musi byæ mniejsza od liczby maksymalnej
		// 2. w odpowiedniej pêtli pobierze od u¿ytkownika kolejn¹ liczbê. Musi byæ ona wiêksza b¹dŸ równa minimalne i mniejsza b¹dŸ równa od maksymalnej
		// 3. w odpowiedniej pêtli bêdzie losowa³ liczbê z przedzia³u tak d³ugo a¿ bêdzie ona równa trzeciej podanej liczbie
		// 3.1. przy pomocy iteratora bêdzie zlicza³ iloœæ prób wylosowania tej liczby
		// 4. wypisze na konsolê, czy liczba prób jest mniejsza od po³owy tej liczby
		{
			
		}
		/*KONIEC ZADANIE 6.2*/
	}
}