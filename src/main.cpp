# include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  char line[256], grrms[256], node[256], filename[256];
  FILE *fp = fopen(argv[1],"r");
  sprintf(node,"%s",argv[2]);
  

  while( fgets(line,256,fp) ) {
    sscanf(line,"%s",filename);
    sprintf(grrms,"GRRMs %s -n%s",filename,node);
    sleep(1);
    cout << grrms << endl;
    system(grrms);
  }

  return 0;
}
