#include<stdio.h>
void toggle_every_kth_room(int *lights, int k)
{
  //Code here
}
void turn_on_lights(int *lights)
{
  // Read input till -1 and turn on the lights
  
}
void turn_off_lights(int *lights)
{
  // Read input till -1 and turn on the lights
}
void toggle_even_rooms(int *lights)
{
    //Code here
}
int count_lights(int lights)
{
    //Code here
    return 0;
}

void printBin(int a){
  for(int i =15; i>=0;i--)
    printf("%d", (a>>i) & 1);
  printf("\n");
}

int main()
{
  int lights;
  scanf("%d",&lights);
  int k;
  scanf("%d",&k);
  toggle_every_kth_room(&lights,k);
  if(k==1){
    printf("After toggling every 1st room:");
    printBin(lights);
  }
  else if(k==2){
    printf("After toggling every 2nd room:");
    printBin(lights);
  }
  else if(k==3){
    printf("After toggling every 3rd room:");
    printBin(lights);
  }
  else{
    printf("After toggling every %dth room:",k);
    printBin(lights);
  }
  
  turn_on_lights(&lights);
  printf("After turning ON the given lights:");
  printBin(lights);
  turn_off_lights(&lights);
  printf("After turning OFF the given lights:");
  printBin(lights);
  toggle_even_rooms(&lights);
  printf("After toggling lights in even rooms:");
  printBin(lights);
  int l=count_lights(lights);
  printf("Total number of lights ON = %d\n",l);
  return 0;
}

