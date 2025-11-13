// 函数: sub_1421f8250
// 地址: 0x1421f8250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140d266d0(arg1)

if ((*(arg1 + 8) & 0x410) == 0)
    void arg_8
    
    if (sub_141fe97c0(arg1 + 0x38) == 0)
        void* rax_2 =
            sub_142180490(arg1, *sub_140b58260(&arg_8, RequiredDistributionSpawnRate", 1), 0, 0, 0, 
            0)
        *(rax_2 + 0x38) = 0x41a00000
        *(arg1 + 0x60) = rax_2
    
    if (sub_141fe97c0(arg1 + 0x68) == 0)
        void* rax_5 =
            sub_142180490(arg1, *sub_140b58260(&arg_8, RequiredDistributionSpawnRateScale", 1), 0, 
            0, 0, 0)
        *(rax_5 + 0x38) = 0x3f800000
        *(arg1 + 0x90) = rax_5
    
    result = sub_141fe97c0(arg1 + 0xb0)
    
    if (result.b == 0)
        result = sub_142180490(arg1, *sub_140b58260(&arg_8, BurstScaleDistribution", 1), 0, 0, 0, 0)
        *(result + 0x38) = 0x3f800000
        *(arg1 + 0xd8) = result

return result
