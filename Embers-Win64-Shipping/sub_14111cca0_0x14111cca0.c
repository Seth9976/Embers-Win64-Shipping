// 函数: sub_14111cca0
// 地址: 0x14111cca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg2 + 0x20)
int32_t rax = 2
char rcx

if (r9 != 0)
    rcx = *(r9 + 0x138)

int32_t rcx_1

if (r9 == 0 || (rcx & 0x10) == 0)
    rcx_1 = -1
else if ((rcx & 8) == 0)
    rcx_1.b = *(r9 + 0x13c) == 0
else
    rcx_1 = 2

void* rdx = *(arg3 + 0x20)
char r8

if (rdx != 0)
    r8 = *(rdx + 0x138)

if (rdx == 0 || (r8 & 0x10) == 0)
    rax = -1
else if ((r8 & 8) == 0)
    int32_t rax_1
    rax_1.b = *(rdx + 0x13c) == 0
    rax_1.b = rcx_1 s>= rax_1
    return rax_1

rax.b = rcx_1 s>= rax
return rax
