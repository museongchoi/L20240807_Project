#include "Player.h"
#include <iostream>

using namespace std;

APlayer::APlayer()
{
	cout << "Player ������" << endl;
	HP = 100;
}

APlayer::~APlayer()
{
	cout << "Player �Ҹ���" << endl;
}

void APlayer::Move()
{
	cout << "Player ";
	AActor::Move();

}

void APlayer::Attack()
{
	cout << "Player�� ���� �Ѵ�." << endl;
}
