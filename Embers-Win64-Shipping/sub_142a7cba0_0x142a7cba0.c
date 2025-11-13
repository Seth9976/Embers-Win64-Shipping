// 函数: sub_142a7cba0
// 地址: 0x142a7cba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (*arg3 s> 0)
    return 

int32_t rax_1 = *(arg1 + 0x13c)

if (rax_1 s> 0)
    *arg3 = rax_1
    return 

if (arg2 s< 0)
    *arg3 = 1
    return 

int64_t rax_2 = *(arg1 + 0x30)
*(arg1 + 0x40) = 0
*(arg1 + 0x48) = rax_2
*(arg1 + 0x70) = 0
*(arg1 + 0x78) = rax_2
*(arg1 + 0x50) = 0
*(arg1 + 0x58) = rax_2
*(arg1 + 0x60) = 0
*(arg1 + 0x68) = rax_2
*(arg1 + 0x88) = 0
*(arg1 + 0x90) = 0
*(arg1 + 0x98) = -1
*(arg1 + 0xa0) = 0
*(arg1 + 0x82) = 0
*(arg1 + 0xa8) = 0
*(arg1 + 0x10c) = 0
*(arg1 + 0x110) = 0x2710

if (arg2 != 0)
    arg2 = (rdi u>> 2).d
    uint32_t rcx = *(*(arg1 + 8) + 0x80)
    
    if (arg2 s< rcx)
        arg2 = rcx

sub_142aeb3e0(*(arg1 + 0xb0), arg2)
*(arg1 + 0x114) = rdi.d
