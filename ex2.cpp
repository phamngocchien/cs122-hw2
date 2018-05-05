#include <iostream>
#include <math.h>

using namespace std;

class Dathuc
{
private:
	int Bac;
	int heso[50];
public:
	void setDathuc(int a, int b[50])
	{
		this->Bac = a;
		for(int i = 0; i<50; i++)
		{
			this->heso[i] = b[i];
		}
	}
	void setBac(int a)
	{
		this->Bac = a;
	}
	int getBac()
	{
		return this->Bac;
	}
	Dathuc operator +(Dathuc b)
	{
		Dathuc kq;
		int m = max(this->Bac,b.getBac());
		kq.setBac(m);
		for (int i = 0; i<m; i++)
		{
			kq.heso[i] += b.heso[i];
		}
		return kq;
	}
	Dathuc operator -(Dathuc b)
	{
		Dathuc kq;
		int m = max(this->Bac,b.getBac());
		kq.setBac(m);
		for (int i = 0; i<m; i++)
		{
			kq.heso[i] -= b.heso[i];
		}
		return kq;
	}
	Dathuc operator *(Dathuc b)
	{
		Dathuc kq;
		int m = this->Bac + b.getBac();
		kq.setBac(m);
		for (int i = 0; i<this->Bac; i++)
		{
			for(int j = 0; j<b.getBac(); i++)
			{
				kq.heso[i+j] += this->heso[i]*b.heso[j];
			}
		}
	}
	Dathuc operator /(Dathuc b)
	{
		Dathuc kq;
		int m = this->Bac - b.getBac();
		kq.setBac(m);
		for (int i = 0; i<this->Bac; i++)
		{
			for(int j = 0; j<b.getBac(); i++)
			{
				kq.heso[i-j] += this->heso[i]*b.heso[j];
			}
		}
	}
	void Xuat()
	{
		cout<<heso[0]<<"*x^1";
		for(int i = 1; i<this->Bac; i++)
		{
			cout<<" + "<<heso[i]<<"*x^"<<i+1;
		}
	}
};

int main()
{
 //////////////////////
}
