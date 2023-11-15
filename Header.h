#include <iostream>
using namespace std;

const int MAX = 100;

void nhap(int a[], int n);
int tinhTong(int a[]){
    int tong=0;
    for (int i = 0; i < length(a); i++)
	{
		tong+=a[i];
	}
    return tong;
}
//Viet ham tinh tong cac phan tu co trong mang