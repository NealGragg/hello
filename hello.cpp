#include <iostream>
#include <unistd.h>
#include <sys/socket.h>

using namespace std;

int main (int argc, char **argv)
{
  int hostInt;
  char hostName[50];

  hostInt = gethostname(hostName, sizeof(hostName));

  if(hostInt == 0)
    {
      std::cout<<"The host machine is "<< hostName <<endl;
    }
  return 0;
}
