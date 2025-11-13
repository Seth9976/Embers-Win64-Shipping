// 函数: sub_142404a90
// 地址: 0x142404a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 &= 0xfffffffc
int32_t r10 = 0
arg2[1] &= 0xfffffffe
__builtin_memset(&arg2[2], 0, 0x20)
*arg2 &= 0xfffffffe
*arg2 = ((zx.d(arg3) | *arg2) & 0xfffffffd) | (zx.d(arg4) * 2)

if (not(0f f== *(arg5 + 0xc)))
    r10 = 1

int32_t rax_5 = (arg2[1] & 0xfffffffe) | r10
arg2[1] = rax_5

if ((rax_5.b & 1) != 0)
    *(arg2 + 0x18) = arg6
    *(arg2 + 0x20) = arg7

return arg2
