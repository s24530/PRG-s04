#include <iostream>
#include <string>
#include <cstdlib>



struct Student
{
	std::string name;
	std::string surname;
	std::string nr_indeksu;
	int term;
	double srednia;
    void to_string() const
    {
	    std::cout << "My name is" << me.name << me.surname << ". I'm on the " << me.term <<
	    "term. My indeks nr is " << me.nr_indeksu << " and my avg grades is "<< me.srednia;
    }
};



int main()
{
    Student me;
	me.name = "Jakub";
	me.surname = "Kopeć";
	me.nr_indeksu = "24530";
	me.term = 1;
	me.srednia = 0;

}
struct Term
{
    int value{0};
    int term = me.term;
    explicit Term(unsigned): value{term}
	{
		if(term > 7)
		{
			throw std::out_of_range{"You can't study for more than 7 terms"};
		}
	}
};



