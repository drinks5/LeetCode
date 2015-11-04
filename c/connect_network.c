#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/*
automatic connect the network
by Wifi or Eth
*/
char* Get_Connect_Mode();
int Judge_Wifi_Or_Not();
//bool Judge_Gaming_Or_Not();
void Set_Dhcp();
void Set_Static();

int main()
{
    int key_connect;
    char* type;
    printf("please input connect mode:\n");
    printf("Wifi or not?\n");
    scanf("%s",type);
    key_connect = Judge_Wifi_Or_Not();
    switch(key_connect)
    {
    case 1:
        Set_Dhcp(type);
        break;
    case 0:
        Set_Static();
        break;
    default:
        printf("input error,please input again\n");
    }
    return 0;
}

int Judge_Wifi_Or_Not()
{
    char key;
    printf("please select Wifi or not\n");
    scanf("%c",&key);
    printf("%c\n",key);
    if(key == 'y' || key == 'Y')
    {
        return 1;
    }
    else if(key == 'n'|| key == 'N')
    {
        return 0;
    }
    else
        return -1;
}
void Set_Dhcp(char* type)
{
    system("netsh interface ip set address name=type source=dhcp");
    system("netsh interface ip set dns name=""ÒÔÌ«Íø"" source=dhcp");
    printf("netsh set dhcp sucessful");
}

void Set_Static()
{
    system("netsh interface ip set address name=""WiFi"" source=static addr=192.168.0.123 mask=255.255.255.0 gateway=192.168.0.1 gwmetric=1");
    system("netsh interface ip set dns name=""WiFi"" source=static 8.8.8.8");
    printf("netsh set static sucessful");
}
