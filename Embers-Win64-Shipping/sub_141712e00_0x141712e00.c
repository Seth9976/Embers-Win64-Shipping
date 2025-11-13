// 函数: sub_141712e00
// 地址: 0x141712e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm2 = arg2[1]
float zmm7[0x4] = zmm2 ^ 0x80000000
float zmm9[0x4] = *arg2
float zmm10[0x4] = arg2[2]
float zmm6[0x4] = zmm9 ^ 0x80000000
float zmm8[0x4] = zmm10 ^ 0x80000000
float arg_20 = zmm6[0]
float arg_10 = zmm7[0]
float var_114 = zmm8[0]
void* rcx = **arg1
uint128_t zmm3 = *(rcx + 0x28)
uint128_t zmm5 = *(rcx + 0x2c)
uint128_t zmm4 = *(rcx + 0x30)
float zmm1[0x4] = zmm5
void* rax_1 = *(rcx + 0x10)
zmm1[0] = zmm1[0] f* zmm2.d
uint128_t zmm0
zmm0.d = zmm3.d f* zmm9[0]
zmm2.d = zmm4.d f* zmm10[0]
int128_t zmm14

if (zmm0.d f>= 0f)
    zmm14 = *(rax_1 + 0x1c)
else
    zmm14 = *(rax_1 + 0x10)

if (zmm1[0] >= 0f)
    zmm0 = *(rax_1 + 0x20)
else
    zmm0 = *(rax_1 + 0x14)

if (zmm2.d f>= 0f)
    zmm1 = *(rax_1 + 0x24)
else
    zmm1 = *(rax_1 + 0x18)

zmm14.d = zmm14.d f* zmm3.d
uint128_t zmm15
zmm15.d = zmm5.d f* zmm0.d
zmm2.d = zmm4.d f* zmm8[0]
zmm0.d = zmm4.d f* zmm1[0]
zmm1 = zmm5
int32_t var_e8 = zmm14.d
int32_t var_e4 = zmm15.d
int32_t var_110 = zmm0.d
int32_t var_e0 = zmm0.d
zmm0.d = zmm3.d f* zmm6[0]
zmm1[0] = zmm1[0] * zmm7[0]

if (zmm0.d f>= 0f)
    zmm6 = *(rax_1 + 0x1c)
else
    zmm6 = *(rax_1 + 0x10)

if (zmm1[0] >= 0f)
    zmm0 = *(rax_1 + 0x20)
else
    zmm0 = *(rax_1 + 0x14)

if (zmm2.d f>= 0f)
    zmm1 = *(rax_1 + 0x24)
else
    zmm1 = *(rax_1 + 0x18)

int64_t* rcx_1 = arg1[1]
zmm0.d = zmm0.d f* zmm5.d
zmm4.d = zmm4.d f* zmm1[0]
void* r8 = *rcx_1
int32_t arg_8 = zmm0.d
int32_t var_104 = zmm0.d
zmm3.d = zmm3.d f* zmm6[0]
int128_t* rax_3 = rcx_1[1]
zmm1 = *(r8 + 0x18)
int32_t var_118 = zmm4.d
int32_t var_100 = zmm4.d
zmm4 = zx.o(*(r8 + 0x10))
float zmm11[0x4] = *rax_3
zmm6 = rax_3[1]
int32_t rax_4 = *(r8 + 0x18)
zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
zmm5 = _mm_unpacklo_ps(zmm4, zmm1[0].q)
float temp0_2[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xd2)
float temp0_3[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xc9)
int32_t arg_18 = zmm3.d
int32_t var_108 = zmm3.d
zmm5 = _mm_unpacklo_ps(zmm5, _mm_unpacklo_ps(zmm0, 0).q)
float temp0_6[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_8[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
zmm0 = _mm_mul_ps(zmm0, temp0_2)
uint64_t var_d8 = zmm4.q
uint64_t var_f8 = zmm4.q
float temp0_11[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_8, temp0_3), zmm0)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
zmm0 = _mm_shuffle_ps(temp0_12, temp0_12, 0xc9)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xd2)
zmm0 = _mm_mul_ps(zmm0, temp0_2)
float temp0_16[0x4] = _mm_mul_ps(temp0_12, temp0_6)
float temp0_17[0x4] = _mm_mul_ps(temp0_14, temp0_3)
float temp0_18[0x4] = _mm_add_ps(temp0_16, zmm5)
float temp0_19[0x4] = _mm_sub_ps(temp0_17, zmm0)
zmm2 = _mm_unpacklo_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), 0)
float temp0_22[0x4] = _mm_add_ps(temp0_19, temp0_18)
zmm5 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, rax_4[0].q), zmm2.q)
zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_26[0x4] = _mm_add_ps(temp0_22, zmm6)
zmm0 = _mm_mul_ps(zmm0, temp0_2)
float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_3)
var_d8.d = temp0_26[0]
float temp0_30[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0x55)
float temp0_31[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xaa)
float temp0_32[0x4] = _mm_sub_ps(temp0_29, zmm0)
var_d8:4.d = temp0_30[0]
float result_2 = temp0_31[0]
float temp0_33[0x4] = _mm_add_ps(temp0_32, temp0_32)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0xc9), temp0_2)
int64_t* rbx = arg1[2]
zmm15.d = zmm15.d f- temp0_30[0]
zmm14.d = zmm14.d f- temp0_26[0]
int64_t rdi = sx.q(rbx[1].d)
zmm15.d = zmm15.d f* arg2[1]
zmm14.d = zmm14.d f* *arg2
int32_t rax_5 = (rdi + 1).d
zmm15.d = zmm15.d f+ zmm14.d
zmm2 = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0xd2), temp0_3)
float temp0_38[0x4] = _mm_mul_ps(temp0_33, temp0_6)
zmm2 = _mm_add_ps(_mm_add_ps(_mm_sub_ps(zmm2, zmm0), _mm_add_ps(temp0_38, zmm5)), zmm6)
var_f8.d = zmm2.d
zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
zmm3.d = arg_8.d f- zmm0.d
var_f8:4.d = zmm0.d
zmm0.d = arg_18.d f- zmm2.d
float temp0_44[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
zmm2.d = var_118.d f- temp0_44[0]
float result_1 = temp0_44[0]
zmm3.d = zmm3.d f* arg_10
zmm0.d = zmm0.d f* arg_20
zmm2.d = zmm2.d f* var_114
zmm3.d = zmm3.d f+ zmm0.d
zmm0.d = var_110.d f- temp0_31[0]
zmm3.d = zmm3.d f+ zmm2.d
zmm0.d = zmm0.d f* arg2[2]
rbx[1].d = rax_5
zmm15.d = zmm15.d f+ zmm0.d
float result
int64_t* rbx_1
int64_t rdi_1

if (zmm3.d f< zmm15.d)
    if (rax_5 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_6 = *rbx
    int64_t rdx_4 = rdi * 3
    *(rcx_6 + (rdx_4 << 2)) = var_e8.q
    *(rcx_6 + (rdx_4 << 2) + 8) = var_e0
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_9 = (rdi_1 + 1).d
    rbx_1[1].d = rax_9
    
    if (rax_9 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_d8)
    result = result_2
else
    if (rax_5 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_3 = *rbx
    int64_t rdx_1 = rdi * 3
    *(rcx_3 + (rdx_1 << 2)) = var_108.q
    *(rcx_3 + (rdx_1 << 2) + 8) = var_100
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_7 = (rdi_1 + 1).d
    rbx_1[1].d = rax_7
    
    if (rax_7 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_f8)
    result = result_1

int64_t rcx_8 = *rbx_1
int64_t rdx_6 = rdi_1 * 3
*(rcx_8 + (rdx_6 << 2)) = zmm0.q
*(rcx_8 + (rdx_6 << 2) + 8) = result
return result
