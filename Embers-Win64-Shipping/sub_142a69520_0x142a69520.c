// 函数: sub_142a69520
// 地址: 0x142a69520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10

if (arg1 s>= 0x7b9)
    uint64_t rdx_2 = zx.q((arg1 - 0x7b9) s/ 0x41)
    r10.b = arg1 - 0x7b9 - rdx_2.d * 0x41 s>= 0x20
    return zx.q(((rdx_2 << 1) + -0xfffffffffffffdbd).d + r10 + arg1)

r10.b = (0x7b8 - arg1) s% 0x41 s<= 0x20
return zx.q(((zx.q((arg1 - 0x7b8) s/ 0x41) << 1) + -0xfffffffffffffdbb).d + r10 + arg1)
