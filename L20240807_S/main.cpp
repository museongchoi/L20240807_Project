// ��ó�� ����
// < > : ǥ�� | " " : ���ο� ���� ���
#include <iostream>
#include "Parent.h"
#include "Child.h"
using namespace std; // �ٸ� Ŭ�������� std ���� ����ϴ� ���� ���� �ʴ°��� ����.
//using namespace Choi;

// Ŭ����ȭ ��!!!
//class Parent
//{
//public:
//	Parent(); // ������
//	~Parent(); // ������
//};

//endtry point
int main()
{
	std::cout << "Hello World~" << std::endl;

	//Parent P;
	Parent* P = new Child;
	P->SetMoney(100);
	cout << P->GetMoney() << endl;
	P->Investment();
	cout << P->GetMoney() << endl;



	//P.Money = -100; // private�� ����Ǿ� ���� �Ұ�
	//private �� ����Ǿ��⿡ get���� ���ü��ִ� ��ɹۿ� ����

	//P.SetMoney(100);
	//cout << P.GetMoney() << endl;

	//Child C;
	//C.SetMoney(100);
	//cout << C.GetMoney() << endl;

	//C.Investment();
	//cout << C.GetMoney() << endl;

	//Child is a Parent
	//Apple is Fruit
	//Goblin is Monster

	//Choi::Parent p;
	return 0;
}