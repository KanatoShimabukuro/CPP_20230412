#include <stdio.h>
#include "GameMainScene.h"

AbstractScene* GameMain::Update() {
	int nInt;
	scanf_s("%d", &nInt);

	if (nInt == 1) {
		return nullptr;
	};

	return this;
};

void GameMain::Draw() const {
	printf("GameMain です。\n");
	printf("整数値を入力 > ");
};