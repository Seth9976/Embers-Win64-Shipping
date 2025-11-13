// 函数: sub_142aa5bf0
// 地址: 0x142aa5bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2

if (*arg3 s> 0)
    return 

if (arg2 == *(*(arg1 + 0x10) + 0x1c))
    goto label_142aa5cb7

uint64_t rax = sub_142aa6160(*(arg1 + 8), arg2)
int32_t r15_1 = rax.d

if ((rax - 0x1000).d u> 3)
    *arg3 = 1
    return 

int32_t rax_2 = sub_142aa6280(*(arg1 + 8), rax.d)
rdi = rax_2

if (rax_2 == *(*(arg1 + 0x10) + 0x1c))
    goto label_142aa5cb7

rax = sub_142aa1030(arg1 + 0x10)

if (rax == 0)
    *arg3 = 7
    return 

sub_142b27390(rax, r15_1 - 0x1000, *(*(*(arg1 + 0x18) + 0x20) + 0x18), arg3)

if (*arg3 s> 0)
    return 

*(rax + 0x1c) = rdi
*(rax + 0x50) = sub_142b21a80(*(arg1 + 8), rax, rax + 0x54, 0x180)
label_142aa5cb7:

if (rdi != *(*(*(arg1 + 0x18) + 0x20) + 0x1c))
    *(arg1 + 0x108) |= 0x100
else
    *(arg1 + 0x108) &= 0xfffffeff
