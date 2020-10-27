// PR3 Shturman.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;


void task75() {
	cout << "\n\nTask75";
	int a = 0, b = 0, c = 0, d = 0;
	cout << "\n\nInput number: \n";
	cin >> a;
	if (a > 100 && a < 1000 || a == 100)
	{
		b = a / 100;
		c = (a % 100) / 10;
		d = a % 10;
		if (b == c == d)
		{
			cout << "\nAll numbers are the same\n";
		}
		else {
			if (b == c || b == d || c == d)
			{
				cout << "There is an repetitive numbers";
			}
			else { cout << "There is no repetitive numbers \n"; }
		}


	}
	else { cout << "Input three-digit number. \n"; }

}
void task86()
{
	cout << "\n\nTask86";
	int a = 0, b = 0, c = 0;
	cout << "\nInput number A: \n";
	cin >> a;
	cout << "Input number B: \n";
	cin >> b;
	cout << "Input number C: \n";
	cin >> c;
	if (a >= 0 && b >= 0 && c >= 0)
	{
		cout << "All number are positive (3)\n";
	}
	else
	{
		if (a < 0 && b >= 0 && c >= 0 || b < 0 && a >= 0 && c >= 0 || c < 0 && a >= 0 && b >= 0)
		{
			cout << "2 numbers are positive\n";
		}
		else
		{
			if (a < 0 && b < 0 && c >= 0 || b < 0 && c < 0 && a >= 0 || c < 0 && a < 0 && b >= 0)
			{
				cout << "1 numbers is positive\n";
			}
			cout << "0 numbers are positive\n";
		}
	}

}
void task97() {
	cout << "\n\nTask97";
	int a = 0;
	cout << "\nInput age: \n";
	cin >> a;
	if (a < 7)
	{
		cout << "This human is doshkolnik\n";
	}
	else
	{
		if (a > 7 && a < 18)
		{
			cout << "This human is uchenik\n";
		}
		else
		{
			if (a > 18 && a < 60) { cout << "This human is rabotnik\n"; }
			else { if (a > 60) { cout << "This human is Pensioner\n"; } }

		}
	}
}
void task108()
{
	cout << "\n\nTask108";
	double a = 0, b = 0, c = 0;
	cout << "\n\nInput A: ";
	cin >> a;
	cout << "\n\nInput B: ";
	cin >> b;
	cout << "\n\nInput C: ";
	cin >> c;
	if (a > b && a > c && c < a && c < b)
	{
		cout << "\n\n A+C=" << a + c;
	}
	else
	{
		if (a >= b && a >= c && b <= a && b <= c)
		{
			cout << "\n\n A+B=" << a + b;
		}
		else {
			if (b >= a && b >= c && c <= a && c <= b)
			{
				cout << "\n\n B+C=" << b + c;
			}
			else
			{
				if (b >= a && b >= c && a <= c && a <= b)
				{
					cout << "\n\n B+A=" << b + a;
				}
				else {
					if (c >= b && c >= a && a <= b && a <= c)
					{
						cout << "\n\n C+A=" << c + a;
					}
					else
					{
						if (c >= b && c >= a && b <= a && b <= c)
						{
							cout << "\n\n C+B=" << c + b;
						}
						else { cout << "Try another numbers, or don't repeat them"; }
					}
				}
			}
		}
	}


}
void task119() {
	cout << "\n\nTask119";
	double x = 0, y = 0, z = 0, max = 0, min = 0, u = 0;
	cout << "\n\n Input X , Y , Z : \n";
	cin >> x;
	cin >> y;
	cin >> z;

	if (x >= y && x >= z)
	{
		max = x;
		cout << "\n\nMax = " << max;
	}
	else
	{
		if (y >= x && y >= z) {
			max = y;
			cout << "\n\nMax = " << max;
		}
		else
		{
			if (z >= x && z >= y) {
				max = z;
				cout << "\n\nMax = " << max;
			}
		}
	}
	if (x <= y && x <= z)
	{
		min = x;
		cout << "\n\nMin = " << min;
	}
	else
	{
		if (y <= x && y <= z) {
			min = y;
			cout << "\n\nMin = " << min;
		}
		else
		{
			if (z <= x && z <= y) {
				min = z;
				cout << "\n\nMin = " << min;
			}
		}
	}
	u = (pow(max, 2) - pow(2, x) * min) / (sin(2 * x) + (max / min));
	cout << "\n\nU=(max^2-(2^x)*min)/(sin2x+max/min)\n\n" << "U=" << u;
}
void task130() {
	cout << "\n\nTask130";
	int i = 0, p = 0, s = 0;
	cout << "\n\nResults of competition";
	cout << "\n\nInput results of Ivanov: \n";
	cin >> i;
	cout << "\n\nInput results of Petrov: \n";
	cin >> p;
	cout << "\n\nInput results of Sidorov: \n";
	cin >> s;
	if (i < p && i < s)
	{
		cout << "\n\nIvanov is winner with his result : " << i;
	}
	if (p < i && p < s)
	{
		cout << "\n\nPetrov is winner with his result : " << p;
	}
	if (s < p && s < i)
	{
		cout << "\n\nSidorov is winner with his result : " << s;
	}
	if (i < p && i == s)
	{
		cout << "\n\nIvanov and Sidorov is winners with their results : " << i;
	}
	if (i < s && i == p)
	{
		cout << "\n\nIvanov and Petrov is winners with their results : " << i;
	}
	if (s < i && s == p)
	{
		cout << "\n\nPetrov and Sidorov is winners with their results : " << p;
	}
	if (s == p && s == i)
	{
		cout << "\n\nPetrov, Sidorov, Ivanov is absolutely champions with their results : " << s;
	}
}
void task63() {
	cout << "\n\nTask63";
	int a = 0, b = 0;
	cout << "\nInput radius of circle";
	cout << "\n\nRadius: \n";
	cin >> a;
	cout << "\nInput side of square";
	cout << "\n\nSide: \n";
	cin >> b;
	if (a > b / 2)
	{
		cout << "\nCircle can't be inside square";
	}
	else {
		cout << "\nCircle can be inside square";
	}
	if (a > (b * (sqrt(2) / 2)))
	{
		cout << "\nCircle can be created around square";
	}
	else {
		cout << "\nCircle can't be created around square\n\n";
	}
}
void task141() {
	cout << "\n\nTask141";
	int a = 0, b = 0, c = 0;
	cout << "\n\nHeight of 3 humans";
	cout << "\n\nInput height of human #1 : \n";
	cin >> a;
	cout << "\n\nInput height of human #2 : \n";
	cin >> b;
	cout << "\n\nInput height of human #3 : \n";
	cin >> c;
	if (a == b && b == c)
	{
		cout << "\n\n Their height is the same ";
	}
	else
	{
		cout << "\n\n Their height is not the same ";
	}


}
void task152() {
	cout << "\n\nTask152";
	double t = 0;
	cout << "\n\nInput how many minutes have passed from the beginning : \n";
	cin >> t;
	if (t < 3 || t >= 5 && t < 8 || t >= 10 && t < 13 || t >= 15 && t < 18 || t >= 20 && t < 23 || t >= 25 && t < 28 || t >= 30 && t < 33 || t >= 35 && t < 38 || t >= 40 && t < 43 || t >= 45 && t < 48 || t >= 50 && t < 53 || t >= 55 && t < 58 || t == 60)
	{
		cout << "\n\n It is Green Now ";
	}
	else
	{
		if (t > 60) { cout << "\n\n Try something another"; }
		else {
			cout << "\n\n It is red now";
		}
	}


}
/*void task163() {
	cout << "\n\nTask163";
	double x1 = 0, x2 = 0, y1 = 0, y2 = 0, k = 0, b = 0, r = 0;
	cout << "\n\nNow input radius of circle:\n";
	cin >> r;
	cout << "\n\n Y=K*X+B";
	cout << "\n\nFor start we will find coordinates of straight";
	cout << "\n\n Input k: \n";
	cin >> k;
	if (k == 0)
	{
		cout << "\n\n Input b: \n";
		cin >> b;
		if (b > r || b < (-1 * r)) {
			cout << "\n\n straight line does not intersect with circle \n";
		}
		if (b = r) { cout << "\n\n straight line touch circle, but not intersect with it"; }
		else {
			cout << "\n\n Input x1: \n";
			cin >> x1;
			y1 = k * x1 + b;
			cout << "Y1 = " << y1;
			cout << "\n\n Input x2: \n";
			cin >> x2;
			y2 = k * x2 + b;
			cout << "Y2 = " << y2;
		}

	}
	else {
		cout << "\n\n Input b: \n";
		cin >> b;
		cout << "\n\n Input x1: \n";
		cin >> x1;
		y1 = k * x1 + b;
		cout << "Y1 = " << y1;
		cout << "\n\n Input x2: \n";
		cin >> x2;
		y2 = k * x2 + b;
		cout << "Y2 = " << y2;
	}



}*/



int main()
{
	task63();
	task75();
	task86();
	task97();
	task108();
	task119();
	task130();
	task141();
	task152();
	//task163();



}

