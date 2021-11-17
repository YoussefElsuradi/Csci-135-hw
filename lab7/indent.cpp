
//1
//1
//1
//1
//1
//1
//1
//1
//1


#include <iostream>
using namespace std;
int countChar(string line, char c);
string removeLeadingSpaces(string line);
void indent();
int main()
{
    indent ();


}


void indent() {
    int open_braces; 
    int closed_braces;
    int open_blocks = 0;
    int indentation_level; 

    string line;
    while (getline(cin, line)) //The while loop will read the content of feeded input
    {
        line =removeLeadingSpaces(line);
        indentation_level = open_blocks;
        if (line[0] == '}')
        {
            indentation_level = open_blocks-1; 
        }
        for (int i = 0; i<indentation_level; i++)
        {
            cout << '\t';
        }
        cout << line << endl;
        open_braces = countChar(line, '{');
        closed_braces = countChar(line, '}'); 
        open_blocks += open_braces-closed_braces;

    }
}

int countChar(string line, char c)
{
    int ans = 0;
    for (int i = 0; i< line.size(); i++)
    {
        if (c == line[i])
        {
            ans++;
        }
    }
    return ans;
}

string removeLeadingSpaces (string line){
 
    int len = line.size(), i = 0;

    for (i = 0; i < len; i++)
    {
        if (not isspace (line [i]))
        {
            break;
        }
    }
    // After the for loop, i is the index of the first non-space character.
    return line.substr(i, len-i); // arg1 is the starting position, arg2 is length of the substring.
                                  // E. g., line = "asfdag", line.substr(1, 3) = "sfd";
}