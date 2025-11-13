// 函数: sub_140adf300
// 地址: 0x140adf300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm2 = arg3[1]
int32_t zmm3 = arg3[2]
int32_t var_6c = 0
float var_78[0x4]
var_78[0] = *arg3
int64_t var_68 = 0
float temp0[0x4] = _mm_shuffle_ps(var_78, var_78, 0xe1)
temp0[0] = zmm2
int32_t var_60 = 0
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm3
_mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
float var_58[0x10]
float* rax
float zmm6_1[0x4]
rax, zmm6_1 = sub_14077e760(&var_58, arg1)
float temp0_3[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
float temp0_4[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa)
float temp0_5[0x4] = __mulps_xmmps_memps(temp0_3, *(rax + 0x30))
float temp0_6[0x4] = __mulps_xmmps_memps(temp0_4, *(rax + 0x20))
float temp0_8[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0x55), *(rax + 0x10))
float temp0_13[0x4] = _mm_add_ps(_mm_add_ps(temp0_5, temp0_6), 
    _mm_add_ps(temp0_8, __mulps_xmmps_memps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0), *rax)))
*arg2 = temp0_13[0]
float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x55)
arg2[2] = _mm_shuffle_ps(temp0_13, temp0_13, 0xaa)[0]
arg2[1] = temp0_14[0]
return arg2
