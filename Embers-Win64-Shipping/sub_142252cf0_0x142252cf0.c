// 函数: sub_142252cf0
// 地址: 0x142252cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = -0x80
float zmm1 = *arg2 * 127f
char rbx = 0x7f
int32_t rcx_1 = int.d(zmm1 + zmm1 + 0.5f) s>> 1
char rdx

if (rcx_1 s>= 0xffffff80)
    rdx = 0x7f
    
    if (rcx_1 s< 0x7f)
        rdx = rcx_1.b
else
    rdx = -0x80

*(arg1 + 0x4c) = rdx
zmm1 = arg2[1] f* 127f
int32_t rcx_3 = int.d(zmm1 + zmm1 + 0.5f) s>> 1
char rdx_1

if (rcx_3 s>= 0xffffff80)
    rdx_1 = 0x7f
    
    if (rcx_3 s< 0x7f)
        rdx_1 = rcx_3.b
else
    rdx_1 = -0x80

*(arg1 + 0x4d) = rdx_1
zmm1 = arg2[2] f* 127f
int32_t rcx_5 = int.d(zmm1 + zmm1 + 0.5f) s>> 1
char rdx_2

if (rcx_5 s>= 0xffffff80)
    rdx_2 = 0x7f
    
    if (rcx_5 s< 0x7f)
        rdx_2 = rcx_5.b
else
    rdx_2 = -0x80

*(arg1 + 0x4e) = rdx_2
*(arg1 + 0x4f) = 0x7f
zmm1 = *arg4 * 127f
int32_t rcx_7 = int.d(zmm1 + zmm1 + 0.5f) s>> 1
char rdx_3

if (rcx_7 s>= 0xffffff80)
    rdx_3 = 0x7f
    
    if (rcx_7 s< 0x7f)
        rdx_3 = rcx_7.b
else
    rdx_3 = -0x80

*(arg1 + 0x50) = rdx_3
zmm1 = arg4[1] * 127f
int32_t rcx_9 = int.d(zmm1 + zmm1 + 0.5f) s>> 1
char rdx_4

if (rcx_9 s>= 0xffffff80)
    rdx_4 = 0x7f
    
    if (rcx_9 s< 0x7f)
        rdx_4 = rcx_9.b
else
    rdx_4 = -0x80

*(arg1 + 0x51) = rdx_4
zmm1 = arg4[2] * 127f
int32_t rcx_11 = int.d(zmm1 + zmm1 + 0.5f) s>> 1

if (rcx_11 s>= 0xffffff80)
    rax = 0x7f
    
    if (rcx_11 s< 0x7f)
        rax = rcx_11.b

*(arg1 + 0x52) = rax
*(arg1 + 0x53) = 0x7f
int32_t arg_8
sub_1414f8a70(&arg_8, arg4)
int32_t arg_10
sub_1414f8a70(&arg_10, arg3)
int32_t arg_20
sub_1414f8a70(&arg_20, arg2)
int32_t zmm2[0x4] = data_142dd3f80
int128_t zmm4 = data_142dd3fd0
float zmm6[0x4] = data_142dd3fb0
uint128_t zmm1_1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(arg_8), 0), 0)
int32_t var_6c = 0
int32_t var_5c = 0
int32_t var_4c = 0
uint128_t zmm0 = (_mm_cmpgt_epi32(zmm1_1, zmm2) & zmm4) | zmm1_1
zmm1_1 = zx.o(arg_10)
float temp0_3[0x4] = _mm_cvtepi32_ps(zmm0)
zmm1_1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zmm1_1, 0), 0)
float temp0_6[0x4] = _mm_mul_ps(temp0_3, zmm6)
zmm0 = (_mm_cmpgt_epi32(zmm1_1, zmm2) & zmm4) | zmm1_1
zmm1_1 = zx.o(arg_20)
float temp0_8[0x4] = _mm_cvtepi32_ps(zmm0)
zmm1_1 = _mm_unpacklo_epi8(zmm1_1, 0)
float temp0_10[0x4] = _mm_mul_ps(temp0_8, zmm6)
zmm1_1 = _mm_unpacklo_epi16(zmm1_1, 0)
float var_58 = temp0_6[0]
zmm0 = _mm_cmpgt_epi32(zmm1_1, zmm2) & zmm4
float var_68 = temp0_10[0]
zmm2 = _mm_mul_ps(_mm_cvtepi32_ps(zmm0 | zmm1_1), zmm6)
float var_78 = zmm2[0]
int32_t var_74 = _mm_shuffle_ps(zmm2, zmm2, 0x55).d
int32_t var_64 = _mm_shuffle_ps(temp0_10, temp0_10, 0x55).d
int32_t var_54 = _mm_shuffle_ps(temp0_6, temp0_6, 0x55).d
zmm0 = data_142d3f660
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_19[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xaa)
float temp0_20[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xaa)
uint128_t var_48 = zmm0
int32_t var_70 = zmm2[0]
float var_60 = temp0_19[0]
float var_50 = temp0_20[0]
float zmm0_1
float zmm6_1
zmm0_1, zmm6_1 = sub_14062b8d0(&var_78)

zmm0_1 = zmm0_1 >= zmm6_1 ? 1f : -1f

if (zmm0_1 < zmm6_1)
    rbx = -0x7f

*(arg1 + 0x53) = rbx
return 0xffffff81
