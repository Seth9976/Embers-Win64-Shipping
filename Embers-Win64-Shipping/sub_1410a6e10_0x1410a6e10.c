// 函数: sub_1410a6e10
// 地址: 0x1410a6e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 0x20)
float zmm6[0x4] = data_14399f5c0
float zmm7[0x4]
float var_28[0x4] = zmm7
float zmm8[0x4]
float var_38[0x4] = zmm8
float zmm9[0x4]
float var_48[0x4] = zmm9
int128_t zmm10
int128_t var_58 = zmm10
int128_t zmm11
int128_t var_68 = zmm11
float var_88
float var_84
float var_80
float var_78[0x4]
int32_t* rax
float zmm1[0x4]

if (*(arg1 + 0x68) == 0)
    var_78 = zmm6
    rax = &var_78
else
    zmm1 = rbx[0xc].d
    var_88 = (rbx[8].d ^ 0x80000000)[0]
    var_80 = (zmm1 ^ 0x80000000)[0]
    *(arg1 + 0x34)
    var_84 = (rbx[0xa].d ^ 0x80000000)[0]
    rax, zmm6 = sub_141097410(&var_78, &var_88)

var_88.o = *rax

if (*(arg1 + 0x68) == 0)
    var_78 = zmm6
else
    var_78 = *(arg1 + 0x88)

zmm1 = var_78
int64_t rax_1 = *rbx
zmm6 = 0x3f800000
zmm7 = *(rbx + 0x30)
zmm10.d = 1f / _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
zmm9 = 0x3f800000
float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
zmm8 = 0x3f800000
zmm11.d = 1f / zmm1[0]
zmm8[0] = 1f / _mm_shuffle_ps(zmm1, zmm1, 0xff)[0]
zmm9[0] = 1f / temp0_1[0]
(*(rax_1 + 0x118))(rbx)
zmm6[0] = 1f - cosf(temp0_1[0])[0]
int64_t* rcx_2 = *(arg2 + 0x20)
float temp0_3[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
float zmm2 = zmm10.d
zmm10.d = zmm10.d f* var_84
float zmm3 = zmm11.d
int64_t rax_2 = *rcx_2
zmm11.d = zmm11.d f* var_88
zmm9[0] = zmm9[0] * var_80
zmm2 = zmm2 * temp0_3[0]
float temp0_4[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
float zmm4 = 0.159154937f / zmm6[0]
zmm9[0] = zmm9[0] * temp0_4[0]
int32_t var_7c
zmm8[0] = zmm8[0] f* var_7c
zmm3 = zmm3 * zmm7[0] * zmm4
zmm9[0] = zmm9[0] * zmm4
float temp0_5[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
zmm8[0] = zmm8[0] * temp0_5[0]
var_78[0] = zmm3
var_78[1] = zmm2 * zmm4
zmm8[0] = zmm8[0] * zmm4
var_78[2] = zmm9[0]
var_88 = zmm11.d
var_78[3] = zmm8[0]
int32_t var_84_1 = zmm10.d
float var_80_1 = zmm9[0]
float var_7c_1 = zmm8[0]
return (*(rax_2 + 0x100))(rcx_2, &var_88, &var_78)
