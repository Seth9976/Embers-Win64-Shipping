// 函数: sub_1421e05e0
// 地址: 0x1421e05e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x320) = *(arg1 + 0x30)
*(arg2 + 0x340) = _mm_unpacklo_ps(_mm_unpacklo_ps(*(arg1 + 0x38), *(arg1 + 0x40)), 
    _mm_unpacklo_ps(*(arg1 + 0x3c), 0)[0].q)
float var_18[0x4]
*(arg2 + 0x330) = *sub_140ade170(arg1 + 0x44, &var_18)
*(arg2 + 0x350) = _mm_unpacklo_ps(_mm_unpacklo_ps(*(arg1 + 0x50), (*(arg1 + 0x58))[0].q), 
    _mm_unpacklo_ps(*(arg1 + 0x54), 0)[0].q)
*(arg2 + 0x360) = *(arg1 + 0x5c)
*(arg2 + 0x364) = *(arg1 + 0x60)
*(arg2 + 0x3b0) ^= (*(arg2 + 0x3b0) ^ *(arg1 + 0x64)) & 1
int32_t rax_7 = *(arg2 + 0x3b0)
int32_t rcx_4 = ((*(arg1 + 0x64) ^ rax_7) & 2) ^ rax_7
*(arg2 + 0x3b0) = rcx_4
int32_t rax_11 = ((*(arg1 + 0x64) ^ rcx_4) & 4) ^ rcx_4
*(arg2 + 0x3b0) = rax_11
int32_t rcx_8 = ((*(arg1 + 0x64) ^ rax_11) & 8) ^ rax_11
*(arg2 + 0x3b0) = rcx_8
int32_t result = ((*(arg1 + 0x64) ^ rcx_8) & 0x10) ^ rcx_8
*(arg2 + 0x3b0) = result
return result
