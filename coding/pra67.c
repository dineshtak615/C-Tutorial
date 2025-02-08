#include<stdio.h>
#include<string.h>

struct books{
    char tittle[50];
    char author[50];
    char subject[50];
    int bookid;

}b1,b2;
 
 void printbook(struct books b);//prototype

 int main() {
    //struct book b1;
     //struct book b2;
     strcpy(b1.tittle,"hope in life humble man");
     strcpy(b1.author,"pappu ram");
     strcpy(b1.subject," life story");
     b1.bookid =1718;
    strcpy(b2.tittle,"in every sitution to standby its lovr");
     strcpy(b2.author,"sushila");
     strcpy(b2.subject," love story"); 
     b2.bookid=6768;
     printbook(b1);
     printbook(b2);

     return 0;

 }
void printbook(struct books b)
{
    printf("Book tittle is %s\n",b.tittle);
    printf("Book author is %s\n",b.author);
    printf("Book subject is %s\n",b.subject);
    printf("Book tittle is %d\n",b.tittle);

}
