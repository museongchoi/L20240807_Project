#pragma once // ��ó�� �������� �ѹ� ���簡�Ǹ� ��������. | �ѹ��� �����ϰ� �ϴ� ��.
#include <iostream>

class Parent
{
public:
	Parent();
	~Parent();

	// 
	inline int GetMoney()
	{
		return Money;
	}

	void SetMoney(int NewMoney)
	{
		if (NewMoney > 0)
		{
			Money = NewMoney;
		}
	}

	virtual void Investment()
	{
		srand((unsigned int)(time (nullptr)));
		Money = (rand() % 2) == 1 ? Money * 2 : 0;

	}


	//int Money;

protected:
	int Money;
private:
	//int Money;
};


//namespace Choi // �Ѵܰ� �� ū Ŭ���� ����� �̸�
//{
//	class Parent
//	{
//	public:
//		Parent();
//		~Parent();
//	};
//}
