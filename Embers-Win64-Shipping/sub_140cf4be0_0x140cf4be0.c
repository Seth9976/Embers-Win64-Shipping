// 函数: sub_140cf4be0
// 地址: 0x140cf4be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = sub_140a82f30(0x80, 0)
void*** result_1 = result

if (result != 0)
    sub_140d11aa0()
    sub_140cacf30(result_1, 0, &data_143e1bca0)
    result_1[0xa] = 0
    *result_1 = &data_142ea9c30
    int128_t var_18 = *arg1
    sub_140cd3ee0(result_1, &var_18, arg2, arg3)
    *result_1 = &data_142ea9c30
    result = result_1
    *(result_1 + 0x3c) = 1
    result_1[0xf] = 0

return result
