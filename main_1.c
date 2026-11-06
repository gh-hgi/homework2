//202610125118
//唐光辉
# include <stdio.h>
struct Player
{ char name[16];//选手名
int score;//选手分数
};
int n;//选手人数
struct Player arr[10];
void sort_players(struct Player arr[10],int n);//原型声明
int main(){
    scanf("%d",&n);
    for(int i = 0;i < n;i++)
        scanf("%s %d",arr[i].name,&arr[i].score);
    sort_players(arr,n);
        for(int j = 0;j < n;j++)
        printf("%d %s %d\n",j+1,arr[j].name,arr[j].score);
}
void sort_players(struct Player arr[10],int n)//定义冒泡排序函数
{for(int i=0; i<n-1;i++){
    for(int j=0;j<n-i-j;j++ ){
        if(arr[j].score < arr[j+1].score){
            struct Player temp;
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}

}