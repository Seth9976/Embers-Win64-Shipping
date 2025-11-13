// 函数: sub_1421c6120
// 地址: 0x1421c6120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm8
uint128_t var_38 = zmm8
uint128_t zmm9
uint128_t var_48 = zmm9
uint128_t zmm10
uint128_t var_58 = zmm10
void* rax = *(arg1 + 0x1d8)
int64_t r9 = sx.q(arg3)
int64_t r8 = 0
uint128_t zmm0 = zx.o(*(rax + 0x120))
uint64_t result = zx.q(*(rax + 0x128))
uint128_t zmm6 = result.d
uint128_t zmm7 = zmm0.d
uint128_t zmm5 = _mm_shuffle_ps(zmm0, zmm0, 0x55)

if (r9 s>= 4)
    result = arg2 + 0x60
    zmm8.d = zmm7.d f* 0.5f
    int64_t i_2 = ((r9 - 4) u>> 2) + 1
    zmm9.d = zmm5.d f* 0.5f
    zmm10.d = zmm6.d f* 0.5f
    r8 = i_2 << 2
    zmm8.d = zmm8.d f* arg4
    zmm9.d = zmm9.d f* arg4
    zmm10.d = zmm10.d f* arg4
    uint128_t zmm12
    zmm12.d = zmm7.d f* arg4
    uint128_t zmm13
    zmm13.d = zmm5.d f* arg4
    uint128_t zmm14
    zmm14.d = zmm6.d f* arg4
    int64_t i
    
    do
        zmm0.d = zmm8.d f+ *(result - 0x50)
        zmm0.d = zmm0.d f* arg4
        zmm0.d = zmm0.d f+ *(result - 0x60)
        *(result - 0x60) = zmm0.d
        *(result - 0x5c) = (zmm9.d f+ *(result - 0x4c)) * arg4 f+ *(result - 0x5c)
        zmm0.d = zmm10.d f+ *(result - 0x48)
        zmm0.d = zmm0.d f* arg4
        zmm0.d = zmm0.d f+ *(result - 0x58)
        *(result - 0x58) = zmm0.d
        zmm0.d = zmm12.d f+ *(result - 0x50)
        *(result - 0x50) = zmm0.d
        *(result - 0x4c) = zmm13.d f+ *(result - 0x4c)
        zmm0.d = zmm14.d f+ *(result - 0x48)
        *(result - 0x48) = zmm0.d
        *(result - 0x54) = arg4 f* *(result - 0x44) f+ *(result - 0x54)
        zmm0.d = zmm8.d f+ *(result - 8)
        zmm0.d = zmm0.d f* arg4
        zmm0.d = zmm0.d f+ *(result - 0x18)
        *(result - 0x18) = zmm0.d
        *(result - 0x14) = (zmm9.d f+ *(result - 4)) * arg4 f+ *(result - 0x14)
        zmm0.d = zmm10.d f+ *result
        zmm0.d = zmm0.d f* arg4
        zmm0.d = zmm0.d f+ *(result - 0x10)
        *(result - 0x10) = zmm0.d
        zmm0.d = zmm12.d f+ *(result - 8)
        *(result - 8) = zmm0.d
        *(result - 4) = zmm13.d f+ *(result - 4)
        zmm0.d = zmm14.d f+ *result
        *result = zmm0.d
        *(result - 0xc) = arg4 f* *(result + 4) f+ *(result - 0xc)
        zmm0.d = zmm8.d f+ *(result + 0x40)
        zmm0.d = zmm0.d f* arg4
        float zmm1 = (zmm9.d f+ *(result + 0x44)) * arg4
        zmm0.d = zmm0.d f+ *(result + 0x30)
        float zmm2 = (zmm10.d f+ *(result + 0x48)) * arg4
        *(result + 0x30) = zmm0.d
        *(result + 0x34) = zmm1 f+ *(result + 0x34)
        *(result + 0x38) = zmm2 f+ *(result + 0x38)
        zmm0.d = zmm12.d f+ *(result + 0x40)
        *(result + 0x40) = zmm0.d
        *(result + 0x44) = zmm13.d f+ *(result + 0x44)
        zmm0.d = zmm14.d f+ *(result + 0x48)
        *(result + 0x48) = zmm0.d
        *(result + 0x3c) = arg4 f* *(result + 0x4c) f+ *(result + 0x3c)
        zmm0.d = zmm8.d f+ *(result + 0x88)
        zmm1 = (zmm9.d f+ *(result + 0x8c)) * arg4
        zmm0.d = zmm0.d f* arg4
        zmm2 = (zmm10.d f+ *(result + 0x90)) * arg4
        zmm0.d = zmm0.d f+ *(result + 0x78)
        *(result + 0x78) = zmm0.d
        *(result + 0x7c) = zmm1 f+ *(result + 0x7c)
        *(result + 0x80) = zmm2 f+ *(result + 0x80)
        zmm0.d = zmm12.d f+ *(result + 0x88)
        *(result + 0x88) = zmm0.d
        *(result + 0x8c) = zmm13.d f+ *(result + 0x8c)
        zmm0.d = zmm14.d f+ *(result + 0x90)
        *(result + 0x90) = zmm0.d
        *(result + 0x84) = arg4 f* *(result + 0x94) f+ *(result + 0x84)
        result += 0x120
        i = i_2
        i_2 -= 1
    while (i != 1)

if (r8 s< r9)
    zmm8.d = zmm5.d f* 0.5f
    zmm9.d = zmm6.d f* 0.5f
    int64_t i_3 = r9 - r8
    zmm10.d = zmm7.d f* 0.5f
    void* rcx_4 = arg2 + ((r8 * 9 + 3) << 3)
    zmm8.d = zmm8.d f* arg4
    zmm9.d = zmm9.d f* arg4
    zmm10.d = zmm10.d f* arg4
    zmm7.d = zmm7.d f* arg4
    zmm5.d = zmm5.d f* arg4
    zmm6.d = zmm6.d f* arg4
    int64_t i_1
    
    do
        zmm0.d = zmm10.d f+ *(rcx_4 - 8)
        zmm0.d = zmm0.d f* arg4
        zmm0.d = zmm0.d f+ *(rcx_4 - 0x18)
        *(rcx_4 - 0x18) = zmm0.d
        *(rcx_4 - 0x14) = (zmm8.d f+ *(rcx_4 - 4)) * arg4 f+ *(rcx_4 - 0x14)
        zmm0.d = zmm9.d f+ *rcx_4
        zmm0.d = zmm0.d f* arg4
        zmm0.d = zmm0.d f+ *(rcx_4 - 0x10)
        *(rcx_4 - 0x10) = zmm0.d
        zmm0.d = zmm7.d f+ *(rcx_4 - 8)
        *(rcx_4 - 4) = zmm5.d f+ *(rcx_4 - 4)
        *(rcx_4 - 8) = zmm0.d
        zmm0.d = zmm6.d f+ *rcx_4
        *rcx_4 = zmm0.d
        *(rcx_4 - 0xc) = arg4 f* *(rcx_4 + 4) f+ *(rcx_4 - 0xc)
        rcx_4 += 0x48
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
