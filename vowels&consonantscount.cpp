#include<iostream>
using namespace std;
class Counting
{
    string str;
    int vowel_count,consonant_count;
public:
    Counting(string input)
    {
        vowel_count=0;
        consonant_count=0;
        str=input;
    }
 void count();
};
void Counting::count()
{


   for(int i=0;i<str.length();i++ )
   {

       if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
           vowel_count++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            consonant_count++;
        }
   }
   cout<<"Vowels: "<<vowel_count<<endl;
   cout<<"consonants: "<<consonant_count<<endl;
}
int main()
{
    string input;
    cout<<"Enter string: ";
    getline(cin,input);
    Counting object(input);
    object.count();
}
