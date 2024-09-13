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

	FPlayer Player;						//	Player 도 Monster와 함께 묶어주려 할 경우
										//	함께 속할 수 있는 그룹을 만들어 주면 된다.

	vector<FMonster*> Monsters;			//	Monsters Pointers 를 가리키는 고블린 , 와일드보어 , 슬라임 Pointers
	
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