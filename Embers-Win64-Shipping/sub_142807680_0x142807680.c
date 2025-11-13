// 函数: sub_142807680
// 地址: 0x142807680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x28) u>= arg2)
    return 

int32_t rbx_1 = 0x20

if (arg2 u> 0x20)
    do
        rbx_1 *= 2
    while (rbx_1 u< arg2)

void* rax = sub_142807530(*(arg1 + 0x10) + 8, rbx_1)
uint32_t count = *(arg1 + 0x18)

if (count != 0)
    memcpy(rax, *(arg1 + 0x20), count)

void* rdx_2 = *(arg1 + 0x20)

if (rdx_2 != 0)
    sub_142807300(*(arg1 + 0x10) + 8, rdx_2 - 0x10, *(rdx_2 - 8))

*(arg1 + 0x20) = rax
*(arg1 + 0x28) = rbx_1
