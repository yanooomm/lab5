/*Proc.8 Описать процедуру AddRightDigit(D, K), добавляющую к 
целому положительному числу K справа цифру D (D — входной параметр 
целого типа, лежащий в диапазоне 0–9, K — параметр целого типа,
являющийся одновременно входным и выходным). С помощью этой процедуры 
последовательно добавить к данному числу K справа данные цифры D1 и D2,
выводя результат каждого добавления.*/

#include <iostream>

using namespace std;

int AddRightDigit(int K, int D)
{
	K = K * 10 + D;
	return K;
}

int main()
{
	int K, D1, D2;
	cin >> K >> D1 >> D2;
	cout << AddRightDigit(K, D1) << endl;
	K = AddRightDigit(K, D1);
	cout << AddRightDigit(K, D2);

}
// K=21, D1=4, D2=5 -> 214 2145
// K=130, D1=0, D2=3 -> 1300 13003
