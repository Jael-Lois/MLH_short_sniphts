
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{

  int a;

  Begin:

  system("cls");

  printf("This game is created by Jael Lois \n Github Handle - Jael-Lois\n\n\n\n");

  printf("\nEnter for choice : 1 or 2");
  printf("\n__________________________________________________________________________");
  sleep(2);
  printf("\n\nOrion, its Cat. I need help");sleep(2);
  printf("\n\nCHOICE");
  printf("\nYou'r typing the wrong number(1)");
  printf("\nSorry can't help right now(2)");sleep(2);
  scanf("%d",&a);
  a = a>2 ? a%2 + 1 : a;
  if(a==1)
  {
    printf("\nOh....");sleep(2);
    sleep(2);
    printf("\nSorry");sleep(2);
    sleep(2);
    printf("\nMaybe you can help me");sleep(2);
    sleep(2);
  }
  else if(a==2)
  {
    printf("\nI confirm my request I'm in Berlin");
    sleep(2);
    printf("\nAndrew gave me this number in case of an emergency");
    sleep(2);
  }

  printf("\nIt is a matter of life or death");
  sleep(2);
  printf("\nI really need help now");sleep(2);

  printf("\n\nCHOICE");
  printf("\nOk I will help(1)");
  printf("\nI am bloking this number(2)")
  scanf("%d",&a);


  if(a==1)
  {
    printf("\nThank you");
    sleep(2);
    printf("\nIt's going to sound totally crazy....");
    sleep(2);
    printf("\nI'm in a hotel room");
    sleep(2);
    printf("\nSomeone is trying to pick the lock");
    sleep(2);
    printf("\nI put a chair against the door and locked myself in the Bathroom");
    sleep(2);
    printf("\nI don't know what to do");
    sleep(2);
  }
  else
  {
    printf("But I.........");
    goto Begin;
  }
  sleep(2);
  printf("\n\nCHOICE");
  printf("\nHide, Quick(1)");
  printf("\nIs there a window(2)");sleep(2);
  scanf("%d",&a);
  a = a>2 ? a%2 + 1 : a;
  if(a==1)
  {
    printf("\nOk....");
    sleep(2);
    printf("\nI hide myself in the cupboard");sleep(2);
    printf("\nI think they are inside");sleep(2);
    printf("\nThey are comming towards me");sleep(2);
    printf("\nI think there gonna.................");sleep(4);

    printf("\nSignal Lost");sleep(2);
    printf("\nSignal Reconnectin");sleep(2);
    printf("\nCat was kidnapped");
    goto Begin;
  }
  else if(a==2)
  {
    printf("\nYes, but it is kinda high");sleep(2);
    printf("\nOh.... wait there is a dumpster");sleep(2);
    printf("\nIt is full");sleep(2);
    printf("\nWhat should I do now");sleep(2);
  }
  printf("\n\nCHOICE");
  printf("\nJump(1)");
  printf("\nCall for help(2)");sleep(2);
  scanf("%d",&a);
  a = a>2 ? a%2 + 1 : a;
  if(a==1)
  {
    printf("\nOk...........");sleep(2);
    printf("\nI landed badly and my arm is hurt");sleep(2);
    printf("\nIt's bleeding and it hurts badly");sleep(2);
    printf("\nWhat should I do");sleep(2);
  }
  else if(a==2)
  {
    printf("\nOk................");sleep(2);
    printf("\nThey found me");sleep(2);
    printf("\nI...................");sleep(2);
    printf("\nSignal Lost");sleep(2);
    printf("\nSignal Reconnecting");sleep(2);
    printf("\nCat was shot");
    goto Begin;
  }
  printf("\n\nCHOICE");
  printf("\nTake it out(1)");
  printf("\nIt's risky if an artery is involved(2)");sleep(2);
  scanf("%d",&a);
  a = a>2 ? a%2 + 1 : a;
  if(a==1)
  {
    printf("\nOk..........");sleep(2);
    printf("\nOuch!");sleep(2);
    printf("\nOk but it is not bleeding much as I expected ");sleep(2);
  }
  else if(a==2)
  {
    printf("\nYea you are right");sleep(2);
    printf("\nI know a vet nearby and.........");sleep(2);
  }

  printf("\nWhat!");sleep(2);
  printf("\nThis whole area is under surveillance");sleep(2);
  printf("\nMen in black");sleep(2);
  printf("\n I need to get out of here");sleep(2);
  printf("\nAny ideas???");sleep(2);
  printf("\n\nCHOICE");
  printf("\nHug the walls(1)");
  printf("\nRun as fast as you can(2)");sleep(2);
  scanf("%d",&a);
  a = a>2 ? a%2 + 1 : a;
  if(a==1)
  {
    printf("\nSounds reasonable");sleep(2);
    printf("\nI will text you once I am out");sleep(2);
  }
  else if(a==2)
  printf("\nHope I did not skip those gym lessons");sleep(2);

  printf("\nCat is busy......");
  sleep(60);

  printf("\nThey are after me");sleep(2);
  printf("\nI just hid in a narrow alley");sleep(2);
  printf("\nI am out of breath");sleep(2);
  printf("\n\nCHOICE");
  printf("\nStay hidden(1)");
  printf("\nWhy are they chasing you?(2)");
  scanf("%d",&a);
  a = a>2 ? a%2 + 1 : a;
  if(a==1)
  {printf("Ok....");
  sleep(2);}
  else if(a==2)
  printf("I will tell you everything later when I get out of here");sleep(2);

  printf("\nThey are coming toward me...........");sleep(20);
  printf("\nThey caught up with me!");sleep(2);
  printf("\nI am trapped inside a trunk of a car");sleep(2);
  printf("\nGood thing I hid my phone just in time");sleep(2);
  printf("\nThere's got to be a way out of this car");sleep(2);
  printf("\n\nCHOICE");
  printf("\nLook for a trunk release(1)");
  printf("\nTry to kick the trunk open(2)");
  scanf("%d",&a);
  a = a>2 ? a%2 + 1 : a;
  if(a==1)
  {
    printf("\nI can't find anything");sleep(2);
    printf("\nOnly thing I found is a screwdriver, a wrench and a wire cutter");sleep(2);
  }
  else if(a==2)
  {
    printf("\nI can't");sleep(2);
    printf("\nMaybe if I kick harder");sleep(2);
    printf("\nIt worked");sleep(2);
    printf("\nOh n......................");sleep(3);
    printf("\nSignal Lost");sleep(2);
    printf("\nSignal Reconnecting");sleep(2);
    printf("\nCat was shot");
    goto Begin;
  }
  printf("\n\nCHOICE");
  printf("\nTry to pick the lock(1)");
  printf("\nBreak the lock by using the wrench(2)");
  scanf("%d",&a);

  printf("\nOk... the car is slowing down");sleep(2);
  printf("\nGo!");sleep(2);

  printf("\nCat is busy");sleep(60);

  printf("\nI am out");sleep(2);
  printf("\nThanks for the help");sleep(2);

  printf("\nI am in the vet");sleep(2);
  printf("\nI will contact you again when I am fixed up");sleep(2);

  printf("\nCat is busy");
  sleep(60);

  printf("\nIt cost me a few stiches but nothing serious\n");sleep(2);
  printf("Well\n");
  printf(" I think I owe you some explanation\n");sleep(2);
  printf("I guess all this must look preety shady to you\n");sleep(2);
  printf("I am gonna tell uou what happened to me aver the past few days");sleep(2);

  printf("\nAlthough I do not clearly understand all that is going on myself \n");sleep(2);
  printf("Anyway\n");sleep(2);
  printf("Here are the facts\n");sleep(2);
  printf(" i am a journalish for a cultural magazine\n");sleep(2);
  printf("I recived a mysterious letter a week ago \n");sleep(2);
  printf("It only contained a USB stick with wedding pictures writen on it \n");sleep(2);
  printf("But when I looked into it there was no pictures\n");sleep(2);
  printf("It was full of work documents");sleep(2);

  printf("\nAt the time\n");sleep(2);
  printf(" I thought it was just a mistake");sleep(2);
  printf("\n Then\n");sleep(2);
  printf("Three days ago\n");sleep(2);
  printf(" I recived a weird ema;zil from Andrew(childhood friend)");sleep(2);

  printf("\nI was supposed to meet him yesterday But he posponded the meeting");sleep(2);
  printf("I felt like begin spied");sleep(2);
  printf("Andrew told me to be careful and bring the wedding pictures with me");sleep(2);
  printf("\nSo I moved to a hotel");sleep(2);
  printf("\nAnd changed my phone into a disposable one");sleep(2);
  printf("\nYou know they can't track you GPS and all");sleep(2);
  printf("\nHe gave me this number in case of emergency");sleep(2);
  printf("\nAnd you are the one who answered the phone");sleep(2);
  printf("\nAnyway thanks again");sleep(4);

  char name[20];
  printf("\n\nWell I think I have to go to see Andrew\n");sleep(2);
  printf("Well I am Cat but you already know that\n");sleep(2);
  printf("What is your name by the name ?\n");
  scanf("%s",name);
  printf("Well nice to meet you %s",name);

  printf("\n\nCHOICE");
  printf("\n....(1)");
  printf("\nSo am I(2)");
  scanf("%d",&a);

  printf("\nI will tell you one I am there %s",name);sleep(2);
  printf("\nCat is busy");sleep(50);

  printf("\nThey have killed him!");sleep(2);

  printf("\n\nCHOICE");
  printf("\nCalm down I am listening(1)");
  printf("What?(2)");
  scanf("%d",&a);

  printf("\nThey have killed, I know it");sleep(2);
  printf("\nI showed up at the meeting place");sleep(2);
  printf("\nThere was an ambulance");sleep(2);
  printf("\nThere was a big crowd");sleep(2);
  printf("\nAnd I SAW HIM DEAD!");sleep(2);

  printf("\n\nCHOICE");
  printf("\nYou need to get to a safe place(1)");
  printf("\nWill you be safe there?(2)");

  printf("\nYou are right I have to keep these files safe");sleep(2);
  printf("\nI am going to Raw Temple");sleep(2);
  printf("\nThere is a person named Marcos");sleep(2);
  printf("\nHe will help me to take a look at these files");sleep(2);
  printf("\nI need to get there safe");sleep(2);
  printf("\nTell me a safe route to get there");sleep(2);

  printf("\n\nCHOICE");
  printf("\nYou should disguise yourself as something(1)");
  printf("\nYou can go by bus(2)");
  scanf("%d",&a);

  if(a==1)
  {
    printf("\nWell I did not think of that");sleep(2);
    printf("\nBut I don't have time");sleep(2);
  }

  printf("\nI think I am gonna go by bus");sleep(2);
  printf("\nI will text you when I am there");sleep(2);
  printf("\nCat is busy");sleep(50);


  printf("\nI just feel like someone is gonna come inside the bus and shot me");sleep(2);
  printf("\nI am still freking out");sleep(2);
  printf("\nNote to self:Don't die");sleep(2);
  printf("\nWhat a wonderful plan!");sleep(2);
  printf("\nSorry I text a lot when I am FREKING OUT");sleep(50);
  printf("\nCat is busy");sleep(2);

  printf("\nI am here");sleep(2);
  printf("\nI am gonna have something eat or drink");sleep(2);
  printf("\nI am the kind of person who likes to have both");sleep(2);
  printf("\nAnd some rest OF COURSE");sleep(50);
  printf("\nCat is busy");sleep(2);





  goto Begin;

  return 0;

}
