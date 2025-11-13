// 函数: sub_142197390
// 地址: 0x142197390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140d266d0(arg1)

if ((*(arg1 + 8) & 0x410) == 0)
    void arg_8
    
    if (sub_141fe97f0(arg1 + 0x40) == 0)
        void* rax_2 =
            sub_1421805d0(arg1, *sub_140b58260(&arg_8, DistributionSource", 1), 0, 0, 0, 0)
        int32_t var_10_1 = 0x42480000
        *(rax_2 + 0x38) = _mm_unpacklo_ps(0x42480000, 0x42480000)
        *(rax_2 + 0x40) = 0x42480000
        *(arg1 + 0x80) = rax_2
    
    if (sub_141fe97f0(arg1 + 0x90) == 0)
        void* rax_5 =
            sub_1421805d0(arg1, *sub_140b58260(&arg_8, DistributionSourceTangent", 1), 0, 0, 0, 0)
        int32_t var_10_2 = 0
        *(rax_5 + 0x38) = _mm_unpacklo_ps(0x3f800000, 0)
        *(rax_5 + 0x40) = 0
        *(arg1 + 0xd0) = rax_5
    
    result = sub_141fe97c0(arg1 + 0xe0)
    
    if (result.b == 0)
        result =
            sub_142180490(arg1, *sub_140b58260(&arg_8, DistributionSourceStrength", 1), 0, 0, 0, 0)
        *(result + 0x38) = 0x41c80000
        *(arg1 + 0x108) = result

return result
