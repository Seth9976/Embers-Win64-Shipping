// 函数: sub_141713be0
// 地址: 0x141713be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = arg2[1]
float zmm1[0x4] = arg2[2]
float zmm7[0x4] = zmm1 ^ 0x80000000
float zmm9[0x4] = zmm3 ^ 0x80000000
float zmm10[0x4] = *arg2
float zmm5[0x4] = zmm10 ^ 0x80000000
float arg_8 = zmm5[0]
float arg_10 = zmm9[0]
void* rcx = **arg1
float arg_18 = zmm7[0]
float zmm4[0x4] = *(rcx + 0x2c)
float zmm6[0x4] = *(rcx + 0x28)
float zmm8[0x4] = *(rcx + 0x30)
void* rax_1 = *(rcx + 0x10)
zmm4[0] = zmm4[0] * zmm3[0]
zmm6[0] = zmm6[0] * zmm10[0]
zmm8[0] = zmm8[0] * zmm1[0]
int128_t zmm14

if (zmm6[0] >= 0f)
    zmm14 = *(rax_1 + 0x1c)
else
    zmm14 = *(rax_1 + 0x10)

int128_t zmm13

if (zmm4[0] >= 0f)
    zmm13 = *(rax_1 + 0x20)
else
    zmm13 = *(rax_1 + 0x14)

float zmm0[0x4]

if (zmm8[0] >= 0f)
    zmm0 = *(rax_1 + 0x24)
else
    zmm0 = *(rax_1 + 0x18)

zmm14.d = zmm14.d f* zmm6[0]
zmm8[0] = zmm8[0] * zmm0[0]
zmm13.d = zmm13.d f* zmm4[0]
zmm6[0] = zmm6[0] * zmm5[0]
int32_t var_d8 = zmm14.d
int32_t var_d4 = zmm13.d
bool cond:0 = zmm6[0] >= 0f
float var_d0 = zmm8[0]
zmm4[0] = zmm4[0] * zmm9[0]
zmm8[0] = zmm8[0] * zmm7[0]

if (cond:0)
    zmm5 = *(rax_1 + 0x1c)
else
    zmm5 = *(rax_1 + 0x10)

float zmm2[0x4]

if (zmm4[0] >= 0f)
    zmm2 = *(rax_1 + 0x20)
else
    zmm2 = *(rax_1 + 0x14)

if (zmm8[0] >= 0f)
    zmm0 = *(rax_1 + 0x24)
else
    zmm0 = *(rax_1 + 0x18)

int64_t* r8 = arg1[1]
int64_t* rbx = arg1[2]
zmm0[0] = zmm0[0] * zmm8[0]
void* rcx_1 = *r8
zmm4[0] = zmm4[0] * zmm2[0]
float var_f0 = zmm0[0]
void* rax_2 = *(rcx_1 + 0x10)
float var_f4 = zmm4[0]
zmm6[0] = zmm6[0] * zmm5[0]
zmm3 = *(rax_2 + 0x10)
zmm3[0] = zmm3[0] f* *(rcx_1 + 0x28)
zmm0 = *(rax_2 + 0x18)
zmm0[0] = zmm0[0] f* *(rcx_1 + 0x30)
zmm2 = *(rax_2 + 0x14)
zmm2[0] = zmm2[0] f* *(rcx_1 + 0x2c)
int128_t* rax_3 = r8[1]
float temp0[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
float var_f8 = zmm6[0]
float temp0_1[0x4] = _mm_unpacklo_ps(zmm2, 0)
zmm10 = *rax_3
float temp0_2[0x4] = _mm_unpacklo_ps(temp0, temp0_1[0].q)
float temp0_3[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xc9)
float temp0_4[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xd2)
float temp0_5[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xff)
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0xc9), temp0_4)
float temp0_10[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0xd2), temp0_3), temp0_7)
float temp0_11[0x4] = _mm_add_ps(temp0_10, temp0_10)
float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc9)
float temp0_13[0x4] = _mm_mul_ps(temp0_4, temp0_12)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xd2)
float temp0_15[0x4] = _mm_mul_ps(temp0_3, temp0_14)
float temp0_16[0x4] = _mm_mul_ps(temp0_11, temp0_5)
float temp0_17[0x4] = _mm_mul_ps(temp0_4, temp0_12)
zmm2 = var_f4
float temp0_18[0x4] = _mm_sub_ps(temp0_15, temp0_13)
float temp0_19[0x4] = _mm_mul_ps(temp0_3, temp0_14)
float temp0_20[0x4] = _mm_add_ps(temp0_16, temp0_2)
float temp0_21[0x4] = _mm_mul_ps(temp0_11, temp0_5)
float temp0_22[0x4] = _mm_add_ps(temp0_18, temp0_20)
float temp0_23[0x4] = _mm_sub_ps(temp0_19, temp0_17)
float temp0_24[0x4] = _mm_add_ps(temp0_21, temp0_2)
float temp0_25[0x4] = __addps_xmmps_memps(temp0_22, rax_3[1])
float temp0_26[0x4] = _mm_add_ps(temp0_23, temp0_24)
float var_c8 = temp0_25[0]
float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
zmm14.d = zmm14.d f- temp0_25[0]
float temp0_28[0x4] = __addps_xmmps_memps(temp0_26, rax_3[1])
float var_c4 = temp0_27[0]
zmm13.d = zmm13.d f- temp0_27[0]
zmm4 = var_f0
float temp0_29[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
float result_2 = temp0_29[0]
zmm8[0] = zmm8[0] - temp0_29[0]
float var_e8 = temp0_28[0]
float temp0_30[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xaa)
float temp0_31[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x55)
zmm4[0] = zmm4[0] - temp0_30[0]
float result_1 = temp0_30[0]
zmm0 = arg_8
zmm6[0] = zmm6[0] - temp0_28[0]
float var_e4 = temp0_31[0]
zmm2[0] = zmm2[0] - temp0_31[0]
zmm13.d = zmm13.d f* arg2[1]
int64_t rdi = sx.q(rbx[1].d)
zmm14.d = zmm14.d f* *arg2
zmm1 = arg_18
zmm2[0] = zmm2[0] * arg_10
int32_t rax_4 = (rdi + 1).d
zmm13.d = zmm13.d f+ zmm14.d
zmm1[0] = zmm1[0] * zmm4[0]
zmm0[0] = zmm0[0] * zmm6[0]
zmm0[0] = zmm0[0] + zmm2[0]
zmm0[0] = zmm0[0] + zmm1[0]
zmm1 = arg2[2]
zmm1[0] = zmm1[0] * zmm8[0]
rbx[1].d = rax_4
zmm13.d = zmm13.d f+ zmm1[0]
float result
int64_t* rbx_1
int64_t rdi_1

if (zmm0[0] f< zmm13.d)
    if (rax_4 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_6 = *rbx
    int64_t rdx_4 = rdi * 3
    *(rcx_6 + (rdx_4 << 2)) = var_d8.q
    *(rcx_6 + (rdx_4 << 2) + 8) = var_d0
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_8 = (rdi_1 + 1).d
    rbx_1[1].d = rax_8
    
    if (rax_8 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_c8.q)
    result = result_2
else
    if (rax_4 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_3 = *rbx
    int64_t rdx_1 = rdi * 3
    *(rcx_3 + (rdx_1 << 2)) = var_f8.q
    *(rcx_3 + (rdx_1 << 2) + 8) = var_f0
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_6 = (rdi_1 + 1).d
    rbx_1[1].d = rax_6
    
    if (rax_6 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_e8.q)
    result = result_1

int64_t rcx_8 = *rbx_1
int64_t rdx_6 = rdi_1 * 3
*(rcx_8 + (rdx_6 << 2)) = zmm0.q
*(rcx_8 + (rdx_6 << 2) + 8) = result
return result
