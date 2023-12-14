#include "functions.h"
#include <string>

std::string functions::to_camel_case(std::string text)		//submitted
{
	std::string ans;

	for (int i = 0; i < text.size(); i++)
	{
		if (isalpha(text[i]))
			ans.insert(ans.end(), text[i]);
		else
		{
			if ((i + 1) < text.size())
			{
				ans.insert(ans.end(), toupper(text[i + 1]));
				i++;
			}
		}
	}

	return ans;
}
