// OCDll.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "OverClockContainer.h"
OverClockContainer* instance = new OverClockContainer();

extern "C" __declspec(dllexport) void __stdcall Get_GPU_INFO(NV_GPU_INFO* info)
{
	auto result = instance->Get_GPU_INFO();
	info = &result;
}

extern "C" __declspec(dllexport) void __stdcall GPUOverClock(const int step, NV_OC_STATES* out)
{
	auto result = instance->GPUOverClock(step);
	out = &result;
}

extern "C" __declspec(dllexport) void __stdcall VRAMOverClock(const int step, NV_OC_STATES* out)
{
	auto result = instance->VRAMOverClock(step);
	out = &result;
}