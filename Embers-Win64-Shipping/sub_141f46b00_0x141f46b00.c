// 函数: sub_141f46b00
// 地址: 0x141f46b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ef3930(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9478)

if (sub_140b4e7c0(arg2, &data_1439a9478) s< 0x13 && (*(arg1 + 0x230) s> 0 || *(arg1 + 0x220) s> 0))
    *(arg1 + 0x1f0) = 2

int32_t result = (*(*arg2 + 0x1d8))(arg2, &data_1439a9478)

if ((arg2[5].b & 1) != 0)
    result = sub_140b4e7c0(arg2, &data_1439a9478)
    
    if (result s< 6)
        *(arg1 + 0x2b0) = *(arg1 + 0x2a8)
        result = *(arg1 + 0x2a4)
        *(arg1 + 0x2ac) = result

return result
