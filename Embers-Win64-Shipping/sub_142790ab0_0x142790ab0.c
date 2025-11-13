// 函数: sub_142790ab0
// 地址: 0x142790ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
*arg2 = 0
*(arg2 + 2) = 0
*(arg2 + 0xa) = 0
*(arg2 + 0xe) = 0
*(arg2 + 2) |= 1
arg2[1].d |= 0x80
char rax = sub_1422a6b20(arg1, arg3)
arg2[1].d &= 0xfffffffb
arg2[1].d |= zx.d(rax) << 2
char rax_3 = sub_1422a69b0(arg1, arg3)
int32_t rcx_4 = (arg2[1].d & 0xfffffff7) | zx.d(rax_3) << 3 | 2
arg2[1].d = rcx_4
int32_t rax_8 = (zx.d(*(arg1 + 0x37)) & 0xffffff80) | (rcx_4 & 0xffffff7f)
arg2[1].d = rax_8

if (*(arg1 + 0x3f) != 1)
    rdi = 0x1000

int32_t rdi_1 = rdi | (rax_8 & 0xffffefff)
arg2[1].d = rdi_1
int32_t rcx_10 = ((zx.d(*(arg1 + 0x3c)) u>> 1 ^ rdi_1) & 0x20) ^ rdi_1
arg2[1].d = rcx_10
arg2[1].d = ((zx.d(*(arg1 + 0x39)) << 8 ^ rcx_10) & 0x2000) ^ rcx_10
sub_142131b60(arg1 + 0x160, arg2)
return arg2
