// 函数: sub_1414c9270
// 地址: 0x1414c9270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x20)
int32_t var_38 = 0x11
int128_t var_48 = zx.o(0)
int64_t rax_1 = *(arg1 + 0x38)
int64_t rax_2 = *(arg1 + 0x28)
int64_t var_20 = 0
int32_t var_10 = 0
sub_1410b79f0(*(arg1 + 0xf70) & 0xfffffffd, 0, &var_48)
char arg_8 = 0
char* var_50 = &arg_8
void*** (* var_58)() = j_sub_140597fc0
void*** result = sub_14081d830(0x68, sub_140a756e0(&var_58, &data_143958018) + 0x10, 1, 0)
void*** result_1 = result

if (result != 0)
    sub_14125c360(result, arg1, *(arg1 + 8), arg2, arg3)
    *result_1 = &data_142f97820
    result_1[5] = var_48.q
    result = result_1
    result_1[6] = var_48:8.q
    result_1[7].d = var_38
    result_1[8] = rax
    result_1[9] = rax_2
    result_1[0xa] = var_20
    result_1[0xb] = rax_1
    result_1[0xc].d = var_10

return result
