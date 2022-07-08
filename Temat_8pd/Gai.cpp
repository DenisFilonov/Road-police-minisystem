#include "Gai.h"

Gai::Gai()
{
	plusNumber();
	this->carnumber = "AK " + to_string(number / 1000) + to_string(number / 100 % 10) + to_string(number / 10 %10 ) + to_string(number % 10) + " " + first + second;
}

void Gai::showNumber()
{
	cout << "Номер авто: " << carnumber << endl;
}

void Gai::plusNumber()
{
	// (D)(F)(G)(I)(L)(N)(Q)(R)(S)(U)(V)(W)(Y)(Z) - исключены

	number++;
	if (number >= 9999)
	{
		number = 1;
		second++;
		if (second == 'D')
		{
			second = 'E';
		}
		else if (second == 'F' || second == 'G')
		{
			second = 'H';
		}
		else if (second == 'I' || second == 'J')
		{
			second = 'K';
		}
		else if (second == 'L')
		{
			second = 'M';
		}
		else if (second == 'N')
		{
			second = 'O';
		}
		else if (second == 'Q' || second == 'R' || second == 'S')
		{
			second = 'T';
		}
		else if (second == 'U' || second == 'V' || second == 'W')
		{
			second = 'X';
		}
		else if (second == 'Y' || second == 'Z')
		{
			second = 'A';
			first++;

			if (first == 'D')
			{
				first = 'E';
			}
			else if (first == 'F' || first == 'G')
			{
				first = 'H';
			}
			else if (first == 'I' || first == 'J')
			{
				first = 'K';
			}
			else if (first == 'L')
			{
				first = 'M';
			}
			else if (first == 'N')
			{
				first = 'O';
			}
			else if (first == 'Q' || first == 'R' || first == 'S')
			{
				first = 'T';
			}
			else if (first == 'U' || first == 'V' || first == 'W')
			{
				first = 'X';
			}
			else if (first == 'Y' || first == 'Z')
			{
				first = 'A';
			}
		}		
	}
}
