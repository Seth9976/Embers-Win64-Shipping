// 函数: sub_142bc2440
// 地址: 0x142bc2440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) != 0)
    int32_t i = 0
    
    if (arg1[5] u> 0)
        do
            uint64_t rdi_1 = zx.q(i) << 3
            sub_142b99980(arg2, *(rdi_1 + *(arg1 + 0x18)))
            i += 1
            *(rdi_1 + *(arg1 + 0x18)) = 0
        while (i u< arg1[5])

sub_142b99980(arg2, *(arg1 + 0x18))
*(arg1 + 0x18) = 0

if (*(arg1 + 8) != 0)
    int32_t i_1 = 0
    
    if (*arg1 u> 0)
        do
            uint64_t rdi_3 = zx.q(i_1) * 2
            sub_142b99980(arg2, *(*(arg1 + 8) + (rdi_3 << 3) + 8))
            i_1 += 1
            *(*(arg1 + 8) + (rdi_3 << 3) + 8) = 0
        while (i_1 u< *arg1)

int64_t result = sub_142b99980(arg2, *(arg1 + 8))
*(arg1 + 8) = 0
return result
