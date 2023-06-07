

#include<iostream>
#include<string>
#include"Zoo.h"


void Petshop::AddAnimal() {
	std::string gender;
	std::string name;
	float price;
	int amount;
	std::cout << "введите пол животного : " << '\n';
	std::getline(std::cin, gender);
	std::cout << "введите имя животного : " << '\n';
	std::getline(std::cin, name);
	std::cout << "введите цену животного : " << '\n';
	std::cin >> price;
	std::cout << "введите количество животного : " << '\n';
	std::cin >> amount;

	Animal* animal = new Animal(gender, name, price, amount);
	_animals.push_back(animal);
}

void Petshop::AddAnimal(Animal* animal) {
	_animals.push_back(animal);
}
void Petshop::DeleteAnimal(std::string name) {
	int index = 0;
	for (const auto& it : _animals) {
		if (it->GetName() == name) {
			_animals.erase(_animals.begin() + index);
			delete(it); return;
		}
		index++;
	}
}

void Petshop::ChangeAnimal(Animal* animal) {
	std::string gender;
	std::string name;
	float price;
	int amount;

	system("cls");
	std::cout << "Какой параметр вы хотите изменить?" << '\n';
	std::cout << "1. Пол.\n";
	std::cout << "2. Имя.\n";
	std::cout << "3. Цена.\n";
	std::cout << "4. Количество.\n";

	int input;
	std::cin >> input;
	system("cls");

	switch (input) {
	case 1:
		std::cout << "Введите новый пол : \n";
		std::getline(std::cin, gender);
		animal->SetGender(gender); break;
	case 2:
		std::cout << "Введите новое имя : \n";
		std::getline(std::cin, name);
		animal->SetName(name); break;
	case 3:
		std::cout << "Введите новую цену : \n";
		std::cin >> price;
		animal->SetPrice(price); break;
	case 4:
		std::cout << "Введите новое количество : \n";
		std::cin >> amount;
		animal->SetAmount(amount); break;
	default:
		break;
	}
}



