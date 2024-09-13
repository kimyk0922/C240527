#include<iostream>





using namespace std;


#include"World.h"
#include"Player.h"
#include"Monster.h"
#include"Goblin.h"
#include"Wildboar.h"
#include"Slime.h"


#include<vector>	// TArray



//	상속
//	캡슐화
//	*	다형성(추상) , Pointers	*

int main()
{
	int PointerSize = 3;

	FPlayer* UserPlayer = new FPlayer;
	FMonster* CPUMonster = new FMonster[PointerSize];



	cout << UserPlayer << endl;

//==================랜덤한 몬스터 생성============================
	
	srand(time(0));
	int GoblinValue = rand() % 3 + 1;
//	FGoblin* Goblin = new FGoblin[GoblinValue];
	vector<FGoblin*> Goblin;
	

	int WildboarValue = rand() % 3 + 1;
//	FWildboar* Wildboar = new FWildboar[WildboarValue];
	vector<FWildboar*> Wildboar;


	int SlimeValue = rand() % 3 + 1;
//	FSlime* Slime = new FSlime[SlimeValue]:
	vector<FSlime*> Slime;


//==============================================================

	for (int Mov = 0; Mov < 5; ++Mov)
	{

		Goblin[Mov].Move();

	};

	Wildboar.Move();
	Slime->Move();

 





	delete UserPlayer;
	delete[] CPUMonster;
	delete Goblin;
	delete Wildboar;
	delete Slime;

	return 0;
}

/*
	FWorld* World;

	cout << "포인터만 생성" << endl;

	World = new FWorld();


	delete World;
*/




/*lass World
{
	public:

		int World = 0;

		void Move()
		{

			int Walk = 1;
			int Jump = 2;
			int Run = 3;
			int Slide = 2;

		};


		void Attack()
		{

			int Normal = 1;
			int Critical = 2;
			int Skill = 3;


		};

		void Gold()
		{

			int SlimeGolod = 1;
			int PigGold = 2;
			int GoblinGold = 3;


		};


};*/




