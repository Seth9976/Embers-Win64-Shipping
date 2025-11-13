// 函数: sub_14278a560
// 地址: 0x14278a560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t var_a8
sub_140b58170(&var_a8, "DynamicState", 1)
int64_t rbx = var_a8
void*** rax_2 = j_sub_140a82f30(0x30)
void*** rsi = rax_2

if (rax_2 == 0)
    rsi = nullptr
else
    rax_2[1] = 0
    *rsi = &data_142fc9648
    int32_t zmm6_1 = sub_140b58170(&rsi[1], &data_1437020ab, 1)
    int64_t zmm0_1 = *arg3
    *rsi = &data_142fc96b0
    int32_t rax_3 = arg3[1].d
    *(rsi + 0x14) = zmm0_1
    *(rsi + 0x1c) = rax_3
    rsi[2].d = zmm6_1
    rsi[4].d = 4
    *(rsi + 0x24) = 2
    rsi[5].d = 1

int64_t var_98 = rbx
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t var_5c = 0x80
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
sub_14278f330(arg1, &var_98)
int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

void* result = sub_1409aaf90(&var_88)

if (rsi != 0)
    result = (**rsi)(rsi, 1)

__security_check_cookie(rax_1 ^ &var_c8)
return result
