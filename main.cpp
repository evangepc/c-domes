#include <iostream>
#include <fstream>
#include <string>
#include "bintree.h"
#include "avltree.h"

using namespace std;

main()
{
	ifstream file("inputfile.txt");
	string linestr;
	while (std::getline(file, linestr))
	{
        	// Process linestr (e.g., eliminate punctuation marks, isolate words)
	}
	return 0;
}