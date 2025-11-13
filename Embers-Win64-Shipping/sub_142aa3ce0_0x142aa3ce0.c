// 函数: sub_142aa3ce0
// 地址: 0x142aa3ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10_3 = sx.q(arg2)

if (r10_3.d u< 0xd800)
    return zx.q(*(*(*arg1 + 0x10)
        + (sx.q((r10_3.d & 0x1f) + (zx.d(*(**arg1 + (r10_3 s>> 5 << 1))) << 2)) << 2)))

if (r10_3.d u<= 0xffff)
    int32_t rcx_1 = 0
    
    if (r10_3.d s<= 0xdbff)
        rcx_1 = 0x140
    
    uint64_t result = zx.q(*(*(*arg1 + 0x10) + (
        sx.q((r10_3.d & 0x1f) + (zx.d(*(**arg1 + (sx.q(rcx_1 + (r10_3.d s>> 5)) << 1))) << 2))
        << 2)))
    return result

if (r10_3.d u> 0x10ffff)
    return zx.q(*(*(*arg1 + 0x10) + 0x200))

int64_t* rdx_5 = *arg1

if (r10_3.d s>= *(rdx_5 + 0x2c))
    return zx.q(*(*(*arg1 + 0x10) + (sx.q(rdx_5[6].d) << 2)))

int64_t rdx_8 = *rdx_5
int32_t rdx_9 = (r10_3.d & 0x1f) + (zx.d(*(rdx_8 +
    (zx.q(zx.d(*(rdx_8 + (sx.q((r10_3.d s>> 0xb) + 0x820) << 1))) + (r10_3.d s>> 5 & 0x3f)) << 1)))
    << 2)
return zx.q(*(*(*arg1 + 0x10) + (sx.q(rdx_9) << 2)))
