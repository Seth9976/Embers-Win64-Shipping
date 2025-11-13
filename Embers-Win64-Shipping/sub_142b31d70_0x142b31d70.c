// 函数: sub_142b31d70
// 地址: 0x142b31d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2.b u< 2 || zx.d((arg2 u>> 8).b) - 6 u> 0x3f)
    return 0x101000100

int64_t rax_8 = *(*(arg1 + 8) + ((
    ((zx.q((arg2 - 0x40400620) u>> 1) & 0x3f800000) | (zx.q(arg2 - 0x40400620) & 0x7f0000)) u>> 2
    | (zx.q(arg2 - 0x40400620) & 0x3f00)) u>> 8 << 3))
return rax_8 | zx.q((arg2 & 0xc0) << 8)
