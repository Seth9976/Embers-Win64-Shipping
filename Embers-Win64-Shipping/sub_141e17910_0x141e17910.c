// 函数: sub_141e17910
// 地址: 0x141e17910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
*arg1 = 0
arg1[1].d = 0
int128_t zmm9 = zx.o(0)
int128_t zmm12 = zx.o(0)
int32_t* r10 = *arg3
uint128_t zmm10 = zx.o(0)
uint128_t zmm11 = zx.o(0)
void* r8 = &r10[sx.q(arg3[1].d) * 3]
uint128_t zmm0

if (r10 != r8)
    uint128_t zmm6
    uint128_t var_18_1 = zmm6
    uint128_t zmm7
    uint128_t var_28_1 = zmm7
    uint128_t zmm8
    uint128_t var_38_1 = zmm8
    uint128_t zmm13 = zx.o(0)
    uint128_t zmm14 = zx.o(0)
    
    do
        int64_t rdx = *arg2
        int64_t rcx_1 = sx.q(*r10) * 3
        zmm6 = zx.o(*(rdx + (rcx_1 << 2)))
        int32_t rax_4 = *(rdx + (rcx_1 << 2) + 8)
        int64_t rax_5 = sx.q(r10[1])
        var_c8 = zmm6.q
        int32_t zmm3 = var_c8:4.d
        int64_t rcx_2 = rax_5 * 3
        uint128_t zmm1 = zx.o(*(rdx + (rcx_2 << 2)))
        int32_t rax_6 = *(rdx + (rcx_2 << 2) + 8)
        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        zmm10 = zmm0
        zmm12 = zmm1.d
        int64_t rax_7 = sx.q(r10[2])
        r10 = &r10[3]
        zmm11 = rax_6
        int64_t rcx_3 = rax_7 * 3
        uint128_t zmm2 = zx.o(*(rdx + (rcx_3 << 2)))
        int32_t rax_8 = *(rdx + (rcx_3 << 2) + 8)
        uint32_t var_b0_1 = zmm2.d
        uint128_t zmm5 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        zmm2.d = zmm11.d f* zmm3
        zmm7 = rax_8
        zmm8.d = zmm7.d f* zmm0.d
        zmm0.d = zmm5.d f* zmm11.d
        zmm11.d = zmm11.d f+ rax_4
        zmm1.d = zmm7.d f* zmm3
        zmm8.d = zmm8.d f- zmm0.d
        zmm0.d = zmm5.d f* rax_4
        zmm11.d = zmm11.d f+ zmm7.d
        zmm8.d = zmm8.d f* zmm6.d
        zmm1.d = zmm1.d f- zmm0.d
        zmm0 = zmm10
        zmm10.d = zmm10.d f+ zmm3
        zmm0.d = zmm0.d f* rax_4
        zmm1.d = zmm1.d f* zmm12.d
        zmm12.d = zmm12.d f+ zmm6.d
        zmm10.d = zmm10.d f+ zmm5.d
        zmm2.d = zmm2.d f- zmm0.d
        zmm8.d = zmm8.d f- zmm1.d
        zmm12.d = zmm12.d f+ var_b0_1
        zmm2.d = zmm2.d f* var_b0_1
        zmm8.d = zmm8.d f+ zmm2.d
        zmm10.d = zmm10.d f* zmm8.d
        zmm9.d = zmm9.d f+ zmm8.d
        zmm11.d = zmm11.d f* zmm8.d
        zmm12.d = zmm12.d f* zmm8.d
        zmm10.d = zmm10.d f+ zmm13.d
        zmm11.d = zmm11.d f+ zmm14.d
        zmm12.d = zmm12.d f+ *arg1
        *(arg1 + 4) = zmm10.d
        zmm13 = zmm10
        arg1[1].d = zmm11.d
        zmm14 = zmm11
        *arg1 = zmm12.d
    while (r10 != r8)

zmm0.d = 0.25f f/ zmm9.d
zmm12.d = zmm12.d f* zmm0.d
zmm10.d = zmm10.d f* zmm0.d
zmm11.d = zmm11.d f* zmm0.d
*arg1 = zmm12.d
*(arg1 + 4) = zmm10.d
arg1[1].d = zmm11.d
__security_check_cookie(rax_1 ^ &var_c8)
return arg1
