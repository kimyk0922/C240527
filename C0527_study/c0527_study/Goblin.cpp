#include "Goblin.h"

#include<iostream>


using namespace std;

FGoblin::FGoblin()
{
	cout << "�߻��� ����� ��Ÿ����!" << endl;
}

FGoblin::~FGoblin()
{

}

void FGoblin::Jump()
{
	cout << "����� ���ƿ´�!" << endl;

	FMonster::Move();		//	FMonster�� Move()�� �ҷ��Ͷ�
							//	Parent�� �Լ��� �ҷ��Ͷ� (override ���� �� ���)

}
