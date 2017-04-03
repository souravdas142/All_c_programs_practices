
/* C FILE OPENTING AND CLOSING SAVING AND SOME BASIC PERFROMING */

// ALL FILE OPERATION FUNCTIONS ARE UNDER STDLIB(STANDARD LIBRARY) HEADER FILE

#include<stdio.h>
#include<stdlib.h>
int main()
{

    // to create a file must we have point to which one is to open
    //to create file pointer data-type should be capital file FILE;
    FILE *filee=NULL;
    // TO CREATE A FILE WE HAVE TO OPEN A FILE THAT IS EXISTS OR NOT IF NOT EXISTS IT WILL CREATE ONE
    //OPENING A FILE FUNCTION IS FOPEN
    // AS PARAMETER OR ARGUMENT SHOULD BE SEND FILE NAME AND ITS EXTENSIONS AS STRING
    //AND PERMISSION TO THAT TEXT FILE ITS ONLY READ WRITE OR BOTH READ WRITE

    filee=fopen("new.txt","W");
    return 0;
}
