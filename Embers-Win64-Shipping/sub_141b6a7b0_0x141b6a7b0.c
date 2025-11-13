// 函数: sub_141b6a7b0
// 地址: 0x141b6a7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (data_143de5480 != 0)
    result.b = GetCurrentThreadId() == data_143de5470

if (data_143de5480 == 0 || result.b != 0)
    result = sub_140a80f80()
    
    if (result.b == 0 && (arg2 != 0 || *(arg1 + 0x90) != arg2))
        result = TryEnterCriticalSection(arg1 + 0x68)
        
        if (result != 0)
            *(arg1 + 0x90) = 0
            sub_141b64b70(arg1 + 0x98, arg1 + 0x1d8)
            sub_141b64940(arg1 + 0x98, arg1 + 0x1f8)
            return LeaveCriticalSection(arg1 + 0x68) __tailcall
        
        *(arg1 + 0x90) = 1

return result
