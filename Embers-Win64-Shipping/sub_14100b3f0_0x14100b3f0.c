// 函数: sub_14100b3f0
// 地址: 0x14100b3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
int32_t rax = *(arg2 + 0x10)
arg1[1].d = rax
*(arg1 + 0xc) = rax
int32_t rax_1

if (rax != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(rax)
    rax_1 = temp0_1
else
    rax_1 = 0x20

arg1[2].d = rax_1
arg1[5] = 0
arg1[6] = 0
sub_1405c5570(&arg1[5], 0x100)
arg1[3] = 0
arg1[4].b = 0
arg1[6].d = 0

if (*(arg1 + 0x34) s<= 0xffffffff)
    sub_1405c5570(&arg1[5], 0)

int64_t rsi = sx.q(arg5)
arg1[7] = 0
arg1[8] = 0
*(arg1 + 0x4c) = 0
*(arg1 + 0x54) = arg3
arg1[9].d = (rsi - 1).d
arg1[0xa].d = arg4 - 1
arg1[0xb].d = arg4
arg1[0xc] = 0
arg1[0xd].d = 0
__builtin_memset(&arg1[0xe], 0, 0x40)
arg1[0x18] = 0
arg1[3] = 0
arg1[4].b = 0
int32_t rax_4 = *(arg1 + 0x34)
arg1[6].d = 0

if (rax_4 s< 0 && rax_4 != 0)
    sub_1405c5570(&arg1[5], 0)

if (rsi.d s> *(arg1 + 0x44))
    sub_1405a51b0(&arg1[7], rsi.d)

int64_t r14_1 = sx.q(arg1[8].d)
int32_t rax_5 = (r14_1 + rsi).d
arg1[8].d = rax_5

if (rax_5 s> *(arg1 + 0x44))
    sub_1405c4e40(&arg1[7])

memset((r14_1 << 5) + arg1[7], 0, rsi << 5)
return arg1
