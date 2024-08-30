//Create a function that takes a character array (string) and removes all spaces from it. For example,
//if the input is "remove spaces", the function should return "removespaces".
#include<iostream>
#include<cstring>
using namespace std;
void removespaces(char *j){
    if (NULL==j)
    {
        return;
    }
    int n=0;
    for (int i = 0; i < strlen(j); i++)
    {
        if (j[i]!=' ')
        {
            j[n++]=j[i];
        }
        
    }
    
    j[n]='\0';
}
int main(){
    char str[]="back spaces";    
    cout<<"before remove spaces " << str<<endl;
    removespaces(str);
    cout<<"after remove spaces " << str<<endl;
    return 0;
}