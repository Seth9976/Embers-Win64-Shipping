// 函数: sub_142b1dea0
// 地址: 0x142b1dea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= zx.d(*(arg1 + 8)))
    if (arg2 s> 0xffff)
        return sub_142b1def0(arg1, arg2) __tailcall
    
    uint8_t r8_1 = *((sx.q(arg2) s>> 8) + *(arg1 + 0x38))
    
    if (r8_1 != 0 && (r8_1 u>> ((arg2 s>> 5).b & 7) & 1) != 0)
        return sub_142b1def0(arg1, arg2) __tailcall

return 0
