// 函数: sub_141bb1ee0
// 地址: 0x141bb1ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
*arg2 = 0
*(arg2 + 2) = 0
*(arg2 + 0xa) = 0
*(arg2 + 0xe) = 0
*(arg2 + 2) |= 1
arg2[1].d |= 0x80
sub_142131b60(arg1 + 0x180, arg2)
char rax = sub_1422a6b20(arg1, arg3)
int32_t rcx_2

if (rax != 0)
    rcx_2 = 4

if (rax == 0 || (*(*arg3 + 0x2c) & 0x1000000) == 0)
    rcx_2 = 0

int32_t rax_5 = (arg2[1].d & 0xfffffffb) | rcx_2 | 2
arg2[1].d = rax_5
int32_t rcx_7 = ((zx.d(*(arg1 + 0x3c)) u>> 1 ^ rax_5) & 0x20) ^ rax_5
int32_t rax_6 = 0
arg2[1].d = rcx_7
int32_t rdx_3 = (zx.d(*(arg1 + 0x37)) & 0xffffff80) | (rcx_7 & 0xffffff7f)
arg2[1].d = rdx_3

if (*(arg1 + 0x3f) != 1)
    rax_6 = 0x1000

arg2[1].d = rax_6 | (rdx_3 & 0xffffefff)
char rax_8 = sub_1422a69b0(arg1, arg3)
int32_t rcx_12 = (arg2[1].d & 0xfffffff7) | zx.d(rax_8) << 3
arg2[1].d = rcx_12
int32_t rdx_10 = ((zx.d(*(arg1 + 0x39)) << 8 ^ rcx_12) & 0x2000) ^ rcx_12
arg2[1].d = rdx_10 & 0xfffffeff

if (*(arg1 + 0x32) - 1 u<= 1 && (*(arg2 + 2) & 1) != 0 && rdx_10.b s< 0)
    rdi = 0x10

arg2[1].d = (rdx_10 & 0xfffffeef) | rdi
return arg2
