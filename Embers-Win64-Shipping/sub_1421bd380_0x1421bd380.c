// 函数: sub_1421bd380
// 地址: 0x1421bd380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140d266d0(arg1)

if ((*(arg1 + 8) & 0x410) == 0)
    result = sub_141fe97c0(arg1 + 0x48)
    
    if (result.b == 0)
        void arg_8
        result = sub_142180490(arg1, *sub_140b58260(&arg_8, u"DistributionStrength", 1), 0, 0, 0, 0)
        *(result + 0x38) = 0x3f800000
        *(arg1 + 0x70) = result

return result
