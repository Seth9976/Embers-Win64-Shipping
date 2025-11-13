// 函数: sub_141233df0
// 地址: 0x141233df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi
rdi.b = 0

if (*(*(arg1 + 8) + 8) s< 3)
    return 0

int32_t i = 0

if (*(arg1 + 0xa8) s<= 0)
    return 0

int64_t r12_1 = 0
uint128_t zmm6
uint128_t var_38_1 = zmm6
uint128_t zmm7
uint128_t var_48_1 = zmm7
uint128_t zmm8
uint128_t var_58_1 = zmm8
uint128_t zmm9
uint128_t var_68_1 = zmm9

do
    int64_t* r15_2 = *(arg1 + 0xa0) + r12_1
    sub_141405870(*(arg1 + 8) + 0x20, r15_2, 1)
    int128_t var_1c8
    __builtin_memset(&var_1c8, 0, 0x120)
    int128_t var_a8_1
    __builtin_memcpy(&var_a8_1, 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x"
    "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
    "3f", 
        0x30)
    int128_t var_78_1 = zx.o(0)
    sub_1413aab70(&data_143ec4c60, r15_2[0x2a9].d, 0, &var_1c8)
    void* rdx_2 = data_143f5b298
    float zmm3[0x4] = 0x3f800000.o
    float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
    int64_t* rcx_4 = data_143f0f180
    var_78_1.q = *(*(*(rdx_2 + 0x760) + 0x78) + 0x10)
    var_78_1:8.q = data_14396ee58
    int128_t zmm0_1 = *(rdx_2 + 0x638)
    int128_t zmm1_1 = *(rdx_2 + 0x63c)
    float zmm2_1 = *(rdx_2 + 0x640)
    zmm0_1.d = zmm0_1.d f* zmm0_1.d
    zmm1_1.d = zmm1_1.d f* zmm1_1.d
    temp0_1[0] = zmm0_1.d
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_2[0] = zmm1_1.d
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
    temp0_3[0] = zmm2_1 * zmm2_1
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
    float var_a8_2[0x4] = temp0_4
    zmm0_1 = *(rdx_2 + 0x660)
    int32_t var_1f8_1
    var_1f8_1.o = temp0_4
    int128_t var_98_1 = zmm0_1
    zmm1_1 = *(rdx_2 + 0x650)
    int128_t var_1e8_1 = zmm0_1
    int128_t var_88_1 = zmm1_1
    int128_t var_1d8_1 = zmm1_1
    (*(*rcx_4 + 0x100))(rcx_4, *(*(arg1 + 8) + 0x80), &var_1c8)
    zmm7 = zx.o(r15_2[0x2b4].d)
    zmm6 = _mm_cvtepi32_ps(zx.o(*(r15_2 + 0x15a4)))
    zmm7 = _mm_cvtepi32_ps(zmm7)
    zmm9 = zx.o(r15_2[0x2b3].d)
    void*** rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    zmm8 = _mm_cvtepi32_ps(zx.o(*(r15_2 + 0x159c)))
    void* rax_5 = &rcx_7[5]
    zmm9 = _mm_cvtepi32_ps(zmm9)
    
    if (rax_5 u> *(arg2 + 0x38))
        zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_5 = &rcx_7[5]
    
    *(arg2 + 0x30) = rax_5
    void** rax_6 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_6 = rcx_7
    *(arg2 + 8) = &rcx_7[1]
    rcx_7[1] = 0
    *rcx_7 = &data_142d54998
    rcx_7[2].d = zmm9.d
    *(rcx_7 + 0x14) = zmm8.d
    *(rcx_7 + 0x1c) = zmm7.d
    rcx_7[4].d = zmm6.d
    rcx_7[3].d = 0
    *(rcx_7 + 0x24) = 0x3f800000
    sub_141267530(&r15_2[0x7a0], nullptr, arg2)
    
    if (rdi.b == 0 || *(r15_2 + 0x3ecc) s<= 0)
        rdi.b = 0
    else
        rdi.b = 1
    
    i += 1
    r12_1 += 0x5240
while (i s< *(arg1 + 0xa8))

return zx.q(rdi.b)
