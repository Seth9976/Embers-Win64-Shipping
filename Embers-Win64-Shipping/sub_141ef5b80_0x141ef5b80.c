// 函数: sub_141ef5b80
// 地址: 0x141ef5b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm6
int32_t var_18 = zmm6
void* rax = *(arg2 + 0x130)
int64_t var_68
float var_60
float zmm1[0x4]

if (rax == 0)
    float rax_1 = data_143dbb200
    var_68 = data_143dbb1f8.q
    var_60 = rax_1
else
    zmm1 = *(rax + 0x1d0)
    var_68.d = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_60 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_68:4.d = temp0_1[0]

*(arg1 + 0x3c) = var_68
*(arg1 + 0x44) = var_60
void* rdi = *(arg2 + 0x130)
int32_t rax_6
float zmm0[0x4]

if (rdi == 0)
    zmm0 = zx.o(data_143dbb208)
    rax_6 = data_143dbb210
else
    zmm1 = *(rdi + 0x1c0)
    uint32_t temp0_4 = _mm_movemask_ps(_mm_cmpeq_ps(*(rdi + 0x180), zmm1, 4))
    float var_58[0x4] = zmm1
    
    if (temp0_4 != 0)
        *(rdi + 0x180) = zmm1
        int32_t* rax_4 = sub_140adf5d0(&var_58, &var_68)
        *(rdi + 0x190) = *rax_4
        *(rdi + 0x198) = rax_4[2]
    
    zmm0 = zx.o(*(rdi + 0x190))
    rax_6 = *(rdi + 0x198)

var_68 = zmm0.q
*(arg1 + 0xf4) = var_68
*(arg1 + 0xfc) = rax_6
void* rax_8 = *(arg2 + 0x288)
*(arg1 + 0x54) = *(rax_8 + 0xc4)
*(arg1 + 0x5c) = *(rax_8 + 0xcc)
int64_t* rdi_1 = *(arg2 + 0x298)
sub_140d3a3a0(arg1 + 0x128, rdi_1)
*(arg1 + 0x110) = data_14399f720
void* rax_10 = *(arg2 + 0x288)
*(arg1 + 0x60) = *(rax_10 + 0x2f0)
*(arg1 + 0x70) = *(rax_10 + 0x300)
*(arg1 + 0x80) = *(rax_10 + 0x310)
*(arg1 + 0x90) = *(rax_10 + 0x320)
*(arg1 + 0xa0) = *(rax_10 + 0x330)
*(arg1 + 0xb0) = *(rax_10 + 0x340)
*(arg1 + 0xc0) = *(rax_10 + 0x350)
*(arg1 + 0xd0) = *(rax_10 + 0x360)
*(arg1 + 0xe0) = *(rax_10 + 0x370)
*(arg1 + 0xf0) = *(rax_10 + 0x380)
*(arg1 + 0x24) = *(arg2 + 0x98)
*(arg1 + 0x130) = *(arg2 + 0x2a0)
*(arg1 + 0x138) = *(arg2 + 0x34c)
*(arg1 + 0x13c) = data_143f3ad98

if (sub_141ea5e60(rdi_1) != 0)
    int64_t rdx_2 = *(arg1 + 0x130)
    *(arg1 + 0x48) = *(arg2 + 0x2a8)
    *(arg1 + 0x50) = *(arg2 + 0x2b0)
    sub_141ea3bd0(rdi_1, rdx_2, &var_68, arg1 + 0x110)

void* rdi_2 = *(*(arg2 + 0x288) + 0xb0)

if (rdi_2 != 0)
    sub_140d3a3a0(arg1 + 0x140, *(rdi_2 + 0xc0))
    *(arg1 + 0x148) = *(rdi_2 + 0xc8)
    *(arg1 + 0x150) = *(rdi_2 + 0x11c)
    *(arg1 + 0x158) = *(rdi_2 + 0x124)
    *(arg1 + 0x15c) = *(rdi_2 + 0x128)
    *(arg1 + 0x164) = *(rdi_2 + 0x130)

int64_t* rax_22 = sub_142216e60(arg2, &var_68)
float zmm0_4[0x4]
float zmm6_1[0x4]
zmm0_4, zmm6_1 = sub_140a454f0(rax_22[1].d, 0x43b40000)

if (not(zmm0_4[0] >= 0f))
    zmm6_1[0]

float zmm0_5[0x4]
float zmm6_2[0x4]
int32_t zmm9
zmm0_5, zmm6_2, zmm9 = sub_140a454f0(*(rax_22 + 4), zmm6_1)

if (not(zmm0_5[0] f>= zmm9))
    zmm6_2[0]

float zmm0_6[0x4]
int32_t zmm6_3
int64_t zmm7_1
int32_t zmm8_1
int32_t zmm9_1
zmm0_6, zmm6_3, zmm7_1, zmm8_1, zmm9_1 = sub_140a454f0(*rax_22, zmm6_2)

if (not(zmm0_6[0] f>= zmm9_1))
    zmm0_6[0] = zmm0_6[0] f+ zmm6_3

*(arg1 + 0x100) = (_mm_unpacklo_ps(zmm0_6, zmm7_1)).q
*(arg1 + 0x108) = zmm8_1
void* rax_24 = *(arg2 + 0x290)
zmm0_6 = *(rax_24 + 0x1e0)
float temp0_7[0x4] = _mm_min_ss(_mm_shuffle_ps(zmm0_6, zmm0_6, 0x55)[0], zmm0_6[0])
temp0_7[0] = temp0_7[0] f* *(rax_24 + 0x424)
*(arg1 + 0x120) = temp0_7[0]
zmm0_6 = *(rax_24 + 0x1e8)
zmm0_6[0] = zmm0_6[0] f* *(rax_24 + 0x420)
*(arg1 + 0x124) = zmm0_6[0]
*(arg1 + 0x18) ^= (*(arg2 + 0x330) u>> 2 ^ *(arg1 + 0x18)) & 1
*(arg1 + 0x18) ^= (*(arg2 + 0x330) u>> 5 ^ *(arg1 + 0x18)) & 0x20
*(arg1 + 0x28) = *(arg2 + 0x334)
*(arg1 + 0x2c) = *(arg2 + 0x338)
int32_t result = *(arg2 + 0x344)
*(arg1 + 0x30) = result
return result
