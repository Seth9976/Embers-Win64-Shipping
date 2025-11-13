// 函数: sub_141ea4ef0
// 地址: 0x141ea4ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t** result = EnterCriticalSection(arg1 + 0x300)

if (*(arg1 + 0x2f8) s> 0)
    result = *(arg1 + 0x2f0)
    int64_t* rcx_1 = *result
    
    if (rcx_1 != 0)
        result = sub_141ea4e00(rcx_1, arg1, arg2, arg3)

if (arg1 == -0x300)
    return result

return LeaveCriticalSection(arg1 + 0x300)
