//SCIENTIFIC CALCULATOR
#include<iostream.h>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<process.h>
#include<math.h>
#include<string.h>
#include<dos.h>
void graph();
void enter();
void dis(int left, int top);
char op2,op3;

void intro()
{
   clrscr();
   cout<<"\n\n\t\t\t    SCIENTIFIC CALCULATOR";
   cout<<"\n\t==============================================================";
   cout<<"\n\n\nDISCLAIMER";
   cout<<"\n----------";
   cout<<"\n\nThis is a SCIENTIFIC SOFTWARE programmed to CALCULATE variables , integers and  equations driven by TWENTY MATHEMATICAL OPERATIONS.";
   cout<<"To operate with these twenty mathematical functions ,it is required to press ENTER KEY each time you enter a new number or function.";
   cout<<" Usage  of  more  than  one operant during a sequence of operations is prohibited.In order to get the result, '=' must be used as operand";
   cout<<"Now 'SIT BACK AND ENJOY.....'";
   cout<<"\n\n\n\n\n\n\t\t\t   PRESS ENTER TO PROCEED.....";
   delay(1000);
   getch();
}
void graph()
{
   int gd=DETECT,gm,left=200,top=150,right=400,bottom=200;
   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
   cout<<"\n\n\n\n================================================================================";
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n================================================================================";
   rectangle(left,top-40,right+50,bottom+180);
   outtextxy(left+45,top-30,"SCIENTIFIC CALCULATOR");
   rectangle(left+10,top-10,right+40,bottom-20);
   gotoxy(28,11);
   cout<<"0";
   outtextxy(left+5,top+45,"  C");
   rectangle(left+10,top+60,right+40,bottom+150);
   dis(left,top);
   enter();
   getch();
   closegraph();
}
void dis(int left, int top)
{
	outtextxy(left+15,top+75,"  ");
	outtextxy(left+15,top+85,"1.+ 6.Sin   11.Asin  16.X!");
	outtextxy(left+15,top+95,"  ");
	outtextxy(left+15,top+105,"2.- 7.Cos   12.Acos  17.1/X");
	outtextxy(left+15,top+115,"  ");
	outtextxy(left+15,top+125,"3.* 8.Tan   13.Atan  18.log");
	outtextxy(left+15,top+135,"  ");
	outtextxy(left+15,top+145,"4./ 9.X^y   14.X^2   19.ln");
	outtextxy(left+15,top+155,"  ");
	outtextxy(left+15,top+165,"5.% 10.rtXy 15.sqrt  20.e-");
	outtextxy(left+5,top+210," PI: P");
	outtextxy(left+180,top+210,"EXIT: E");
}

void enter()
{

	int i=0,s=0,d=0,p=0,q=0,m=0,si=0,co=0,ta=0,po=0,power1=0,as=0,ac=0,at=0,sq2=0,fa=0,nu=0,ln=0,lo=0,en=0,pine=0;
	int p2=0;
	int MS,MR,mod[5],a,b;
	char op[5];
	float An[20],sum,diff,pro,quo,e,pi;
	double sine,cosine,tangent,asine,acosine,atangent,ans,powe,power2,power,squart,f,sw;
	gotoxy(28,11);
	  cin>>An[0];
	       do
	       {
		 gotoxy(28,11);
		 cout<<"Enter the operant  ";
		 gets(op);
		 gotoxy(28,11);
		 cout<<"                      ";
		 if(strcmp(op,"c")==0)
		   graph();
		 else if(strcmp(op,"e")==0)
		   exit(0);
		 else if(strcmp(op,"p")==0)
		 {
			pine=1;
			pi=3.14;
			gotoxy(28,11);
			cout<<"                     ";
			ans=pi*An[0];
			break;
		 }

		 else if(strcmp(op,"1")==0)
		 {   if(s==0)
			sum=An[0];

		       s=s+1;
			 i=i+1;
			 gotoxy(28,11);
			 cout<<"                    ";
			 gotoxy(28,11);
			 cin>>An[i];
			 sum=sum+An[i];
			 continue;

		 }
		 else if(strcmp(op,"2")==0)
		 {   if(d==0)
			diff=An[0];

		       d=d+1;
			 i=i+1;
			 gotoxy(28,11);
			 cout<<"                    ";
			 gotoxy(28,11);
			 cin>>An[i];
			 diff=diff-An[i];
			 continue;

		 }
		 else if(strcmp(op,"3")==0)
		 {   if(p==0)
			pro=An[0];

		       p=p+1;
			 i=i+1;
			 gotoxy(28,11);
			 cout<<"                    ";
			 gotoxy(28,11);
			 cin>>An[i];
			 pro=pro*An[i];
			 continue;

		 }
		 else if(strcmp(op,"4")==0)
		 {   if(q==0)
			quo=An[0];

		       q=q+1;
			 i=i+1;
			 gotoxy(28,11);
			 cout<<"                    ";
			 gotoxy(28,11);
			 cin>>An[i];
			 quo=quo/An[i];
			 continue;

		 }
		 else if(strcmp(op,"5")==0)
		 {	if(m==0)
			   mod[0]=An[0];
			 m=1;
			 gotoxy(28,11);
			 cout<<"                    ";
			 gotoxy(28,11);
			 cin>>mod[1];
			 mod[2]=mod[0]%mod[1];
			 break;
		 }
		 else if(strcmp(op,"6")==0)
		 {   si=1;
		     sine=(An[0]*3.14)/180;
		      ans=sin(sine);
		      break;
		 }
		 else if(strcmp(op,"7")==0)
		 {    co=1;
		      cosine=(An[0]*3.14)/180;
		      ans=cos(cosine);
		      break;
		 }
		 else if(strcmp(op,"8")==0)
		 {	ta=1;
			tangent=(An[0]*3.14)/180;
			ans=tan(tangent);
			break;
		 }
		 else if(strcmp(op,"9")==0)
		 {
			po=po+1;
			a=An[0];
			gotoxy(28,11);
			cout<<"                    ";
			gotoxy(28,11);
			cin>>An[1];
			b=An[1];
		       power=pow(a,b);
		       break;
		  }
		  else if(strcmp(op,"10")==0)
		  {     power1=power1+1;
			f=An[0];
			gotoxy(28,11);
			cout<<"                    ";
			gotoxy(28,11);
			cin>>An[1];
			sw=An[1];
			powe=pow(f,1/sw);
			break;
		  }
		  else if(strcmp(op,"11")==0)
		  {
			as=1;
			asine=(An[0]*3.14)/180;
			ans=sin(1/asine);
			break;
		  }
		  else if(strcmp(op,"12")==0)
		  {
			ac=1;
			acosine=(An[0]*3.14)/180;
			ans=acos(acosine);
			break;
		  }
		  else if(strcmp(op,"13")==0)
		  {
			at=1;
			atangent=(An[0]*3.14)/180;
			ans=atan(atangent);
			break;
		  }
		  else if(strcmp(op,"14")==0)
		  {
			p2=1;
			gotoxy(28,11);
			cout<<"                    ";
			gotoxy(28,11);
			power2=pow(An[0],2);
			break;
		  }
		 else if(strcmp(op,"15")==0)
		 {
			sq2=1;
			gotoxy(28,11);
			cout<<"                    ";
			gotoxy(28,11);
			squart=sqrt(An[0]);
			break;
		 }
		 else if(strcmp(op,"16")==0)
		 {
			fa=1;
			gotoxy(28,11);
			cout<<"                    ";
			gotoxy(28,11);
			for(i=1;i<=An[0];i++)
			      ans*=i;
			break;
		  }
		 else if(strcmp(op,"17")==0)
		 {
			 nu=1;
			 gotoxy(28,11);
			 cout<<"	           ";
			 ans=1/An[0];
			 break;
		 }
		 else if(strcmp(op,"19")==0)
		 {
			 ln=1;
			 gotoxy(28,11);
			 cout<<"                   ";
			 ans=log(An[0]);
			 break;
		 }
		 else if(strcmp(op,"18")==0)
		 {
			 lo=1;
			 gotoxy(28,11);
			 cout<<"                   ";
			 ans=log10(An[0]);
			 break;
		 }
		 else if(strcmp(op,"20")==0)
		 {
			  en=1;
			  gotoxy(28,11);
			  cout<<"                  ";
			  e=2.718;
			  ans=An[0]*e;
			  break;
		 }


	       }while(strcmp(op,"=")!=0);
		 if(s>=1)
		 {
		    gotoxy(28,11);
		    cout<<"                    ";
		    gotoxy(28,11);
			cout<<sum;

		 }
	      else if(d>=1)
	      {  gotoxy(28,11);
		 cout<<"                    ";
		 gotoxy(28,11);
		cout<<diff;


	      }
	      else if(p>=1)
	      {  gotoxy(28,11);
		     cout<<"                    ";
		     gotoxy(28,11);
		     cout<<pro;


	      }
	      else if(q>=1)
	      {   gotoxy(28,11);
		   cout<<"                    ";
		     gotoxy(28,11);
		     cout<<quo;


	      }
	      else if(m==1)
	      {
		    gotoxy(28,11);
		    cout<<"                   ";
		     gotoxy(28,11);
		     cout<<mod[2];
	      }
	      else if(si==1)
	      {
		     gotoxy(28,11);
		     cout<<"                  ";
		     gotoxy(28,11);
		     cout<<ans;
	      }
	      else if(co==1)
	      {
		      gotoxy(28,11);
		      cout<<"                 ";
		      gotoxy(28,11);
		      cout<<ans;
	      }
	      else if(ta==1)
	      {
			gotoxy(28,11);
		      cout<<"                 ";
		      gotoxy(28,11);
		      cout<<ans;
	      }
	      else if(po==1)
	      {		gotoxy(28,11);
		      cout<<"                 ";
		      gotoxy(28,11);
		      cout<<power;
	      }
	      else if(power1==1)
	      {          gotoxy(28,11);
		      cout<<"                 ";
		      gotoxy(28,11);
		      cout<<powe;
	      }
	      else if(as==1)
	      {         gotoxy(28,11);
		      cout<<"                 ";
		      gotoxy(28,11);
		      cout<<ans;
	      }
	      else if(ac==1)
	      {
			gotoxy(28,11);
		      cout<<"                 ";
		      gotoxy(28,11);
		      cout<<ans;
	      }
	      else if(at==1)
	      {
			gotoxy(28,11);
		      cout<<"                 ";
		      gotoxy(28,11);
		      cout<<ans;
	      }
	      else if(p2==1)
	      {
			gotoxy(28,11);
		      cout<<"                 ";
		      gotoxy(28,11);
		      cout<<power2;
	      }
	      else if(sq2==1)
	      {
			gotoxy(28,11);
		      cout<<"                 ";
		      gotoxy(28,11);
		      cout<<squart;
	      }
	      else if(nu==1)
	      {
			gotoxy(28,11);
		      cout<<"                 ";
		      gotoxy(28,11);
		      cout<<ans;
	      }
	      else if(fa==1)
	      {
			gotoxy(28,11);
			cout<<"                 ";
			gotoxy(28,11);
			cout<<ans;
	      }
	      else if(ln==1)
	      {
			gotoxy(28,11);
			cout<<"                 ";
			gotoxy(28,11);
			cout<<ans;
	      }
	      else if(lo==1)
	      {
			gotoxy(28,11);
			cout<<"                 ";
			gotoxy(28,11);
			cout<<ans;
	      }
	      else if(en==1)
	      {
			 gotoxy(28,11);
			 cout<<"                ";
			 gotoxy(28,11);
			 cout<<ans;
	      }
	      else if(pine==1)
	      {
			 gotoxy(28,11);
			 cout<<"                 ";
			 gotoxy(28,11);
			 cout<<ans;
	      }
	      else
	      {
		gotoxy(28,11);
		cout<<"                       ";
		gotoxy(28,11);
		cout<<"error";
	      }

	      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tDO YOU WANT TO CONTINUE ?  ";
	      cin>>op2;
	      if(op2=='y'||op2=='Y')
		graph();
	      else
	      {
		gotoxy(28,11);
		cout<<"Exit ?  ";
		cin>>op3;
		if(op3=='y'||op3=='Y')
		  exit(0);
		else
		  graph();
	      }
}

void main()
{       clrscr();
	intro();
	graph();
	getch();
}














