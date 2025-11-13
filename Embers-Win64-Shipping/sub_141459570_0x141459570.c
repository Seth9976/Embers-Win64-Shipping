// 函数: sub_141459570
// 地址: 0x141459570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0

if (*(arg1 + 0x61) == 0)
    int32_t rax_1 = *(arg1 + 0x38)
    
    if (rax_1 == 0)
        rax_1 = 0
    
    rdx = rax_1

if (*(arg1 + 0x62) == 0)
    int32_t rax_2 = *(arg1 + 0x3c)
    
    if (rdx u>= rax_2)
        rax_2 = rdx
    
    rdx = rax_2

if (*(arg1 + 0x63) != 0)
    return zx.q(rdx)

int32_t rax_3 = *(arg1 + 0x40)

if (rdx u>= rax_3)
    return rdx

return rax_3
