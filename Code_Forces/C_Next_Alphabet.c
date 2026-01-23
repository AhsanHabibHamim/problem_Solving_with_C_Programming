#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    int curent_ascii = (int)ch;
    int next_ascii = curent_ascii + 1;
    char next_ch = (char)next_ascii;
    printf("%c\n", next_ch);
}