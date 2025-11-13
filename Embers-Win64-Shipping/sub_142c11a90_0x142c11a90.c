// 函数: sub_142c11a90
// 地址: 0x142c11a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0x6a) == 0)
    *(arg2 + 0x70) += *(arg2 + 0x24) u>> 1
    int32_t r8_2 = *(arg2 + 0x70) + 7
    *(arg2 + 0x6a) = 1
    *(arg2 + 0x74) = (r8_2 + *(arg2 + 0x6c)) u>> 3

if (*(arg2 + 0x1c) != 0 || *(arg2 + 0x74) + *(arg2 + 0x18) u> *(arg2 + 0x10))
    return 

*(arg2 + 0x24)
*(arg2 + 0x24) = 0
uint32_t rax

if (*(arg2 + 0x1c) != 0)
    rax = *(arg2 + 0x10)
    *(arg2 + 0x1c) = 1
else
    int32_t rax_5 = *(arg2 + 0x18)
    int32_t rcx_1 = *(arg2 + 0x10)
    
    if (rax_5 u> rcx_1)
        rax = *(arg2 + 0x10)
        *(arg2 + 0x1c) = 1
    else
        rax = rax_5 + *(arg2 + 0x74)
        
        if (rax u> rcx_1)
            rax = *(arg2 + 0x10)
            *(arg2 + 0x1c) = 1

*(arg2 + 0x18) = rax
