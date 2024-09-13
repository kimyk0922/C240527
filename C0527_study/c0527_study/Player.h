#pragma once
class FPlayer
{

public:					//	����������

	FPlayer();
	~FPlayer();



//======interface=======

	void Move();
	void Attack();
	void Gotcha();

//======accessor=========

	int GetGold();

//======mutator==========


	void SetGold(int NewGold);




private:				//	������ , Ư�� �Լ� �������� ����� �� �ִ� ��� , public�� �ݴ�
						//	Encapsulation : ��ü ������ Ư¡ , ���� ���� 
	int HP;
	int Gold;

	void Die();

};


//				
//
//				|	���		|	�ܺ� ���(ĸ��ȭ)
//	public		|	 O		|			O
//	protected	|	 O		|			X
//	private		|	 X		|			X
//
//
//
//
//