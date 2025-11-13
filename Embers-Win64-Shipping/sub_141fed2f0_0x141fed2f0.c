// 函数: sub_141fed2f0
// 地址: 0x141fed2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg3) * 0x2c
int64_t rax_1 = *(arg1 + 0x10)

if (arg2 == 0)
    *(r8 + rax_1 + 4) = arg4
else if (arg2 != 1)
    *(r8 + rax_1 + 0xc) = arg4
else
    *(r8 + rax_1 + 8) = arg4

r8.b = 1
int64_t result = sub_141f55fe0(arg1 + 0x10, zx.o(0), r8.b)
*(arg1 + 8) |= 2
return result
