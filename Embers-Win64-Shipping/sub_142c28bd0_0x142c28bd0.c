// 函数: sub_142c28bd0
// 地址: 0x142c28bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 0xa) != 0)
    uint32_t rdx_3 = (zx.d(*(arg1 + 4)) << 8) + zx.d(*(arg1 + 5))
    uint32_t r8_2 = zx.d(*(arg1 + 6)) << 8
    void* var_28 = arg1
    int32_t rcx_3 = rdx_3 u>> 1 & 0x5b6db6db
    void* var_20_1 = arg1 + 4
    int32_t rdx_5 = rdx_3 - (rcx_3 u>> 1 & 0x5b6db6db) - rcx_3
    int32_t r10_5 = (((rdx_5 u>> 3) + rdx_5) & 0xc71c71c7) u% 0x3f
    uint32_t r8_3 = r8_2 + zx.d(*(arg1 + 7))
    int32_t var_18_1 = r10_5
    int32_t rdx_9 = r8_3 u>> 1 & 0x5b6db6db
    int32_t r8_5 = r8_3 - (rdx_9 u>> 1 & 0x5b6db6db) - rdx_9
    int32_t var_14_1 = r10_5 + 1 + (((r8_5 u>> 3) + r8_5) & 0xc71c71c7) u% 0x3f
    
    if (sub_142c25ee0(arg1 + 2, arg2, arg1) != 0
            && sub_142c181c0(arg1 + 8, arg2, arg1, &var_28) != 0)
        return true

return false
