// 函数: sub_142b2c290
// 地址: 0x142b2c290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_1 = zx.d((arg1 u>> 0x10).b) - arg3

if (arg2 == 0)
    if (r9_1 s< 2)
        r9_1 += 0xfe
        arg1 -= 0x1000000
else if (r9_1 s< 4)
    r9_1 += 0xfb
    arg1 -= 0x1000000

return (zx.q(arg1) & 0xff000000) | zx.q(r9_1 << 0x10)
