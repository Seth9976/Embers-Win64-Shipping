// 函数: sub_141ef7070
// 地址: 0x141ef7070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result
int32_t zmm6_1
result, zmm6_1 = sub_141ee2210(arg1)

if (result == 0)
    return result

int64_t var_70_1 = *(arg1 + 0x740)
void*** rax_1 = sub_140a82f30(0x28, 8)
float zmm1_1[0x4] = arg2.o
*rax_1 = &data_142ec17e8
float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xd2)
*(rax_1 + 8) = result.o
temp0_1[0] = zmm6_1
*(rax_1 + 0x18) = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
void*** var_48_1 = rax_1
void* (* var_58)(int64_t* arg1)
void* (* rax_2)(int64_t* arg1) = var_58

if (rax_1 != -8)
    rax_2 = j_sub_141ed4460

var_58 = rax_2
return sub_141e85cb0(&var_58, arg3)
