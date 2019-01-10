#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
typedef struct node{
	int num,by,code,bala,pin,tp;
	char name[20],add[100],state[20],op[10],mail[50];
	struct node *l;
	struct node *r;
}n;
typedef struct node1{
	char data[50];
	char plan[50];
	int d_charge;
	int t_charge;
	struct node1 *link;
}m;
struct node1 *a1,*a2,*a3,*a4,*i1,*i2,*i3,*i4,*ai1,*ai2,*ai3,*ai4,*b1,*b2,*b3,*b4,*v1,*v2,*v3,*v4,*z;
struct node *a,*b,*c,*d,*e,*f,*g,*h,*i,*x,*y;
int temp=0;
int search(int);
int balance(int,int);
int transfer(int,int);
int pay(int,int);
int check(int,int,int);
int offer(int);
int main(){
	int op;
	d=(struct node*)malloc(sizeof(struct node));
	d->num=100001;d->by=1997;d->code=456732;d->l=NULL;d->r=NULL;d->bala=569;d->pin=100;d->tp=5;
	strcpy(d->name,"Nakul lakhotia");strcpy(d->add,"Near Power House,Tadong,Gangtok");strcpy(d->state,"Sikkim");strcpy(d->op,"AIRCEL");
	strcpy(d->mail,"nakullakhotia1998@gamil.com");
	e=(struct node*)malloc(sizeof(struct node));
	e->num=100200;e->by=1995;e->code=458970;e->l=NULL;e->r=NULL;e->bala=100;e->pin=200;e->tp=3;
	strcpy(e->name,"Naman Tiwari");strcpy(e->add,"Mayur vihar colony, Jaipur");strcpy(e->state,"Rajasthan");strcpy(e->op,"IDEA");
	strcpy(e->mail,"Naman.3010@gmail.com");
	f=(struct node*)malloc(sizeof(struct node));
	f->num=100009;f->by=1997;f->code=461111;f->l=NULL;f->r=NULL;f->bala=281;f->pin=300;f->tp=1;
	strcpy(f->name,"Raghav bhatia");strcpy(f->add,"b-10,adarsh nagar,Jaipur");strcpy(f->state,"Rajasthan");strcpy(f->op,"AIRTEL");
	strcpy(f->mail,"raghavbhatia@gamil.com");
	g=(struct node*)malloc(sizeof(struct node));
	g->num=100911;g->by=1996;g->code=678001;g->l=NULL;g->r=NULL;g->bala=210;g->pin=400;g->tp=5;
	strcpy(g->name,"Rohan kumar");strcpy(g->add,"Ram bazar, New delhi");strcpy(g->state,"New delhi");strcpy(g->op,"AIRCEL");
	strcpy(g->mail,"ADxyz777@gamil.com");
	b=(struct node*)malloc(sizeof(struct node));
	b->num=100201;b->by=1997;b->code=453214;b->l=NULL;b->r=NULL;b->bala=623;b->pin=500;b->tp=1;
	strcpy(b->name,"Uttkarsh Jangir");strcpy(b->add,"Swami nagar,Jaipur");strcpy(b->state,"Rajasthan");strcpy(b->op,"AIRTEL");
	strcpy(b->mail,"Uttkarsh.jangir2015@gmail.com");
	c=(struct node*)malloc(sizeof(struct node));
	c->num=100812;c->by=1997;c->code=467231;c->l=NULL;c->r=NULL;c->bala=430;c->pin=600;c->tp=2;
	strcpy(c->name,"pulkit");strcpy(c->add,"malviya nagar,Jaipur");strcpy(c->state,"Rajasthan");strcpy(c->op,"BSNL");
	strcpy(c->mail,"Pulkit05.1793@gamil.com");
	a=(struct node*)malloc(sizeof(struct node));
	a->num=100568;a->by=1996;a->code=468907;a->l=NULL;a->r=NULL;a->bala=333;a->pin=700;a->tp=4;
	strcpy(a->name,"Suryansh");strcpy(a->add,"Chandni Chok, Delhi");strcpy(a->state,"Delhi");strcpy(a->op,"VODAFONE");
	strcpy(a->mail,"suryansh.shooter@gamil.com");
	h=(struct node*)malloc(sizeof(struct node));
	h->num=100114;h->by=1996;h->code=465721;h->l=NULL;h->r=NULL;h->bala=289;h->pin=800;h->tp=4;
	strcpy(h->name,"Akhilesh");strcpy(h->add,"IL colony, Kota");strcpy(h->state,"Rajasthan");strcpy(h->op,"VODAFONE");
	strcpy(h->mail,"aki.kane@gamil.com");
	i=(struct node*)malloc(sizeof(struct node));
	i->num=100150;i->by=1997;i->code=465321;i->l=NULL;i->r=NULL;i->bala=304;i->pin=900;i->tp=2;
	strcpy(i->name,"Abhinav");strcpy(i->add,"Front of old church, Balagaht");strcpy(i->state,"M.P");strcpy(i->op,"BSNL");
	strcpy(i->mail,"abhinav.1997@gamil.com");
	a->l=b;a->r=c;
	b->l=d;b->r=e;
	c->l=f;c->r=g;
	d->l=h;d->r=i;
	a1=(struct node1*)malloc(sizeof(struct node1));
	strcpy(a1->data,"1. Rs 10(20MB 2G/1day)\n");strcpy(a1->plan,"1. Rs 20(Airtel talktime of Rs 7.73)\n");a1->d_charge=10;a1->t_charge=20;
	a2=(struct node1*)malloc(sizeof(struct node1));
	strcpy(a2->data,"2. Rs 17(30MB 2G/3day)\n");strcpy(a2->plan,"2. Rs 40(Airtel talktime of Rs 31.93)\n");a2->d_charge=17;a2->t_charge=40;
	a3=(struct node1*)malloc(sizeof(struct node1));
	strcpy(a3->data,"3. Rs 255(1GB 3G/28day)\n");strcpy(a3->plan,"3. Rs 120(Airtel taktime of Rs 101.8)\n");a3->d_charge=255;a3->t_charge=120;
	a4=(struct node1*)malloc(sizeof(struct node1));
	strcpy(a4->data,"4. Rs 400(2GB 3G/28day)\n");strcpy(a4->plan,"4. Rsp 145(Airtel local Airtel @ 10p/min)\n");a4->d_charge=400;a4->t_charge=145;
	b1=(struct node1*)malloc(sizeof(struct node1));
	strcpy(b1->data,"1. Rs 32(150MB 3G/3day)\n");strcpy(b1->plan,"1. Rs 20(BSNL talktime of Rs 15.47)\n");b1->d_charge=32;b1->t_charge=20;
	b2=(struct node1*)malloc(sizeof(struct node1));
	strcpy(b2->data,"2. Rs 43(200MB 3G/5day)\n");strcpy(b2->plan,"2. Rs 40(BSNL talktime of Rs 31.93)\n");b2->d_charge=43;b2->t_charge=40;
	b3=(struct node1*)malloc(sizeof(struct node1));
	strcpy(b3->data,"3. Rs 150(1GB 3G/28day)\n");strcpy(b3->plan,"3. Rs 150(BSNL talktime of Rs 128.0)\n");b3->d_charge=150;b3->t_charge=150;
	b4=(struct node1*)malloc(sizeof(struct node1));
	strcpy(b4->data,"4. RS 250(2GB 3G/28day)\n");strcpy(b4->plan,"4. Rs 200(BSNl talktime of Rs 171.67)\n");b4->d_charge=250;b4->t_charge=200;
	i1=(struct node1*)malloc(sizeof(struct node1));
	strcpy(i1->data,"1. Rs 45(100MB 3G/5day)\n");strcpy(i1->plan,"1. Rs 10(Idea talktime of Rs 7.0)\n");i1->d_charge=45;i1->t_charge=10;
	i2=(struct node1*)malloc(sizeof(struct node1));
	strcpy(i2->data,"2. Rs 95(300MB 3G/10day)\n");strcpy(i2->plan,"2. Rs 50(Idea talktime of Rs 42.0)\n");i2->d_charge=95;i2->t_charge=50;
	i3=(struct node1*)malloc(sizeof(struct node1));
	strcpy(i3->data,"3. Rs 147(600MB 3G/15day)\n");strcpy(i3->plan,"3. Rs 80(Idea talktime of Rs 80.0)\n");i3->d_charge=147;i3->t_charge=80;
	i4=(struct node1*)malloc(sizeof(struct node1));
	strcpy(i4->data,"4. Rs 197(800MB 3G/28day)\n");strcpy(i4->plan,"4. Rs 120(Idea talktime of Rs 120.0)\n");i4->d_charge=197;i4->t_charge=120;
	v1=(struct node1*)malloc(sizeof(struct node1));
	strcpy(v1->data,"1. Rs 23(70MB 3G/3day)\n");strcpy(v1->plan,"1. Rs 10(Vodafone talktime of Rs 7.73)\n");v1->d_charge=23;v1->t_charge=10;
	v2=(struct node1*)malloc(sizeof(struct node1));
	strcpy(v2->data,"2. Rs 45(150MB 3G/5day)\n");strcpy(v2->plan,"2. Rs 60(Vodfone talktime of Rs 49.4)\n");v2->d_charge=45;v2->t_charge=60;
	v3=(struct node1*)malloc(sizeof(struct node1));
	strcpy(v3->data,"3. Rs 142(500MB 3G/14day)\n");strcpy(v3->plan,"3. Rs 210(Vodafone talktime of Rs 180.41)\n");v3->d_charge=142;v3->t_charge=210;
	v4=(struct node1*)malloc(sizeof(struct node1));
	strcpy(v4->data,"4. Rs 254(1GB 3G/25day)\n");strcpy(v4->plan,"4. Rs 400(Vodafone talktime of Rs 346.34)\n");v4->d_charge=254;v4->t_charge=400;
	ai1=(struct node1*)malloc(sizeof(struct node1));
	strcpy(ai1->data,"1. Rs 14(40MB 2G/5day)\n");strcpy(ai1->plan,"1. Rs 20(Aircel talktime of Rs 15.47)\n");ai1->d_charge=14;ai1->t_charge=20;
	ai2=(struct node1*)malloc(sizeof(struct node1));
	strcpy(ai2->data,"2. Rs 43(175MB 2G/unlimited)\n");strcpy(ai2->plan,"2. Rs 60(Aircel talktime of Rs 31.93)\n");ai2->d_charge=43;ai2->t_charge=60;
	ai3=(struct node1*)malloc(sizeof(struct node1));
	strcpy(ai3->data,"3. Rs 128(500MB 3G/28day)\n");strcpy(ai3->plan,"3. Rs 110(Aircel talktime of Rs 93.07)\n");ai3->d_charge=128;ai3->t_charge=110;
	ai4=(struct node1*)malloc(sizeof(struct node1));
	strcpy(ai4->data,"4. Rs 255(1.25GB 3G/21day)");strcpy(ai4->plan,"4. Rs 230(Aircel talktime of Rs 240/28day)\n");ai4->d_charge=255;ai4->t_charge=230;
	a1->link=a2;a2->link=a3;a3->link=a4;a4->link=NULL;
	b1->link=b2;b2->link=b3;b3->link=b4;b4->link=NULL;
	i1->link=i2;i2->link=i3;i3->link=i4;i4->link=NULL;
	v1->link=v2;v2->link=v3;v3->link=v4;v4->link=NULL;
	ai1->link=ai2;ai2->link=ai3;ai3->link=ai4;ai4->link=NULL;
	int num1,pass,c=1,num2,amt,q;
	printf("\n******************** WELCOME TO DIGITAL TELEPHONE DIRECTORY ********************\n\n");
	while(c!=0){
		x=a;y=a;
		printf("\n->1. Search phone number\n");
		printf("->2. Balance enquiry\n");
		printf("->3. Balance transfer\n");
		printf("->4. Offers\n");
		printf("->5. Exit\n");
		printf("\n------------------------------------------------------------\n");
		printf("\nEnter your choice: ");
		scanf("%d",&op);
		switch(op){
			case 1:
				printf("\nEnter the phone number: ");
				scanf("%d",&num1);
				search(num1);
				break;
			case 2:
				printf("\nEnter the phone number: ");
				scanf("%d",&num2);
				printf("\nEnter your PIN number : ");
				scanf("%d",&pass);
				balance(num2,pass);
				break;
			case 3:
				printf("\nEnter your phone number : ");scanf("%d",&num1);
				printf("\nTo which phone number you want to transfer balance : ");scanf("%d",&num2);
				printf("\nEnter the amount : ");scanf("%d",&amt);
				printf("\nEnter your PIN number : ");scanf("%d",&pass);
				check(num1,amt,pass);
				if(temp==1){
					transfer(num2,amt);
				}
				break;
			case 4:
				printf("\nEnter your phone number : ");scanf("%d",&num1);
				offer(num1);
				break;
			case 5:
				printf("\n*********************** THANK YOU FOR USING OUR SERVICES ***********************\n");
				printf("                               HAVE A NICE DAY                                  ");
				c=0;
				break;
			default :
				printf("\n------------------------------------------------------------\n");
				printf("\n->Invalid input<-\n");
				printf("\n------------------------------------------------------------\n");
			}
		}
}
int search(int num1){
	if(x->num==num1){
		printf("\n------------------------------------------------------------\n");
		printf("\nName          :  %s\n",x->name);
		printf("Year of birth :  %d\n",x->by);
		printf("Phone number  :  %d\n",x->num);
		printf("Address       :  %s\n",x->add);
		printf("PIN code      :  %d\n",x->code);
		printf("State         :  %s\n",x->state);
		printf("Operator      :  %s\n",x->op);
		printf("Email ID      :  %s\n",x->mail);
		printf("\n------------------------------------------------------------\n");
	}
	else if(x->num>num1){
		x=x->l;
		if(x==NULL){
			printf("\n------------------------------------------------------------\n");
			printf("\n->Number dose not exist<-\n");
			printf("\n------------------------------------------------------------\n");
		}
		else{
			search(num1);
		}
	}
	else if(x->num<num1){
		x=x->r;
		if(x==NULL){
			printf("\n------------------------------------------------------------\n");
			printf("\n->Number dose not exist<-\n");
			printf("\n------------------------------------------------------------\n");
		}
		else{
			search(num1);
		}
	}
}
int balance(int num1, int pin){
		if(x->num==num1){
			if(x->pin==pin){
			printf("\n------------------------------------------------------------\n");
			printf("\n%s your main balance is Rs %d\n",x->name,x->bala);
			printf("\n------------------------------------------------------------\n");
			}
			else{
				printf("\n------------------------------------------------------------\n");
				printf("\n->Invalid PIN number<-\n");
				printf("\n------------------------------------------------------------\n");
			}
	}
	else if(x->num>num1){
		x=x->l;
		if(x==NULL){
			printf("\n------------------------------------------------------------\n");
			printf("\n->Number dose not exist<-\n\n");
			printf("\n------------------------------------------------------------\n");
		}
		else{
			balance(num1,pin);
		}
	}
	else if(x->num<num1){
		x=x->r;
		if(x==NULL){
			printf("\n------------------------------------------------------------\n");
			printf("\n->Number dose not exist<-\n\n");
			printf("\n------------------------------------------------------------\n");
		}
		else{
			balance(num1,pin);
		}
	}
}
int check(int num1,int amt,int pin){
		if(x->num==num1){
			if(x->pin==pin){
				if(x->bala<amt){
					printf("\n------------------------------------------------------------\n");
					printf("\n->Insuffient Balance<-\n");
					printf("\n------------------------------------------------------------\n");
					temp=0;
				}
				else{
					x->bala=x->bala-amt;
					temp=1;
				}
			}
			else{
				printf("\n------------------------------------------------------------\n");
				printf("\n->Invalid PIN number<-\n");
				printf("\n------------------------------------------------------------\n");
			}
	}
	else if(x->num>num1){
		x=x->l;
		if(x==NULL){
			printf("\n------------------------------------------------------------\n");
			printf("\n->Number dose not exist<-\n\n");
			printf("\n------------------------------------------------------------\n");
		}
		else{
			check(num1,amt,pin);
		}
	}
	else if(x->num<num1){
		x=x->r;
		if(x==NULL){
			printf("\n------------------------------------------------------------\n");
			printf("\n->Number dose not exist<-\n\n");
			printf("\n------------------------------------------------------------\n");
		}
		else{
			check(num1,amt,pin);
		}
	}
}
int transfer(int num2, int amt){
		if(y->num==num2){
			y->bala=y->bala+amt;
			printf("\n------------------------------------------------------------\n");
			printf("\n-> Rs %d is succussfully transfered to %s\n",amt,y->name);
			printf("\n   %s your main balance is Rs %d\n",x->name,x->bala);
			printf("\n------------------------------------------------------------\n");

	}
	else if(y->num>num2){
		y=y->l;
		if(y==NULL){
			printf("\n->Number you want to transfer balance dose not exist<-\n\n");
		}
		else{
			transfer(num2,amt);
		}
	}
	else if(y->num<num2){
		y=y->r;
		if(y==NULL){
			printf("\n->Number you want to transfer balance dose not exist<-\n\n");
		}
		else{
			transfer(num2,amt);
		}
	}
}
int pay(int num1,int amt){
		if(y->num==num1){
			printf("\n------------------------------------------------------------\n");
			printf("\n   Rs %d %s PACK is now activated",amt,x->op);
			printf("\n-> %s your main balance is Rs %d\n",x->name,x->bala);
			printf("\n------------------------------------------------------------\n");

	}
	else if(y->num>num1){
		y=y->l;pay(num1,amt);
	}
	else if(y->num<num1){
		y=y->r;pay(num1,amt);
	}
}
int offer(int num1){
	int n,ch,vpin;
	if(x->num==num1){
		printf("\n--------------------------------------------------------------------------------\n");
		printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %s <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n",x->op);
		printf("\n->1. DATA packs\n");
		printf("->2. Top-Up packs\n");
		printf("\nEnter your choice : ");
		scanf("%d",&n);
	if(n==1 && x->tp==1){
			z=a1;
			printf("\n------------------------------------------------------------\n");
			printf("  DATA packs for you :-\n\n");
			while(z!=NULL){
				printf("  %s",z->data);z=z->link;
			}
			printf("\nEnter your PACK Number : ");
			scanf("%d",&ch);
			z=NULL;
			for(int i=0;i<ch;i++){
				if(z==NULL)
				z=a1;
				else
				z=z->link;
			}
			printf("\nPlease enter your PIN : ");
			scanf("%d",&vpin);check(num1,z->d_charge,vpin);
			if(temp==1)
			pay(num1,z->d_charge);
		}
		else if(n==1 && x->tp==5){
			z=ai1;
			printf("\n------------------------------------------------------------\n");
			printf("  DATA packs for you :-\n\n");
			while(z!=NULL){
				printf("  %s",z->data);z=z->link;
			}
			printf("\nEnter your PACK Number : ");
			scanf("%d",&ch);
			z=NULL;
			for(int i=0;i<ch;i++){
				if(z==NULL)
				z=ai1;
				else
				z=z->link;
			}
			printf("\nPlease enter your PIN : ");
			scanf("%d",&vpin);check(num1,z->d_charge,vpin);
			if(temp==1)
			pay(num1,z->d_charge);
		}
		else if(n==1 && x->tp==2){
			z=b1;
			printf("\n------------------------------------------------------------\n");
			printf("  DATA packs for you :-\n\n");
			while(z!=NULL){
				printf("  %s",z->data);z=z->link;
			}
			printf("\nEnter your PACK Number : ");
			scanf("%d",&ch);
			z=NULL;
			for(int i=0;i<ch;i++){
				if(z==NULL)
				z=b1;
				else
				z=z->link;
			}
			printf("\nPlease enter your PIN : ");
			scanf("%d",&vpin);check(num1,z->d_charge,vpin);
			if(temp==1)
			pay(num1,z->d_charge);
		}
		else if(n==1 && x->tp==3){
			z=i1;
			printf("\n------------------------------------------------------------\n");
			printf("  DATA packs for you :-\n\n");
			while(z!=NULL){
				printf("  %s",z->data);z=z->link;
			}
			printf("\nEnter your PACK Number : ");
			scanf("%d",&ch);
			z=NULL;
			for(int i=0;i<ch;i++){
				if(z==NULL)
				z=i1;
				else
				z=z->link;
			}
			printf("\nPlease enter your PIN : ");
			scanf("%d",&vpin);check(num1,z->d_charge,vpin);
			if(temp==1)
			pay(num1,z->d_charge);
		}
		else if(n==1 && x->tp==4){
			z=v1;
			printf("\n------------------------------------------------------------\n");
			printf("  DATA packs for you :-\n\n");
			while(z!=NULL){
				printf("  %s",z->data);z=z->link;
			}
			printf("\nEnter your PACK Number : ");
			scanf("%d",&ch);
			z=NULL;
			for(int i=0;i<ch;i++){
				if(z==NULL)
				z=v1;
				else
				z=z->link;
			}
			printf("\nPlease enter your PIN : ");
			scanf("%d",&vpin);check(num1,z->d_charge,vpin);
			if(temp==1)
			pay(num1,z->d_charge);
		}
		else if(n==2 && x->tp==1){
			z=a1;
			printf("\n------------------------------------------------------------\n");
			printf("  Top-UP packs for you :-\n\n");
			while(z!=NULL){
				printf("  %s",z->data);z=z->link;
			}
			printf("\nEnter your PACK Number : ");
			scanf("%d",&ch);
			z=NULL;
			for(int i=0;i<ch;i++){
				if(z==NULL)
				z=a1;
				else
				z=z->link;
			}
			printf("\nPlease enter your PIN : ");
			scanf("%d",&vpin);check(num1,z->d_charge,vpin);
			if(temp==1)
			pay(num1,z->d_charge);
		}
		else if(n==2 && x->tp==2){
			z=b1;
			printf("\n------------------------------------------------------------\n");
			printf("  Top-UP packs for you :-\n\n");
			while(z!=NULL){
				printf("  %s",z->data);z=z->link;
			}
			printf("\nEnter your PACK Number : ");
			scanf("%d",&ch);
			z=NULL;
			for(int i=0;i<ch;i++){
				if(z==NULL)
				z=b1;
				else
				z=z->link;
			}
			printf("\nPlease enter your PIN : ");
			scanf("%d",&vpin);check(num1,z->d_charge,vpin);
			if(temp==1)
			pay(num1,z->d_charge);
		}
		else if(n==2 && x->tp==3){
			z=i1;
			printf("\n------------------------------------------------------------\n");
			printf("  Top-UP packs for you :-\n\n");
			while(z!=NULL){
				printf("  %s",z->data);z=z->link;
			}
			printf("\nEnter your PACK Number : ");
			scanf("%d",&ch);
			z=NULL;
			for(int i=0;i<ch;i++){
				if(z==NULL)
				z=i1;
				else
				z=z->link;
			}
			printf("\nPlease enter your PIN : ");
			scanf("%d",&vpin);check(num1,z->d_charge,vpin);
			if(temp==1)
			pay(num1,z->d_charge);
		}
		else if(n==2 && x->tp==4){
			z=v1;
			printf("\n------------------------------------------------------------\n");
			printf("  Top-UP packs for you :-\n\n");
			while(z!=NULL){
				printf("  %s",z->data);z=z->link;
			}
			printf("\nEnter your PACK Number : ");
			scanf("%d",&ch);
			z=NULL;
			for(int i=0;i<ch;i++){
				if(z==NULL)
				z=v1;
				else
				z=z->link;
			}
			printf("\nPlease enter your PIN : ");
			scanf("%d",&vpin);check(num1,z->d_charge,vpin);
			if(temp==1)
			pay(num1,z->d_charge);
		}
		else if(n==2 && x->tp==5){
			z=ai1;
			printf("\n------------------------------------------------------------\n");
			printf("  Top-UP packs for you :-\n\n");
			while(z!=NULL){
				printf("  %s",z->data);z=z->link;
			}
			printf("\nEnter your PACK Number : ");
			scanf("%d",&ch);
			z=NULL;
			for(int i=0;i<ch;i++){
				if(z==NULL)
				z=ai1;
				else
				z=z->link;
			}
			printf("\nPlease enter your PIN : ");
			scanf("%d",&vpin);check(num1,z->d_charge,vpin);
			if(temp==1)
			pay(num1,z->d_charge);
		}
		else{
			printf("\n------------------------------------------------------------\n");
			printf("\n->Invalid input<-\n");
			printf("\n------------------------------------------------------------\n");
		}
		}
	else if(x->num>num1){
		x=x->l;
		if(x==NULL){
			printf("\n------------------------------------------------------------\n");
			printf("\n->Number dose not exist<-\n");
			printf("\n------------------------------------------------------------\n");
		}
		else{
			offer(num1);
		}
	}
	else if(x->num<num1){
		x=x->r;
		if(x==NULL){
			printf("\n------------------------------------------------------------\n");
			printf("\n->Number dose not exist<-\n");
			printf("\n------------------------------------------------------------\n");
		}
		else{
			offer(num1);
		}
	}
}
