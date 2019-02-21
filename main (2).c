#include <kipr/botball.h>

int main()
{
    wait_for_light(0);
    shut_down_in(119);
    enable_servos();                  
    printf("Hello World\n");
    create_connect();
    set_servo_position(0,0);
    set_servo_position(2,2047);
    ao();
    create_drive_direct(200,200);
    msleep(1200);
    ao();
    set_servo_position(0,1614);
    msleep(1000);
    ao();
    set_servo_position(2,144);
    ao();
    create_drive_direct(0,0);
    msleep(5000);
    ao();
    create_drive_direct(50,-50);
    msleep(3500);
    ao();
    create_drive_direct(200,200);
    msleep(2000);
    ao();
    create_drive_direct(0,0);
    msleep(1000);
    set_servo_position(2,2047);
    msleep(1000);
    ao();
    create_drive_direct(-200,200);
    msleep(400);
    ao();
    create_drive_direct(200,200);
    set_servo_position(0,1346);
    msleep(1700);
    ao();
    create_drive_direct(0,0);
    msleep(1700);
    ao();
    set_servo_position(2,144);
    ao();
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    disable_servos();
    create_stop();
    create_disconnect();
    return 0;
}

