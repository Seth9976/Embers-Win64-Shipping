// 函数: sub_1421f8640
// 地址: 0x1421f8640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140d266d0(arg1)

if ((*(arg1 + 8) & 0x410) == 0)
    result = sub_141fe97f0(arg1 + 0x38)
    
    if (result.b == 0)
        void arg_8
        result = sub_1421805d0(arg1, *sub_140b58260(&arg_8, u"DistributionScale", 1), 0, 0, 0, 0)
        int32_t var_10_1 = 0x3f800000
        *(result + 0x38) = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
        *(result + 0x40) = 0x3f800000
        *(arg1 + 0x78) = result

return result
