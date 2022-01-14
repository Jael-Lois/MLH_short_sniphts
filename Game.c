
#include<stdio.h>
#include<time.h>
int main()
{

  int a;
  printf("__________________________________________________________________________");
  printf("\nEnter for choice : 1 or 2");
  printf("\nOrion, its Cat. I need help");
  printf("\nYou'r typing the wrong number(1)");
  printf("\nSorry can't help right now(2)");
  scanf("%d",&a);
  a = a%2 + 1;
  if(a==1)
  {
    printf("\nOh....");
    printf("\nSorry");
    printf("\nMaybe you can help me");
  }
  else if(a==2)
  {
    printf("\nI confirm my request I'm in Berlin");
    printf("\nAndrew gave me this number in case of an emergency");
  }

  printf("\nIt is a matter of life or death");
  printf("\nI really need help now");
  printf("\nOk I will help(1)");
  scanf("%d",&a);
  a = a%2 + 1;
  if(a==1)
  {
    printf("\nThank you");
    printf("\nIt's going to sound totally crazy....");
    printf("\nI'm in a hotel room");
    printf("\nSomeone is trying to pick the lock");
    printf("\nI put a chair against the door and locked myself in the Bathroom");
    printf("\nI don't know what to do");
  }

  printf("\nHide, Quick(1)");
  printf("\nIs there a window(2)");
  scanf("%d",&a);
  a = a%2 + 1;
  if(a==1)
  {
    printf("\nOk....");
    printf("\nI hide myself in the cupboard");
    printf("\nI think they are inside");
    printf("\nThey are comming towards me");
    printf("\nI think there gonna.................");

    printf("\nSignal Lost");
    printf("\nSignal Reconnectin");
    printf("\nCat was kidnapped");
    goto Begin;
  }
  else if(a==2)
  {
    printf("\nYes, but it is kinda high");
    printf("\nOh.... wait there is a dumpster");
    printf("\nIt is full");
    printf("\nWhat should I do now");
  }

  printf("\nJump(1)");
  printf("\nCall for help(2)");
  scanf("%d",&a);
  a = a%2 + 1;
  if(a==1)
  {
    printf("\nOk...........");
    printf("\nI landed badly and my arm is hurt");
    printf("\nIt's bleeding and it hurts badly");
    printf("\nWhat should I do");
  }
  else if(a==2)
  {
    printf("\nOk................");
    printf("\nThey found me");
    printf("\nI...................");
    printf("\nSignal Lost");
    printf("\nSignal Reconnectin");
    printf("\nCat was shot");
    goto Begin;
  }

  printf("\nTake it out(1)");
  printf("\nIt's risky if an artery is involved(2)");
  scanf("%d",&a);
  a = a%2 + 1;
  if(a==1)
  {
    printf("\nOk..........");
    printf("\nOuch!");
    printf("\nOk but it is not bleeding much as I expected ");
  }
  else if(a==2)
  {
    printf("\nYea you are right");
    printf("\nI know a vet nearby and.........");
  }

  printf("\nWhat!");
  printf("\nThis whole area is under surveillance");
  printf("\nMen in black");
  printf("\n I need to get out of here");
  printf("\nAny ideas???");
  printf("\nHug the walls(1)");
  printf("\nRun as fast as you can(2)");
  scanf("%d",&a);
  a = a%2 + 1;
  if(a==1)
  {
    printf("\nSounds reasonable");
    printf("\nI will text you once I am out");
  }
  else if(a==2)
  printf("\nHope I did not skip those gym lessons");

  printf("\nCat is busy......");

  printf("\nThey are after me");
  printf("\nI just hid in a narrow alley");
  printf("\nI am out of breath");
  printf("\nStay hidden(1)");
  printf("\nWhy are they chasing you?(2)");
  scanf("%d",&a);
  a = a%2 + 1;
  if(a==1)
  printf("Ok....");
  else if(a==2)
  printf("I will tell you everything later when I get out of here");

  printf("\nThey are coming toward me...........");
  printf("\nThey caught up with me!");
  printf("\nI am trapped inside a trunk of a car");
  printf("\nGood thing I hid my phone just in time");
  printf("\nThere's got to be a way out of this car");
  printf("\nLook for a trunk release(1)");
  printf("\nTry to kick the trunk open(2)");
  scanf("%d",&a);
  a = a%2 + 1;
  if(a==1)
  {
    printf("\nI can't find anything");
    printf("\nOnly thing I found is a screwdriver, a wrench and a wire cutter");
  }
  else if(a==2)
  {
    printf("\nI can't");
    printf("\nMaybe if I kick harder");
    printf("\nIt worked");
    printf("\nOh n......................");
    printf("\nSignal Lost");
    printf("\nSignal Reconnectin");
    printf("\nCat was shot");
    goto Begin;
  }

  printf("\nTry to pick the lock(1)");
  printf("\nBreak the lock by using the wrench(2)");

  printf("\nOk... the car is slowing down");
  printf("\nGo!");

  printf("\nCat is busy");

  printf("\nI am out");
  printf("\nThanks for the help");

  printf("\nI am in the vet");
  printf("\nI will contact you again when I am fixed up");

  printf("\nCat is busy");

  printf("\nIt cost me a few stiches but nothing serious\nWell\n I think I owe you some explanation\nI guess all this must look preety shady to you\nI am gonna tell uou what happened to me aver the past few days");
  printf("\nAlthough I do not clearly understand all that is going on myself \nAnyway\nHere are the facts\n i am a journalish for a cultural magazine\nI recived a mysterious letter a week ago \nIt only contained a USB stick with wedding pictures writen on it \nBut when I looked into it there was no pictures\nIt was full of work documents");
  printf("\nAt the time\n I thought it was just a mistake\n Then\nThree days ago\n I recived a weird email from Andrew(childhood friend)");
  printf("\nI was supposed to meet him yesterday But he posponded the meeting");
  printf("I felt like begin spied");
  printf("Andrew told me to be careful and bring the wedding pictures with me");
  printf("\nSo I moved to a hotel");
  printf("\nAnd changed my phone into a disposable one");
  printf("\nYou know they can't track you GPS and all");
  printf("\nHe gave me this number in case of emergency");
  printf("\nAnd you are the one who answered the phone");
  printf("\nAnyway thanks again");
  printf("\nBye");

  Begin:

  return 0;
}
