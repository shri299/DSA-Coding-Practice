//Reverse the words in a string

#include<iostream>
#include<string>
#include<vector>
using namespace std;

string reverseWord(string s)
{
    vector<string> v;
    string str = "";
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] == ' ' && i==0) || (s[i] == ' ' && i == s.size()-1))
        {
            continue;
        }
        
        if (s[i]==' ')
        {
            v.push_back(str);
            str = "";
        }
        else
        {
            str += s[i];
        }
        
        
    }

    v.push_back(str);
    str = "";
    for (int i = v.size()-1; i > 0; i--)
    {
        str += v[i];
        str += ' ';
    }
    str += v[0];
    return str;
    
}
int main()
{
    string s = " this is blue color ";
    cout<<reverseWord(s);
}