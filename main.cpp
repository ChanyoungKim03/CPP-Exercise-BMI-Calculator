#include <iostream>

int main()

// BMI ����

{
	float height, weight, realvalue;
	std::string bmi;

	std::cout << "����� Ű(cm)�� ������(kg)�� ���� ���ּ���" << std::endl;
	std::cin >> height >> weight;

	realvalue = weight / ((height / 100) * (height / 100));

	if (realvalue >= 18.0f && realvalue < 22.9f)
	{
		bmi = "����";
	}
	else if (realvalue >= 23.0f && realvalue < 24.9f)
	{
		bmi = "��ü��";
	}
	else if (realvalue >= 25.0f)
	{
		bmi = "��";
	}
	else
	{
		bmi = "�� �� ����";
	}

	std::cout << "����� BMI ������ " << realvalue << ", ��, " << bmi << "�Դϴ�" << std::endl;


}