// 函数: sub_1410f2e30
// 地址: 0x1410f2e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_20 = 0
char* var_10 = &arg_20
void*** (* var_18)() = j_sub_140597fc0
void*** result = sub_14081d830(0x68, sub_140a756e0(&var_18, &data_143958018) + 0x10, 1, 0)

if (result == 0)
    return nullptr

sub_14125c360(result, arg1, *(arg1 + 8), arg2, arg3)
*result = &data_142f190b8
result[5] = 0
result[6] = 0
__builtin_memset(&result[8], 0, 0x24)
bool cond:0_1 = result[2].d s>= 3
result[8] = *(arg1 + 0xb8)
result[9] = *(arg1 + 0xc0)
int64_t rax_3

if (cond:0_1)
    rax_3 = *(arg1 + 0xa8)
else
    rax_3 = *(arg1 + 0xb0)

result[0xb] = rax_3
result[5] = data_14395da00
result[6] = data_1439b5400
result[0xc].d = 0
return result
