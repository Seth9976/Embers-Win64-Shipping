// 函数: sub_1421bd960
// 地址: 0x1421bd960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
int32_t rcx = *(arg1 + 8)
uint64_t result = zx.q(rcx u>> 4)

if ((result.b & 1) == 0)
    result = j_sub_140a82f30(0x28)
    
    if (result != 0)
        *(result + 8) = 0xffffffff
        *(result + 0xc) = 4
        *(result + 0x10) = 0
        *result = &data_1432eda48
        *(result + 0x20) = 0
        *(result + 0x18) = arg1 + 0x118
    
    rcx = *(arg1 + 8)
    *(arg1 + 0x138) = result

if ((rcx & 0x410) == 0)
    result = sub_141fe97c0(arg1 + 0x60)
    
    if (result.b == 0)
        void arg_8
        result = sub_142180490(arg1, *sub_140b58260(&arg_8, RequiredDistributionSpawnRate", 1), 0, 
            0, 0, 0)
        *(arg1 + 0x88) = result

return result
