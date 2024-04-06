#include<iostream>
#include"process.h"

using namespace std;

void Process::planProcess()
{
    cout << "this is planing process" << endl;
    my_map.mapInfo();
    cout << "planning success!" << endl;
}