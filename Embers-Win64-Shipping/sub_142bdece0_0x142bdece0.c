// 函数: sub_142bdece0
// 地址: 0x142bdece0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x78) == 0)
    int64_t rax_1 = *(arg1 + 0x30)
    *(arg1 + 0x70) = rax_1
    *(arg1 + 0x78) = rax_1
    *(arg1 + 0x30) = rax_1 + 0x34

if (*(arg1 + 0x30) u>= *(arg1 + 0x28))
    *(arg1 + 0x38) = 0x62
    int64_t rax_3
    rax_3.b = 1
    return rax_3

*(*(arg1 + 0x70) + 0x18) = 0
*(*(arg1 + 0x70) + 0x20) = 0
*(*(arg1 + 0x70) + 0x1c) = 0
*(*(arg1 + 0x70) + 0x10) = *(arg1 + 0x30)
*(*(arg1 + 0x70) + 8) = 0
*(*(arg1 + 0x70) + 0x28) = 0
*(*(arg1 + 0x70) + 0x18) = zx.w(*(arg1 + 0x108))
void* rax_10

if (arg2 == 1)
    rax_10 = *(arg1 + 0x70)
    *(rax_10 + 0x18) |= 8
    
    if (arg3 != 0)
        rax_10 = *(arg1 + 0x70)
        *(rax_10 + 0x18) |= 0x20
else
    if (arg2 != 2)
        *(arg1 + 0x38) = 0x14
        rax_10.b = 1
        return rax_10
    
    if (arg3 != 0)
        rax_10 = *(arg1 + 0x70)
        *(rax_10 + 0x18) |= 0x10

if (*(arg1 + 0x80) == 0)
    *(arg1 + 0x80) = *(arg1 + 0x70)

*(arg1 + 0x88) = arg2
rax_10.b = 0
*(arg1 + 0x6a) = 1
return rax_10
