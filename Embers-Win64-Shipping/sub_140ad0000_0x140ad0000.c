// 函数: sub_140ad0000
// 地址: 0x140ad0000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg2
zmm5[0] = zmm5[0] f- *arg4
float zmm6[0x4] = arg3
float zmm7[0x4] = *(arg2 + 4)
zmm7[0] = zmm7[0] f- arg4[1]
uint128_t zmm8 = *(arg2 + 8)
zmm5[0] = zmm5[0] * zmm5[0]
uint128_t zmm0
zmm0.d = zmm8.d f- arg4[2]
zmm7[0] = zmm7[0] * zmm7[0]
zmm0.d = zmm0.d f* zmm0.d
zmm7[0] = zmm7[0] + zmm5[0]
zmm7[0] = zmm7[0] f+ zmm0.d
zmm0.d = arg3.d f* zmm6[0]

if (zmm7[0] f<= zmm0.d)
    return 2

int32_t var_4c_1 = 0x3f800000
float var_58[0x4]
arg3 = var_58
arg3[0] = zmm5[0]
int64_t var_48_1 = 0
float temp0_1[0x4] = _mm_shuffle_ps(arg3, arg3, 0xe1)
temp0_1[0] = zmm7[0]
int32_t var_40_1 = 0
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
temp0_2[0] = zmm8.d
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
var_58 = temp0_3
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xff)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x55)
zmm0 = _mm_shuffle_ps(temp0_3, temp0_3, 0xaa)
float temp0_7[0x4] = __mulps_xmmps_memps(temp0_4, arg5[3])
var_58[0].q = 0x3f800000
zmm0 = __mulps_xmmps_memps(zmm0, arg5[2])
var_58[2] = 0
float temp0_9[0x4] = __mulps_xmmps_memps(temp0_5, arg5[1])
float temp0_11[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *arg5)
float temp0_14[0x4] = _mm_add_ps(_mm_add_ps(temp0_7, zmm0), _mm_add_ps(temp0_9, temp0_11))
var_48_1.o = temp0_14
char rax_2
float zmm6_1[0x4]
float zmm7_1[0x4]
rax_2, zmm6_1, zmm7_1 = sub_140ad01c0(temp0_14, _mm_shuffle_ps(temp0_14, temp0_14, 0xaa), zmm6, 
    arg6, &var_58, 0x3f800000, arg1, &arg1[2])

if (rax_2 != 0)
    var_58[0] = 0
    var_58[1].q = 0x3f800000
    
    if (sub_140ad01c0(var_48_1:4.d, zmm7_1, zmm6_1, arg6, &var_58, 0xbf800000, &arg1[1], &arg1[3])
            != 0)
        return 1

return 0
