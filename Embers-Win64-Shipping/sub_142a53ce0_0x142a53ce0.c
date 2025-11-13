// 函数: sub_142a53ce0
// 地址: 0x142a53ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_2 = sx.q(arg1)

if (r8_2.d u< 0xd800)
    int32_t rcx_2 = (zx.d(*(&data_14361b8e0
        + (zx.q((r8_2.d & 0x1f) + (zx.d(*(&data_14361b8e0 + (r8_2 s>> 5 << 1))) << 2)) << 1))) u>> 6)
        - 1
    
    if (rcx_2 s<= 9)
        return zx.q(rcx_2)
    
    return 0xffffffff

uint64_t rcx_4

if (r8_2.d u> 0xffff)
    if (r8_2.d u> 0x10ffff)
        return 0xffffffff
    
    if (r8_2.d s>= 0x110000)
        return 0xffffffff
    
    rcx_4 = zx.q(*(&data_14361b8e0 + (zx.q(
        zx.d(*(&data_14361b8e0 + (sx.q((r8_2.d s>> 0xb) + 0x820) << 1))) + (r8_2.d s>> 5 & 0x3f))
        << 1)))
else
    int32_t rcx_3 = 0
    
    if (r8_2.d s<= 0xdbff)
        rcx_3 = 0x140
    
    rcx_4 = zx.q(*(&data_14361b8e0 + (sx.q((r8_2.d s>> 5) + rcx_3) << 1)))

int32_t rcx_9 = (zx.d(*(&data_14361b8e0 + (zx.q((r8_2.d & 0x1f) + (rcx_4 << 2).d) << 1))) u>> 6) - 1

if (rcx_9 s<= 9)
    return zx.q(rcx_9)

return 0xffffffff
