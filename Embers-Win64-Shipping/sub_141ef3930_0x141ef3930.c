// 函数: sub_141ef3930
// 地址: 0x141ef3930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce8e10(arg1, arg2)
uint8_t result = (*(*arg2 + 0x1d8))(arg2, &data_1439a9418)

if ((arg2[5].b & 1) != 0)
    int32_t rdx = arg2[6].d
    result = (rdx u>> 0x16).b
    
    if ((result & 1) != 0 || ((rdx u>> 0xc).b & 1) == 0)
        result = sub_140d23dc0(arg1, 0x30)
        
        if (result == 0)
            *(arg1 + 0x8a) |= 0x40

return result
