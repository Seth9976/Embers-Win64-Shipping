// 函数: sub_142ad3610
// 地址: 0x142ad3610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg3
uint64_t r8 = zx.q(arg2.d)

if (i s< 0)
    int32_t r9_1 = ((zx.q((arg2 * 3).d) << 2) + 0x11).d
    int32_t rax_5
    int32_t i_1
    
    do
        r9_1 -= 0xc
        r8 = zx.q(r8.d - 1)
        int32_t rdx_4 = r9_1 s% 0x13
        rax_5.b = rdx_4 s>= (rdx_4 s>> 0x1f & 0xffffffed) + 0xc
        i_1 = i
        i += rax_5 + 0xc
    while (i_1 + rax_5 + 0xc s< 0)

if (i s> 0xc)
    int32_t r9_2 = ((zx.q((r8 * 3).d) << 2) + 0x11).d
    
    do
        int32_t rdx_9 = r9_2 s% 0x13
        int32_t rax_11
        rax_11.b = rdx_9 s>= (rdx_9 s>> 0x1f & 0xffffffed) + 0xc
        r8 = zx.q(r8.d + 1)
        r9_2 += 0xc
        i -= rax_11 + 0xc
    while (i s> 0xc)

if (i - 1 u> 1)
    return zx.q(sx.d(*(sx.q(i) * 3 + &data_143657f10)))

int32_t rax_15 = (*(*arg1 + 0x110))(arg1, zx.q(r8.d))

if (rax_15 s> 0x17c)
    rax_15 -= 0x1e

if (rax_15 == 0x161)
    return zx.q(sx.d(*(sx.q(i) * 3 + &data_143657f10)))

if (rax_15 != 0x162 && rax_15 == 0x163)
    return zx.q(sx.d(*(sx.q(i) * 3 + &data_143657f12)))

return zx.q(sx.d(*(sx.q(i) * 3 + &data_143657f11)))
