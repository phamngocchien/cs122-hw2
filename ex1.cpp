#include<iostream>
#include<math.h>
using namespace std;
class Phanso
{
    private :
        int tuso;
        int mauso;
    public:
        Phanso()
        {
        	this->tuso=0;
        	this->mauso=1;
		}
		Phanso(int a)
		{
			this->tuso=a;
			this->mauso=1;
		}
		Phanso(int a,int b)
		{
			this->tuso=a;
			this->mauso=b;
		}
		void setphanso(int a, int b)
		{
			this->tuso=a;
			this->mauso=b;
		}
		int gettuso()
		{
			return this->tuso;
		}
		int getmauso()
		{
			return this->mauso;
		}	
		Phanso operator + (Phanso b)
		{
			Phanso kq;
			kq.tuso = this->tuso*b.getmauso() + this->mauso*b.gettuso();
			kq.mauso = this->mauso*b.getmauso();
			return kq;
		}
		Phanso operator - (Phanso b)
		{
			Phanso kq;
			kq.tuso = this->tuso*b.getmauso() - this->mauso*b.gettuso();
			kq.mauso = this->mauso*b.getmauso();
			return kq;
		}
		Phanso operator * (Phanso b)
		{
			Phanso kq;
			kq.tuso = this->tuso*b.gettuso();
			kq.mauso = this->mauso*b.getmauso();
			return kq;
		}
		Phanso operator / (Phanso b)
		{
			Phanso kq;
			kq.setphanso(this->tuso*b.getmauso(), this->mauso*b.gettuso());
			return kq;
		}
		Phanso operator ^ (Phanso b)
		{
			Phanso kq;
            kq.tuso = pow ( pow( this->tuso, b.gettuso() ), (float)1/b.getmauso() );
            kq.mauso = pow ( pow( this->mauso, b.gettuso() ), (float)1/b.getmauso() );
            return kq; 
		}
		bool operator > (Phanso b)
		{
			if (this->tuso*b.getmauso() - this->mauso*b.gettuso() > 0)
				return true;
			else
				return false;
		}
		bool operator < (Phanso b)
		{
			if (this->tuso*b.getmauso() - this->mauso*b.gettuso() < 0)
				return true;
			else
				return false;	
	    }
	    bool operator >= (Phanso b)
		{
			if (this->tuso*b.getmauso() - this->mauso*b.gettuso() >= 0)
				return true;
			else
				return false;
		}
		bool operator <= (Phanso b)
		{
			if (this->tuso*b.getmauso() - this->mauso*b.gettuso() <= 0)
				return true;
			else
				return false;	
	    }
	    bool operator == (Phanso b)
	    {
	    	if (this->tuso*b.getmauso() - this->mauso*b.gettuso() == 0)
	    		return true;
	    	else
	    		return false;
		}
		bool operator != (Phanso b)
	    {
	    	if (this->tuso*b.getmauso() - this->mauso*b.gettuso() != 0)
	    		return true;
	    	else
	    		return false;
		}
		Phanso toigian()
        {
        	Phanso kq;
        	int a = this->tuso;
        	int b = this->mauso;
        	while(a != b)
        	{
        		if(a>b)
        		{
        			a = a - b;
        		}
        		else
        		{
        			b = b - a;
        		}
        	}
        	kq.setphanso(this->tuso/a, this->mauso/a);
        	return kq;
        }
	void print()
	{
		cout<<this->tuso<<"/"<<this->mauso<<endl;
	}			
};
int main()
{
	int tuso1,mauso1,tuso2,mauso2;
	Phanso ps1,ps2;
	cout<<"Nhap tu so phan so 1: "; cin>>tuso1;
	cout<<"Nhap mau so phan so 1: "; cin>>mauso1;
	cout<<"Nhap tu so phan so 2: "; cin>>tuso2;
	cout<<"Nhap mau so phan  so 2: "; cin>>mauso2;	
	ps1.setphanso(tuso1,mauso1);
	ps2.setphanso(tuso2,mauso2);
		int x;
		cout<<"Chon phuong thuc: "<<endl;
		cout<<"1: + "<<endl;
		cout<<"2: - "<<endl;
		cout<<"3: * "<<endl;
		cout<<"4: / "<<endl;
		cout<<"5: ^ "<<endl;
		cout<<"6: > "<<endl;
		cout<<"7: < "<<endl;
		cout<<"8: >= "<<endl;
		cout<<"9: <= "<<endl;
		cout<<"10: == "<<endl;
		cout<<"11: != "<<endl;
		cin>>x;
	switch(x)
	{
		case 1:
			cout<<"a + b = "; (ps1+ps2).toigian().print();
				break;
		case 2:
			cout<<"a - b = "; (ps1-ps2).toigian().print();
				break;
		case 3:
			cout<<"a * b = "; (ps1*ps2).toigian().print();
				break;
		case 4:
			cout<<"a / b = "; (ps1/ps2).toigian().print();
				break;
		case 5:
			cout<<"a ^ b = "; (ps1^ps2).toigian().print();
				break;
		case 6:
			if(ps1>ps2)
				cout<<"true"<<endl;
			else
				cout<<"false"<<endl;
			break;
		case 7:
			if(ps1<ps2)
				cout<<"true"<<endl;
			else
				cout<<"false"<<endl;
			break;
		case 8:
			if(ps1>=ps2)
				cout<<"true"<<endl;
			else
				cout<<"false"<<endl;
			break;
		case 9:
			if(ps1<=ps2)
				cout<<"true"<<endl;
			else
				cout<<"false"<<endl;
			break;
		case 10:
			if(ps1==ps2)
				cout<<"true"<<endl;
			else
				cout<<"false"<<endl;
			break;
		case 11:
			if(ps1!=ps2)
				cout<<"true"<<endl;
			else
				cout<<"false"<<endl;
			break;
		default:
			cout<<"Chi nhung phuong thuc tren. Chay lai ^.^";
		cout<<endl;
	}	
}
















