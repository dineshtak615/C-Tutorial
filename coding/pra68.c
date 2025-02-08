#include<stdio.h>
#include<string.h>

struct books{
    char tittle[50];
    char author[34];
    char subject[30];
    int bookid;
};
 void printbook(struct books *b);

 int main()
{
    struct books b1;
strcpy(b1.tittle,"c languge");
strcpy(b1.author,"pooja");
strcpy(b1.subject,"programming");
b1.bookid = 6768;
printbook(&b1);
return 0;
} 
void printbook(struct books *b)
{
   printf("book tittle ids %s\n",b->tittle);
    printf("book author  ids %s\n",b->author); 
     printf("book subj ids %s\n",b->subject);
      printf("book tittle ids %d\n",b->bookid);

}

