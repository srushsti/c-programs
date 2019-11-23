#include<stdio.h>
int main()
{
    FILE *fp;
    typedef struct
    {
        int no;
        char name[20];
        float price;
    }Asset;

    Asset a;
    int choice;
     fp=fopen("inv.txt","a");
     if(fp==NULL)
     {
         printf("file dose not exist\n");
         return 0;
     }
     do
     {
         printf("\n enter the Asset no:");
         scanf("%d",&a.no);
         fprintf(fp,"Asset no=%d\n",a.no);

         printf("\n enter the Asset name:");
         scanf("%s",&a.name);
         fprintf(fp,"Asset name=%s\n",a.name);

        printf("\n enter the Asset price:");
         scanf("%f",&a.price);
         fprintf(fp,"Asset price=%0.2f\n",a.price);

         printf("\ndo you want to add another record yes=1 no=0:");
         scanf("%d",&choice);
    }while(choice);

    printf("\nTHANK YOU!!");
    fclose(fp);
    return 0;

}
