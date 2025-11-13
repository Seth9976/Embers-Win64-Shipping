// 函数: sub_1424edfa0
// 地址: 0x1424edfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int32_t var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_58, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t rax_3 = *(arg2 + 0x20)
uint128_t zmm6
zmm6.d = var_58.d f- var_48
int32_t var_54
int32_t var_44
uint128_t zmm7
zmm7.d = var_54.d f- var_44
int64_t rcx_2
rcx_2.b = rax_3 != 0
int32_t var_50
int32_t var_40
int128_t zmm8
zmm8.d = var_50.d f- var_40
*(arg2 + 0x20) = rcx_2 + rax_3
uint128_t zmm0
zmm0.d = zmm6.d f* zmm6.d
uint128_t zmm2
zmm2.d = zmm7.d f* zmm7.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm8.d f* zmm8.d

if (zmm2.d f== 1f)
    goto label_1424ee129

int32_t result

if (zmm2.d f>= 9.99999994e-09f)
    float zmm3 = zmm2.d
    float temp0_1[0x4] = _mm_rsqrt_ss(zmm2[0], zmm3)
    zmm3 = zmm3 * 0.5f
    zmm0.d = temp0_1.d f* temp0_1[0]
    zmm2.d = 0.5f - zmm3 f* zmm0.d
    zmm0.d = temp0_1.d f* zmm2.d
    temp0_1[0] = temp0_1[0] f+ zmm0.d
    zmm0.d = temp0_1.d f* (0.5f - zmm3 * temp0_1[0] * temp0_1[0])
    temp0_1[0] = temp0_1[0] f+ zmm0.d
    zmm6.d = zmm6.d f* temp0_1[0]
    zmm7.d = zmm7.d f* temp0_1[0]
    zmm8.d = zmm8.d f* temp0_1[0]
label_1424ee129:
    result = zmm8.d
    int32_t var_54_2 = zmm7.d
    var_58 = zmm6.d
else
    float zmm1 = data_143dbb1fc
    var_58 = data_143dbb1f8.d
    result = data_143dbb200.d
    float var_54_1 = zmm1

*arg3 = var_58.q
arg3[1].d = result
return result
