#pragma once

#include "lgqdumper_global.h"

class LGQDUMPER_EXPORT LgQDumper
{
public:
    LgQDumper();
};
#pragma once
//注意下面2个头文件引入的顺序
#include <windows.h>
#include <dbghelp.h>

extern char* g_qsDumpName;

class QtDumpGenerate
{
public:
	QtDumpGenerate();

	void ApplicationCrashHandler(EXCEPTION_POINTERS* pException);
};

// dump处理
// 使用方法： SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)ApplicationCrashHandler);
//编写dump文件，检查报错 
//QString g_qsDumpName = "LgInteractSmartCompus";
//SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)ApplicationCrashHandler);
LGQDUMPER_EXPORT long ApplicationCrashHandler(EXCEPTION_POINTERS* pException);