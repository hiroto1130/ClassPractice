#include"Slime.h"


// ----------------------------------------------------- //
//                                                       //
//       クラスの継承、コンストラクタ、デストラクタ      //
//                                                       //
// ----------------------------------------------------- //

int main()
{
	Slime *slime = new Slime;

	slime->SetAt(10);
	slime->ShowAt();

	slime->SetHp(100);
	slime->ShowHp();

	slime->SetMp(50);
	slime->ShoeMp();


	delete slime;

}