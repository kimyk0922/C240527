#include<iostream>





using namespace std;


#include"World.h"
#include"Player.h"
#include"Monster.h"
#include"Goblin.h"
#include"Wildboar.h"
#include"Slime.h"


#include<vector>	// TArray



int main()
{
/*

	FPlayer Player;						//	Player �� Monster�� �Բ� �����ַ� �� ���
										//	�Բ� ���� �� �ִ� �׷��� ����� �ָ� �ȴ�.

	vector<FMonster*> Monsters;			//	Monsters Pointers �� ����Ű�� ��� , ���ϵ庸�� , ������ Pointers
	
	Monsters.push_back(new FGoblin);
	Monsters.push_back(new FWildboar);
	Monsters.push_back(new FSlime);
	
*/


//		for (auto& Actor : UgameplayStatics::GetAllActorsOfClass<AActor>(GetWorld()))

	FMonster* Monster = new FGoblin();

	Monster->Move();

	for (int i = 0; i < Monsters.size(); ++i)			//	
	{
		Monsters[i]->Move();
	}
	
	for (int i = 0; i < Monsters.size(); ++i)
	{

		delete Monsters[i]

	}
	
	delete Monster;
	
	return 0;


}