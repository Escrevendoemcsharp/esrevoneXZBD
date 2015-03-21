#pragma region INCLUDE
// OWiSn32E.cpp : Defines the exported functions for the DLL application.
//
// Autor : GnomeXFire DLL Code DBZ Xenoverse 2015 - Beta Codigo Aberto
// 
#include "stdafx.h"
#include "windows.h"
#include "stdio.h"
#pragma endregion

#define DECLDIR _declspec(dllexport)
extern "C"
DECLDIR int __stdcall TesteInjecaoDll()
{
	MessageBeep(UINT(10));
	return 1;
}