// 函数: sub_142b6a5a0
// 地址: 0x142b6a5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg2)

if (r8.d u> 0x7f)
    int32_t rax_1 = 0xfff
    
    if (*(arg1 + 0x1e) == 0)
        rax_1 = 0xffff
    
    if (r8.d u<= rax_1)
        r8 = zx.q((r8.d & 0x3f) + zx.d(*(*arg1 + (r8 s>> 6 << 1))))
    else if (r8.d u> 0x10ffff)
        r8 = zx.q(*(arg1 + 0x14) - 1)
    else if (r8.d s< arg1[3].d)
        r8 = zx.q(sub_142b6a760(arg1, r8.d))
    else
        r8 = zx.q(*(arg1 + 0x14) - 2)

int32_t rdx_2 = sx.d(*(arg1 + 0x1f))
int64_t rax_4 = arg1[1]

if (rdx_2 == 0)
    return zx.q(*(rax_4 + (sx.q(r8.d) << 1)))

if (rdx_2 == 1)
    return zx.q(*(rax_4 + (sx.q(r8.d) << 2)))

if (rdx_2 == 2)
    return zx.q(*(sx.q(r8.d) + rax_4))

return 0xffffffff
