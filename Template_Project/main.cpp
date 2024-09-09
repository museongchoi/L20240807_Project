#include <iostream>
using namespace std;

//template : �ڷ���, Ÿ���� ������ ����. template�Լ�
//Compile �Ҷ� �ڵ� ����
template <typename T>
class Data
{
public:
	T Value;
	T Add();

};

// T�� �������� �𸥴�. �� template�� ����ؾ���. �׷��Ƿ� �ش� �Լ��� Ŭ���� ���ο����ۼ��� �ؾ��Ѵ�.
//T Add()
//{
//
//}

// �� T�� ���� T�̴�.
template <typename T>
// overloading
T Add(T A, T B)
{
	return A + B;
}
char Add(char A, char B)
{
	return A + B;
}

float Add(float A, float B)
{
	return A + B;
}

int Add(int A, int B)
{
	return A + B;
}


int main()
{
	cout << Add<int>(1, 2) << endl;
	cout << Add<float>(1.1f, 2.3f) << endl;
	//cout << Add(1, 2.3f) << endl;
	cout << Add<char>('A', 'B') << endl; //<> : �ڷ����� �ްڴ�. == template
	cout << Add<double>(1.1f, 2.3f) << endl;


	return 0;
}