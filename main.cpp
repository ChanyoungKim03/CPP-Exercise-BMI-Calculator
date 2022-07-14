#include <iostream>

int main()

// BMI 계산기

{
	float height, weight, realvalue;
	std::string bmi;

	std::cout << "당신의 키(cm)와 몸무게(kg)를 각각 써주세요" << std::endl;
	std::cin >> height >> weight;

	realvalue = weight / ((height / 100) * (height / 100));

	if (realvalue >= 18.0f && realvalue < 22.9f)
	{
		bmi = "정상";
	}
	else if (realvalue >= 23.0f && realvalue < 24.9f)
	{
		bmi = "과체중";
	}
	else if (realvalue >= 25.0f)
	{
		bmi = "비만";
	}
	else
	{
		bmi = "알 수 없음";
	}

	std::cout << "당신의 BMI 지수는 " << realvalue << ", 즉, " << bmi << "입니다" << std::endl;


}