#include"System.h"

int Gai::number = 9991;
char Gai::first = 'A';
char Gai::second = 'H';

int main()
{
	setlocale(NULL, "");

	// A B C (D) E (F) (G) H (I) (J) K (L) M (N) O P (Q) (R) (S) T (U) (V) (W) X (Y) (Z)
	// ������ - ��������� �� �������

    System num;
    int menu = 0;
    int id;
    do
    {
        cout << "\n1. �������� ������ �������.";
        cout << "\n2. �������� �����.";
        cout << "\n0. �����.\n�����: ";
        cin >> menu;

        switch (menu)
        {
        case 1:

            num.showNumbers();
            break;
        case 2:
            cout << "\n������� ID ��������� ������: ";
            cin >> id;
            num.giveNumber(--id);
            cout << "\n����� �������! ������� ��� ������!\n\n";
            break;

        default: if (menu > 2 && menu != 0 || menu < 0) cout << "������� ������ ����� ����.\n\n"; break;

        }
    } while (menu != 0);


	return 0;
}