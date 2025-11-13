// 函数: sub_14173aa40
// 地址: 0x14173aa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm3 = *(arg1 + 0x28)
int64_t zmm5 = *(arg1 + 0x30)
int64_t zmm0
zmm0.d = zmm3.d f* *arg3
float zmm4 = *(arg1 + 0x2c)
zmm3.d = zmm3.d f* *arg5
float zmm1 = zmm4 f* arg3[1]
zmm4 = zmm4 f* arg5[1]
int32_t var_38 = zmm0.d
zmm0.d = zmm5.d f* arg3[2]
zmm5.d = zmm5.d f* arg5[2]
float var_34 = zmm1
int32_t var_30 = zmm0.d
zmm0.d = zmm3.d f* zmm3.d
float temp0 = _mm_sqrt_ss(0, zmm4 * zmm4 f+ zmm0.d + zmm5.d f* zmm5.d)
int64_t var_48
float var_40

if (temp0 <= 9.99999994e-09f)
    var_48 = 0
    var_40 = 1f
else
    zmm0.d = 1f / temp0
    zmm3.d = zmm3.d f* zmm0.d
    zmm5.d = zmm5.d f* zmm0.d
    var_48.d = zmm3.d
    var_48:4.d = zmm4 f* zmm0.d
    var_40 = zmm5.d

void* rcx = *(arg1 + 0x10)
float var_20 = var_40
int64_t var_28
int64_t* var_58 = &var_28
var_28 = var_48
int64_t zmm6_1 = sub_1417adf50(rcx, &var_48, &var_38, arg4)
float zmm2_1 = var_40 f* *(arg1 + 0x3c)
float zmm0_1 = var_48.d f* *(arg1 + 0x34)
arg2[1] = var_48:4.d f* *(arg1 + 0x38)
arg2[2] = zmm2_1
*arg2 = zmm0_1

if (not(sub_141750780(arg2).d f!= zmm6_1.d))
    int32_t var_20_1 = 0x3f800000
    *arg2 = _mm_unpacklo_ps(zx.o(0), zmm6_1)
    arg2[2] = 0x3f800000

return arg2
