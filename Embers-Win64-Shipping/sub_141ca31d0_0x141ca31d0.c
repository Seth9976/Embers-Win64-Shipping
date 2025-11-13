// 函数: sub_141ca31d0
// 地址: 0x141ca31d0
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
int32_t rdi = rdx_1 - 1

if (rdx_1 s<= 0)
    rdi = 0

int32_t rax_3 = rax_1 + 1 + rdx_1
arg1[1].d = rax_3

if (rax_3 s> *(arg1 + 0xc))
    sub_140594770(arg1)

int64_t rcx_2 = sx.q(rdi)
*(*arg1 + (rcx_2 << 1)) = 0x27
*(*arg1 + (rcx_2 << 1) + 2) = 0
sub_140b5c770(arg2, arg1)
int32_t rdx_3 = arg1[1].d
int32_t rax_6
rax_6.b = rdx_3 s<= 0
int32_t rdi_1 = rdx_3 - 1

if (rdx_3 s<= 0)
    rdi_1 = 0

int32_t rax_8 = rax_6 + 1 + rdx_3
arg1[1].d = rax_8

if (rax_8 s> *(arg1 + 0xc))
    sub_140594770(arg1)

int64_t rcx_5 = sx.q(rdi_1)
*(*arg1 + (rcx_5 << 1)) = 0x27
*(*arg1 + (rcx_5 << 1) + 2) = 0
return arg1
