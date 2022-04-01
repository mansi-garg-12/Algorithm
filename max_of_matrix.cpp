#include<iostream>
using namespace std;
class str
{
	string s1;
	string s2;
	public:
	str(string s1,string s2)
	{
		this->s1=s1;
		this->s2=s2;
	}
	string copy_string()
	{
		string s1="";
		for(int i=0;i<s2.length();i++)
		{
			s1+=s2[i];
		}
		return s1;
	}
	int sub_string()
	{
		return s1.find("Vidya");
	}
	bool compare_string()
	{
		return s1.compare(s2);
	}
};
int main()
{
	str ob("Banasthali","Vidyapith");
	cout<<"copying of string ::"<<ob.copy_string()<<"\n";
	cout<<"sub string ::"<<ob.sub_string()<<"\n";
	cout<<"Comparing of string ::"<<ob.compare_string()<<"\n";
}
