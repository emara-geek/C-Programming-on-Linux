///////////////////////////////////////////////////////////////////////////////////////////////
// this program print output of any shell command 
///////////////////////////////////////////////////////////////////////////////////////////////
// Author: Taha Emara
//
// Youtube Cahnnel : http://www.youtube.com/user/omar0103637
// Facebook Page : https://www.facebook.com/IcPublishes
// Linkedin Profile : http://eg.linkedin.com/pub/taha-emara/a4/1ab/524/
// E-mail : tahaemara.eng@gmail.com
///////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int main()
{

  FILE *fp;
  char path[1035];

  /* Open the command for reading. */
  fp = popen("dmesg  | grep -i usb ", "r"); 
   //"dmesg |grep -i usb " is a shell command you can replace it with "ls" or "pwd" or any shell command 
   //"r" parameter to read output of command
  if (fp == NULL) {
    printf("Failed to run command\n" );
    exit(1);
  }

  /* Read the output a line at a time - output it. */
  while (fgets(path, sizeof(path)-1, fp) != NULL) {
    printf("%s", path);
  }

  /* close */
  pclose(fp);

  return 0;
}


