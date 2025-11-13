// 函数: sub_141727800
// 地址: 0x141727800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *arg2
int128_t zmm2 = *(arg2 + 4)
int128_t zmm1 = *(arg2 + 8)
float arg_8 = (zmm3 ^ 0x80000000)[0]
void* rbx = **arg1
int32_t arg_10 = (zmm2 ^ 0x80000000).d
int32_t arg_18 = (zmm1 ^ 0x80000000).d
zmm3[0] = zmm3[0] f* *(rbx + 0x28)
void* rcx = *(rbx + 0x10)
zmm2.d = zmm2.d f* *(rbx + 0x2c)
zmm1.d = zmm1.d f* *(rbx + 0x30)
float var_c8 = zmm3[0]
int32_t var_c4 = zmm2.d
int32_t var_c0 = zmm1.d
float var_d8
float zmm6_1
float zmm7_1
float zmm8_1
zmm6_1, zmm7_1, zmm8_1 = sub_141758e70(rcx, &var_d8, &var_c8, zx.o(0))
float var_f8 = var_d8 f* *(rbx + 0x28)
void* rbx_1 = **arg1
float var_d4
float var_f4 = var_d4 f* *(rbx + 0x2c)
float var_d0
float var_f0 = var_d0 f* *(rbx + 0x30)
void* rcx_1 = *(rbx_1 + 0x10)
float zmm1_1 = zmm7_1 f* *(rbx_1 + 0x2c)
var_c8 = zmm8_1 f* *(rbx_1 + 0x28)
float var_c4_1 = zmm1_1
float var_c0_1 = zmm6_1 f* *(rbx_1 + 0x30)
sub_141758e70(rcx_1, &var_d8, &var_c8, zx.o(0))
int64_t* rcx_2 = arg1[1]
void* rdx_2 = *rcx_2
int128_t zmm15
zmm15.d = var_d8.d f* *(rbx_1 + 0x28)
int128_t zmm13
zmm13.d = var_d4.d f* *(rbx_1 + 0x2c)
int128_t zmm14
zmm14.d = var_d0.d f* *(rbx_1 + 0x30)
uint128_t zmm4 = zx.o(*(rdx_2 + 0x10))
int128_t* rax_3 = rcx_2[1]
float zmm1_2[0x4] = *(rdx_2 + 0x18)
int32_t var_e8 = zmm15.d
int32_t var_e4 = zmm13.d
int32_t var_e0 = zmm14.d
float zmm12[0x4] = *rax_3
float zmm8_2[0x4] = rax_3[1]
int32_t rax_4 = *(rdx_2 + 0x18)
uint128_t zmm0_1 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
uint128_t zmm5 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, zmm1_2[0].q), _mm_unpacklo_ps(zmm0_1, 0).q)
float temp0_4[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xd2)
uint128_t zmm2_1 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), temp0_4)
float temp0_8[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
zmm2_1 = _mm_mul_ps(zmm2_1, temp0_8)
float temp0_10[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
var_c8.q = zmm4.q
var_d8.q = zmm4.q
zmm2_1 = _mm_sub_ps(zmm2_1, zmm0_1)
zmm2_1 = _mm_add_ps(zmm2_1, zmm2_1)
float temp0_13[0x4] = _mm_mul_ps(temp0_10, zmm2_1)
uint128_t zmm10 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9), temp0_4)
float temp0_17[0x4] = _mm_add_ps(temp0_13, zmm5)
zmm10 = _mm_sub_ps(_mm_mul_ps(zmm10, temp0_8), zmm0_1)
zmm2_1 = _mm_unpacklo_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), 0)
zmm10 = _mm_add_ps(zmm10, temp0_17)
zmm5 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, rax_4[0].q), zmm2_1.q)
zmm0_1 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_26[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
zmm10 = _mm_add_ps(zmm10, zmm8_2)
zmm0_1 = _mm_mul_ps(zmm0_1, temp0_4)
float temp0_29[0x4] = _mm_mul_ps(temp0_26, temp0_8)
var_c8 = zmm10.d
uint128_t zmm7_2 = _mm_shuffle_ps(zmm10, zmm10, 0x55)
float temp0_31[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
zmm4.d = var_f8.d f- zmm10.d
float temp0_32[0x4] = _mm_sub_ps(temp0_29, zmm0_1)
int32_t var_c4_2 = zmm7_2.d
float result_2 = temp0_31[0]
float temp0_33[0x4] = _mm_add_ps(temp0_32, temp0_32)
float temp0_34[0x4] = _mm_mul_ps(temp0_10, temp0_33)
zmm2_1 = _mm_shuffle_ps(temp0_33, temp0_33, 0xd2)
zmm0_1 = _mm_shuffle_ps(temp0_33, temp0_33, 0xc9)
zmm2_1 = _mm_mul_ps(zmm2_1, temp0_8)
zmm0_1 = _mm_mul_ps(zmm0_1, temp0_4)
float temp0_39[0x4] = _mm_add_ps(temp0_34, zmm5)
zmm2_1 = _mm_add_ps(_mm_add_ps(_mm_sub_ps(zmm2_1, zmm0_1), temp0_39), zmm8_2)
var_d8 = zmm2_1.d
float temp0_43[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
float var_d4_1 = temp0_43[0]
float result_1 = zmm0_1.d
zmm4.d = zmm4.d f* *arg2
zmm5.d = var_f4.d f- zmm7_2.d
int64_t* rbx_2 = arg1[2]
zmm15.d = zmm15.d f- zmm2_1.d
zmm13.d = zmm13.d f- temp0_43[0]
zmm5.d = zmm5.d f* *(arg2 + 4)
zmm14.d = zmm14.d f- zmm0_1.d
zmm15.d = zmm15.d f* arg_8
zmm5.d = zmm5.d f+ zmm4.d
int64_t rdi_1 = sx.q(rbx_2[1].d)
zmm13.d = zmm13.d f* arg_10
zmm14.d = zmm14.d f* arg_18
int32_t rax_5 = (rdi_1 + 1).d
zmm15.d = zmm15.d f+ zmm13.d
rbx_2[1].d = rax_5
zmm5.d = zmm5.d f+ (var_f0 - temp0_31[0]) f* *(arg2 + 8)
zmm15.d = zmm15.d f+ zmm14.d
float result
int64_t* rbx_3
int64_t rdi_2

if (zmm15.d f< zmm5.d)
    if (rax_5 s> *(rbx_2 + 0xc))
        sub_14083a7e0(rbx_2)
    
    int64_t rcx_7 = *rbx_2
    int64_t rdx_7 = rdi_1 * 3
    *(rcx_7 + (rdx_7 << 2)) = var_f8.q
    *(rcx_7 + (rdx_7 << 2) + 8) = var_f0
    rbx_3 = arg1[3]
    rdi_2 = sx.q(rbx_3[1].d)
    int32_t rax_9 = (rdi_2 + 1).d
    rbx_3[1].d = rax_9
    
    if (rax_9 s> *(rbx_3 + 0xc))
        sub_14083a7e0(rbx_3)
    
    zmm0_1 = zx.o(var_c8.q)
    result = result_2
else
    if (rax_5 s> *(rbx_2 + 0xc))
        sub_14083a7e0(rbx_2)
    
    int64_t rcx_4 = *rbx_2
    int64_t rdx_4 = rdi_1 * 3
    *(rcx_4 + (rdx_4 << 2)) = var_e8.q
    *(rcx_4 + (rdx_4 << 2) + 8) = var_e0
    rbx_3 = arg1[3]
    rdi_2 = sx.q(rbx_3[1].d)
    int32_t rax_7 = (rdi_2 + 1).d
    rbx_3[1].d = rax_7
    
    if (rax_7 s> *(rbx_3 + 0xc))
        sub_14083a7e0(rbx_3)
    
    zmm0_1 = zx.o(var_d8.q)
    result = result_1

int64_t rcx_9 = *rbx_3
int64_t rdx_9 = rdi_2 * 3
*(rcx_9 + (rdx_9 << 2)) = zmm0_1.q
*(rcx_9 + (rdx_9 << 2) + 8) = result
return result
