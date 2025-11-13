// 函数: sub_14171eb10
// 地址: 0x14171eb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg2
void* rcx_1 = **arg1
int128_t zmm13 = *(arg2 + 4) ^ 0x80000000
int128_t zmm14 = *(arg2 + 8) ^ 0x80000000
int128_t zmm15 = *arg2 ^ 0x80000000
int32_t var_b4 = zmm13.d
int32_t var_b8 = zmm15.d
int32_t var_b0 = zmm14.d
float var_d8
sub_141758e70(rcx_1, &var_d8, arg2, zx.o(0))
float var_e8
sub_141758e70(**arg1, &var_e8, &var_b8, zx.o(0))
int64_t* rcx_4 = arg1[1]
void* rdx_2 = *rcx_4
uint128_t zmm4 = zx.o(*(rdx_2 + 0x10))
int32_t rax = *(rdx_2 + 0x18)
uint128_t zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
int128_t* rax_1 = rcx_4[1]
uint128_t zmm5 = _mm_unpacklo_ps(zmm4, rax.q)
uint128_t zmm2 = _mm_unpacklo_ps(zmm0, 0)
float zmm12[0x4] = *rax_1
float zmm6[0x4] = rax_1[1]
zmm5 = _mm_unpacklo_ps(zmm5, zmm2.q)
float temp0_4[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
uint128_t zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_7[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xd2)
zmm0 = _mm_mul_ps(zmm0, temp0_7)
zmm1 = _mm_mul_ps(zmm1, temp0_4)
var_b8.q = zmm4.q
float temp0_10[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
zmm1 = _mm_sub_ps(zmm1, zmm0)
zmm1 = _mm_add_ps(zmm1, zmm1)
zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
uint128_t zmm10 = _mm_shuffle_ps(zmm1, zmm1, 0xd2)
zmm0 = _mm_mul_ps(zmm0, temp0_7)
zmm10 = _mm_add_ps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm10, temp0_4), zmm0), 
        _mm_add_ps(_mm_mul_ps(temp0_10, zmm1), zmm5)), 
    zmm6)
var_b8 = zmm10.d
uint128_t zmm9 = _mm_shuffle_ps(zmm10, zmm10, 0x55)
int32_t var_b4_1 = zmm9.d
int32_t rax_2 = *(rdx_2 + 0x18)
int64_t* rdi = arg1[2]
zmm5 = zmm4
uint64_t var_c8 = zmm4.q
zmm2 = _mm_unpacklo_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), 0)
int32_t var_d4
zmm4.d = var_d4.d f- zmm9.d
int32_t zmm3_2 = var_e8
zmm5 = _mm_unpacklo_ps(zmm5, rax_2.q)
zmm4.d = zmm4.d f* rbx[1]
zmm5 = _mm_unpacklo_ps(zmm5, zmm2.q)
float temp0_27[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), temp0_7)
zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_4)
float result_2 = temp0_27[0]
zmm1 = _mm_sub_ps(zmm1, zmm0)
zmm1 = _mm_add_ps(zmm1, zmm1)
float temp0_34[0x4] = _mm_mul_ps(temp0_10, zmm1)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xc9), temp0_7)
float temp0_37[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xd2)
float temp0_38[0x4] = _mm_add_ps(temp0_34, zmm5)
float temp0_39[0x4] = _mm_mul_ps(temp0_37, temp0_4)
int32_t var_d0
zmm5.d = var_d0.d f- temp0_27[0]
zmm5.d = zmm5.d f* rbx[2]
float temp0_42[0x4] = _mm_add_ps(_mm_add_ps(_mm_sub_ps(temp0_39, zmm0), temp0_38), zmm6)
zmm6 = var_d8
zmm6[0] = zmm6[0] f- zmm10.d
zmm3_2 = zmm3_2 f- temp0_42[0]
var_c8.d = temp0_42[0]
zmm6[0] = zmm6[0] f* *rbx
int64_t rbx_1 = sx.q(rdi[1].d)
zmm1 = _mm_shuffle_ps(temp0_42, temp0_42, 0x55)
int32_t var_e4
zmm0.d = var_e4.d f- zmm1.d
var_c8:4.d = zmm1.d
zmm6[0] = zmm6[0] f+ zmm4.d
zmm2 = _mm_shuffle_ps(temp0_42, temp0_42, 0xaa)
int32_t rax_3 = (rbx_1 + 1).d
int32_t var_e0
zmm1.d = var_e0.d f- zmm2.d
rdi[1].d = rax_3
zmm0.d = zmm0.d f* zmm13.d
zmm6[0] = zmm6[0] f+ zmm5.d
float result_1 = zmm2.d
zmm1.d = zmm1.d f* zmm14.d
float result
int64_t* rbx_2
int64_t rdi_1

if (zmm3_2 f* zmm15.d f+ zmm0.d f+ zmm1.d f< zmm6[0])
    if (rax_3 s> *(rdi + 0xc))
        sub_14083a7e0(rdi)
    
    int64_t rcx_9 = *rdi
    int64_t rdx_7 = rbx_1 * 3
    *(rcx_9 + (rdx_7 << 2)) = var_d8.q
    *(rcx_9 + (rdx_7 << 2) + 8) = var_d0
    rbx_2 = arg1[3]
    rdi_1 = sx.q(rbx_2[1].d)
    int32_t rax_7 = (rdi_1 + 1).d
    rbx_2[1].d = rax_7
    
    if (rax_7 s> *(rbx_2 + 0xc))
        sub_14083a7e0(rbx_2)
    
    zmm0 = zx.o(var_b8.q)
    result = result_2
else
    if (rax_3 s> *(rdi + 0xc))
        sub_14083a7e0(rdi)
    
    int64_t rcx_6 = *rdi
    int64_t rdx_4 = rbx_1 * 3
    *(rcx_6 + (rdx_4 << 2)) = var_e8.q
    *(rcx_6 + (rdx_4 << 2) + 8) = var_e0
    rbx_2 = arg1[3]
    rdi_1 = sx.q(rbx_2[1].d)
    int32_t rax_5 = (rdi_1 + 1).d
    rbx_2[1].d = rax_5
    
    if (rax_5 s> *(rbx_2 + 0xc))
        sub_14083a7e0(rbx_2)
    
    zmm0 = zx.o(var_c8)
    result = result_1

int64_t rcx_11 = *rbx_2
int64_t rdx_9 = rdi_1 * 3
*(rcx_11 + (rdx_9 << 2)) = zmm0.q
*(rcx_11 + (rdx_9 << 2) + 8) = result
return result
