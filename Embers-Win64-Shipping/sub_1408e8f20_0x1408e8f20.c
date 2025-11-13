// 函数: sub_1408e8f20
// 地址: 0x1408e8f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_1408e2600(arg1, arg1 + 0x40, arg2, arg3)

if (rax == *arg4)
    rax.b = 0
    return rax

*arg4 = rax
int64_t rax_1 = *(arg1 + 0x30)
int64_t rdx_2 = sx.q(rax) << 6
*arg5 = *(rdx_2 + rax_1)
arg5[1] = *(rdx_2 + rax_1 + 0x10)
arg5[2] = *(rdx_2 + rax_1 + 0x20)
int128_t zmm1 = *(rdx_2 + rax_1 + 0x30)
rax_1.b = 1
arg5[3] = zmm1
return rax_1
