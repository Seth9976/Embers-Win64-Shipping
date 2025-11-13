// 函数: sub_1429e0d10
// 地址: 0x1429e0d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = *arg1

if (lpCriticalSection != 0)
    EnterCriticalSection(lpCriticalSection)
    
    if (arg1[1].d s>= 2)
        do
            CRITICAL_SECTION* CriticalSection = *arg1
            SleepConditionVariableCS(&CriticalSection[1], CriticalSection, 0xffffffff)
        while (arg1[1].d != 1)
    
    LeaveCriticalSection(*arg1)

int64_t result
result.b = arg1[5].d == 0
return result
