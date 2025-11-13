// 函数: sub_14264a950
// 地址: 0x14264a950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
float var_88
sub_140acc920(&var_88, &arg_20)
int32_t var_98 = 0x40000000
int32_t var_a8 = 4
int32_t zmm10 = sub_14264a440(arg1, arg2, arg3, 0x3ecccccd[0], 4, &var_88)
float zmm0 = arg3[2] f- arg2[2]
float zmm8 = *arg2
float zmm7 = arg2[1]
float zmm1 = *arg3 - zmm8
float zmm2 = arg3[1] f- zmm7
int32_t zmm9 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1 * zmm1 + zmm0 * zmm0) f* 1.33299994f
void var_78
sub_140acc920(&var_78, &arg_20)
int32_t* var_a0
var_a0.d = zmm10
int32_t zmm0_1 = zmm9 f+ arg2[2]
var_88 = zmm8
float var_84 = zmm7
var_a8.q = &var_78
int32_t var_80 = zmm0_1
int64_t result
float zmm9_1
int32_t zmm10_1
float zmm11_1
int32_t zmm12_1
result, zmm9_1, zmm10_1, zmm11_1, zmm12_1 = sub_14264a690(arg1, arg3, &var_88, 0x41f00000, var_a8)

if (arg5 == 0)
    return result

sub_140acc920(&var_78, &arg_20)
zmm9_1 = zmm9_1 f+ arg3[2]
var_a0.d = zmm10_1
var_88 = zmm11_1
int32_t var_84_1 = zmm12_1
float var_80_1 = zmm9_1
var_a8.q = &var_78
return sub_14264a690(arg1, arg2, &var_88, 0x41f00000, var_a8)
