#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sentence[100];

    scanf("%c", &ch);             // scan for a character
    scanf("%s", s); scanf("\n");  // scan for a one-word string and the new line character
    scanf("%[^\n]%*c", sentence); // scan for a sentence

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sentence);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
