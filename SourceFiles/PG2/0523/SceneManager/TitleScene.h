#pragma once
#include "AbstractScene.h"

class Title : public AbstractScene {
public:
	// デストラクタ
	virtual ~Title() {};

	// 描画以外の更新を実装
	virtual AbstractScene* Update() override;

	// 描画に関することを実装
	virtual void Draw() const override;
};