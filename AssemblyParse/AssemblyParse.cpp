#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

void main()
{
    cout << "enter a number, decimal point is a DOT" << endl;

    string input;
    cin >> input;
    const int inpLength = input.length();

    int zero = '0';
    int nine = '9';


    bool output = true;
    int outputNumber;

    _asm
    {
        mov ecx, inpLength
        mov edi, 10

        xor esi, esi
        inc esi

        xor ebx, ebx
        xor edx, edx
        po1 :
        dec ecx
        mov eax, input[ecx*4]
        inc ecx
        sub eax, zero
        mul esi
        add ebx, eax

        mov eax, esi
        mul edi
        mov esi, eax 

            loop po1

        mov outputNumber, ebx
    }

    if (output)
        cout << outputNumber << endl;
    else
        cout << "this is not a number" << endl;

    system("pause");
}

