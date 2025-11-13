// 函数: sub_140777b90
// 地址: 0x140777b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_30 = data_14396f148
int16_t var_28 = data_14396f150
int64_t var_20 = 0
int64_t var_18 = 0
int64_t rax_2 = *(arg1 + 0x418)
int64_t var_38 = arg2
int32_t var_26 = 0xffffffff
int64_t result = (*(rax_2 + 0x30))(arg1 + 0x418, &var_38)

if (result != 0)
    result = sx.q(*result)
    
    if (result.d != 0xffffffff)
        int64_t result_1 = result
        result = *(arg1 + 0x458)
        *(result + (result_1 << 3)) = arg3
        *(arg1 + 0x4c8) |= 4

if (var_20 == 0)
    return result

return sub_140a74f90(var_20)
