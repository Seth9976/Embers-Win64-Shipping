// 函数: sub_1410b1a70
// 地址: 0x1410b1a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = *arg5
int64_t var_a0 = arg5[1]
int32_t var_98 = arg5[2].d
int64_t rax_3 = arg5[3]
int64_t rax_4 = arg5[4]
int64_t rax_5 = arg5[5]
int64_t rax_6 = arg5[6]
int32_t var_70 = arg5[7].d
sub_1410b79f0(arg4, 0, &var_a8)
sub_1410b7b00(arg2, arg3, arg1, 1)
sub_1410b1d30(arg1, arg2, arg3, zx.q(arg4), &var_a8, 0)
char result_1

if (*(arg3 + 0x2018) != 0 || *(arg3 + 0x2028) != 0 || *(arg3 + 0x2068) != 0 || *(arg3 + 0x2140) != 0
        || *(arg3 + 0x2058) != 0 || *(arg3 + 0x2038) s> 0)
    result_1 = 1
else
    result_1 = 0

if (*(arg3 + 0x1b18) == 0 && *(arg3 + 0x1b28) == 0 && *(arg3 + 0x1b68) == 0 && *(arg3 + 0x1c40) == 0
        && *(arg3 + 0x1b58) == 0 && *(arg3 + 0x1b38) s<= 0)
    char result = result_1
    
    if (*(arg3 + 0x1d58) s> 0)
        result = 1
    
    if (result == 0)
        return result

sub_141096650(arg2)
char var_c8_1 = 0
int128_t var_b8
int128_t* var_d0_1 = &var_b8
var_b8 = data_142d3f660
sub_141393b50(&data_143ec4c60, arg2, 1, 1, 0x22, nullptr, 0)
sub_1410b7b00(arg2, arg3, arg1, 1)
int64_t var_68 = var_a8
int64_t var_50_1 = rax_3
int64_t var_48_1 = rax_4
int64_t var_40_1 = rax_5
int64_t var_38_1 = rax_6
int64_t var_60_1 = data_1439b4ac0
int32_t var_30_1 = 0
int32_t var_58_1 = 0x22
sub_1410b1d30(arg1, arg2, arg3, zx.q(arg4), &var_68, 1)
sub_141096650(arg2)
char var_c8_2 = 0
int128_t* var_d0_2 = &var_b8
var_b8 = data_142d3f660
sub_141393b50(&data_143ec4c60, arg2, 1, 1, arg4, nullptr, 0)
sub_1410b7b00(arg2, arg3, arg1, 1)
int64_t var_d8_1 = arg6
return sub_1410b1d30(arg1, arg2, arg3, zx.q(arg4), &var_a8, 1)
