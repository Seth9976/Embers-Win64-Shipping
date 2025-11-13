// 函数: sub_1414c9dc0
// 地址: 0x1414c9dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = data_14395da00
int64_t var_60 = data_1439b5400
char arg_20
char* var_70 = &arg_20
int64_t var_50 = 0
void*** (* var_78)() = j_sub_140597fc0
int64_t var_38 = 0
int32_t var_30 = 0
arg_20 = 0
void*** result
int128_t zmm6_1
result, zmm6_1 = sub_14081d830(0x68, sub_140a756e0(&var_78, &data_143958018) + 0x10, 1, 0)

if (result == 0)
    return nullptr

sub_14125c360(result, arg1, *(arg1 + 8), arg2, arg3)
*(result + 0x28) = rax.o
*result = &data_142f97310
int128_t var_58
*(result + 0x38) = var_58
*(result + 0x48) = zmm6_1
*(result + 0x58) = var_38.o
result[8] = *(arg1 + 0x20)
result[9] = *(arg1 + 0x28)
int64_t rcx_4 = *(arg1 + 0x68)
*result = &data_142f97330
result[0xb] = rcx_4
return result
