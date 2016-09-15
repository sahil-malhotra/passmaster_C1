#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
    char pass[100];
    int i, x=0,y=0,z=0;
    printf("Enter a password (should have an uppercase letter, a number and a $ sign) : ");
    gets(pass);
    
    for(i=0; i<strlen(pass); i++)
    {
        if(isupper(pass[i]))
        {
            printf("\n\nUpperCase Letter : OK");
            x=1;
            break;
        }
    }
    
    
    for(i=0; i<strlen(pass);i++)
    {
        
        if(isdigit(pass[i]))
        {
            printf("\nA number : OK");
            y=1;
            break;
        }
    }
    
    
    for(i=0; i<strlen(pass);i++)
    {
        if(pass[i]=='$')
        {
            printf("\n$ sign : OK");
            z=1;
            break;
        }
    }
    
    
    if(x==1&&y==1&&z==1)
    {
        printf("\n\n\nYou may proceed :D\n\n\n");
    }
    else
    {
        printf("\n\n\nYou're not a PassMaster :P\n\n\n");
    }
    
    
    
    return 0;
}