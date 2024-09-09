#include <iostream>
#include <vector>
#include "Player.h"
#include "Monster.h"
#include "Boar.h"
#include "Goblin.h"
#include "Slime.h"

using namespace std;


//ȥ�� �������� �ʴ´�.
//���� ������ �ȵ�.
int main()
{
	//vector<int> a;
	//vector<AGoblin*> b1;
	//vector<AGoblin> b2;

	vector<AGoblin*> Goblins;
	vector<ASlime*> Slimes;
	vector<ABoar*> Boars;
	vector<AActor*> Actors;

	APlayer* MyPlayer = new APlayer();

	srand((unsigned int)time(nullptr));
	
	int TotalMonsterCnt = rand() % 6;

	for (int i = 0; i < TotalMonsterCnt; i++)
	{
		int Type = rand() % 3;
		if (Type == 0)
		{
			Actors.push_back(new AGoblin());
		}
		else if (Type == 1)
		{
			Actors.push_back(new ASlime());
		}
		else if (Type == 2)
		{
			Actors.push_back(new ABoar());
		}
	}

	//APlayer* MyPlayer = new APlayer();
	Actors.push_back(new APlayer());

	//for (int i = 0; i < Goblins.size(); ++i)
	//{
	//	//Goblins.push_back(new AGoblin());
	//	Actors.push_back(new AGoblin());
	//}
	//for (int i = 0; i < Slimes.size(); ++i)
	//{
	//	//Slimes.push_back(new ASlime);
	//	Actors.push_back(new ASlime());
	//}
	//for (int i = 0; i < Boars.size(); ++i)
	//{
	//	//Boars.push_back(new ABoar);
	//	Actors.push_back(new ABoar());
	//}

	for (int i = 0; i < Actors.size(); ++i)
	{
		// �θ� �۷����� Actor�� ���� �Լ�(���)�� Attack�� Player �ڽ� Ŭ�������� �����ϴ� �Լ��̹Ƿ� ȭ��ǥ�� ������ �ڽ����� �ٲپ�
		// �ڽ� Ŭ���� Player�� �ִ� �Լ��� ���.
		APlayer* Player = dynamic_cast<APlayer*>(Actors[i]);
		if (Player != nullptr)
		{
			Player->Attack();
		}
		Actors[i]->Move();
	}

	MyPlayer->Move();

	for (int i = 0; i < Goblins.size(); ++i)
	{
		Goblins[i]->Move();
	}
	for (int i = 0; i < Slimes.size(); ++i)
	{
		Slimes[i]->Move();
	}
	for (int i = 0; i < Boars.size();; ++i)
	{
		Boars[i]->Move();
	}

	for (int i = 0; i < Goblins.size(); ++i)
	{
		delete Goblins[i];
	}
	for (int i = 0; i < Slimes.size(); ++i)
	{
		delete Slimes[i];
	}
	for (int i = 0; i < Boars.size(); ++i)
	{
		delete Boars[i];
	}

	Goblins.clear();
	Slimes.clear();
	Boars.clear();


	//srand(time(nullptr));
	////cout << rand() % 6 << endl; // rand() �Լ� %6 : ���� ����

	//int GoblinCnt = rand() % 6;
	//int SlimeCnt = rand() % 6;
	//int BoarCnt = rand() % 6;
	//
	//// �迭 : ���� �ϴ� ��.
	//AGoblin* Goblins[6];
	//ASlime* Slimes[6];
	//ABoar* Boars[6];
	//APlayer* MyPlayer = new APlayer();

	//for (int i = 0; i < GoblinCnt; ++i)
	//{
	//	//AGoblin* Gobline = new AGoblin; // �ش� ���� �ݺ����ȿ� �־� �Ź� ���󰣴�.
	//	Goblins[i] = new AGoblin;
	//}
	//for (int i = 0; i < SlimeCnt; ++i)
	//{
	//	Slimes[i] = new ASlime;
	//}
	//for (int i = 0; i < BoarCnt; ++i)
	//{
	//	Boars[i] = new ABoar;
	//}

	//MyPlayer->Move();

	//for (int i = 0; i < GoblinCnt; ++i)
	//{
	//	Goblins[i]->Move();
	//}
	//for (int i = 0; i < SlimeCnt; ++i)
	//{
	//	Slimes[i]->Move();
	//}
	//for (int i = 0; i < BoarCnt; ++i)
	//{
	//	Boars[i]->Move();
	//}

	//delete MyPlayer;
	//MyPlayer = nullptr;

	//for (int i = 0; i < GoblinCnt; ++i)
	//{
	//	delete Goblins[i];
	//}
	//for (int i = 0; i < SlimeCnt; ++i)
	//{
	//	delete Slimes[i];
	//}
	//for (int i = 0; i < BoarCnt; ++i)
	//{
	//	delete Boars[i];
	//}

	return 0;
}



//#include <iostream>
//#include <vector>
//#include <random>
//#include "Player.h"
//#include "Monster.h"
//#include "Boar.h"
//#include "Goblin.h"
//#include "Slime.h"
//
//using namespace std;
//
//
////ȥ�� �������� �ʴ´�.
////���� ������ �ȵ�.
//int main()
//{
//	APlayer* Player = new APlayer();
//	//AActor* Player = new APlayer();
//
//	vector<AActor*> MonsterSpawn;
//	//vector<AActor*> *MonsterSpawn = new vector<AActor*>;
//
//
//	// Mersenne Twister ������ ����Ͽ� ���� ����
//	random_device rd;  // �ϵ���� ��� �õ� (�Ϻ� �ý��ۿ����� �ǻ糭��)
//	mt19937 gen(rd()); // Mersenne Twister ���� �ʱ�ȭ
//
//	// ���� ���� (��: 0���� 5����)
//	uniform_int_distribution<> distr(0, 5);
//	for (int i = 0; i < 3; i++)
//	{
//		int RandonValue = distr(gen);
//		for (int j = 0; j < RandonValue; j++)
//		{
//			if (i == 0)
//			{
//				MonsterSpawn.push_back(new AGoblin());
//			}
//			else if (i == 1)
//			{
//				MonsterSpawn.push_back(new ASlime());
//			}
//			else if (i == 2)
//			{
//				MonsterSpawn.push_back(new ABoar());
//			}
//		}
//	}
//
//	cout << Player->GetHP() << endl;
//	Player->Move();
//
//	for (int i = 0; i < MonsterSpawn.size(); i++)
//	{
//		MonsterSpawn[i]->Move();
//	}
//
//	delete Player;
//	// �޸� ����
//	for (AActor* actor : MonsterSpawn) {
//		delete actor;  // �� �����Ͱ� ����Ű�� �޸𸮸� ����
//	}
//
//	// ���͸� ���
//	MonsterSpawn.clear();  // �����Ͱ� ���ŵ� �� ���͸� ���
//
//
//	return 0;
//}