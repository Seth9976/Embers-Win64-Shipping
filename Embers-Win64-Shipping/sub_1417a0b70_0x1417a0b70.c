// 函数: sub_1417a0b70
// 地址: 0x1417a0b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[1].d = arg3
char rax

if (arg2 == 0)
    rax = 0
else
    rax = *(arg2 + 0x40)

*(arg1 + 0xc) = rax
arg1[2].d = arg4
int64_t rcx = *(arg2 + 0x28)
int32_t var_10 = 0
int64_t r8 = sx.q(arg3) * 3
*(rcx + (r8 << 2)) = (_mm_unpacklo_ps(zx.o(0), 0)).q
*(rcx + (r8 << 2) + 8) = 0
*(*(*arg1 + 0x68) + sx.q(arg1[1].d) * 0x10) = data_14399f720
*(*(*arg1 + 0x170) + (sx.q(arg1[1].d) << 1)) = 0
*(*(*arg1 + 0x188) + (sx.q(arg1[1].d) << 3)) = 0
*(sx.q(arg1[1].d) + *(*arg1 + 0x158)) = 0
return arg1
