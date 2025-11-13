// 函数: sub_141a69340
// 地址: 0x141a69340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0xb0) u>> 1)

if ((result.b & 1) == 0)
    result = *(arg1 + 0x98)
    
    if (result.b != 2 && arg2.b != 2 && (result u>> 0x20).d s< (arg2 u>> 0x20).d)
        uint32_t arg_c
        
        if (result.b == 0)
            arg_c = (result u>> 0x20).d
            result = 1.q
        else if (result.b == 1)
            arg_c = (result u>> 0x20).d
            result = 0.q
        *(arg1 + 0x90) = result
        return result
    
    *(arg1 + 0x90) = arg2

return result
