// 函数: sub_141850bb0
// 地址: 0x141850bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1)

if (arg1->__offset(0x38).b == 0)
    bool cond:0_1 = arg1->__offset(0x39).b != 0
    arg1->__offset(0x38).b = 1
    
    if (not(cond:0_1))
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        arg1->__offset(0x28).q = performanceCount

return LeaveCriticalSection(arg1) __tailcall
