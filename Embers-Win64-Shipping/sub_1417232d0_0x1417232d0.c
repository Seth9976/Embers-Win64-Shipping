// 函数: sub_1417232d0
// 地址: 0x1417232d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm10 = *(arg2 + 4)
int128_t zmm11 = *arg2
int128_t zmm12 = *(arg2 + 8)
void* rdx = **arg1
int32_t rbp = *(rdx + 0x18)
uint128_t zmm13 = zx.o(*(rdx + 0x10))
void* rdx_1 = arg1[1]
void* rcx = *(rdx_1 + 8)
void* rax_1 = *(rcx + 0x10)
uint128_t zmm0
zmm0.d = (*(rax_1 + 0x18)).d f* *(rcx + 0x30)
uint128_t zmm3
zmm3.d = (*(rax_1 + 0x10)).d f* *(rcx + 0x28)
float zmm2[0x4] = *(rax_1 + 0x14)
zmm2[0] = zmm2[0] f* *(rcx + 0x2c)
int128_t* rax_2 = *(rdx_1 + 0x10)
uint128_t zmm5 = _mm_unpacklo_ps(zmm3, zmm0.q)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm2, 0)
float zmm8[0x4] = *rax_2
zmm5 = _mm_unpacklo_ps(zmm5, temp0_1[0].q)
float temp0_3[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
float temp0_4[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xd2)
float temp0_5[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xff)
zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
uint128_t zmm1 =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_3), _mm_mul_ps(zmm0, temp0_4))
zmm1 = _mm_add_ps(zmm1, zmm1)
float temp0_12[0x4] = _mm_mul_ps(temp0_5, zmm1)
uint128_t zmm4 = _mm_shuffle_ps(zmm1, zmm1, 0xd2)
float temp0_14[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
zmm0 = _mm_mul_ps(temp0_4, temp0_14)
float temp0_16[0x4] = _mm_mul_ps(temp0_3, zmm4)
float temp0_17[0x4] = _mm_add_ps(temp0_12, zmm5)
float temp0_18[0x4] = _mm_mul_ps(temp0_4, temp0_14)
float temp0_19[0x4] = _mm_mul_ps(temp0_3, zmm4)
float temp0_20[0x4] = _mm_sub_ps(temp0_16, zmm0)
float temp0_21[0x4] = _mm_sub_ps(temp0_19, temp0_18)
float temp0_22[0x4] = _mm_add_ps(temp0_20, temp0_17)
float temp0_23[0x4] = _mm_add_ps(temp0_21, temp0_17)
float temp0_24[0x4] = __addps_xmmps_memps(temp0_22, rax_2[1])
float temp0_25[0x4] = __addps_xmmps_memps(temp0_23, rax_2[1])
float var_cc = temp0_24[0]
zmm3 = _mm_shuffle_ps(temp0_24, temp0_24, 0x55)
zmm0 = _mm_shuffle_ps(temp0_24, temp0_24, 0xaa)
int32_t var_c8 = zmm3.d
zmm1 = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
float temp0_29[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
float result_2 = zmm0.d
int32_t var_d4 = zmm1.d
float result_1 = temp0_29[0]
float var_d8 = temp0_25[0]
int64_t* rbx = arg1[2]
zmm5.d = zmm13.d f- temp0_24[0]
float zmm6[0x4] = zmm13
zmm4.d = rbp.d f- zmm0.d
int64_t rdi = sx.q(rbx[1].d)
float temp0_30[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
temp0_30[0] = temp0_30[0] f- zmm3.d
zmm0.d = _mm_shuffle_ps(zmm13, zmm13, 0x55).d f- zmm1.d
zmm5.d = zmm5.d f* zmm11.d
int32_t rax_3 = (rdi + 1).d
zmm4.d = zmm4.d f* zmm12.d
rbx[1].d = rax_3
zmm3.d = zmm13.d f- temp0_25[0]
temp0_30[0] = temp0_30[0] f* zmm10.d
zmm0.d = zmm0.d f* zmm10.d
temp0_30[0] = temp0_30[0] f+ zmm5.d
zmm3.d = zmm3.d f* zmm11.d
zmm3.d = zmm3.d f+ zmm0.d
temp0_30[0] = temp0_30[0] f+ zmm4.d
zmm0.d = rbp.d f- temp0_29[0]
zmm0.d = zmm0.d f* zmm12.d
zmm3.d = zmm3.d f+ zmm0.d
float result
int64_t* rbx_1
int64_t rdi_1

if ((zmm3 ^ data_142d3f780).d f< temp0_30[0])
    if (rax_3 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rax_6 = *rbx
    int64_t rcx_5 = rdi * 3
    *(rax_6 + (rcx_5 << 2)) = zmm13.q
    *(rax_6 + (rcx_5 << 2) + 8) = rbp
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_7 = (rdi_1 + 1).d
    rbx_1[1].d = rax_7
    
    if (rax_7 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_cc.q)
    result = result_2
else
    if (rax_3 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rax_4 = *rbx
    int64_t rcx_2 = rdi * 3
    *(rax_4 + (rcx_2 << 2)) = zmm13.q
    *(rax_4 + (rcx_2 << 2) + 8) = rbp
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_5 = (rdi_1 + 1).d
    rbx_1[1].d = rax_5
    
    if (rax_5 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_d8.q)
    result = result_1

int64_t rcx_7 = *rbx_1
int64_t rdx_6 = rdi_1 * 3
*(rcx_7 + (rdx_6 << 2)) = zmm0.q
*(rcx_7 + (rdx_6 << 2) + 8) = result
return result
