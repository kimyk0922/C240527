#include "Goblin.h"

#include<iostream>


using namespace std;

FGoblin::FGoblin()
{
	cout << "야생의 고블린이 나타났다!" << endl;
}

FGoblin::~FGoblin()
{

}

void FGoblin::Jump()
{
	cout << "고블린이 날아온다!" << endl;

	FMonster::Move();		//	FMonster의 Move()를 불러와라
							//	Parent의 함수를 불러와라 (override 설정 후 사용)

}
