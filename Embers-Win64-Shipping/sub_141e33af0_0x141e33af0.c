// 函数: sub_141e33af0
// 地址: 0x141e33af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg1 + 0x70)

if (result != 0)
    int64_t* rcx = *(arg1 + 0x28)
    int32_t zmm1 = *(arg2 + 0x14)
    int32_t var_18_1 = *(arg2 + 0x10)
    int32_t zmm0 = *(arg2 + 0x18)
    int64_t result_1 = result
    result = *(arg2 + 8)
    int32_t var_10_1 = zmm0
    int32_t var_14_1 = zmm1
    int64_t result_2 = result
    
    if (rcx != 0)
        return (*(*rcx + 0x10))(rcx, &result_1)

return result
