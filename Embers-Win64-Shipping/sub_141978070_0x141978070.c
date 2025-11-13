// 函数: sub_141978070
// 地址: 0x141978070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg1 + 0x10)

if (r8 == 0)
    return 0

int64_t* rcx = data_143f0f180
int64_t r9_1 = *(arg1 + 8)
int64_t result = 0
int32_t arg_18 = 0
int32_t arg_8 = 0
(*(*rcx + 0x640))(rcx, &data_143f02b98, r8, r9_1, &result, &arg_18, &arg_8)
return result
