#include "Goblin.h"
#include <iostream>
using namespace std;

AGoblin::AGoblin()
{
}

AGoblin::~AGoblin()
{
}

void AGoblin::Move()
{
	//cout << "Goblin �̵�" << endl;
	cout << "Goblin ";
	AActor::Move();
}
