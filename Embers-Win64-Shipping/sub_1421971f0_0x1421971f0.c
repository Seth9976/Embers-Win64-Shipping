// 函数: sub_1421971f0
// 地址: 0x1421971f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140d266d0(arg1)

if ((*(arg1 + 8) & 0x410) == 0)
    void arg_8
    void* rax_1 =
        sub_1421805d0(arg1, *sub_140b58260(&arg_8, DistributionNoiseSpeed", 1), 0, 0, 0, 0)
    int32_t var_20_1 = 0x42480000
    *(rax_1 + 0x38) = _mm_unpacklo_ps(0x42480000, 0x42480000)
    *(rax_1 + 0x40) = 0x42480000
    *(arg1 + 0x100) = rax_1
    void* rax_3
    float zmm6_1[0x4]
    rax_3, zmm6_1 =
        sub_1421805d0(arg1, *sub_140b58260(&arg_8, DistributionNoiseRange", 1), 0, 0, 0, 0)
    int32_t var_20_2 = 0x42480000
    *(rax_3 + 0x38) = (_mm_unpacklo_ps(zmm6_1, zmm6_1[0].q)).q
    *(rax_3 + 0x40) = 0x42480000
    *(arg1 + 0x80) = rax_3
    void* rax_5 =
        sub_142180490(arg1, *sub_140b58260(&arg_8, DistributionNoiseRangeScale", 1), 0, 0, 0, 0)
    *(rax_5 + 0x38) = 0x3f800000
    *(arg1 + 0xb0) = rax_5
    void* rax_7 = sub_142180490(arg1, *sub_140b58260(&arg_8, DistributionNoiseTangentStrength", 1), 
        0, 0, 0, 0)
    *(rax_7 + 0x38) = 0x437a0000
    *(arg1 + 0x148) = rax_7
    result = sub_142180530(arg1, *sub_140b58260(&arg_8, u"DistributionNoiseScale", 1), 0, 0, 0, 0)
    *(arg1 + 0x188) = result

return result
