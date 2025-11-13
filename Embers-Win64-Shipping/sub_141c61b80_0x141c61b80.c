// 函数: sub_141c61b80
// 地址: 0x141c61b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x90) = *(arg2 + 0x10)
int64_t i_1 = 4
*(arg1 + 0x94) = 0x41000000
int64_t result
int64_t i

do
    int64_t rdi_1 = sx.q(*(arg1 + 0x78))
    int32_t rax_1 = (rdi_1 + 1).d
    *(arg1 + 0x78) = rax_1
    
    if (rax_1 s> *(arg1 + 0x7c))
        sub_1405a4df0(arg1 + 0x70)
    
    result = *(arg1 + 0x70)
    int64_t rcx_1 = rdi_1 * 3
    *(result + (rcx_1 << 3)) = 1
    *(result + (rcx_1 << 3) + 8) = 0
    *(result + (rcx_1 << 3) + 0x10) = 0
    i = i_1
    i_1 -= 1
while (i != 1)
*(arg1 + 0x98) = 0
return result
