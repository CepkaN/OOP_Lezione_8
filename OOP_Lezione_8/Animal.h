#pragma once

#include<iostream>
#include<string>


class Animal {
private:
	std::string _gender;
	std::string _name;
	float _price;
	int _amount;
public:

	Animal(std::string gender, std::string name, float price, int amount) :_gender(gender), _name(name), _price(price), _amount(amount) {}
	std::string GetGender() {
		return _gender;
	}

	void SetGender(std::string gender) {
		_gender = gender;
	}

	std::string GetName() {
		return _name;
	}

	void SetName(std::string name) {
		_name = name;
	}

	float GetPrice() {
		return _price;
	}

	void SetPrice(float price) {
		_price = price;
	}

	int GetAmount() {
		return _amount;
	}

	void SetAmount(int amount) {
		_amount = amount;
	}

};

class Cat :public Animal {
public:
	Cat(std::string gender, std::string name, float price, int amount) :Animal(gender, name, price, amount) {}
};

class Cow :public Animal {
public:
	Cow(std::string gender, std::string name, float price, int amount) :Animal(gender, name, price, amount) {}
};
