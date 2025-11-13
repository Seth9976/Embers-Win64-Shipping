// 函数: sub_1410f2f40
// 地址: 0x1410f2f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = data_1439b59c0
int64_t var_70 = data_1439b5400
char arg_20
char* var_80 = &arg_20
int64_t var_60 = 0
void*** (* var_88)() = j_sub_140597fc0
int64_t var_48 = 0
int32_t var_40 = 0
arg_20 = 0
void*** result
int128_t zmm6_1
result, zmm6_1 = sub_14081d830(0x78, sub_140a756e0(&var_88, &data_143958018) + 0x10, 1, 0)

if (result == 0)
    return nullptr

int32_t rbx_1 = *(arg1 + 0xf68)
char rdi_1 = *(arg1 + 0xf6c)
sub_14125c360(result, arg1, *(arg1 + 8), arg2, arg3)
*(result + 0x28) = rax.o
*result = &data_142f18d20
int128_t var_68
*(result + 0x38) = var_68
*(result + 0x6c) = rbx_1
*(result + 0x48) = zmm6_1
result[0xe].b = rdi_1
*(result + 0x58) = var_48.o
result[0xd].b = 1
result[8] = *(arg1 + 0x20)
result[9] = *(arg1 + 0x28)
result[0xb] = *(arg1 + 0x30)
return result
