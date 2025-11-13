// 函数: sub_142b1dfe0
// 地址: 0x142b1dfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == arg3)
    int64_t result
    result.b = 0
    return result

int32_t arg_18 = arg3.d - arg2.d - 1
uint32_t rdx = zx.d(*(sx.q(arg3.d - arg2.d - 1) + arg2))

if (rdx.b s< 0)
    rdx = sub_142a9be90(arg2, 0, &arg_18, rdx, 0xff)

if (rdx s>= zx.d(*(arg1 + 8)))
    if (rdx s> 0xffff)
        return sub_142b1def0(arg1, rdx)
    
    uint8_t r8_3 = *((sx.q(rdx) s>> 8) + *(arg1 + 0x38))
    
    if (r8_3 != 0 && (r8_3 u>> ((rdx s>> 5).b & 7) & 1) != 0)
        return sub_142b1def0(arg1, rdx)

return 0
