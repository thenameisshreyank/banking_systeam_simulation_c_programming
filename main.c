#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct node
{
char usn[20]; char name[20]; int money;
char password[20]; struct node *next;
}NODE;
int length(NODE* first)
{
int len=0; NODE *temp; temp=first;
while(temp!=NULL)
{
len++;
temp=temp->next;
}
return len;
}
NODE* openaccount(NODE *first)
{
NODE *newnode,*temp; newnode=(NODE*)malloc(sizeof(NODE)); newnode->next=NULL;
printf("\nENTER THE USN :"); scanf("%s",newnode->usn); printf("\nENTER THE NAME :"); scanf("%s",newnode->name); printf("\nENTER THE PASSWORD :");
scanf("%s",newnode->password);
printf("\nENTER THE INITIAL AMOUNT TO CREATE A ACCOUNT :");
scanf("%d",&newnode->money); if(first==NULL)
first=newnode;

else
{




}



temp=first;
while(temp->next!=NULL) temp=temp->next;
temp->next=newnode;

printf("\nTHE ACCOUNT IS CREATED WITH %s AS ACCOUNT NUMBER AND PASSWORD:%s!!!",newnode->usn,newnode->password);
printf("\nWITH THE INITIAL AMOUNT OF %d",newnode->money);
return first;
}
NODE* deposite(NODE *first)
{
NODE *temp; int tmoney;

char tusn[20],tpasword[20]; printf("\nENTER THE ACCOUNT NUMBER :");
scanf("%s",tusn);
printf("\nENTER THE ACCOUNT PASSWORD :");
scanf("%s",tpasword); if(first==NULL)
printf("TILL NOW NO ACCOUNT CREATED !!!!!");
else
{
temp=first;
while(temp!=NULL && (strcmp(temp->usn,tusn)!=0 ||
strcmp(temp->password,tpasword)!=0))
temp=temp->next;

if(temp==NULL)
printf("THE ACCOUNT IS NOT CREATED OR WRONG ENTRY !!!!");

else
{






}
}



printf("\nTHE AVALIBLE AMOUNT IS : %d",temp->money); printf("\nENTER THE AMOUNT :");
scanf("%d",&tmoney);
printf("\n%d AMOUNT DEPOSITED WITH SUCCESS STATUS !!!!",tmoney);
temp->money=temp->money+tmoney;
printf("\nNOW AVALIBLE BALANCE IS : %d",temp->money);

return first;
}
NODE* withdraw(NODE *first)
{
NODE *temp; int tmoney;
char tusn[20],tpassword[20]; printf("\nENTER THE ACCOUNT NUMBER :");
scanf("%s",tusn);
printf("\nENTER THE ACCOUNT PASSWORD :");
scanf("%s",tpassword); if(first==NULL)
printf("TILL NOW NO ACCOUNT CREATED !!!!!");
else
{
temp=first;
while(temp!=NULL &&(strcmp(temp->usn,tusn)!=0 ||
strcmp(temp->password,tpassword)!=0))
temp=temp->next; if(temp==NULL)
printf("THE ACCOUNT IS NOT CREATED OR WRONG ENTRY !!!!");
else
{
printf("\nTHE AVALIBLE AMOUNT IS : %d",temp->money); printf("\nENTER THE AMOUNT :");
scanf("%d",&tmoney); if(tmoney>=temp->money)
printf("\n NO MONEY!!!!");

else
{
temp->money=temp->money-tmoney;
printf("\nNOW AVALIBLE BALANCE IS : %d",temp->money);
}

}
return first;
}
return first;
}
NODE *deleteaccount(NODE *first)
{
NODE *temp; int loc;
printf("\nSORRY FOR INCONVINCE !!!"); printf("\nENTER THE LOCATION :");
scanf("%d",&loc); if(loc>length(first))
printf("\ninvalid loction!"); else if(loc==1)
{




}
else
{

temp=first; first=first->next; free(temp);



int i=1;
NODE *p=first,*q; while(i<loc-1)
{

p=p->next; i++;
}
q=p->next;
p->next=q->next; q->next=NULL; free(q);
printf("THE ACCOUNT is deleted with sucess !!");
}

return first;
}
NODE* balance(NODE *first)
{
NODE *temp;
char tusn[20],tpassword[15]; if(first==NULL)
printf("\nFIRST CREATE ATLEST ONE ACCOUNT !!!!");

else
{



printf("\nENTER THE ACCOUNT NUMBER :");
scanf("%s",tusn);

printf("\nENTER THE ACCOUNT PASSWORD :");
scanf("%s",tpassword); temp=first;
while(temp!=NULL && (strcmp(temp->usn,tusn)!=0 || strcmp(temp->password,tpassword)!=0))
temp=temp->next;

if(temp==NULL)
printf("\nTHE %s ACCOUNT DOES NOT EXIT !!!",tusn);
else
{
printf("\nACCOUNT NUMBER : %s\nNAME :%s\nAVALIBLE AMOUNT:%d",temp->usn,temp->name,temp->money);
}
}
return first;
}
NODE* updatekyc(NODE *first)
{
NODE *temp;
char tusn[20],tpassword[20]; printf("\nENTER THE ACCOUNT NUMBER :");
scanf("%s",tusn);
printf("\nENTER THE ACCOUNT PASSWORD :");
scanf("%s",tpassword); if(first==NULL)
printf("TILL NOW NO ACCOUNT CREATED !!!!!");
else
{
temp=first;
while(temp!=NULL && (strcmp(temp->usn,tusn)!=0 ||
strcmp(temp->password,tpassword)!=0))
temp=temp->next;

if(temp==NULL)
printf("THE ACCOUNT IS NOT CREATED OR WRONG ENTRY !!!!");

else
{



printf("\n	UPDATE DETAILS	"); printf("			"); printf("\n1.USN \t\t2.NAME\n");
printf("ENTER YOUR CHOICE :");
int choice; scanf("%d",&choice); switch(choice)
{

case 1:printf("\nTHE PRESENT USN : %s ",temp->usn); printf("\nENTER THE NEW USN :");
scanf("%s",temp->usn);
printf("\nWITH SUCESS %s IS UPDATED USN!!",temp->usn); break;
case 2:printf("\nTHE PRESENT NAME : %s ",temp->name); printf("\nENTER THE NEW NAME :");
scanf("%s",temp->name);

printf("\nWITH SUCESS %s IS UPDATED NAME!!",temp->name); break;
default:printf("\nINVAILD INPUT");
}

}
}
return first;
}
void admin(NODE *first)
{
NODE *temp;
char tusn[20],tpassword[10];
printf("\nENTER THE ADMIN ACCOUNT NUMBER :");
scanf("%s",tusn);
printf("\nENTER THE ADMIN PASSWORD :");
scanf("%s",tpassword); temp=first;
if(strcmp(tusn,"1SI19CS111")==0 && strcmp(tpassword,"111")==0)
{
printf("\nADMIN NAME :%s\t\t\t\tPASSWORD :%s\n",tusn,tpassword);

printf("		"); printf("\nACCOUNT NUMBER\t\t\tNAME\t\t\tAVALIBLE AMOUNT\n");
while(temp!=NULL)
{

printf("\%-15s\t\t\t%-15s\t\t\t%d\n",temp->usn,temp->name,temp->money); temp=temp->next;
}
printf("\nDO YOU WANT TO MAKE ANY CHANGES(IF YES CLICK 1) ?");
int choice; scanf("%d",&choice); if(choice==0)
{


}
else
{




printf("\n1.DELETE ACCOUNT\t\t\t2.UPDATE KYC DETAILS\n");
printf("\nENTER YOUR CHOICE :");
int choice1;
 scanf("%d",&choice1);
 switch(choice1)
{

case 1:deleteaccount(first);
        break;
case 2:updatekyc(first);
        break;
default:printf("\nINVAILD SELCTION !!!!");
}

}


/*else
{
printf("\nINVALID DEYAILS \nFOR MORE DETAILS CONTACT SHREYANK AND SHASHWATH !!!!");
}*/



}
}
int main()
{
NODE *first=NULL; int choice; while(1)
{
printf("\n\t\t\tONLINE BANKING SYSTEM !");
printf("\n\t\t                       "); printf("\n\t\t\t---STATE BANK OF SIT	");
printf("\n\t\t\t0.ADMIN POWER\n\t\t\t1.OPEN ACCOUNT\n\t\t\t2.MAKE DEPOSITE\n\t\t\t3.BALANCE CHECK\n\t\t\t4.WITHDRAW MONEY\n\t\t\t5.UPDATE KYC DETAILS\n\t\t\t6.EXIT FROM BANK \n");
printf("\nENTER YOUR SERVICES :");
scanf("%d",&choice);
switch(choice)
{

case 1:first=openaccount(first);
        break;
case 2:first=deposite(first);
        break;
case 3:first=balance(first);
        break;
case 4:first=withdraw(first);
        break;
case 0:admin(first);
        break;
case 5:first=updatekyc(first);
        break;
case 6:printf("\nTHANKS FOR VISITING BANK OF SIT \n VISIT AGAIN");

//exit(1);
 break;
default:printf("\nINVALID SERVICES !!!!!");


return 0;










}


return 0;
}
}
