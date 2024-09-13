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

//	교과 서적 9장 , 10장 , 12장 등등 내용
	
	
	return 0;

}
