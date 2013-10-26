#include <stdio.h>
#include <stdlib.h>

int a,b,c;

/////////First Api////////////////
void init() {
  a=0;
  b=0;
  c=0;
  // initial
}

///////Second Api//////////////////
void process(){
	a=a+b+c;
	// process
}

///////Third Api//////////////////
void show(){
	//print
}

int main () {
  init();
  process();
  show();
  return 0;
}