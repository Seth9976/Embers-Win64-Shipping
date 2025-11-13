// 函数: sub_1417d8ac0
// 地址: 0x1417d8ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_48[0x4]
sub_1417db650(arg1, &var_48)
float var_38[0x4]
float var_88 = var_38[0]
float var_84 = _mm_shuffle_ps(var_38, var_38, 0x55)[0]
float zmm0[0x4] = var_48
float temp0_1[0x4] = _mm_shuffle_ps(var_38, var_38, 0xaa)
float var_58[0x4] = zmm0
float var_80 = temp0_1[0]
void arg_20
sub_140ae16d0(arg3, &arg_20, 0)
void var_78
sub_140acd070(&var_78, &var_58)
int64_t arg_8 = *(arg1 + 0xb8)
int64_t var_68
sub_140b63b70(&arg_8, &var_68)
int32_t rax_1
int32_t* r9
int128_t zmm6_1
rax_1, r9, zmm6_1 = sub_140ae16d0(arg3, &arg_20, 0)
zmm6_1.d = zmm6_1.d f* 0.25f
char var_98 = 1
int512_t zmm3_1
zmm3_1.o = zmm6_1
int64_t* result = sub_1417d9930(arg2, &var_88, &var_68, r9, rax_1, arg4)
int64_t rcx_5 = var_68

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
