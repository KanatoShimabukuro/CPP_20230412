#pragma once

class Person {
private:
	char* name;
	int age;
public:
	Person(char*, int); // 変数名は省略可能
	~Person();
	void Show();
};