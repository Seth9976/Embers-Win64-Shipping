// 函数: sub_1429e0e60
// 地址: 0x1429e0e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = *arg1

if (lpCriticalSection == 0)
    return 

EnterCriticalSection(lpCriticalSection)
int32_t rax = arg1[1].d

if (rax s>= 1)
    if (rax != 1)
        do
            CRITICAL_SECTION* CriticalSection = *arg1
            SleepConditionVariableCS(&CriticalSection[1], CriticalSection, 0xffffffff)
        while (arg1[1].d != 1)
    
    arg1[1].d = 2
    WakeConditionVariable(*arg1 + 0x28)

return LeaveCriticalSection(*arg1) __tailcall
