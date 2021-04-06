#pragma once
#ifndef MODULES_H
#define MODULES_H

#define N "\n"

#include <iostream>
#include <string>

using namespace std;

// Protos
void n();
void print_char(int times, char c);
void print_help(string program);
void get_type(string type);

// Program namespace
namespace gettype {

	void n() { cout << N; }

	void print_char(int times, char c) {
		for (int i = 0; i < times; i++) {
			cout << c;
		}
	}

	void print_help(string program) {
		n(); print_char(50, '*');
		cout << "\nUsage = " << program << " --type <TYPE> | -h, --help\n\n--type\tThe data type to print MIN/MAX/BIT of.\n-h/--help\tPrint this message and exit.\n"
			<< endl;
		print_char(50, '*'); n();
	}
}

#endif