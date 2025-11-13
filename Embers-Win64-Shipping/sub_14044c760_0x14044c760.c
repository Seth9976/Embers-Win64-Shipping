// 函数: sub_14044c760
// 地址: 0x14044c760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_68
int64_t rax_1 = __security_cookie ^ &var_68
uint32_t result = 0
data_1439a9618 = 0x40
int32_t i = 0
data_1439a95c1 = 0
bool cond:0 = data_1439a95c0 == 0
data_1439a95c9 = 0
data_1439a95cd = 0
data_1439a9610 = 0

if (not(cond:0))
    int32_t temp0_1
    int32_t temp1_1
    int32_t temp2_1
    int32_t temp3_1
    temp0_1, temp1_1, temp2_1, temp3_1 = __cpuid(0, 0)
    var_68 = temp0_1
    var_68 = temp1_1
    int32_t var_64_1 = temp3_1
    uint128_t zmm0 = zx.o(var_68.q)
    int64_t var_58
    __builtin_memset(&var_58, 0, 0x40)
    data_1439a95c9 = temp2_1
    int32_t temp0_2
    int32_t temp1_2
    int32_t temp2_2
    int32_t temp3_2
    temp0_2, temp1_2, temp2_2, temp3_2 = __cpuid(0x80000000, 0)
    data_1439a95c1 = zmm0.q
    zmm0 = data_142d57920
    data_1439a95cd = 0
    var_68.o = zmm0
    int32_t var_64_2 = temp1_2
    int32_t var_60_1 = temp2_2
    int32_t var_5c_1 = temp3_2
    
    if (temp0_2 u>= 0x80000004)
        do
            int32_t temp0_3
            int32_t temp1_3
            int32_t temp2_3
            int32_t temp3_3
            temp0_3, temp1_3, temp2_3, temp3_3 = __cpuid(i - 0x7ffffffe, 0)
            var_68 = temp0_3
            uint64_t i_1 = zx.q(i)
            i += 1
            int32_t var_64_3 = temp1_3
            int32_t var_60_2 = temp2_3
            int32_t var_5c_2 = temp3_3
            *(&var_58 + i_1 * 0x10) = var_68.o
        while (i u< 3)
    
    zmm0 = var_58.o
    int32_t temp0_4
    int32_t temp1_4
    int32_t temp2_4
    int32_t temp3_4
    temp0_4, temp1_4, temp2_4, temp3_4 = __cpuid(1, 0)
    data_1439a9610 = temp0_4
    data_1439a9614 = temp2_4
    int32_t temp0_5
    int32_t temp1_5
    char result_1
    int32_t temp3_5
    temp0_5, temp1_5, result_1, temp3_5 = __cpuid(0x80000006, 0)
    data_1439a95ce = zmm0
    result = zx.d(result_1)
    int64_t var_48
    data_1439a95de = var_48.o
    data_1439a9618 = result
    int64_t var_38
    data_1439a95ee = var_38.o
    int64_t var_28
    data_1439a95fe = var_28.o

__security_check_cookie(rax_1 ^ &var_68)
return result
