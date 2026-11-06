//202610125118
//唐光辉
#include <stdio.h>
struct Sensor
{int temp;
int humi;
int valid;
};
struct Sensor pack_sensor(int t,int h);
int main()
{   struct Sensor sensor_1;
    int t,h;
    scanf("%d %d",&t,&h);
    sensor_1=pack_sensor(t,h);
    if (sensor_1.valid == 1)
        printf("TEMP=%d HUMI=%d\n",sensor_1.temp,sensor_1.humi);
    else if(sensor_1.valid == 0)
    printf("ERROR: Out of Range\n");
}
struct Sensor pack_sensor(int t,int h)
{struct Sensor sensor;
if(-20<t<50 && 0<h<100){
    sensor.temp = t;
    sensor.humi = h;
    sensor.valid = 1;
}
else
    sensor.temp = t;
    sensor.humi = h;
    sensor.valid = 0;
    return sensor;
}