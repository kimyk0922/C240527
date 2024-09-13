#include "Slime.h"

#include<iostream>


using namespace std;

FSlime::FSlime()
{
	cout << "야생의 슬라임이 나타났다!" << endl;
}

FSlime::~FSlime()
{
	cout << "FSlime Constructor" << endl;
}

void FSlime::Slide()
{
	
	cout << "슬라임이 움직인다!" << endl;

	FMonster::Move();		

}

