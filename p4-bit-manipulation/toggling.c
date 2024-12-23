#include<stdio.h>
void toggle(int *lights, int k)
{
  //Code here
}
void turn_on(int *lights, int k)
{
  //Code here
}
void turn_off(int *lights, int k)
{
  //Code here
}
void alternate_pattern(int *lights)
{
    //Code here
}
int count_lights(int lights)
{
    //Code here
    return 0;
}
int main()
{
  long lights;
  scanf("%d",&lights);
  int k;
  scanf("%d",&k);
  toggle(&lights,k);
  if(k==1)
    printf("After toggling every 1st room:%d",lights);
  else if(k==2)
    printf("After toggling every 2nd room:%d",lights);
  else if(k==3)
      printf("After toggling every 3rd room:%d",lights);
  else
    printf("After toggling every %dth room:%d",k,lights);
  scanf("%d",&k);
  while(k!=-1)
  {
    turn_on(&lights,k);
    scanf("%d",&k);
  }
  printf("After turning ON lights for maintenance: %d",lights);
  scanf("%d",&k);
  while(k!=-1)
  {
    turn_off(&lights,k);
    scanf("%d",&k);
  }
  printf("After turning OFF lights to save energy: %d",lights);
  alternate_pattern(&lights);
  printf("After applying alternate lighting pattern: %d",lights);
  int l=count_lights(lights);
  printf("Total number of lights ON = %d",l);
  return 0;
}
