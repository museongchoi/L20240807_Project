#include "Boar.h"
#include <iostream>
using namespace std;

ABoar::ABoar()
{
}

ABoar::~ABoar()
{
}

void ABoar::Move()
{
	//cout << "Boar �̵�" << endl;
	cout << "Boar ";
	AActor::Move();
}
