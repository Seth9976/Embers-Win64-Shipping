// 函数: sub_1423173a0
// 地址: 0x1423173a0
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

if (rax == 0 || (*(*arg3 + 0x2c) & 4) == 0)
    rax_2 = 0

arg2[1].d &= 0xfffffffb
arg2[1].d |= rax_2
char rax_3 = sub_1422a69b0(arg1, arg3)
arg2[1].d &= 0xfffffff7
arg2[1].d |= zx.d(rax_3) << 3
char rax_6
int32_t rcx_2

if ((*(arg1 + 0x178) & 0x10) != 0)
    rax_6 = sub_1422a6980(*arg3)
    rcx_2 = 1

if ((*(arg1 + 0x178) & 0x10) == 0 || rax_6 != 0)
    rcx_2 = 0

int32_t rdx_2 = 0
int32_t rax_9 = (arg2[1].d & 0xfffffffe) | rcx_2
int32_t rcx_7 = ((not.d(rax_9 * 2) ^ rax_9) & 2) ^ rax_9
arg2[1].d = rcx_7
int32_t rax_14 = ((zx.d(*(arg1 + 0x3c)) u>> 1 ^ rcx_7) & 0x20) ^ rcx_7
arg2[1].d = rax_14
int32_t rcx_10 = (zx.d(*(arg1 + 0x37)) & 0xffffff80) | (rax_14 & 0xffffff7f)
arg2[1].d = rcx_10

if (*(arg1 + 0x3f) != 1)
    rdx_2 = 0x1000

int32_t rdx_3 = rdx_2 | (rcx_10 & 0xffffefff)
arg2[1].d = rdx_3
arg2[1].d = ((zx.d(*(arg1 + 0x39)) << 8 ^ rdx_3) & 0x2000) ^ rdx_3
sub_142131b60(arg1 + 0x180, arg2)

if (*(arg1 + 0x32) - 1 u<= 1 && (*(arg2 + 2) & 1) != 0 && (arg2[1].b & 0x80) != 0)
    rdi = 0x10

arg2[1].d &= 0xffffffef
arg2[1].d |= rdi
return arg2
