#pragma once

#include "lgqdumper_global.h"

class LGQDUMPER_EXPORT LgQDumper
{
public:
    LgQDumper();
};
#pragma once
//ע������2��ͷ�ļ������˳��
#include <windows.h>
#include <dbghelp.h>

extern char* g_qsDumpName;

class QtDumpGenerate
{
public:
	QtDumpGenerate();

	void ApplicationCrashHandler(EXCEPTION_POINTERS* pException);
};

// dump����
// ʹ�÷����� SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)ApplicationCrashHandler);
//��дdump�ļ�����鱨�� 
//QString g_qsDumpName = "LgInteractSmartCompus";
//SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)ApplicationCrashHandler);
LGQDUMPER_EXPORT long ApplicationCrashHandler(EXCEPTION_POINTERS* pException);