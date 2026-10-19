#include <iostream>
#include "Servant.h"
#include "Archer.h"
#include "Rider.h"
#include "Saber.h"

int main(void)
{
	//コンストラクタ
	Archer Archer;
	Archer.Attack();
	Archer.ShowProfile();

	Rider Rider;
	Rider.Attack();
	Rider.ShowProfile();

	Saber Saber;
	Saber.Attack();
	Saber.ShowProfile();
	
	return 0;
}