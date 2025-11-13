// 函数: sub_142b27350
// 地址: 0x142b27350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = arg5

if (*result s<= 0)
    if (arg3 != 0xffffffff)
        if (arg3 == 0x10)
            *(arg1 + 0x18) &= not.d(arg2)
            return result
        
        if (arg3 == 0x11)
            *(arg1 + 0x18) |= arg2
            return result
        
        *result = 1
        return result
    
    result = (zx.q(not.d(arg2)) & zx.q(*(arg1 + 0x18))) | (zx.q(arg2) & zx.q(arg4))
    *(arg1 + 0x18) = result.d

return result
