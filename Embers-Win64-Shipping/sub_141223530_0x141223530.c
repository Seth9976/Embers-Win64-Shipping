// 函数: sub_141223530
// 地址: 0x141223530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_20 = 0
char* var_10 = &arg_20
void*** (* var_18)() = j_sub_140597fc0
void*** result = sub_14081d830(0x68, sub_140a756e0(&var_18, &data_143958018) + 0x10, 1, 0)

if (result == 0)
    return nullptr

sub_14125c360(result, arg1, *(arg1 + 8), arg2, arg3)
*result = &data_142f41068
result[5] = 0
result[6] = 0
__builtin_memset(&result[8], 0, 0x24)
result[5] = data_14395da00
result[6] = data_1439b5400
result[0xc].d = 0
result[8] = *(arg1 + 0x20)
result[0xb] = *(arg1 + 0x80)
return result
