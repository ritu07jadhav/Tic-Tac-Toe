#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gm,gd=DETECT;
    int player_1,player_2,MOVE,j,i,k,l,player,count_k;
    int total_1=0,total_2=0,total_3=0,total_4=0,total_5=0,total_6=0,total_7=0,total_8=0,total_9=0,total_10=0;
	int total_11=0,total_12=0,total_13=0,total_14=0,total_15=0,total_16=0;
    initgraph(&gd,&gm,"..\\bgi");
    setbkcolor(7);
    //vertical line
    setcolor(4);
    line(100,100,100,400);
    line(200,100,200,400);
    line(15,100,15,400);
    line(300,100,300,400);
    //horizontal line
    line(15,200,300,200);
    line(15,300,300,300);
    line(15,100,300,100);
    line(15,400,300,400);
    setcolor(3);
    settextstyle(10,0,5);
    outtextxy(100,10,"TIC TAC TOE");
    setcolor(BLUE);
    settextstyle(1,0,4);
    outtextxy(350,120,"PLAYER 1:");
    setcolor(4);
    settextstyle(1,0,4);
    outtextxy(350,170,"PLAYER 2:");

	      for(i=1;i<=9;i++)
		  {
			if(i%2==0)
			    {
				player=player_2;

				settextstyle(1,0,4);
				outtextxy(525,120,"TURN");
				sound(1000);
				delay(50);
				nosound();

			   }
		       else
			   {
				player=player_1;

				settextstyle(1,0,4);
				outtextxy(525,170,"TURN");
				sound(1000);
				delay(50);
				nosound();

			   }
				    scanf("\t%d",&MOVE);
					switch(MOVE)
					      {
						  case 1:
						       if(player==player_1)
								 {
								    setcolor(BLUE);
								    rectangle(30,130,60,160);
									setfillstyle(SOLID_FILL,BLUE);
								floodfill(31,131,BLUE);
														 }
							 else if(player==player_2)
								 {
								    setcolor(RED);
								    circle(50,150,20);
								    setfillstyle(SOLID_FILL,RED);
								    floodfill(50,150,RED);
														 }
														break;
					     case 2:
						      if(player==player_1)
								 {
								   setcolor(BLUE);
								   rectangle(130,130,160,160);
								   setfillstyle(SOLID_FILL,BLUE);
							        floodfill(131,131,BLUE);
								 }
						      else
								 {
								    setcolor(RED);
								    circle(150,150,20);
									setfillstyle(SOLID_FILL,RED);
								    floodfill(150,150,RED);
								 }
								break;
					     case 3:
						       if(player==player_1)
								{
								   setcolor(BLUE);
								   rectangle(230,130,260,160);
								   setfillstyle(SOLID_FILL,BLUE);
							        floodfill(231,131,BLUE);
								    
								}
						       else
								{
								   setcolor(RED);
								   circle(250,150,20);
								   setfillstyle(SOLID_FILL,RED);
								   floodfill(250,150,RED);
							       }
							     break;

						 case 4:
						    if(player==player_1)
							   {
							      setcolor(BLUE);
							      rectangle(30,230,60,260);
								   setfillstyle(SOLID_FILL,BLUE);
								  floodfill(31,231,BLUE);
							   }
						    else
							    {
							       setcolor(RED);
							       circle(50,250,20);
							       setfillstyle(SOLID_FILL,RED);
							       floodfill(50,250,RED);
							    }
							  break;

						 case 5:
							 if(player==player_1)
							    {
								setcolor(BLUE);
								 rectangle(130,230,160,260);
								  setfillstyle(SOLID_FILL,BLUE);
								floodfill(131,231,BLUE);
							    }
						     else
							  {
							      setcolor(RED);
							      circle(150,250,20);
								  setfillstyle(SOLID_FILL,RED);
							      floodfill(150,250,RED);
							  }
							     break;

						 case 6:
							if(player==player_1)
							    {
								  setcolor(BLUE);
								  rectangle(230,230,260,260);
								   setfillstyle(SOLID_FILL,BLUE);
							    floodfill(231,231,BLUE);
							   }
						   else
							   {
								setcolor(RED);
								circle(250,250,20);
								    setfillstyle(SOLID_FILL,RED);
								floodfill(250,250,RED);
							   }
							     break;

						 case 7:
							 if(player==player_1)
							    {
							       setcolor(BLUE);
							       rectangle(30,330,60,360);
								    setfillstyle(SOLID_FILL,BLUE);
								   floodfill(31,331,BLUE);
							    }
						    else
							    {
							       setcolor(RED);
							       circle(50,350,20);
								   setfillstyle(SOLID_FILL,RED);
							       floodfill(50,350,RED);
							    }
							 break;

						 case 8:
							  if(player==player_1)
							    {
							      setcolor(BLUE);
							      rectangle(130,330,160,360);
								   setfillstyle(SOLID_FILL,BLUE);
								  floodfill(131,331,BLUE);
							    }
						     else

							    {
							       setcolor(RED);
							       circle(150,350,20);
								   setfillstyle(SOLID_FILL,RED);
							       floodfill(150,350,RED);
							    }
							    break;

						 case 9:
							  if(player==player_1)
							      {
								 setcolor(BLUE);
								 rectangle(230,330,260,360);
								  setfillstyle(SOLID_FILL,BLUE);
								    floodfill(231,331,BLUE);
							      }
							 else
							      {
								 setcolor(RED);
								 circle(250,350,20);
								 setfillstyle(SOLID_FILL,RED);
								 floodfill(250,350,RED);
							      }
							       break;
						default:
							 printf("WRONG CHOICE !!!");
							 break;
					       }
										   //END OF SWITCH CAS
	    //winning logic for player 1
	   if(player==player_1)
		   {
	       if(MOVE==1 || MOVE==2 || MOVE==3)
			   {
				  total_1=MOVE+total_1;
				    if(total_1==6)
					{
						settextstyle(9,0,4);
						outtextxy(340,250,"PLAYER 1");
						outtextxy(340,330,"WINNER");
						setcolor(14);
						line(0,150,315,150);
						break;
					}
			   }

			   if(MOVE==1 || MOVE==4 || MOVE==7)
			   {
				  total_2=MOVE+total_2;
				    if(total_2==12)
					{
						settextstyle(9,0,4);
						outtextxy(340,250,"PLAYER 1");
						outtextxy(340,330,"WINNER");
						setcolor(14);
						line(55,85,55,415);
						break;
					}
			   }

			   if(MOVE==1 || MOVE==5 || MOVE==9)
			   {
				  total_3=MOVE+total_3;
				    if(total_3==15)
					{
						settextstyle(9,0,4);
						outtextxy(340,250,"PLAYER 1");
						outtextxy(340,330,"WINNER");
						setcolor(14);
						line(0,85,315,415);
						break;
					}
			   }

			   if(MOVE==3 || MOVE==5 || MOVE==7)
			   {
				  total_4=MOVE+total_4;
				    if(total_4==15)
					{
						settextstyle(9,0,4);
						outtextxy(340,250,"PLAYER 1");
						outtextxy(340,330,"WINNER");
						setcolor(14);
                        line(315,85,0,415);
						break;
					}
			   }

			   if(MOVE==2 || MOVE==5 || MOVE==8)
			   {
				  total_5=MOVE+total_5;
				    if(total_5==15)
					{
						settextstyle(9,0,4);
						outtextxy(340,250,"PLAYER 1");
						outtextxy(340,330,"WINNER");
						setcolor(14);
						line(150,85,150,415);
						break;
					}
			   }

			   if(MOVE==3 || MOVE==6 || MOVE==9)
			   {
				  total_6=MOVE+total_6;
				    if(total_6==18)
					{
						settextstyle(9,0,4);
						outtextxy(340,250,"PLAYER 1");
						outtextxy(340,330,"WINNER");
						setcolor(14);
						line(250,85,250,415);
						break;
					}
			   }

			   if(MOVE==4 || MOVE==5 || MOVE==6)
			   {
				  total_7=MOVE+total_7;
				    if(total_7==15)
					{
						settextstyle(9,0,4);
						outtextxy(340,250,"PLAYER 1");
						outtextxy(340,330,"WINNER");
						setcolor(14);
						line(0,250,315,250);
						break;
					}
			   }

			   if(MOVE==7 || MOVE==8 || MOVE==9)
			   {
				  total_8=MOVE+total_8;
				    if(total_8==24)
					{
						settextstyle(9,0,4);
						outtextxy(340,250,"PLAYER 1");
						outtextxy(340,330,"WINNER");
						setcolor(14);
						line(0,350,315,350);
						break;
					}
			   }
		   }

		   // winning for player 2
		   else if(player==player_2)
		   {
	     if(MOVE==1 || MOVE==2 || MOVE==3)
			   {
				  total_9=MOVE+total_9;
				    if(total_9==6)
					{
						settextstyle(9,0,4);
						outtextxy(340,250,"PLAYER 2");
						outtextxy(340,330,"WINNER");
						setcolor(14);
						line(0,150,315,150);
						break;
					}
			   }

			   if(MOVE==1 || MOVE==4 || MOVE==7)
			   {
				  total_10=MOVE+total_10;
				    if(total_10==12)
					{
						settextstyle(9,0,4);
						outtextxy(340,250,"PLAYER 1");
						outtextxy(340,330,"WINNER");
						setcolor(14);
						line(55,85,55,415);
						break;
					}
			   }

			   if(MOVE==1 || MOVE==5 || MOVE==9)
			   {
				  total_11=MOVE+total_11;
				    if(total_11==15)
					{
						settextstyle(9,0,4);
						outtextxy(340,250,"PLAYER 1");
						outtextxy(340,330,"WINNER");
						setcolor(14);
						line(0,85,315,415);
						break;
					}
			   }

			   if(MOVE==3 || MOVE==5 || MOVE==7)
			   {
				  total_12=MOVE+total_12;
				    if(total_12==15)
					{
						settextstyle(9,0,4);
						outtextxy(340,250,"PLAYER 2");
						outtextxy(340,330,"WINNER");
						setcolor(14);
			line(315,85,0,415);
						break;
					}
			   }

			   if(MOVE==2 || MOVE==5 || MOVE==8)
			   {
				  total_13=MOVE+total_13;
				    if(total_13==15)
					{
						settextstyle(9,0,4);
						outtextxy(340,250,"PLAYER 2");
						outtextxy(340,330,"WINNER");
						setcolor(14);
						line(150,85,150,415);
						break;
					}
			   }

			   if(MOVE==3 || MOVE==6 || MOVE==9)
			   {
				  total_14=MOVE+total_14;
				    if(total_14==18)
					{
						settextstyle(9,0,4);
						outtextxy(340,250,"PLAYER 1");
						outtextxy(340,330,"WINNER");
						setcolor(14);
						line(250,85,250,415);
						break;
					}
			   }

			   if(MOVE==4 || MOVE==5 || MOVE==6)
			   {
				  total_15=MOVE+total_15;
				    if(total_15==15)
					{
						settextstyle(9,0,4);
						outtextxy(340,250,"PLAYER 2");
						outtextxy(340,330,"WINNER");
						setcolor(14);
						line(0,250,315,250);
						break;
					}
			   }

			   if(MOVE==7 || MOVE==8 || MOVE==9)
			   {
				  total_16=MOVE+total_16;
				    if(total_16==24)
					{
						settextstyle(9,0,4);
						outtextxy(340,250,"PLAYER 1");
						outtextxy(340,330,"WINNER");
						setcolor(14);
						line(0,350,315,350);
						break;
					}
			   }
		   }
		//end logic
				  }
		       
getch();
}
