#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

void main()
{
    string inp = "";
    cin >> inp;
    int inpLength = inp.length();

    _asm
    {
        mov ecx, inpLength
        


    }

    system("pause");
}

