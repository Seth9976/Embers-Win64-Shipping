// 函数: sub_1421bd8c0
// 地址: 0x1421bd8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140d266d0(arg1)

if ((*(arg1 + 8) & 0x410) == 0)
    result = sub_141fe97f0(arg1 + 0x30)
    
    if (result.b == 0)
        void arg_8
        result = sub_1421a7e80(arg1, *sub_140b58260(&arg_8, u"DistributionRotRate", 1), 0, 0, 0, 0)
        *(arg1 + 0x70) = result

return result
