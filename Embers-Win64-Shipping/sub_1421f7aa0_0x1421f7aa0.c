// 函数: sub_1421f7aa0
// 地址: 0x1421f7aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140d266d0(arg1)

if ((*(arg1 + 8) & 0x410) == 0)
    void arg_8
    
    if (sub_141fe97f0(arg1 + 0x30) == 0)
        void* rax_2 =
            sub_1421805d0(arg1, *sub_140b58260(&arg_8, DistributionOffset", 1), 0, 0, 0, 0)
        *(rax_2 + 0x38) = data_143dbb1f8.q
        *(rax_2 + 0x40) = data_143dbb200
        *(arg1 + 0x70) = rax_2
    
    if (sub_141fe97c0(arg1 + 0x78) == 0)
        void* rax_5 =
            sub_142180490(arg1, *sub_140b58260(&arg_8, DistributionHeight", 1), 0, 0, 0, 0)
        *(rax_5 + 0x38) = 0x42480000
        *(arg1 + 0xa0) = rax_5
    
    if (sub_141fe97c0(arg1 + 0xa8) == 0)
        void* rax_8 = sub_142180490(arg1, *sub_140b58260(&arg_8, DistributionAngle", 1), 0, 0, 0, 0)
        *(rax_8 + 0x38) = 0x42b40000
        *(arg1 + 0xd0) = rax_8
    
    result = sub_141fe97c0(arg1 + 0xd8)
    
    if (result.b == 0)
        result = sub_142180490(arg1, *sub_140b58260(&arg_8, DistributionThickness", 1), 0, 0, 0, 0)
        *(result + 0x38) = 0
        *(arg1 + 0x100) = result

return result
