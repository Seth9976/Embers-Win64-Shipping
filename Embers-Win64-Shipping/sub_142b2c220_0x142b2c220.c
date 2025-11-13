// 函数: sub_142b2c220
// 地址: 0x142b2c220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_1 = zx.d((arg1 u>> 8).b) - arg3

if (r9_1 s>= 2)
    return zx.q(r9_1 << 8) | (zx.q(arg1) & 0xffff0000)

int32_t rax_5 = zx.d((arg1 u>> 0x10).b) - 1

if (arg2 == 0)
    if (rax_5 s< 2)
        rax_5 = 0xff
        arg1 -= 0x1000000
else if (rax_5 s< 4)
    rax_5 = 0xfe
    arg1 -= 0x1000000

return zx.q((rax_5 << 8 | (r9_1 + 0xfe)) << 8) | (zx.q(arg1) & 0xff000000)
