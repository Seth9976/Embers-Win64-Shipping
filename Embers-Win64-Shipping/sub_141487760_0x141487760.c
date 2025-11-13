// 函数: sub_141487760
// 地址: 0x141487760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x20)
int32_t var_38 = 0x11
int128_t var_48 = zx.o(0)
int64_t rax_1 = *(arg1 + 0x38)
int64_t rax_2 = *(arg1 + 0x28)
int64_t var_20 = 0
int32_t var_10 = 0
sub_1410b79f0(*(arg1 + 0xf70) | 2, 0, &var_48)
char arg_8 = 0
char* var_50 = &arg_8
void*** (* var_58)() = j_sub_140597fc0
void*** result = sub_14081d830(0x68, sub_140a756e0(&var_58, &data_143958018) + 0x10, 1, 0)

if (result == 0)
    return result

sub_14125c360(result, arg1, *(arg1 + 8), arg2, arg3)
*result = &data_142f8e1b0
result[5] = var_48.q
result[6] = var_48:8.q
result[7].d = var_38
result[8] = rax
result[9] = rax_2
result[0xa] = var_20
result[0xb] = rax_1
result[0xc].d = var_10
int64_t rcx_4 = sx.q((*U"1111")[sx.q(*(arg1 + 8))])

if (((rcx_4 - 0x19).d u<= 1 || *(rcx_4 * 0x14 + &data_143f025f0) == data_143f025d0
        || rcx_4.d == 0x30) && sub_1410a09e0(rcx_4.d) != 0)
    result[5] = data_1439b7020

return result
