#include"System.h"

int Gai::number = 9991;
char Gai::first = 'A';
char Gai::second = 'H';

int main()
{
	setlocale(NULL, "");

	// A B C (D) E (F) (G) H (I) (J) K (L) M (N) O P (Q) (R) (S) T (U) (V) (W) X (Y) (Z)
	// СКОБКИ - ИСКЛЮЧЕНЫ ИЗ НОМЕРОВ

    System num;
    int menu = 0;
    int id;
    do
    {
        cout << "\n1. Показать список номеров.";
        cout << "\n2. Получить номер.";
        cout << "\n0. Выход.\nВыбор: ";
        cin >> menu;

        switch (menu)
        {
        case 1:

            num.showNumbers();
            break;
        case 2:
            cout << "\nВведите ID желаемого номера: ";
            cin >> id;
            num.giveNumber(--id);
            cout << "\nНомер получен! Удачной Вам дороги!\n\n";
            break;

        default: if (menu > 2 && menu != 0 || menu < 0) cout << "Неверно выбран пункт меню.\n\n"; break;

        }
    } while (menu != 0);


	return 0;
}