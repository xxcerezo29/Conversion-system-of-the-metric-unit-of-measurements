
#include <iostream>
#include <conio.h>

using namespace std;

int MtoMM(int m)
{
	int mm;

	mm = m * 1000;

	cout << "The Millimeter/s equivalence is : " << mm << endl;

	return mm;
}

int MtoCM(int m)
{
	int CM;

	CM = m * 100;
	cout << "The Centimeter/s equivalence is : " << CM << endl;


	return CM;
}

int KMtoM(int KM)
{
	int M;
	M = KM * 1000;
	cout << "The Meter/s equivalence is : " << M << endl;

	return M;
}

int GtoMG(int G)
{
	int MG;
	MG = G * 1000;
	cout << "The Milligram/s equivalence is : " << MG << endl;

	return MG;
}
int KGtoG(int KG)
{
	int G;
	G = KG * 1000;
	cout << "The Milligram/s equivalence is : " << G << endl;

	return G;
}
int LtoML(int L)
{
	int ML;
	ML = L * 1000;
	cout << "The Gram/s equivalence is : " << ML << endl;
	return ML;
}

int MMtoC(int mm)
{
	int C;
	C = mm * 100;
	cout << "Centimeter/s equivalence is : " << C << endl;
	return C;
}
float MtoKM(float m)
{
	float KM;
	KM = m * 1 / 1000;
	cout << "Kilometer/s equivalence is : " << KM << endl;
	return KM;
}

char UserInput = 'a';

void Start()
{
	cout << "Conversion System of the Metric Unit of Measurement " << "By: Vincent Cerezo" << endl;
	cout << "Leter Code:--------------------" << endl;
	cout << "B : Meter to Millimeters" << endl;
	cout << "C : Millimetes to Centimeters" << endl;
	cout << "D : Meter to kilometer" << endl;
	cout << "E : Gram to Milligram" << endl;
	cout << "G : Exit Program" << endl;

	cout << "//////////////////////////" << endl;
	cout << "NOTE: Use Uppercase Letter" << endl;
	cout << "//////////////////////////" << endl;

	cin >> UserInput;

}

int main() {

	Start();

	while (true)
	{

		switch (UserInput)
		{
		case 'B':
			int mm;
			cout << "Enter the Meter Value: ";
			cin >> mm;
			MtoMM(mm);

			cout << "Press any key to return." << endl;

			if (_getch())
			{
				UserInput = 'a';
				Start();
			}
			break;

		case 'C':
			int mml;
			cout << "Enter the Millimeters Value: ";
			cin >> mml;
			MMtoC(mml);
			cout << "Press any key to return." << endl;

			if (_getch())
			{
				UserInput = 'a';
				Start();
			}
		case 'D':
			int m;
			cout << "Enter the Meter Value: ";
			cin >> m;
			MtoKM(m);
			cout << "Press any key to return." << endl;

			if (_getch())
			{
				UserInput = 'a';
				Start();
			}
			break;
		case 'E':
			int g;
			cout << "Enter the Gram Value: ";
			cin >> g;
			GtoMG(g);

			cout << "Press any key to return." << endl;

			if (_getch())
			{
				UserInput = 'a';
				Start();
			}

		case 'G':
			return 0;
			break;
		default:
			cout << "Invalid Input..." << endl;
			Start();
			break;
		}

	}

	return 0;
}