// 函数: sub_141bdba10
// 地址: 0x141bdba10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 8) u>> 0xf)

if ((result.b & 1) == 0)
    result = *(arg1 + 0x28)
    
    if (result != 0)
        int64_t* r8_1 = *(result + 0x28)
        
        if (r8_1 != 0)
            return sub_141bdb2d0(r8_1, arg1) __tailcall

return result
