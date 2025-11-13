// 函数: sub_14203e5a0
// 地址: 0x14203e5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return nullptr

float zmm1[0x4] = arg3[2]
float var_5c_1 = zmm1[0]
float var_58_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
float zmm0[0x4] = *arg3
float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
float var_28[0x4] = zmm0
float var_54_1 = temp0_2[0]
void var_38
int32_t* rax
int512_t zmm6_1
rax, zmm6_1 = sub_140adf5d0(&var_28, &var_38)
float zmm1_1[0x4] = arg3[1]
float var_68_1 = zmm1_1[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
zmm6_1.o = zx.o(*rax)
int32_t r14_1 = rax[2]
float var_60_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
float var_64_1 = temp0_3[0]
int64_t* result
int64_t zmm6_2
result, zmm6_2 = sub_1420222d0(arg2, arg1, sub_142437e30(arg1, 0, 1), arg4, arg5)

if (result == 0)
    return result

sub_141f49960(result, 1)
sub_141f49980(result, 1)
sub_141f499a0(result, 1)
int64_t var_48 = var_68_1.q
float var_40_1 = var_60_1
sub_141f48c60(result, &var_48)
var_48 = zmm6_2
int32_t var_40_2 = r14_1
sub_141f48ec0(result, &var_48)
var_48 = var_5c_1.q
float var_40_3 = var_54_1
sub_141f49070(result, &var_48)
sub_141ef14c0(result, arg1, 0)

if (arg6 != 0)
    sub_142185b40(result, 1)

void*** rax_5 = sub_141f88540()
void** r8_2 = *rax_5
r8_2[0xe](rax_5, result, r8_2)
return result
