#pragma once
#include "GameL\SceneObjManager.h"

using namespace GameL;

class CObjBullet : public CObj {
public:
	CObjBullet() {};
	~CObjBullet() {};
	void Init();
	void Action();
	void Draw();
private:
};