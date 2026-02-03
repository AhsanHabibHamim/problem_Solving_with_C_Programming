#include <stdio.h>

void say_Bangla();
void say_English();
void say_Gali();

int main()
{
    char ch;
    printf("Enter B for Bangla & E for English: ");
    scanf("%c", &ch);

    if (ch == 'B' || ch == 'b')
    {
        say_Bangla();
    }
    else if (ch == 'E' || ch == 'e')
    {
        say_English();
    }
    else
    {
        say_Gali();
    }

    return 0;
}

void say_Bangla()
{
    printf("Suvo Sokal Sir");
}
void say_English()
{
    printf("Good Morning Sir");
}
void say_Gali()
{
    printf("Sala Mara Kha");
}
