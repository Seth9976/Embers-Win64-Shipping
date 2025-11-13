// 函数: sub_1419c2140
// 地址: 0x1419c2140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 4
*arg1 = &data_14300e038
arg1[2] = &data_14300e090
__builtin_memset(&arg1[3], 0, 0x20)
*(arg1 + 0x3c) = 0
arg1[7].d = arg2
int64_t r14 = sx.q(arg1[4].d)
int64_t rbp = sx.q(arg3)
int32_t rax = (r14 + rbp).d
arg1[4].d = rax

if (rax s> *(arg1 + 0x24))
    sub_1405a4d70(&arg1[3])

memset(&arg1[3][r14], 0, rbp << 3)
int32_t rax_2 = arg1[6].d + rbp.d
arg1[6].d = rax_2

if (rax_2 s> *(arg1 + 0x34))
    sub_1405a4cf0(&arg1[5])

memset(arg1[5], 0xff, zx.q((rbp << 2).d))
return arg1
