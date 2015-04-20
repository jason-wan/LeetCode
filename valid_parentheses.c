#include <iostream>
#include <stack>
#include <string>
using std::string;

class Solution {
public:
	bool isValid(string s) {
		string left = "([{";
		string right = ")]}";
		std::stack<char> parentheses_stack;

		for (auto c : s) {
			if (left.find(c) != string::npos)
				parentheses_stack.push(c);
			else if (not parentheses_stack.empty() && parentheses_stack.top() == left.at(right.find(c)))
				parentheses_stack.pop();
			else
				return false;
		}

		return parentheses_stack.empty();
	}	
};

int main()
{
	std::string str = "([{()}])";
	Solution sl;
	std::cout << (sl.isValid(str) ? "Valid" : "Not valid") << std::endl;
	return 0;
}
