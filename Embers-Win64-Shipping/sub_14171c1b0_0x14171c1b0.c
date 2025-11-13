// 函数: sub_14171c1b0
// 地址: 0x14171c1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
uint128_t zmm14 = *arg2 ^ 0x80000000
uint128_t zmm15 = *(arg2 + 4) ^ 0x80000000
int32_t arg_8 = (*(arg2 + 8) ^ 0x80000000).d
int32_t var_e8
float zmm6_1[0x4] = sub_14170ea00(rcx, &var_e8, arg2)
int32_t* rdx_1 = *rcx
uint128_t zmm0
zmm0.d = zmm14.d f* *rdx_1
uint128_t zmm1
zmm1.d = zmm6_1.d f* rdx_1[2]
uint128_t zmm2
zmm2.d = zmm15.d f* rdx_1[4]
uint128_t zmm4
zmm4.d = zmm15.d f* rdx_1[7]
float zmm3 = zmm15.d f* rdx_1[1] f+ zmm0.d
zmm0.d = zmm14.d f* rdx_1[3]
zmm3 = zmm3 f+ zmm1.d
zmm1.d = zmm6_1.d f* rdx_1[5]
zmm2.d = zmm2.d f+ zmm0.d
zmm0.d = zmm14.d f* rdx_1[6]
zmm2.d = zmm2.d f+ zmm1.d
zmm1.d = zmm6_1.d f* rdx_1[8]
zmm4.d = zmm4.d f+ zmm0.d
zmm4.d = zmm4.d f+ zmm1.d
int32_t rdi
uint128_t zmm13

if (not(zmm3 f< zmm2.d) && not(zmm3 f< zmm4.d))
    zmm13 = zx.o(*rdx_1)
    rdi = rdx_1[2]
else if (zmm2.d f< zmm3 || zmm2.d f< zmm4.d)
    zmm13 = zx.o(*(rdx_1 + 0x18))
    rdi = rdx_1[8]
else
    zmm13 = zx.o(*(rdx_1 + 0xc))
    rdi = rdx_1[5]

int64_t* rcx_1 = arg1[1]
uint64_t var_f8 = zmm13.q
void* rdx_2 = *rcx_1
zmm4 = zx.o(*(rdx_2 + 0x10))
int32_t rax = *(rdx_2 + 0x18)
zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
uint64_t var_c8 = zmm4.q
int128_t* rax_1 = rcx_1[1]
uint128_t zmm5 = _mm_unpacklo_ps(zmm4, rax.q)
zmm2 = _mm_unpacklo_ps(zmm0, 0)
float zmm12[0x4] = *rax_1
zmm6_1 = rax_1[1]
int32_t rax_2 = *(rdx_2 + 0x18)
zmm5 = _mm_unpacklo_ps(zmm5, zmm2.q)
float temp0_4[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_4)
float temp0_8[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xd2)
zmm0 = _mm_mul_ps(zmm0, temp0_8)
uint64_t var_d8 = zmm4.q
float temp0_10[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
zmm1 = _mm_sub_ps(zmm1, zmm0)
zmm1 = _mm_add_ps(zmm1, zmm1)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xc9), temp0_8)
uint128_t zmm11 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xd2), temp0_4), zmm0)
zmm0 = _mm_add_ps(_mm_mul_ps(temp0_10, zmm1), zmm5)
zmm5 = _mm_unpacklo_ps(zmm4, rax_2.q)
zmm11 = _mm_add_ps(zmm11, zmm0)
zmm5 = _mm_unpacklo_ps(zmm5, _mm_unpacklo_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), 0).q)
zmm11 = _mm_add_ps(zmm11, zmm6_1)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), temp0_8)
zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_4)
uint128_t zmm7 = _mm_shuffle_ps(zmm11, zmm11, 0x55)
float temp0_31[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
var_c8.d = zmm11.d
zmm1 = _mm_sub_ps(zmm1, zmm0)
var_c8:4.d = zmm7.d
float result_2 = temp0_31[0]
zmm1 = _mm_add_ps(zmm1, zmm1)
float temp0_34[0x4] = _mm_mul_ps(temp0_10, zmm1)
zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
zmm4 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xd2), temp0_4)
zmm0 = _mm_mul_ps(zmm0, temp0_8)
float temp0_39[0x4] = _mm_add_ps(temp0_34, zmm5)
zmm4 = _mm_add_ps(_mm_add_ps(_mm_sub_ps(zmm4, zmm0), temp0_39), zmm6_1)
int64_t* rbx = arg1[2]
zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
zmm0.d = var_f8:4.d.d f- zmm1.d
zmm2 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
var_d8:4.d = zmm1.d
zmm1.d = rdi.d f- zmm2.d
float result_1 = zmm2.d
zmm0.d = zmm0.d f* zmm15.d
int32_t var_e4
zmm2.d = var_e4.d f- zmm7.d
zmm1.d = zmm1.d f* arg_8
zmm2.d = zmm2.d f* *(arg2 + 4)
var_d8.d = zmm4.d
zmm3 = (var_f8.d f- zmm4.d) f* zmm14.d f+ zmm0.d
zmm0.d = var_e8.d f- zmm11.d
zmm3 = zmm3 f+ zmm1.d
zmm0.d = zmm0.d f* *arg2
int32_t var_e0
zmm1.d = var_e0.d f- temp0_31[0]
zmm2.d = zmm2.d f+ zmm0.d
zmm1.d = zmm1.d f* *(arg2 + 8)
zmm2.d = zmm2.d f+ zmm1.d
float result
int64_t* rbx_1
int64_t rdi_1

if (zmm3 f< zmm2.d)
    int64_t rdi_2 = sx.q(rbx[1].d)
    int32_t rax_6 = (rdi_2 + 1).d
    rbx[1].d = rax_6
    
    if (rax_6 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_6 = *rbx
    int64_t rdx_6 = rdi_2 * 3
    *(rcx_6 + (rdx_6 << 2)) = var_e8.q
    *(rcx_6 + (rdx_6 << 2) + 8) = var_e0
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_8 = (rdi_1 + 1).d
    rbx_1[1].d = rax_8
    
    if (rax_8 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_c8)
    result = result_2
else
    int64_t rsi_1 = sx.q(rbx[1].d)
    int32_t rax_3 = (rsi_1 + 1).d
    rbx[1].d = rax_3
    
    if (rax_3 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rax_4 = *rbx
    int64_t rcx_3 = rsi_1 * 3
    *(rax_4 + (rcx_3 << 2)) = zmm13.q
    *(rax_4 + (rcx_3 << 2) + 8) = rdi
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_5 = (rdi_1 + 1).d
    rbx_1[1].d = rax_5
    
    if (rax_5 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_d8)
    result = result_1

int64_t rcx_8 = *rbx_1
int64_t rdx_8 = rdi_1 * 3
*(rcx_8 + (rdx_8 << 2)) = zmm0.q
*(rcx_8 + (rdx_8 << 2) + 8) = result
return result
