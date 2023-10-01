#include "Adaprer.h"
#include <list>
using namespace std;

void Adaprer::replace(std::string path, char from, char to)
{
	ifstream in(path);
	list<string> strs;
	if (in.is_open()) {
		string buf;
		while (getline(in, buf)) {
			for (int i = 0; i < buf.size(); i++)if (buf[i] == from)buf[i] = to;
			strs.push_back(buf);
		}
		in.close();
	}
	ofstream out(path);
	if (out.is_open()) {
		for (auto el : strs)out << el<<'\n';
		out.close();
	}
}
