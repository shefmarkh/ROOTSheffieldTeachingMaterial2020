#include "TFile.h"
#include "TTree.h"

int main(int argc, char *argv[]){
  TFile file(argv[1]);
  TTree *tree = static_cast<TTree*>(file.Get(argv[2]));
  tree->Scan("","","",1,0);
}
