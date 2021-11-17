/*
Youssef Elsuradi
Tong Yee

*/
//1
//1
//1
//1
//1

#include<iostream>

#include<cctype>


using namespace std;

string removeLeadingSpaces(string line);

int countChar(string line, char c);

void indent();

int main(){
    indent();
    /*
        string line;

        while(!cin.eof()){

            getline(cin, line);

            cout<<removeLeadingSpaces(line)<<endl;

        }
    */
}

    

string removeLeadingSpaces(string line){

    int ind = 0;

    while(isspace(line[ind]))

    ind++;

    return line.substr(ind);

}

void indent() {
   int open_braces; //# of '{' in one line
   int closed_braces; //# of '}' in one line
   int open_blocks = 0;
   int indentation_level;
                            //# of open blocks += current # of '{'
                             // for the line that contains '}', indentation = open_blocks-1
                      
                            //otherwise, indentation = open blocks
   string line;
   while (getline(cin, line)) //The while loop will read the content of feeded input
                                 //file line by line and store it in "line" string variable
   {
       line =removeLeadingSpaces(line);
       indentation_level = open_blocks;
       if (line[0] =='}')
       {
           indentation_level = open_blocks-1;
       }
       for (int i = 0; i<indentation_level; i++)
       {
            cout << '\t';
       }
       cout << line << endl;
       //Update the # of "{" and "}"
       open_braces = countChar(line, '{');
       closed_braces = countChar(line, '}'D;
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