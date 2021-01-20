#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
  char color [12] = {'\0'};
  char capsColor [12] = {'\0'};
  char *cStr = "Samual";
  int iStrLen;

    printf("Please enter your Favorite Color: ");

    scanf("%s", color);

    printf("\nYour favorite color is %s \n", color);

    iStrLen = strlen(color);

    printf("Lenth of String is %d: \n",iStrLen);

    printf("Name of the person is %s: \n",cStr);

    for (int i = 0; i < iStrLen; i++) {

            capsColor [i] = toupper(color [i]) ;
    }
    printf("Your Color in CAPS is %s\n", capsColor);

    //}
    return 0;
}
