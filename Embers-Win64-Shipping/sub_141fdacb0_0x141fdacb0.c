// 函数: sub_141fdacb0
// 地址: 0x141fdacb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x10)
int32_t r15 = *(rax + 0xa0)
int64_t rbx = sx.q(*(rax + 0xa0))
int32_t rax_1 = (rbx + 1).d
*(rax + 0xa0) = rax_1

if (rax_1 s> *(rax + 0xa4))
    sub_1407755b0(rax + 0x98)

int64_t rbx_1 = rbx * 0x58
uint64_t* rbx_2 = rbx_1 + *(rax + 0x98)

if (rbx_1 == neg.q(*(rax + 0x98)))
    rbx_2 = nullptr
else
    *(rbx_2 + 0x4c) = 0

char rdi_1 = 0x7f
*rbx_2 = *arg2
rbx_2[1].d = arg2[1].d
char rax_3 = -0x80
*(rbx_2 + 0xc) = *arg3
float zmm1 = *arg4 * 127f
int32_t rcx_2 = int.d(zmm1 + zmm1 + 0.5f) s>> 1
char rdx_1

if (rcx_2 s>= 0xffffff80)
    rdx_1 = 0x7f
    
    if (rcx_2 s< 0x7f)
        rdx_1 = rcx_2.b
else
    rdx_1 = -0x80

*(rbx_2 + 0x4c) = rdx_1
zmm1 = arg4[1] f* 127f
int32_t rcx_4 = int.d(zmm1 + zmm1 + 0.5f) s>> 1
char rdx_2

if (rcx_4 s>= 0xffffff80)
    rdx_2 = 0x7f
    
    if (rcx_4 s< 0x7f)
        rdx_2 = rcx_4.b
else
    rdx_2 = -0x80

*(rbx_2 + 0x4d) = rdx_2
zmm1 = arg4[2] f* 127f
int32_t rcx_6 = int.d(zmm1 + zmm1 + 0.5f) s>> 1
char rdx_3

if (rcx_6 s>= 0xffffff80)
    rdx_3 = 0x7f
    
    if (rcx_6 s< 0x7f)
        rdx_3 = rcx_6.b
else
    rdx_3 = -0x80

float* arg_30
float* r8 = arg_30
*(rbx_2 + 0x4e) = rdx_3
*(rbx_2 + 0x4f) = 0x7f
zmm1 = *r8 * 127f
int32_t rcx_8 = int.d(zmm1 + zmm1 + 0.5f) s>> 1
char rdx_4

if (rcx_8 s>= 0xffffff80)
    rdx_4 = 0x7f
    
    if (rcx_8 s< 0x7f)
        rdx_4 = rcx_8.b
else
    rdx_4 = -0x80

rbx_2[0xa].b = rdx_4
zmm1 = r8[1] * 127f
int32_t rcx_10 = int.d(zmm1 + zmm1 + 0.5f) s>> 1
char rdx_5

if (rcx_10 s>= 0xffffff80)
    rdx_5 = 0x7f
    
    if (rcx_10 s< 0x7f)
        rdx_5 = rcx_10.b
else
    rdx_5 = -0x80

*(rbx_2 + 0x51) = rdx_5
zmm1 = r8[2] * 127f
int32_t rcx_12 = int.d(zmm1 + zmm1 + 0.5f) s>> 1

if (rcx_12 s>= 0xffffff80)
    rax_3 = 0x7f
    
    if (rcx_12 s< 0x7f)
        rax_3 = rcx_12.b

*(rbx_2 + 0x52) = rax_3
*(rbx_2 + 0x53) = 0x7f
sub_1414f8a70(&arg_30, r8)
int32_t arg_8
sub_1414f8a70(&arg_8, arg5)
int32_t arg_10
sub_1414f8a70(&arg_10, arg4)
int32_t zmm2[0x4] = data_142dd3f80
int128_t zmm4 = data_142dd3fd0
int64_t zmm5 = (zx.o(0)).q
float zmm6[0x4] = data_142dd3fb0
uint128_t zmm1_1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(arg_30.d), zmm5), zmm5)
int32_t var_7c = 0
int32_t var_6c = 0
int32_t var_5c = 0
uint128_t zmm0 = (_mm_cmpgt_epi32(zmm1_1, zmm2) & zmm4) | zmm1_1
zmm1_1 = zx.o(arg_8)
float zmm7[0x4] = _mm_cvtepi32_ps(zmm0)
zmm1_1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zmm1_1, zmm5), zmm5)
zmm7 = _mm_mul_ps(zmm7, zmm6)
zmm0 = (_mm_cmpgt_epi32(zmm1_1, zmm2) & zmm4) | zmm1_1
zmm1_1 = zx.o(arg_10)
float zmm3[0x4] = _mm_cvtepi32_ps(zmm0)
zmm1_1 = _mm_unpacklo_epi8(zmm1_1, zmm5)
zmm3 = _mm_mul_ps(zmm3, zmm6)
zmm1_1 = _mm_unpacklo_epi16(zmm1_1, zmm5)
float var_68 = zmm7[0]
zmm0 = _mm_cmpgt_epi32(zmm1_1, zmm2) & zmm4
float var_78 = zmm3[0]
zmm2 = _mm_mul_ps(_mm_cvtepi32_ps(zmm0 | zmm1_1), zmm6)
float var_88 = zmm2[0]
int32_t var_84 = _mm_shuffle_ps(zmm2, zmm2, 0x55).d
int32_t var_74 = _mm_shuffle_ps(zmm3, zmm3, 0x55).d
int32_t var_64 = _mm_shuffle_ps(zmm7, zmm7, 0x55).d
zmm0 = data_142d3f660
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
uint128_t var_58 = zmm0
int32_t var_80 = zmm2[0]
float var_70 = zmm3[0]
float var_60 = zmm7[0]
float zmm0_1
float zmm6_1
zmm0_1, zmm6_1 = sub_14062b8d0(&var_88)

zmm0_1 = zmm0_1 >= zmm6_1 ? 1f : -1f

if (zmm0_1 < zmm6_1)
    rdi_1 = -0x7f

*(rbx_2 + 0x53) = rdi_1
*(rbx_2 + 0x54) = *arg6
return zx.q(r15)
