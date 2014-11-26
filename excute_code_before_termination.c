///////////////////////////////////////////////////////////////////////////////////////////////
// C program that excutes a specific code before terminating Program through "Control+C" .
// SIGINT:The SIGINT signal is sent to a process by its controlling terminal when
// a user wishes to interrupt the process.This is typically initiated by pressing Control+C.
// More about unix like system signals http://en.wikipedia.org/wiki/Unix_signal#POSIX_signals 
///////////////////////////////////////////////////////////////////////////////////////////////
// Author: Taha Emara
//
// Youtube Cahnnel : http://www.youtube.com/user/omar0103637
// Facebook Page : https://www.facebook.com/IcPublishes
// Linkedin Profile : http://eg.linkedin.com/pub/taha-emara/a4/1ab/524/
// E-mail : tahaemara.eng@gmail.com
///////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <signal.h>
 
/* Signal Handler for SIGINT */
void sigintHandler(int sig_num)
{
    signal(SIGINT, sigintHandler);//reset signal handler to catch signal next time
    //// wrrite the code that will be excuted before terminating Program through "Control+C" ///// 
    printf("Program will be end >>>> \n");
    fflush(stdout);
    exit(0);//end program
}
 
int main ()
{
     signal(SIGINT, sigintHandler);
     
    /* Infinite loop */
    while(1)
    {       
    }
    return 0;
}
