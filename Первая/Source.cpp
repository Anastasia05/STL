#include<iostream>
#include<set>
#include<memory>
using namespace std;
int main()
{
	unique_ptr<multiset<char>> multik(new multiset<char>);
	multik->insert('a');
	multik->insert('v');
	multik->insert('d');
	multik->insert('l');
	multik->insert('q');
	multik->insert('u');
	multik->insert('b');

	for (multiset<char>::iterator i = multik->begin(); i != multik->end(); ++i)
		cout << *i << " ";
	cout << endl;

	multik->clear();
	multik->insert('p');
	multik->insert('.');
	multik->insert('/');
	multik->insert(':');
	multik->insert('*');
	multik->insert('u');
	multik->insert('!');

	for (multiset<char>::iterator i = multik->begin(); i != multik->end(); ++i)
		cout << *i << " ";
	cout << endl;

	unique_ptr<multiset<char>> multik1(new multiset<char>);
	multik1->insert('#');
	multik1->insert('g');
	multik1->insert('o');

	multik->erase(find(multik->begin(), multik->end(), '/'), multik->end()); //Заданный элемент – /

	for (multiset<char>::iterator i = multik1->begin(); i != multik1->end(); ++i)
	{
		multik->insert(*i);
	}
	
	for (multiset<char>::iterator i = multik->begin(); i != multik->end(); ++i)
		cout << *i << " ";
	cout << endl;
	for (multiset<char>::iterator i = multik1->begin(); i != multik1->end(); ++i)
		cout << *i << " ";
	cout << endl;

	return 0;
}