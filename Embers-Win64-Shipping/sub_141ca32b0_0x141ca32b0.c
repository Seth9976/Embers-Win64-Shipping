// 函数: sub_141ca32b0
// 地址: 0x141ca32b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int16_t* rax = *arg1

if (rax != 0)
    *rax = 0

sub_140b5c770(&arg2[8], arg1)
int32_t rdx_1 = arg1[1].d
int32_t rax_1
rax_1.b = rdx_1 s<= 0
int32_t rsi = rdx_1 - 1

if (rdx_1 s<= 0)
    rsi = 0

int32_t rax_3 = rax_1 + 1 + rdx_1
arg1[1].d = rax_3

if (rax_3 s> *(arg1 + 0xc))
    sub_140594770(arg1)

int64_t rcx_2 = sx.q(rsi)
*(*arg1 + (rcx_2 << 1)) = 0x20
*(*arg1 + (rcx_2 << 1) + 2) = 0
sub_140b5c770(arg2, arg1)
return arg1
