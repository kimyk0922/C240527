#include "Player.h"

#include<iostream>


using namespace std;


FPlayer::FPlayer()
{

	cout << "FPlayer Constructor" << endl;

	HP = 0;
	Gold = 0;

}

FPlayer::~FPlayer()
{

	cout << "FPlayer Constructor" << endl;

}

void FPlayer::Move()
{

}

void FPlayer::Attack()
{

}

void FPlayer::Die()
{

}

void FPlayer::Gotcha()
{

}

int FPlayer::GetGold()
{
	return Gold;
}

void FPlayer::SetGold(int NewGold)
{
	
	if (NewGold >= 0);
	{

		Gold = NewGold;

	}

}
