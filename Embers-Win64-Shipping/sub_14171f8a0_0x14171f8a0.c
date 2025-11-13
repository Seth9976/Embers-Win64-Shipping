// 函数: sub_14171f8a0
// 地址: 0x14171f8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm12 = *(arg2 + 4)
int128_t zmm13 = *arg2
int128_t zmm14 = *(arg2 + 8)
void* rdx = **arg1
int32_t rbp = *(rdx + 0x18)
uint128_t zmm15 = zx.o(*(rdx + 0x10))
int64_t* rdx_1 = arg1[1]
void* rcx = *rdx_1
void* rax_1 = *(rcx + 0x10)
uint128_t zmm0
zmm0.d = (*(rax_1 + 0x18)).d f* *(rcx + 0x30)
uint128_t zmm3
zmm3.d = (*(rax_1 + 0x10)).d f* *(rcx + 0x28)
float zmm2[0x4] = *(rax_1 + 0x14)
zmm2[0] = zmm2[0] f* *(rcx + 0x2c)
float (* rax_2)[0x4] = rdx_1[1]
uint128_t zmm10 = _mm_unpacklo_ps(zmm3, zmm0.q)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm2, 0)
float zmm9[0x4] = *rax_2
zmm10 = _mm_unpacklo_ps(zmm10, temp0_1[0].q)
float temp0_3[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
float temp0_4[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xd2)
float temp0_5[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xff)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0xc9), temp0_4)
uint128_t zmm7 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0xd2), temp0_3), zmm0)
zmm7 = _mm_add_ps(zmm7, zmm7)
float temp0_12[0x4] = _mm_mul_ps(temp0_5, zmm7)
uint128_t zmm4 = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
uint128_t zmm6 = _mm_mul_ps(temp0_3, zmm4)
float temp0_15[0x4] = _mm_mul_ps(temp0_3, zmm4)
float temp0_16[0x4] = _mm_add_ps(temp0_12, zmm10)
float temp0_17[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
zmm0 = _mm_mul_ps(temp0_4, temp0_17)
float temp0_19[0x4] = _mm_mul_ps(temp0_4, temp0_17)
float temp0_20[0x4] = _mm_mul_ps(temp0_5, zmm7)
zmm6 = _mm_sub_ps(zmm6, zmm0)
float temp0_22[0x4] = _mm_sub_ps(temp0_15, temp0_19)
float temp0_23[0x4] = _mm_add_ps(temp0_20, zmm10)
zmm6 = _mm_add_ps(zmm6, temp0_16)
float temp0_25[0x4] = _mm_add_ps(temp0_22, temp0_23)
zmm6 = __addps_xmmps_memps(zmm6, rax_2[1])
float temp0_27[0x4] = __addps_xmmps_memps(temp0_25, rax_2[1])
int32_t var_ec = zmm6.d
zmm3 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
int32_t var_e8 = zmm3.d
float result_2 = zmm0.d
float var_f8 = temp0_27[0]
float temp0_30[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0x55)
int64_t* rbx = arg1[2]
float zmm5 = zmm15.d f- zmm6.d
zmm4.d = rbp.d f- zmm0.d
int64_t rdi = sx.q(rbx[1].d)
zmm6.d = _mm_shuffle_ps(zmm15, zmm15, 0x55).d f- zmm3.d
float temp0_32[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xaa)
int32_t rax_3 = (rdi + 1).d
zmm4.d = zmm4.d f* zmm14.d
zmm6.d = zmm6.d f* zmm12.d
float result_1 = temp0_32[0]
float var_f4 = temp0_30[0]
zmm7 = zx.o(zmm15.q)
zmm6.d = zmm6.d f+ zmm5 f* zmm13.d
rbx[1].d = rax_3
zmm0 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
zmm3.d = zmm7.d f- temp0_27[0]
zmm0.d = zmm0.d f- temp0_30[0]
zmm6.d = zmm6.d f+ zmm4.d
zmm3.d = zmm3.d f* zmm13.d
zmm0.d = zmm0.d f* zmm12.d
zmm3.d = zmm3.d f+ zmm0.d
zmm0.d = rbp.d f- temp0_32[0]
zmm0.d = zmm0.d f* zmm14.d
zmm3.d = zmm3.d f+ zmm0.d
float result
int64_t* rbx_1
int64_t rdi_1

if ((zmm3 ^ data_142d3f780).d f< zmm6.d)
    if (rax_3 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rax_6 = *rbx
    int64_t rcx_5 = rdi * 3
    *(rax_6 + (rcx_5 << 2)) = zmm15.q
    *(rax_6 + (rcx_5 << 2) + 8) = rbp
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_7 = (rdi_1 + 1).d
    rbx_1[1].d = rax_7
    
    if (rax_7 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_ec.q)
    result = result_2
else
    if (rax_3 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rax_4 = *rbx
    int64_t rcx_2 = rdi * 3
    *(rax_4 + (rcx_2 << 2)) = zmm7.q
    *(rax_4 + (rcx_2 << 2) + 8) = rbp
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_5 = (rdi_1 + 1).d
    rbx_1[1].d = rax_5
    
    if (rax_5 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_f8.q)
    result = result_1

int64_t rcx_7 = *rbx_1
int64_t rdx_6 = rdi_1 * 3
*(rcx_7 + (rdx_6 << 2)) = zmm0.q
*(rcx_7 + (rdx_6 << 2) + 8) = result
return result
