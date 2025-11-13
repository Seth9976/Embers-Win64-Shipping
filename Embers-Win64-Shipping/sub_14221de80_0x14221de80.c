// 函数: sub_14221de80
// 地址: 0x14221de80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
uint64_t result = zx.q(*(arg1 + 8) u>> 4)

if ((result.b & 1) == 0)
    result = j_sub_140a82f30(0x28)
    
    if (result != 0)
        *(result + 8) = 0xffffffff
        *(result + 0xc) = 4
        *(result + 0x10) = 0
        *result = &data_1432eda48
        *(result + 0x20) = 0
        *(result + 0x18) = arg1 + 0x40
        *(arg1 + 0x60) = result
        return result
    
    *(arg1 + 0x60) = result

return result
