#include "functions.h"

string StringToUpper(string strToConvert)
{
	for (unsigned int i = 0; i < strToConvert.size(); i++)
		strToConvert[i] = toupper(strToConvert[i]);
	return strToConvert;
}