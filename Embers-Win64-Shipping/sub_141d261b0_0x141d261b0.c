// 函数: sub_141d261b0
// 地址: 0x141d261b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x10)

if (arg2 s> result)
    *(arg1 + 0x10) = arg2
    
    if (arg2 s> *(arg1 + 0x14))
        return sub_1405c50f0(arg1 + 8) __tailcall
else if (arg2 s< result && arg2 != result)
    *(arg1 + 0x10) = arg2
    return sub_1405c5460(arg1 + 8) __tailcall

return result
