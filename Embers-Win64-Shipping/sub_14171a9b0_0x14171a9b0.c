// 函数: sub_14171a9b0
// 地址: 0x14171a9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[1]
void* r8 = **arg1
void* rax_1 = *(r8 + 0x10)
uint128_t zmm0
zmm0.d = (*(rax_1 + 0x14)).d f* *(r8 + 0x2c)
int128_t zmm14
zmm14.d = (*(rax_1 + 0x18)).d f* *(r8 + 0x30)
int32_t arg_8 = zmm0.d
int32_t var_c4 = zmm0.d
int32_t var_e4 = zmm0.d
uint128_t zmm15
zmm15.d = (*(rax_1 + 0x10)).d f* *(r8 + 0x28)
void* r8_1 = *(rcx + 8)
int32_t var_c0 = zmm14.d
int32_t var_e0 = zmm14.d
int32_t var_c8 = zmm15.d
uint128_t zmm4 = zx.o(*(r8_1 + 0x10))
int32_t rax_2 = *(r8_1 + 0x18)
zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
int128_t* rax_3 = *(rcx + 0x10)
uint128_t zmm2 = _mm_unpacklo_ps(zmm0, 0)
uint128_t zmm5 = _mm_unpacklo_ps(zmm4, rax_2[0].q)
float zmm13[0x4] = *rax_3
float zmm9[0x4] = rax_3[1]
int32_t rax_4 = *(r8_1 + 0x18)
zmm5 = _mm_unpacklo_ps(zmm5, zmm2.q)
float temp0_4[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xd2)
zmm2 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), temp0_4)
float temp0_8[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
zmm2 = _mm_mul_ps(zmm2, temp0_8)
uint64_t var_b8 = zmm4.q
float temp0_10[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xff)
int32_t var_e8 = zmm15.d
zmm2 = _mm_sub_ps(zmm2, zmm0)
zmm2 = _mm_add_ps(zmm2, zmm2)
float temp0_13[0x4] = _mm_mul_ps(temp0_10, zmm2)
uint128_t zmm11 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xd2), temp0_8)
zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
float temp0_17[0x4] = _mm_add_ps(temp0_13, zmm5)
zmm11 = _mm_add_ps(_mm_add_ps(_mm_sub_ps(zmm11, _mm_mul_ps(zmm0, temp0_4)), temp0_17), zmm9)
var_b8.d = zmm11.d
uint128_t zmm8 = _mm_shuffle_ps(zmm11, zmm11, 0x55)
float temp0_23[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
var_b8:4.d = zmm8.d
float result_2 = temp0_23[0]
int64_t* rbx = arg1[2]
zmm5 = _mm_unpacklo_ps(zmm4, rax_4[0].q)
zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
uint64_t var_d8 = zmm4.q
int64_t rdi = sx.q(rbx[1].d)
zmm4.d = zmm15.d f- zmm11.d
zmm5 = _mm_unpacklo_ps(zmm5, _mm_unpacklo_ps(zmm0, 0).q)
float zmm7[0x4] = arg2[1]
int32_t rax_5 = (rdi + 1).d
zmm4.d = zmm4.d f* *arg2
int32_t zmm3 = (zmm14.d f- temp0_23[0]) f* arg2[2]
zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_29[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
zmm0 = _mm_mul_ps(zmm0, temp0_4)
float temp0_32[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_29, temp0_8), zmm0)
float temp0_33[0x4] = _mm_add_ps(temp0_32, temp0_32)
float temp0_34[0x4] = _mm_mul_ps(temp0_10, temp0_33)
float temp0_35[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xd2)
zmm0 = _mm_shuffle_ps(temp0_33, temp0_33, 0xc9)
float temp0_37[0x4] = _mm_mul_ps(temp0_35, temp0_8)
float temp0_38[0x4] = _mm_add_ps(temp0_34, zmm5)
zmm5 = arg_8
zmm2.d = zmm5.d f- zmm8.d
float temp0_42[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_sub_ps(temp0_37, _mm_mul_ps(zmm0, temp0_4)), temp0_38), zmm9)
zmm15.d = zmm15.d f- temp0_42[0]
var_d8.d = temp0_42[0]
zmm0 = _mm_shuffle_ps(temp0_42, temp0_42, 0x55)
zmm5.d = zmm5.d f- zmm0.d
float temp0_44[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0xaa)
zmm14.d = zmm14.d f- temp0_44[0]
zmm15.d = zmm15.d f* *arg2
var_d8:4.d = zmm0.d
zmm5.d = zmm5.d f* zmm7[0]
zmm14.d = zmm14.d f* arg2[2]
rbx[1].d = rax_5
zmm7[0] = zmm7[0] f* zmm2.d
zmm5.d = zmm5.d f+ zmm15.d
float result_1 = temp0_44[0]
zmm7[0] = zmm7[0] f+ zmm4.d
zmm5.d = zmm5.d f+ zmm14.d
zmm7[0] = zmm7[0] f+ zmm3
float result
int64_t* rbx_1
int64_t rdi_1

if ((zmm5 ^ data_142d3f780).d f< zmm7[0])
    if (rax_5 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_5 = *rbx
    int64_t rdx_4 = rdi * 3
    *(rcx_5 + (rdx_4 << 2)) = var_c8.q
    *(rcx_5 + (rdx_4 << 2) + 8) = var_c0
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_9 = (rdi_1 + 1).d
    rbx_1[1].d = rax_9
    
    if (rax_9 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_b8)
    result = result_2
else
    if (rax_5 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_2 = *rbx
    int64_t rdx_1 = rdi * 3
    *(rcx_2 + (rdx_1 << 2)) = var_e8.q
    *(rcx_2 + (rdx_1 << 2) + 8) = var_e0
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_7 = (rdi_1 + 1).d
    rbx_1[1].d = rax_7
    
    if (rax_7 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_d8)
    result = result_1

int64_t rcx_7 = *rbx_1
int64_t rdx_6 = rdi_1 * 3
*(rcx_7 + (rdx_6 << 2)) = zmm0.q
*(rcx_7 + (rdx_6 << 2) + 8) = result
return result
