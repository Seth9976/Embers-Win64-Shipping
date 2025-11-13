// 函数: sub_142b9f480
// 地址: 0x142b9f480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg2 + 8)
*(arg1 + 0x1170) = arg2
int32_t r8 = *(arg2 + 0x24)
*(arg1 + 0x1168) = r8
*(arg1 + 8) = *(arg2 + 0x3c)
*(arg1 + 0xc) = *(arg2 + 0x40)
*(arg1 + 0x10) = *(arg2 + 0x246c)
*(arg1 + 0x14) = *(arg2 + 0x2470)
int32_t rcx = 0
int32_t r10 = *(arg2 + 0x20)

if (r10 - 2 u<= 1)
    rcx = 1

if (((r10 - 2) & 0xfffffffd) == 0)
    rcx |= 2

if (((r10 - 1) & 0xfffffffd) != 0)
    rcx |= 4

int32_t rdx_1 = rcx | 8

if (r10 != 2)
    rdx_1 = rcx

if (((r10 - 1) & 0xfffffffd) == 0 || (*(rbx + 0xc) & 1) != 0)
    r8 |= 1

int32_t rax_10 = r8 | 8
bool cond:1 = *(*(*(arg2 + 0x30) + 0x2d8) + 0x20) != 0
*(arg1 + 0x116c) = rdx_1

if (cond:1)
    rax_10 = r8

*(arg1 + 0x1168) = rax_10
return 0
