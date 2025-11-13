// 函数: sub_142197630
// 地址: 0x142197630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140d266d0(arg1)

if ((*(arg1 + 8) & 0x410) == 0)
    void arg_8
    
    if (sub_141fe97c0(arg1 + 0x60) == 0)
        void* rax_2 =
            sub_142180490(arg1, *sub_140b58260(&arg_8, DistributionDistance", 1), 0, 0, 0, 0)
        *(rax_2 + 0x38) = 0x41c80000
        *(arg1 + 0x88) = rax_2
    
    if (sub_141fe97c0(arg1 + 0x98) == 0)
        void* rax_5 =
            sub_142180490(arg1, *sub_140b58260(&arg_8, DistributionTaperFactor", 1), 0, 0, 0, 0)
        *(rax_5 + 0x38) = 0x3f800000
        *(arg1 + 0xc0) = rax_5
    
    result = sub_141fe97c0(arg1 + 0xc8)
    
    if (result.b == 0)
        result = sub_142180490(arg1, *sub_140b58260(&arg_8, DistributionTaperScale", 1), 0, 0, 0, 0)
        *(result + 0x38) = 0x3f800000
        *(arg1 + 0xf0) = result

return result
