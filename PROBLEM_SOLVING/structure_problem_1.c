// Create a structure type "book"(for 3 books) that contains the following members: 
// name (string), price(float), and pages (integer).



#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        float price;
        int pages;
    }a,b,c;
    printf("Enter details of book 1:\n");
    scanf("%s %f %d",a.name,&a.price,&a.pages);
    printf("%s %.2f %d\n",a.name,a.price,a.pages);
    printf("Enter details of book 2:\n");
    scanf("%s %f %d",b.name,&b.price,&b.pages);
    printf("%s %.2f %d\n",b.name,b.price,b.pages);
    printf("Enter details of book 3:\n");
    scanf("%s %f %d",c.name,&c.price,&c.pages);
    printf("%s %.2f %d\n",c.name,c.price,c.pages);
    return 0;
}
