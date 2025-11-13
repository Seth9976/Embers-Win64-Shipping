// 函数: sub_141484b90
// 地址: 0x141484b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14

if (*(arg1 + 8) s>= 3)
    r14 = *(arg1 + 0x58)
else
    r14 = *(arg1 + 0xe0)

char arg_8 = 0
char* var_30 = &arg_8
void*** (* var_38)() = j_sub_140597fc0
void*** result = sub_14081d830(0x70, sub_140a756e0(&var_38, &data_143958018) + 0x10, 1, 0)

if (result == 0)
    return 0

int16_t rbx = data_1439b6e1c
char rdi = data_1439b6e1e
sub_14125c360(result, arg1, *(arg1 + 8), arg2, arg3)
*result = &data_142f8da78
result[5] = 0
result[6] = 0
result[7].d = 0x11
result[8] = *(arg1 + 0x50)
result[9] = 0
result[0xa] = 0
result[0xb] = r14
result[0xc].d = 0
result[0xd].w = rbx
*(result + 0x6a) = rdi
int64_t rax_2

if (*(result + 0x6a) != 0)
    rax_2 = data_14395da00

if (*(result + 0x6a) == 0 || *(result + 0x69) != 0)
    rax_2 = data_1439b59c0

result[5] = rax_2
result[6] = data_1439b6e58
result[0xc].d = 0
return result
