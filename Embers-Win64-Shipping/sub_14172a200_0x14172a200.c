// 函数: sub_14172a200
// 地址: 0x14172a200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm13 = *(arg2 + 4)
int128_t zmm14 = *arg2
int128_t zmm15 = *(arg2 + 8)
void* rdx = **arg1
uint128_t zmm0 = zx.o(*(rdx + 0x10))
uint64_t arg_8 = zmm0.q
int32_t rbp = *(rdx + 0x18)
uint64_t arg_10 = zmm0.q
int64_t* rcx = arg1[1]
void* rdx_1 = *rcx
uint128_t zmm4 = zx.o(*(rdx_1 + 0x10))
int32_t rax_1 = *(rdx_1 + 0x18)
zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
int128_t* rax_2 = rcx[1]
uint128_t zmm5 = _mm_unpacklo_ps(zmm4, rax_1.q)
uint128_t zmm2 = _mm_unpacklo_ps(zmm0, 0)
uint128_t zmm12 = *rax_2
float zmm6[0x4] = rax_2[1]
int32_t rax_3 = *(rdx_1 + 0x18)
zmm5 = _mm_unpacklo_ps(zmm5, zmm2.q)
uint128_t zmm11 = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
uint128_t zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_7[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xd2)
zmm0 = _mm_mul_ps(zmm0, temp0_7)
zmm1 = _mm_mul_ps(zmm1, zmm11)
uint64_t var_e8 = zmm4.q
zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xff)
uint64_t var_f8 = zmm4.q
zmm1 = _mm_sub_ps(zmm1, zmm0)
zmm1 = _mm_add_ps(zmm1, zmm1)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xc9), temp0_7)
uint128_t zmm10 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xd2), zmm11), zmm0)
zmm0 = _mm_add_ps(_mm_mul_ps(zmm12, zmm1), zmm5)
zmm5 = _mm_unpacklo_ps(zmm4, rax_3.q)
zmm10 = _mm_add_ps(zmm10, zmm0)
zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
zmm10 = _mm_add_ps(zmm10, zmm6)
var_e8.d = zmm10.d
float temp0_24[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x55)
uint128_t zmm8 = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
var_e8:4.d = temp0_24[0]
int32_t result_1 = zmm8.d
int64_t* rbx = arg1[2]
zmm4.d = rbp.d f- zmm8.d
zmm5 = _mm_unpacklo_ps(zmm5, _mm_unpacklo_ps(zmm0, 0).q)
int64_t rdi = sx.q(rbx[1].d)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), temp0_7)
int32_t rax_4 = (rdi + 1).d
zmm4.d = zmm4.d f* zmm15.d
zmm1 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), zmm11), zmm0)
zmm1 = _mm_add_ps(zmm1, zmm1)
zmm12 = _mm_mul_ps(zmm12, zmm1)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xc9), temp0_7)
float temp0_37[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xd2)
zmm12 = _mm_add_ps(zmm12, zmm5)
float temp0_42[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_37, zmm11), zmm0), zmm12), zmm6)
var_f8.d = temp0_42[0]
zmm1 = _mm_shuffle_ps(temp0_42, temp0_42, 0x55)
zmm2 = _mm_shuffle_ps(temp0_42, temp0_42, 0xaa)
var_f8:4.d = zmm1.d
zmm8 = zx.o(arg_10)
zmm11 = zx.o(arg_8)
zmm0 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
zmm6 = zmm11
float temp0_46[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
zmm0.d = zmm0.d f- zmm1.d
temp0_46[0] = temp0_46[0] - temp0_24[0]
rbx[1].d = rax_4
uint128_t zmm3
zmm3.d = zmm8.d f- temp0_42[0]
zmm5.d = zmm11.d f- zmm10.d
zmm0.d = zmm0.d f* zmm13.d
zmm3.d = zmm3.d f* zmm14.d
temp0_46[0] = temp0_46[0] f* zmm13.d
zmm3.d = zmm3.d f+ zmm0.d
zmm5.d = zmm5.d f* zmm14.d
zmm0.d = rbp.d f- zmm2.d
temp0_46[0] = temp0_46[0] f+ zmm5.d
zmm0.d = zmm0.d f* zmm15.d
temp0_46[0] = temp0_46[0] f+ zmm4.d
zmm3.d = zmm3.d f+ zmm0.d
int32_t result
int64_t* rbx_1
int64_t rdi_1

if ((zmm3 ^ data_142d3f780).d f< temp0_46[0])
    if (rax_4 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rax_7 = *rbx
    int64_t rcx_5 = rdi * 3
    *(rax_7 + (rcx_5 << 2)) = zmm11.q
    *(rax_7 + (rcx_5 << 2) + 8) = rbp
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_8 = (rdi_1 + 1).d
    rbx_1[1].d = rax_8
    
    if (rax_8 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_e8)
    result = result_1
else
    if (rax_4 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rax_5 = *rbx
    int64_t rcx_2 = rdi * 3
    *(rax_5 + (rcx_2 << 2)) = zmm8.q
    *(rax_5 + (rcx_2 << 2) + 8) = rbp
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_6 = (rdi_1 + 1).d
    rbx_1[1].d = rax_6
    
    if (rax_6 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_f8)
    result = zmm2.d

int64_t rcx_7 = *rbx_1
int64_t rdx_6 = rdi_1 * 3
*(rcx_7 + (rdx_6 << 2)) = zmm0.q
*(rcx_7 + (rdx_6 << 2) + 8) = result
return result
