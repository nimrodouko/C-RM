#pragma once
#include <string>

std::string result;
int agedescriptor(int a) {
	if (a < 18) {
		result = "you are a child";
		return result;
	}
	else {
		result = "you are an adult";
		return result;
	}
}

std::string stringlength(std::string stringlength) {

}