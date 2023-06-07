#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int stime[6]={0,0,0,0,0,0};
int etime[6]={0,0,0,0,0,0};
int normalState[6] = {0,0,0,0,0,0};
int stimeHandi[2]={0,0};
int etimeHandi[2]={0,0};
int handiState[2]={0,0};
int stimeErc[2]={0,0};
int etimeErc[2]={0,0};
int ercState[2]={0,0};
int stimeLight[2] = {0, 0};   
int etimeLight[2] = {0, 0};   
int LightState[2] = {0, 0};

int checktime() //시간 재는 함수  
{
  int t;
  t = time(NULL);
  return t;
}

int scan()  
{
  int n;
  scanf("%d",&n);
  return n;
}


void loding(){
  system("cls");
  printf("\033[1;H  _      _____   ___  ______  _____  _   _  _____ ");
  printf("\033[2;H | |    |  _  | / _ \\ |  _  \\|_   _|| \\ | ||  __ \\");
  sleep(1);
  printf("\033[3;H | |    | | | |/ /_\\ \\| | | |  | |  |  \\| || |  \\/");
  printf("\033[4;H | |    | | | ||  _  || | | |  | |  | . ` || | __ ");
  sleep(1);
  printf("\033[5;H | |____| |_| || | | || |/ /  _| |_ | |\\  || |_\\ \\");
  printf("\033[6;H |_____/|_____||_| |_||___/  |_____||_| \\_/ \\____/");
  sleep(1);
  system("cls");
  return;
   
  
}
void parking(){
  int n = 1;
    printf("\033[1;H  __      ______   ___  ______  _   __ _____  _   _  _____  ");
     printf("\033[2;H /  |     | ___ \\ / _ \\ | ___ \\| | / /|_   _|| \\ | ||  __ \\  ");
     printf("\033[3;H `| |     | |_/ // /_\\ \\| |_/ /| |/ /   | |  |  \\| || |  \\/ ");
     printf("\033[4;H  | |     |  __/ |  _  ||    / |    \\   | |  | . ` || | __  ");
     printf("\033[5;H _| |_ _  | |    | | | || |\\ \\ | |\\  \\ _| |_ | |\\  || |_\\ \\ ");
     printf("\033[6;H \\___/(_) |_|    |_| |_/|_| \\_||_| \\_/|_____||_| \\_/ \\____/ ");


  return;

}
void leaving(){
   int n = 1;
     printf("\033[8;H  _____      _      _____   ___   _   _  _____  _   _  _____  ");
     printf("\033[9;H / __  \\    | |    |  ___| / _ \\ | | | ||_   _|| \\ | ||  __ \\ ");
     printf("\033[10;H `' / /     | |    | |__  / /_\\ \\| | | |  | |  |  \\| || |  \\/ ");
     printf("\033[11;H   / /      | |    |  __| |  _  || | | |  | |  | . ` || | __  ");
     printf("\033[12;H  / /___ _  | |____| |___ | | | |\\ \\_/ / _| |_ | |\\  || |_\\ \\ ");
     printf("\033[13;H \\_____/(_) |_____/|____/ |_| |_/ \\___/ |_____||_| \\_/ \\____/ ");


}


void exiting(){
  int n=1;
     printf("\033[15;H  _____      _____ __   __ _____  _____  ");
     printf("\033[16;H |____ |    |  ___|\\ \\ / /|_   _||_   _| ");
     printf("\033[17;H     / /    | |__   \\ V /   | |    | |   ");
     printf("\033[18;H     \\ \\    |  __|  /   \\   | |    | |   ");
     printf("\033[19;H  ___/ / _  | |___ / /^\\ \\ _| |_   | |   ");
     printf("\033[20;H \\____/ (_) |____/ \\/   \\/|_____|  \\_/   ");

  return;
}
void view(){
   int n = 1;
     printf("\033[22;H    ___      _   _  _____  _____  _    _  ");
     printf("\033[23;H   /   |    | | | ||_   _||  ___|| |  | | ");
     printf("\033[24;H  / /| |    | | | |  | |  | |__  | |  | | ");
     printf("\033[25;H / /_| |    | | | |  | |  |  __| | |/\\| | ");
     printf("\033[26;H \\___  | _  \\ \\_/ / _| |_ | |___ \\  /\\  / ");
     printf("\033[27;H     |_/(_)  \\___/ |_____||____/  \\/  \\/  ");

  return;

}
void normal_park(int *st,int *state) //주차 함수  
{
  if(*state == 0)
  {
    *state = 1;
    *st = checktime();
    printf("주차완료되었습니다.\n");
    
  }
  else
  {
    printf("차량이 이미 있습니다.\n");  
  }
}
void normal_out(int *st,int *et,int *state) //출차 및 주차요금 계산함수  
{
  if(*state == 0)
        {
          printf("차량이 없습니다.\n");
          
        }
        else
        {
          *et = checktime();
          printf("시간은 %d초 입니다.주차 요금은 %.0f입니다. 안녕히 가십시오.\n",*et - *st,(*et - *st)*1.2); //주차 요금: 초 * 1.2원  
          *state = 0;
          
        }
}

void Printnormalline(int *normalState) // 일반 주차구역  
{
   int n; 
  for(n=1;n<=6;n++){
    if(normalState[n-1]==0)
   {
         printf("\033[4;%dH----------",9*n-8);
        printf("\033[5;%dH|        |",9*n-8);
        printf("\033[6;%dH|        |",9*n-8);
        printf("\033[7;%dH|        |",9*n-8);
        printf("\033[8;%dH|   n%d   |",9*n-8, n);
        printf("\033[9;%dH|        |",9*n-8);
       printf("\033[10;%dH|        |",9*n-8);
       printf("\033[11;%dH|        |",9*n-8);
       printf("\033[12;%dH----------",9*n-8);
    }
    else
   {
       printf("\033[4;%dH----------\n",9*n-8);
       printf("\033[5;%dH|   __   |\n",9*n-8);
       printf("\033[6;%dH| _q  p_ |\n",9*n-8);
        printf("\033[7;%dH||      ||\n",9*n-8);
        printf("\033[8;%dH||  P%d  ||\n",9*n-8, n);
        printf("\033[9;%dH||      ||\n",9*n-8);
        printf("\033[10;%dH||_    _||\n",9*n-8);
        printf("\033[11;%dH|  d__b  |\n",9*n-8);
       printf("\033[12;%dH----------\n",9*n-8);
    
      
    }
    printf("\n");

  }
  return;
   
}

void Printercline(int *ercState) // 전기차 주차구역  
{
   int n;
  for(n=1;n<=2;n++){
    if(ercState[n-1]==0)
   {
       printf("\033[13;%dH----------\n", 9*n-8);
         printf("\033[14;%dH|   /    |\n", 9*n-8);
       printf("\033[15;%dH|  /     |\n", 9*n-8);
       printf("\033[16;%dH| /      |\n", 9*n-8);
       printf("\033[17;%dH|  -n%d-  |\n", 9*n-8, n);
       printf("\033[18;%dH|      / |\n", 9*n-8);
       printf("\033[19;%dH|     /  |\n", 9*n-8);
       printf("\033[20;%dH|    /   |\n", 9*n-8);
       printf("\033[21;%dH----------\n", 9*n-8);
    }
    else
   {
       printf("\033[13;%dH----------\n", 9*n-8);
       printf("\033[14;%dH|   __   |\n", 9*n-8);
       printf("\033[15;%dH| _q  p_ |\n", 9*n-8);
       printf("\033[16;%dH||  EV  ||\n", 9*n-8);
       printf("\033[17;%dH||  P%d  ||\n", 9*n-8, n);
       printf("\033[18;%dH|| PARK ||\n", 9*n-8);
       printf("\033[19;%dH||_    _||\n", 9*n-8);
       printf("\033[20;%dH|  d__b  |\n", 9*n-8);
       printf("\033[21;%dH----------\n", 9*n-8);

    }
  

   
  }
  return;
   
}

void Printlightline(int *LightState) //경차 주차구역  
{
   int n;
  for(n=1;n<=2;n++)
  {
    if(LightState[n-1]==0)
   {
         printf("\033[13;%dH---------\n",9*n+10);
        printf("\033[14;%dH|        |\n",9*n+10);
        printf("\033[15;%dH|        |\n",9*n+10);
        printf("\033[16;%dH|   n%d   |\n",9*n+10, n);
        printf("\033[17;%dH|        |\n",9*n+10);
        printf("\033[18;%dH|        |\n",9*n+10);
        printf("\033[19;%dH----------\n",7*n+13);
    }
      
    else
   {
         printf("\033[13;%dH---------\n",9*n+10);
        printf("\033[14;%dH|   __   |\n",9*n+10);
        printf("\033[15;%dH| _q  p_ |\n",9*n+10);
        printf("\033[16;%dH||  P%d  ||\n",9*n+10, n);
        printf("\033[17;%dH||_    _||\n",9*n+10);
        printf("\033[18;%dH|  d__b  |\n",9*n+10);
         printf("\033[19;%dH----------\n",7*n+13);
   }

  } 
    
  return;
   
}
void Printhandiline(int *handiState) // 장애인 주차구역  
{
   int n;
  for(n=1;n<=2;n++){
    if(handiState[n-1]==0)
   {
         printf("\033[13;%dH------------\n",11*n+26);
        printf("\033[14;%dH| HandiCap |\n",11*n+26);
        printf("\033[15;%dH|          |\n",11*n+26);
        printf("\033[16;%dH|          |\n",11*n+26);
        printf("\033[17;%dH|          |\n",11*n+26);
        printf("\033[18;%dH|    n%d    |\n",11*n+26, n);
        printf("\033[19;%dH|          |\n",11*n+26);
        printf("\033[20;%dH|          |\n",11*n+26);
        printf("\033[21;%dH|          |\n",11*n+26);
        printf("\033[22;%dH|   PARK   |\n",11*n+26);
        printf("\033[23;%dH------------\n",11*n+26);
      
    }
     else
   {
          printf("\033[13;%dH------------\n",11*n+26);
          printf("\033[14;%dH| HandiCap |\n",11*n+26);
        printf("\033[15;%dH|    __    |\n",11*n+26);
        printf("\033[16;%dH|  _q  p_  |\n",11*n+26);
        printf("\033[17;%dH| |      | |\n",11*n+26);
       printf("\033[18;%dH| |  P%d  | |\n",11*n+26, n);
       printf("\033[19;%dH| |      | |\n",11*n+26);
       printf("\033[20;%dH| |_    _| |\n",11*n+26);
       printf("\033[21;%dH|   d__b   |\n",11*n+26);
       printf("\033[22;%dH|   PARK   |\n",11*n+26);
          printf("\033[23;%dH------------\n",11*n+26);

    }

  }
  return;
   
}




int main()
{
  int stime[6]={0,0,0,0,0,0};
  int etime[6]={0,0,0,0,0,0};
  int normalState[6] = {0,0,0,0,0,0};
  int stimeHandi[2]={0,0};
  int etimeHandi[2]={0,0};
  int handiState[2]={0,0};
  int stimeErc[2]={0,0};
  int etimeErc[2]={0,0};
  int ercState[2]={0,0};
  int stimeLight[2] = {0, 0};   
  int etimeLight[2] = {0, 0};   
  int LightState[2] = {0, 0};   
  
  int pick;
  int state =1;
  int n;
  while(state == 1)
  {  
    system("cls");
    parking();
    leaving();
    view();
    exiting();

    printf("\n\n\n\n\n\n\n\n입력 : ");
    pick = scan();
    loding();
    switch(pick)
    {
      case 1: // PARKING 메뉴 선택 시 자리 종류 선택 및 주차 할 자리를 선택한다.
        fflush(NULL);
        printf("자리 종류 입력 1:일반 2:장애인 3:전기차 4:경차 : ");
        n = scan();
       
        switch(n)
        {
          case 1: //일반 주차구역
            
            Printnormalline(&normalState);
            printf("자리 입력(숫자만 입력해 주세요) : ");
            n = scan();
            loding();
            normal_park(&stime[n-1],&normalState[n-1]);
            break;
          case 2: //장애인 주차구역
            Printhandiline(&handiState);
            printf("자리 입력(숫자만 입력해 주세요) : ");
            n = scan();
            loding();
            normal_park(&stimeHandi[n-1],&handiState[n-1]);
            break;
          case 3: //전기차 주차구역
            Printercline(&ercState);
            printf("자리 입력(숫자만 입력해 주세요) : ");
            n = scan();
            loding();
            normal_park(&stimeErc[n-1], &ercState[n-1]);
            break;
          case 4: //경차 주차구역
            Printlightline(&LightState);
            printf("자리 입력(숫자만 입력해 주세요) : ");
            n = scan();
            loding();
            normal_park(&stimeLight[n - 1], &LightState[n - 1]);
            break;
                
          default:
            printf("잘못된 입력입니다.\n");
        }
        
        break;
      case 2: // LEAVING 메뉴 선택 시 자리 종류 선택 및 출차 할 차를 선택한다.  
        fflush(NULL);
        printf("자리 종류 입력 1:일반 2:장애인 3:전기차 4.경차 : ");
        n = scan();
        
       
        switch(n)
        {
          case 1: //일반 주차구역
            Printnormalline(&normalState);
            printf("자리 입력(숫자만 입력해 주세요) : ");
            n = scan();
            loding();
            normal_out(&stime[n-1],&etime[n-1],&normalState[n-1]);
            break;
          case 2: //장애인 주차구역
            Printhandiline(&handiState);
            printf("자리 입력(숫자만 입력해 주세요) : ");
            n = scan();
            loding();
            normal_out(&stimeHandi[n-1],&etimeHandi[n-1],&handiState[n-1]);
            break;
          case 3: //전기차 주차구역
            Printercline(&ercState);
            printf("자리 입력(숫자만 입력해 주세요) : ");
            n = scan();
            loding();
            normal_out(&stimeErc[n-1],&etimeErc[n-1],&ercState[n-1]);
            break;
          case 4: //경차 주차구역
            Printlightline(&LightState);
            printf("자리 입력(숫자만 입력해 주세요) : ");
            n = scan();
            loding();
            normal_out(&stimeLight[n - 1], &etimeLight[n - 1], &LightState[n - 1]);
            break;
          default:
            printf("잘못된 입력입니다.\n");
        }
        
        break;
       case 3: //EXIT 메뉴 선택 시 현재 주차 현황을 보여준 후 종료한다.
           state = 0;
           Printnormalline(&normalState);
           Printhandiline(&handiState);
           Printercline(&ercState);
           Printlightline(&LightState);
           sleep(3);
           break; 
         case 4: //VIEW 메뉴 선택 시 현재 주차 현황을 보여준다. 
        
           Printnormalline(&normalState);
           Printhandiline(&handiState);
           Printercline(&ercState);
           Printlightline(&LightState);
           printf("\n\n\n\n\n메뉴로 돌아가시려면 아무 숫자나 눌러주세요.");
           n = scan();
           if(n == 1)
         {
              break;
         }
           else
           {
              break;
              
         }
        default:
           printf("잘못된 입력입니다.\n");
      
    }
    sleep(2);
    system("cls");
  }
    
  
  return 0;
}
