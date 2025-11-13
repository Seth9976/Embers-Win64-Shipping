// 函数: sub_140a7ddb0
// 地址: 0x140a7ddb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140a3f210()

if (result != 0)
    uint32_t arg_18 = GetCurrentThreadId()
    EnterCriticalSection(arg1 + 0x18)
    
    if (arg2 != 0 && arg_18 == data_143de5470 && data_143ddb400 != 0)
        sub_140a7e430(arg1)
    
    double* rdi_1 = sub_140a5d720(arg1 + 0x40, arg_18, &arg_18)
    double zmm0_1
    zmm0_1, result = sub_140a8a910(arg1 + 0xf0)
    *rdi_1 = zmm0_1
    rdi_1[3] = *(arg1 + 0xc0)
    
    if (arg1 != -0x18)
        return LeaveCriticalSection(arg1 + 0x18)

return result
