#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std; 

inline void part1()
{
	cout << "Случай 1" << endl;
	double x0;
	int n, t;
	cin >> x0 >> n >> t;	
	vector <double> x;
	x.resize(t);
	cout << "x0 = " << x0 << ";" << endl;
	for (int i = 0; i < t; i++)
	{
		double prev = !i ? x0 : x[i - 1];
		x[i] = prev;
		cout << "x" << i + 1 << " = " << x[i] << ";" << endl;
	}
	cout << "----------------------------------------------------" << endl;
}

inline void part2()
{
	cout << "Случай 2" << endl;
	double x0,gamma;
	int n, t;
	cin >> x0 >> gamma >> n >> t;
	vector <double> x;
	x.resize(t+1);
	x[0] = x0;	
	x[1] = x0 + (n - x0)*x0*(1.0 / n)*((1.0 - gamma) / (t - 1.0) - (1.0 / t));	
	for (int i = 2; i < t; i++)
	{
		x[i] = x[i - 1] + (n - x[i - 1])*x[i - 1] * (1.0 / n)*((1.0 - gamma) / (t - 1.0) - (1.0 / t));
	}
	x[t] = x[t - 1] + (n - x[t - 1]) * x[t - 1] * (1.0 / n) * (gamma - 1.0 / t);
	for (int i = 0; i < x.size(); i++)
		cout << "x" << i  << " = " << x[i] << ";" << endl;

	cout << "----------------------------------------------------" << endl;
}


inline void part3()
{
	cout << "Случай 3" << endl;
	double x0, gamma;
	int n, t;
	cin >> x0 >> gamma >> n >> t;
	vector <double> x;
	x.resize(t + 1);
	x[0] = x0;
	x[1] = x0 + (n - x0)*x0*(1.0 / n)*(gamma - 1.0 / t);
	for (int i = 2; i < t + 1; i++)
	{
		x[i] = x[i - 1] + (n - x[i - 1])*x[i - 1] * (1.0 / n)*((1.0 - gamma) / (t - 1.0) - (1.0 / t));
	}
		for (int i = 0; i < x.size(); i++)
		cout << "x" << i << " = " << x[i] << ";" << endl;

	cout << "----------------------------------------------------" << endl;
}


inline void part4()
{
	cout << "Случай 4" << endl;
	double x0, gamma;
	int n, t;
	cin >> x0 >> gamma >> n >> t;
	vector <double> x;
	x.resize(t + 1);
	x[0] = x0;
	x[1] = x0 + (n - x0)*x0*(1.0 / n)*(1.0 / t - (1.0 - gamma)/(t-1.0));
	for (int i = 2; i < t + 1; i++)
	{
		x[i] = x[i - 1] + (n - x[i - 1])*x[i - 1] * (1.0 / n)*((1.0 - gamma) / (t - 1.0) - (1.0 / t));
	}
	x[t] = x[t - 1] + (n - x[t - 1]) * x[t - 1] * (1.0 / n) * (1.0 / t - gamma);
	for (int i = 0; i < x.size(); i++)
		cout << "x" << i << " = " << x[i] << ";" << endl;

	cout << "----------------------------------------------------" << endl;
}



inline void part5()
{
	cout << "Случай 5" << endl;
	double x0, gamma1, gamma2;
	int n, t;
	cin >> x0 >> gamma1 >> gamma2 >> n >> t;
	vector <double> x;
	x.resize(t + 1);
	x[0] = x0;
	x[1] = x0 + (n - x0)/n*x0*((1 - gamma1) / (t - 1.0) - (1 - gamma2) / (t - 1.0));
	for (int i = 2; i < t; i++)
	{
		x[i] = x[i - 1] + (n - x[i - 1])*x[i - 1] * ((1 - gamma1) / (t - 1.0) - (1 - gamma2) / (t - 1.0))/n;
	}
	x[t] = x[t - 1] + (n - x[t - 1]) * x[t - 1] * (gamma1 - gamma2)/n;
	for (int i = 0; i < x.size(); i++)
		cout << "x" << i << " = " << x[i] << ";" << endl;

	cout << "----------------------------------------------------" << endl;
}


inline void part6()
{
	cout << "Случай 6" << endl;
	double x0, gamma1, gamma2;
	int n, t;
	cin >> x0 >> gamma1 >> gamma2 >> n >> t;
	vector <double> x;
	x.resize(t + 1);
	x[0] = x0;
	x[1] = x0 + (n - x0)/n*x0*(gamma1 - (1.0 - gamma2)/(t - 1));
	for (int i = 2; i < t; i++)
	{
		x[i] = x[i - 1] + (n - x[i - 1])/n*x[i - 1] * ((1 - gamma1) / (t - 1.0) - (1 - gamma2) / (t - 1.0));
	}
	x[t] = x[t - 1] + (n - x[t - 1])/n * x[t - 1] * ((1 - gamma1)/(t-1) - gamma2);
	for (int i = 0; i < x.size(); i++)
		cout << "x" << i << " = " << x[i] << ";" << endl;

	cout << "----------------------------------------------------" << endl;
}


inline void part7()
{
	cout << "Случай 7" << endl;
	double x0, gamma;
	int n, t;
	cin >> x0 >> gamma >> n >> t;
	vector <double> x;
	x.resize(t + 1);
	x[0] = x0;
	x[1] = x0 + (n - x0)*x0*(1.0 / t - gamma) / n;
	for (int i = 2; i < t + 1; i++)
	{
		x[i] = x[i - 1] * (1 + (n - x[i-1])*(t*gamma - 1) / (n*t*(t-1.0)) );
	}	
	for (int i = 0; i < x.size(); i++)
		cout << "x" << i << " = " << x[i] << ";" << endl;
	cout << "----------------------------------------------------" << endl;
}


inline void part8()
{
	cout << "Случай 8" << endl;
	double x0, gamma1, gamma2;
	int n, t;
	cin >> x0 >> gamma1 >> gamma2 >> n >> t;
	vector <double> x;
	x.resize(t + 1);
	x[0] = x0;
	x[1] = x0 + (n - x0)*x0*((1.0 - gamma1) / (t - 1.0) - gamma2) / n;
		for (int i = 2; i < t + 1; i++)
	{
		x[i] = x[i - 1] * (1 + (n - x[i - 1])*((1 - gamma1)/(t - 1.0) - (1 - gamma2)/(t - 1))/n);
	}
		x[t] = x[t - 1] + (n - x[t - 1]) * x[t - 1] * (gamma1 - (1 - gamma2)/(t - 1)) / n;
	for (int i = 0; i < x.size(); i++)
		cout << "x" << i << " = " << x[i] << ";" << endl;
	cout << "----------------------------------------------------" << endl;
}


inline void part9()
{
	cout << "Случай 9" << endl;
	double x0, gamma1, gamma2;
	int n, t;
	cin >> x0 >> gamma1 >> gamma2 >> n >> t;
	vector <double> x;
	x.resize(t + 1);
	x[0] = x0;
	x[1] = x0 + (n - x0)*x0*(gamma1 - gamma2) / n;
	for (int i = 2; i < t + 1; i++)
	{
		x[i] = x[i - 1] * (1 + (n - x[i - 1])*((1 - gamma1) / (t - 1.0) - (1 - gamma2) / (t - 1)) / n);
	}
		for (int i = 0; i < x.size(); i++)
		cout << "x" << i << " = " << x[i] << ";" << endl;
	cout << "----------------------------------------------------" << endl;
}


int main() 
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	part1();
	part2();
	part3();
	part4();
	part5();
	part6();	
	part7();
	part8();
	part9();
	return 0;
}
