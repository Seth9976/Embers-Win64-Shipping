// 函数: sub_141726cf0
// 地址: 0x141726cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm11[0x4] = *(arg2 + 4)
int128_t zmm13 = *arg2
void* rcx = **arg1
float zmm14[0x4] = *(arg2 + 8)
int128_t zmm12

if (zmm13.d f>= 0f)
    zmm12 = *(rcx + 0x1c)
else
    zmm12 = *(rcx + 0x10)

int32_t var_b8 = zmm12.d
int128_t zmm10

if (zmm11[0] >= 0f)
    zmm10 = *(rcx + 0x20)
else
    zmm10 = *(rcx + 0x14)

int32_t var_b4 = zmm10.d
int128_t zmm9

if (zmm14[0] >= 0f)
    zmm9 = *(rcx + 0x24)
else
    zmm9 = *(rcx + 0x18)

int32_t var_b0 = zmm9.d
int128_t zmm8

if (zmm13.d f<= -0f)
    zmm8 = *(rcx + 0x1c)
else
    zmm8 = *(rcx + 0x10)

int32_t var_d8 = zmm8.d
int128_t zmm7

if ((zmm11 ^ data_142d3f780)[0] >= 0f)
    zmm7 = *(rcx + 0x20)
else
    zmm7 = *(rcx + 0x14)

int32_t var_d4 = zmm7.d
float zmm0[0x4]

if ((zmm14 ^ data_142d3f780)[0] >= 0f)
    zmm0 = *(rcx + 0x24)
else
    zmm0 = *(rcx + 0x18)

int64_t* rdx = arg1[1]
int64_t* rbx = arg1[2]
float arg_8 = zmm0[0]
float var_d0 = zmm0[0]
void* rcx_1 = *rdx
void* rax_1 = *(rcx_1 + 0x10)
float zmm3[0x4] = *(rcx_1 + 0x28)
zmm3[0] = zmm3[0] f* *(rax_1 + 0x10)
zmm0 = *(rax_1 + 0x18)
zmm0[0] = zmm0[0] f* *(rcx_1 + 0x30)
float zmm2[0x4] = *(rax_1 + 0x14)
zmm2[0] = zmm2[0] f* *(rcx_1 + 0x2c)
int128_t* rax_2 = rdx[1]
float temp0[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm2, 0)
float zmm4[0x4] = *rax_2
float temp0_2[0x4] = _mm_unpacklo_ps(temp0, temp0_1[0].q)
float temp0_3[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
float temp0_4[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0xc9), temp0_4)
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0xd2), temp0_3)
float temp0_9[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
float temp0_10[0x4] = _mm_sub_ps(temp0_8, temp0_6)
float temp0_11[0x4] = _mm_add_ps(temp0_10, temp0_10)
float temp0_12[0x4] = _mm_mul_ps(temp0_9, temp0_11)
float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc9), temp0_4)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xd2)
float temp0_16[0x4] = _mm_add_ps(temp0_12, temp0_2)
float temp0_20[0x4] = __addps_xmmps_memps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_15, temp0_3), temp0_14), temp0_16), rax_2[1])
zmm8.d = zmm8.d f- temp0_20[0]
float var_a8 = temp0_20[0]
zmm12.d = zmm12.d f- temp0_20[0]
float var_c8 = temp0_20[0]
float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x55)
zmm7.d = zmm7.d f- temp0_21[0]
float var_c4 = temp0_21[0]
zmm0 = arg_8
zmm8.d = zmm8.d f* zmm13.d
zmm13.d = zmm13.d f* zmm12.d
zmm7.d = zmm7.d f* zmm11[0]
float temp0_22[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x55)
float temp0_23[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)
zmm10.d = zmm10.d f- temp0_22[0]
zmm7.d = zmm7.d f+ zmm8.d
float temp0_24[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)
zmm9.d = zmm9.d f- temp0_24[0]
zmm0[0] = zmm0[0] - temp0_23[0]
float var_a4 = temp0_22[0]
float result_2 = temp0_24[0]
zmm11[0] = zmm11[0] f* zmm10.d
zmm0[0] = zmm0[0] * zmm14[0]
zmm14[0] = zmm14[0] f* zmm9.d
zmm11[0] = zmm11[0] f+ zmm13.d
zmm7.d = zmm7.d f+ zmm0[0]
float result_1 = temp0_23[0]
zmm11[0] = zmm11[0] + zmm14[0]
int64_t rdi = sx.q(rbx[1].d)
int32_t rax_3 = (rdi + 1).d
rbx[1].d = rax_3
float result
int64_t* rbx_1
int64_t rdi_1

if ((zmm7 ^ data_142d3f780).d f< zmm11[0])
    if (rax_3 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_6 = *rbx
    int64_t rdx_5 = rdi * 3
    *(rcx_6 + (rdx_5 << 2)) = var_b8.q
    *(rcx_6 + (rdx_5 << 2) + 8) = var_b0
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_7 = (rdi_1 + 1).d
    rbx_1[1].d = rax_7
    
    if (rax_7 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_a8.q)
    result = result_2
else
    if (rax_3 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_3 = *rbx
    int64_t rdx_2 = rdi * 3
    *(rcx_3 + (rdx_2 << 2)) = var_d8.q
    *(rcx_3 + (rdx_2 << 2) + 8) = var_d0
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_5 = (rdi_1 + 1).d
    rbx_1[1].d = rax_5
    
    if (rax_5 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_c8.q)
    result = result_1

int64_t rcx_8 = *rbx_1
int64_t rdx_7 = rdi_1 * 3
*(rcx_8 + (rdx_7 << 2)) = zmm0.q
*(rcx_8 + (rdx_7 << 2) + 8) = result
return result
