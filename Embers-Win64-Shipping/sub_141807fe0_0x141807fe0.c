// 函数: sub_141807fe0
// 地址: 0x141807fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int16_t* const rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

void var_c8
sub_140685ed0(&var_c8, rdx)
int32_t count_3
int64_t count_1 = sx.q(count_3)
int64_t rbx = 0
uint32_t count = 0
int64_t var_d8 = 0
int32_t var_cc = 0
int32_t temp0 = count_1.d

if (temp0 s> 0)
    uint32_t count_2 = count_1.d
    sub_1405daba0(&var_d8)
    rbx = var_d8
    memset(rbx, 0, count_1)
    count = count_2
else if (temp0 s< 0)
    int32_t rsi_2 = neg.d(count_1.d)
    
    if (rsi_2 != 0)
        uint32_t count_4 = neg.d(rsi_2)
        
        if (count_4 != count_1.d)
            memmove(count_1, nullptr, count_4 - count_1.d)
        
        sub_1405dac10(&var_d8)
        count = count_4
        rbx = var_d8

int64_t var_40
memcpy(rbx, var_40, count)
*(arg1 + 0xb8) = 1
void*** result = j_sub_140a82f30(0x18)

if (result != 0)
    *result = &data_142fe1538
    result[1] = rbx
    rbx = 0
    result[2].d = count
    *(result + 0x14) = var_cc

int64_t* rcx_7 = *(arg1 + 0xb0)
*(arg1 + 0xb0) = result

if (rcx_7 != 0)
    result = (**rcx_7)(rcx_7, 1)

if (rbx != 0)
    result = sub_140a74f90(rbx)

int64_t var_48

if (var_48 != 0)
    result = sub_140a74f90(var_48)

__security_check_cookie(rax_1 ^ &var_f8)
return result
