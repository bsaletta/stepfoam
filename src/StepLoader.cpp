#include "StepLoader.h"
#include <iostream>
#include <fstream>
#include "StepPart.h"


using namespace std;
StepLoader::StepLoader()
{

}

StepLoader::~StepLoader()
{
    //dtor
}

void StepLoader::Load(string file){
    cout<<file<<"\n";
    ifstream stream;
    string buffer;

    stream.open(file.c_str());

    while(stream.good()){
       getline(stream,buffer);
       StepLoader::ParseString(buffer);

    };
};
 void StepLoader::ParseString(string step){
    if(step.find('#')<3){
        StepPart prt;
        eq=step.find('=');
        prt.index=step.substr(0,eq);
        prt.part=step.substr(eq,step.find('(')-eq);
        cout<<prt.part<<"\n";
    }
 }
