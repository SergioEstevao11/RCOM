#include <unistd.h>
#include <signal.h>
#include <stdio.h>

#include "alarme.h"

void atende()                   // atende alarme
{
   printf(" - Alarme ring ring\n");
   flag=1;
   connect_attempt++;
}
