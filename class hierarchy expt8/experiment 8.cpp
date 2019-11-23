#include <iostream>
using namespace std;
class manager
{
    protected:
        string name;
        string dept;
        int emDId;
        int bonus;
    public:
        void getdata()
        {
            cout<<"\n Enter name :";
            cin>>name;
            cout<<"\n Enter dept :";
            cin>>dept;
            cout<<"\n Enter ID :";
            cin>>emDId;
        }
            setbonus (int b)
        {
            cout<<"\n In setbonus()";
            bonus = b;
            cout<<"\t Dept :"<<dept<<"\t Bonus:"<<bonus;
        }
};

class prodmanager:public manager
{
	int noofsup;
    public:
        managerprod(int n)
        {
            cout <<" \n \n In manage prod ";
            noofsup=n;
            cout <<"\t No of sup :" << noofsup;
        }
        display()
        {
            cout <<"\n Name :" << name;
            cout <<"\n Sept :" << dept;
            cout <<"\n No of Sup :" << noofsup;
            cout <<"\n Bonus :" << bonus;
        }
};

class salesman:public manager
{
    int noofsalesman;
    public:
        managersales(int n)
        {
            cout <<" \n \n In manage sale ";
            noofsalesman=n;
            cout <<"\t No of salesman :" << noofsalesman;
        }
        display()
        {
            cout <<"\n Name :" << name;
            cout <<"\n Dept :" << dept;
            cout <<"\n No of salesman :" << noofsalesman;
            cout <<"\n Bonus :" << bonus;
        }
};
int main()
{
    prodmanager p;
    salesman s;
    s.getdata();
    p.getdata();
    p.managerprod(1000);
    s.managersales(1000);
    s.setbonus(5000);
    p.setbonus(4000);
    s.display();
    p.display();
    return 0;
}








