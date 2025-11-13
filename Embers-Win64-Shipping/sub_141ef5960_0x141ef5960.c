// 函数: sub_141ef5960
// 地址: 0x141ef5960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
float zmm7[0x4] = arg4
uint128_t zmm8 = arg3

if ((arg1[3].b & 1) != 0 && (*arg2 & 1) != 0)
    uint128_t zmm4 = *(arg1 + 0x1c)
    arg3 = *(arg1 + 0x2c)
    uint128_t zmm5 = *(arg1 + 0x4c)
    arg4 = *(arg1 + 0xc)
    uint128_t zmm6 = *(arg1 + 0x5c)
    *(arg1 + 0xc) = *arg2
    *(arg1 + 0x1c) = *(arg2 + 0x10)
    uint128_t var_a8_1 = arg3
    *(arg1 + 0x2c) = *(arg2 + 0x20)
    *(arg1 + 0x3c) = *(arg2 + 0x30)
    uint128_t var_78_1 = zmm6
    *(arg1 + 0x4c) = *(arg2 + 0x40)
    int128_t zmm1 = *(arg2 + 0x50)
    uint128_t temp0_1 = _mm_bsrli_si128(zmm6, 4)
    *(arg1 + 0x5c) = zmm1
    uint128_t zmm0 = *(arg2 + 0x60)
    float temp0_2[0x4] = _mm_shuffle_ps(arg4, arg4, 0xaa)
    *(arg1 + 0x6c) = zmm0
    zmm1 = *(arg2 + 0x70)
    uint128_t temp0_3 = _mm_bsrli_si128(arg3, 4)
    *(arg1 + 0x7c) = zmm1
    *(arg1 + 0x8c) = *(arg2 + 0x80)
    *(arg1 + 0x28) = zmm4:0xc.q
    int32_t rax = *arg1
    *(arg1 + 0x1c) = zmm4.q
    result = rax & 0xfffffffd
    *(arg1 + 0x4c) = zmm5.q
    *(arg1 + 0x58) = zmm5:0xc.q
    arg1[0x18] = temp0_1.d
    arg1[5] = temp0_2[0]
    arg1[1] = zmm8.d
    arg1[2] = zmm7[0]
    arg1[0xc] = temp0_3.d
    arg1[9] = _mm_bsrli_si128(zmm4, 8).d
    arg1[0x15] = _mm_bsrli_si128(zmm5, 8).d
    *arg1 = ((zx.d(arg5) | 2) * 2) | result

return result
