// 函数: sub_14263c3a0
// 地址: 0x14263c3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
uint64_t result = zx.q(*(arg1 + 8) u>> 4)

if ((result.b & 1) != 0)
    result = *(arg1 + 0x10)
    
    if ((*(result + 0xcc) & 1) == 0 && ((*(arg1 + 0x30) & 1) == 0 || *(arg1 + 0x28) == 0xffffffff)
            && *(arg1 + 0x2c) == 0xff)
        result = zx.q(data_143f712a8)
        *(arg1 + 0x2c) = result.b
        result.w += 1
        data_143f712a8 = result.w

return result
