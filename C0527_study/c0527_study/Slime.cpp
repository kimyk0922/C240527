#include "Slime.h"

#include<iostream>


using namespace std;

FSlime::FSlime()
{
	cout << "�߻��� �������� ��Ÿ����!" << endl;
}

FSlime::~FSlime()
{
	cout << "FSlime Constructor" << endl;
}

void FSlime::Slide()
{
	
	cout << "�������� �����δ�!" << endl;

	FMonster::Move();		

}

