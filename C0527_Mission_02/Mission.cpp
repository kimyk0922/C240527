#include<iostream>
#include"Actor.h"
#include"Triangle.h"
#include"Rectangle.h"
#include"Circle.h"
#include<vector>



using namespace std;





int main()
{

	vector<FActor*> Actor;
	
	Actor.push_back(new FTriangle());
	Actor.push_back(new FRectangle());
	Actor.push_back(new FCircle());

//	���� ���� 9�� , 10�� , 12�� ��� ����
	
	
	return 0;

}
