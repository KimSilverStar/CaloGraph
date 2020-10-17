#include "Information.h"
#include <iostream>
#include <string>

using namespace std;

Information::Information(string name, bool gender, int age, int height, int weight)
{
	set_information(name, gender, age, height, weight);
}

int Information::save_information(Information info)
{
	ifstream read_file;
	read_file.open("information.txt");

	return 0;
}

void Information::input_information()
{
	string name;
	bool gender;
	int gender_input = -1, age, height, weight;
	cout << "�̸��� �Է��ϼ���. >> ";
	cin >> name;
	cout << "������ ����ּ���. \n1. ����    2. ���� >> ";
	
	while (1) {
		cin >> gender_input;
		if (gender_input == 1) {
			gender = true;
			break;
		}
		else if (gender_input == 2) {
			gender = false;
			break;
		}
		cout << "1�� 2�� �������ּ���. \n1. ����    2. ���� >> ";
	}

	cout << "���̰� ��� �ǽó���? (0 ~ 99��) >> ";
	
	while (1) {
		cin >> age;
		if (0 < age && age < 100) break;
		cout << "0������ 99������ �Է��� �� �ֽ��ϴ�. >> ";
	}

	cout << "Ű�� �����Ը� �Է����ּ���. " << endl;
	cout << "Ű >> ";
	cin >> height;
	cout << "������ >> ";
	cin >> weight;

	this->set_information(name, gender, age, height, weight);

	system("cls");
}

void Information::set_information(string name, bool gender, int age, int height, int weight)
{
	set_name(name);
	set_gender(gender);
	set_age(age);
	set_height(height);
	set_weight(weight);
}

