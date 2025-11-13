// 函数: sub_1421f5030
// 地址: 0x1421f5030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
*arg2 = 0
*(arg2 + 2) = 0
*(arg2 + 0xa) = 0
*(arg2 + 0xe) = 0
*(arg2 + 2) |= 1
arg2[1].d |= 0x80
char rax = sub_1422a6b20(arg1, arg3)
int32_t rax_2

if (rax != 0)
    rax_2 = 4

if (rax == 0 || (*(*arg3 + 0x2c) & 2) == 0)
    rax_2 = 0

arg2[1].d &= 0xfffffffb
arg2[1].d |= rax_2
char rax_3 = sub_1422a69b0(arg1, arg3)
int32_t rdx_2 = 0
int32_t rcx_3 = (arg2[1].d & 0xfffffff7) | zx.d(rax_3) << 3
arg2[1].d = rcx_3
int32_t rax_10 = ((zx.d(*(arg1 + 0x3c)) u>> 1 ^ rcx_3) & 0x20) ^ rcx_3
arg2[1].d = rax_10
int32_t rcx_6 = (zx.d(*(arg1 + 0x37)) & 0xffffff80) | (rax_10 & 0xffffff7f)
arg2[1].d = rcx_6

if (*(arg1 + 0x3f) != 1)
    rdx_2 = 0x1000

int32_t rdx_3 = rdx_2 | (rcx_6 & 0xffffefff)
arg2[1].d = rdx_3
arg2[1].d = (((zx.d(*(arg1 + 0x39)) << 8 ^ rdx_3) & 0x2000) ^ rdx_3) | 0x802
sub_142131b60(arg1 + 0x170, arg2)

if (*(arg1 + 0x178) == 0)
    *(arg2 + 2) |= 1

int32_t rax_19

if (*(arg1 + 0x32) - 1 u<= 1 && (*(arg2 + 2) & 1) != 0)
    rax_19 = arg2[1].d

if (*(arg1 + 0x32) - 1 u> 1 || (*(arg2 + 2) & 1) == 0 || rax_19.b s>= 0)
    rax_19 = arg2[1].d
else
    rdi = 0x10

arg2[1].d = (rax_19 & 0xffffffef) | rdi
return arg2
