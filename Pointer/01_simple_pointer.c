#include <stdio.h>
int main(){
    
    int Ahsan = 10;
    printf("The Valude of Ahsan is: %d \n", Ahsan);
    int* ptr = &Ahsan;
    printf("The Address of Ahsan is: %u \n", ptr);
    printf("The Address of Ahsan is: %u and it's value is %d \n ", ptr, *(&Ahsan));
    return 0;
}