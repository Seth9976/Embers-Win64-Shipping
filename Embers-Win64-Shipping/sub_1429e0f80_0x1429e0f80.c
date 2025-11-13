// 函数: sub_1429e0f80
// 地址: 0x1429e0f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (int32_t i = 0; i == 0; )
    EnterCriticalSection(*arg1)
    
    while (arg1[1].d == 1)
        CRITICAL_SECTION* CriticalSection = *arg1
        SleepConditionVariableCS(&CriticalSection[1], CriticalSection, 0xffffffff)
    
    int32_t rax_1 = arg1[1].d
    
    if (rax_1 == 2)
        int64_t rax_2 = arg1[2]
        
        if (rax_2 != 0)
            int32_t rcx_3
            rcx_3.b = rax_2(arg1[3], arg1[4]) == 0
            arg1[5].d |= rcx_3
        
        arg1[1].d = 1
    else if (rax_1 == 0)
        i = 1
    
    WakeConditionVariable(*arg1 + 0x28)
    LeaveCriticalSection(*arg1)

return 0
