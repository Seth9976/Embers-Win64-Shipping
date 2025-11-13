// 函数: sub_1421f7c10
// 地址: 0x1421f7c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140d266d0(arg1)

if ((*(arg1 + 8) & 0x410) == 0)
    float zmm7[0x4]
    float var_28_1[0x4] = zmm7
    void arg_8
    
    if (sub_141fe97f0(arg1 + 0x40) == 0)
        void* rax_2
        int64_t zmm6_1
        rax_2, zmm6_1 =
            sub_1421a7f20(arg1, *sub_140b58260(&arg_8, DistributionOffsetAmount", 1), 0, 0, 0, 0)
        int32_t var_30_1 = 0
        *(rax_2 + 0x44) = _mm_unpacklo_ps(zx.o(0), zmm6_1)
        *(rax_2 + 0x4c) = 0
        *(rax_2 + 0x38) = _mm_unpacklo_ps(zx.o(0), 0x42480000)
        int32_t var_30_2 = 0
        *(rax_2 + 0x40) = 0
        *(arg1 + 0x80) = rax_2
    
    if (sub_141fe97f0(arg1 + 0x90) == 0)
        void* rax_5
        int64_t zmm6_2
        rax_5, zmm6_2, zmm7 =
            sub_1421a7f20(arg1, *sub_140b58260(&arg_8, DistributionRotationAmount", 1), 0, 0, 0, 0)
        int32_t var_30_3 = 0
        *(rax_5 + 0x44) = (_mm_unpacklo_ps(zx.o(0), zmm6_2)).q
        *(rax_5 + 0x4c) = 0
        *(rax_5 + 0x38) = (_mm_unpacklo_ps(zmm7, zmm7[0].q)).q
        int32_t var_30_4 = 0x3f800000
        *(rax_5 + 0x40) = 0x3f800000
        *(arg1 + 0xd0) = rax_5
    
    result = sub_141fe97f0(arg1 + 0xe0)
    
    if (result == 0)
        void* rax_7
        int64_t zmm6_3
        rax_7, zmm6_3, zmm7 =
            sub_1421a7f20(arg1, *sub_140b58260(&arg_8, DistributionRotationRateAmount", 1), 0, 0, 
            0, 0)
        int32_t var_30_5 = 0
        *(rax_7 + 0x44) = (_mm_unpacklo_ps(zx.o(0), zmm6_3)).q
        *(rax_7 + 0x4c) = 0
        *(rax_7 + 0x38) = (_mm_unpacklo_ps(zmm7, zmm7[0].q)).q
        int32_t var_30_6 = 0x3f800000
        result = 0
        *(rax_7 + 0x40) = 0x3f800000
        *(arg1 + 0x120) = rax_7

return result
