#include"Slime.h"


// ----------------------------------------------------- //
//                                                       //
//       �N���X�̌p���A�R���X�g���N�^�A�f�X�g���N�^      //
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