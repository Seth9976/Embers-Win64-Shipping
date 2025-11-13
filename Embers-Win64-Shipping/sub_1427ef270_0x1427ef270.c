// 函数: sub_1427ef270
// 地址: 0x1427ef270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_c8
(*(*arg2 + 0xa0))(arg2, &var_c8)
void var_e8
void* rax_2 = (*(*arg2 + 0xf0))(arg2, &var_e8)
float var_bc
int128_t zmm9 = var_bc
int32_t var_c4
int128_t zmm14 = var_c4
float zmm2 = var_c8
int32_t var_c0
int128_t zmm15 = var_c0
int128_t zmm8 = *(rax_2 + 0x10)
int128_t zmm6 = *(rax_2 + 0x14)
zmm8.d = zmm8.d f+ zmm8.d
int128_t zmm7 = *(rax_2 + 0x18)
zmm6.d = zmm6.d f+ zmm6.d
int32_t var_b8
int128_t zmm13 = var_b8
zmm7.d = zmm7.d f+ zmm7.d
int128_t zmm10
zmm10.d = zmm9.d f* zmm9.d
zmm10.d = zmm10.d f- 0.5f
float arg_8 = zmm10.d
float zmm5 = zmm14.d f* zmm6.d + zmm2 f* zmm8.d + zmm15.d f* zmm7.d
float zmm3 = (zmm15.d f* zmm8.d - zmm2 f* zmm7.d) f* zmm9.d + zmm10.d f* zmm6.d + zmm14.d * zmm5
float zmm0 = zmm10.d f* zmm7.d
zmm10.d =
    zmm13.d f+ (zmm14.d f* zmm7.d - zmm15.d f* zmm6.d) f* zmm9.d + zmm10.d f* zmm8.d + zmm2 * zmm5
zmm2 = (zmm2 f* zmm6.d - zmm14.d f* zmm8.d) f* zmm9.d + zmm0 + zmm15.d * zmm5
int32_t var_b4
int128_t zmm12 = var_b4
int32_t var_b0
int128_t zmm11 = var_b0
zmm7 = *arg3
float zmm4 = *(arg3 + 4)
zmm9.d = zmm12.d f+ zmm3
zmm6 = *(arg3 + 8)
zmm4 = zmm4 + zmm4
zmm7.d = zmm7.d f+ zmm7.d
zmm6.d = zmm6.d f+ zmm6.d
zmm8.d = zmm11.d f+ zmm2
zmm2 = zmm15.d f* zmm7.d
zmm5 = zmm14.d * zmm4 + var_c8 f* zmm7.d + zmm15.d f* zmm6.d
zmm3 = zmm14.d f* zmm6.d - zmm15.d * zmm4
zmm15.d = zmm15.d f* zmm5
zmm0 = var_c8
float zmm1 = zmm14.d * zmm5
zmm13.d = zmm13.d f+ zmm3 * var_bc + arg_8 f* zmm7.d + zmm0 * zmm5
zmm14.d = zmm14.d f* zmm7.d
zmm13.d = zmm13.d f- zmm10.d
zmm2 = (zmm2 - zmm0 f* zmm6.d) * var_bc + arg_8 * zmm4 + zmm1
zmm1 = var_c8 * zmm4
int32_t var_f8 = zmm13.d
zmm12.d = zmm12.d f+ zmm2
zmm12.d = zmm12.d f- zmm9.d
int32_t var_f4 = zmm12.d
zmm11.d = zmm11.d f+ (zmm1 f- zmm14.d) * var_bc + arg_8 f* zmm6.d f+ zmm15.d
zmm11.d = zmm11.d f- zmm8.d
int32_t var_f0 = zmm11.d
sub_1427f3880(arg1, arg2, &var_f8)
return arg1
