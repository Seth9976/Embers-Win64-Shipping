// 函数: sub_142b1e080
// 地址: 0x142b1e080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == arg3)
    int64_t result
    result.b = 0
    return result

uint32_t rdx = zx.d(*(arg2 + (sx.q(((arg3 - arg2) s>> 1).d - 1) << 1)))

if ((rdx & 0xfffffc00) == 0xdc00 && ((arg3 - arg2) s>> 1).d - 1 s> 0)
    uint32_t r8_3 = zx.d(*(arg2 + (sx.q(((arg3 - arg2) s>> 1).d - 2) << 1)))
    
    if ((r8_3 & 0xfffffc00) == 0xd800)
        rdx += (r8_3 - 0xd7f7) << 0xa

if (rdx s>= zx.d(*(arg1 + 8)))
    if (rdx s> 0xffff)
        return sub_142b1def0(arg1, rdx) __tailcall
    
    uint8_t r8_4 = *((sx.q(rdx) s>> 8) + *(arg1 + 0x38))
    
    if (r8_4 != 0 && (r8_4 u>> ((rdx s>> 5).b & 7) & 1) != 0)
        return sub_142b1def0(arg1, rdx) __tailcall

return 0
