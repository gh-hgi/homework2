//202610125118
//唐光辉
#include<stdio.h>
int m;//采样次数
struct Window
{int buffer[3];
int count;
};
struct Window push_data(struct Window win,int val);//函数原型
int get_average(struct Window win);//函数原型
int main()
{struct Window win = {{0,0,0},0};
    int val;
scanf("%d",&m);
for(int i = 0;i<m;i++)
{   scanf("%d",&val);
    win=push_data(win,val);
    
int avg=get_average(win);
printf("%d ",avg);
    }
}
//定义函数阶段
struct Window push_data(struct Window win,int val)
{
    win.buffer[win.count%3] = val;
    win.count++;
    return win; 
}
int get_average(struct Window win)
{int avg = 0;
    if(win.count < 3)
    {int sum = 0;
    for(int i = 0;i < win.count;i++)
    {sum += win.buffer[i];
    avg = sum/win.count;}}
else if(win.count >= 3){
    avg = (win.buffer[0]+win.buffer[1]+win.buffer[2])/3;
}
    return avg;  }