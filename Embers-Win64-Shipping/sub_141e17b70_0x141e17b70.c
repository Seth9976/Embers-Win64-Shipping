// 函数: sub_141e17b70
// 地址: 0x141e17b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm7
uint128_t var_28 = zmm7
int32_t var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t rax_2 = sx.q(arg3[1].d)
int32_t* r10 = *arg3
uint128_t zmm0 = zx.o(0)
uint128_t zmm5 = zx.o(0)
var_108 = 0
uint128_t zmm1 = zx.o(0)
int32_t var_f8 = 0
int32_t var_104 = 0
void* r8 = &r10[rax_2 * 3]
uint128_t zmm2 = zx.o(0)
int32_t var_100 = 0
uint128_t zmm8 = zx.o(0)
int32_t var_f4 = 0
uint128_t zmm6 = zx.o(0)
uint128_t zmm9 = zx.o(0)
uint128_t zmm3
uint128_t zmm4

if (r10 != r8)
    uint128_t zmm10
    uint128_t var_58_1 = zmm10
    uint128_t zmm11
    uint128_t var_68_1 = zmm11
    int128_t zmm12
    int128_t var_78_1 = zmm12
    uint128_t zmm13
    uint128_t var_88_1 = zmm13
    int64_t r11_1 = *arg2
    uint128_t zmm14
    uint128_t var_98_1 = zmm14
    uint128_t zmm15
    uint128_t var_a8_1 = zmm15
    
    do
        int64_t rcx_1 = sx.q(*r10) * 3
        zmm4 = zx.o(*(r11_1 + (rcx_1 << 2)))
        zmm8 = *(r11_1 + (rcx_1 << 2) + 8)
        zmm13 = zmm4.q:4.d
        int64_t rdx = sx.q(r10[1]) * 3
        zmm0 = zx.o(*(r11_1 + (rdx << 2)))
        int32_t rax_6 = *(r11_1 + (rdx << 2) + 8)
        zmm12 = zmm0.d
        zmm3 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        zmm10 = rax_6
        uint64_t var_e8_1 = zmm3.q
        int64_t rdx_1 = sx.q(r10[2]) * 3
        zmm1 = zx.o(*(r11_1 + (rdx_1 << 2)))
        int32_t rax_8 = *(r11_1 + (rdx_1 << 2) + 8)
        zmm11 = zmm1.d
        zmm15 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        zmm14 = rax_8
        zmm0.d = zmm15.d f* zmm8.d
        zmm7.d = zmm14.d f* zmm3.d
        zmm1.d = zmm14.d f* zmm13.d
        zmm5.d = zmm15.d f* zmm10.d
        zmm1.d = zmm1.d f- zmm0.d
        zmm0.d = zmm3.d f* zmm8.d
        zmm2.d = zmm7.d f- zmm5.d
        zmm1.d = zmm1.d f* zmm12.d
        zmm2.d = zmm2.d f* zmm4.d
        zmm2.d = zmm2.d f- zmm1.d
        zmm1.d = zmm10.d f* zmm13.d
        zmm1.d = zmm1.d f- zmm0.d
        zmm0.d = zmm11.d f+ zmm4.d
        zmm1.d = zmm1.d f* zmm11.d
        zmm2.d = zmm2.d f+ zmm1.d
        zmm1 = zmm0
        zmm0.d = zmm0.d f* zmm4.d
        zmm1.d = zmm1.d f+ zmm12.d
        zmm6.d = zmm6.d f+ zmm2.d
        int32_t var_fc_1 = zmm2.d
        zmm1.d = zmm1.d f* zmm12.d
        zmm1.d = zmm1.d f+ zmm0.d
        int32_t var_f0_1 = zmm6.d
        zmm0.d = zmm11.d f* zmm11.d
        zmm6.d = zmm14.d f+ zmm10.d
        zmm1.d = zmm1.d f+ zmm0.d
        zmm4.d = zmm6.d f* zmm13.d
        zmm1.d = zmm1.d f* zmm2.d
        zmm2.d = zmm10.d f* zmm3.d
        zmm4.d = zmm4.d f+ zmm7.d
        zmm9.d = zmm9.d f+ zmm1.d
        zmm1.d = zmm8.d f* zmm13.d
        int32_t var_ec_1 = zmm9.d
        zmm9.d = zmm15.d f+ zmm3.d
        zmm3.d = zmm14.d f* zmm15.d
        zmm0.d = zmm9.d f* zmm8.d
        zmm4.d = zmm4.d f+ zmm0.d
        zmm7 = zx.o(var_e8_1)
        zmm1.d = zmm1.d f* 2f
        zmm6.d = zmm6.d f* *(r11_1 + (rcx_1 << 2))
        zmm2.d = zmm2.d f* 2f
        zmm4.d = zmm4.d f+ zmm5.d
        zmm3.d = zmm3.d f* 2f
        zmm5.d = zmm14.d f+ zmm8.d
        zmm4.d = zmm4.d f+ zmm1.d
        zmm4.d = zmm4.d f+ zmm2.d
        zmm2.d = zmm10.d f* zmm12.d
        zmm4.d = zmm4.d f+ zmm3.d
        zmm3.d = zmm14.d f* zmm11.d
        zmm14.d = zmm14.d f* zmm14.d
        zmm4.d = zmm4.d f* var_fc_1
        zmm0.d = var_104.d f+ zmm4.d
        zmm4.d = zmm10.d f+ zmm8.d
        var_104 = zmm0.d
        zmm0.d = zmm15.d f+ zmm13.d
        zmm4.d = zmm4.d f* zmm11.d
        zmm1 = zmm0
        zmm0.d = zmm0.d f* zmm13.d
        zmm1.d = zmm1.d f+ zmm7.d
        zmm1.d = zmm1.d f* zmm7.d
        zmm1.d = zmm1.d f+ zmm0.d
        zmm0.d = zmm15.d f* zmm15.d
        zmm1.d = zmm1.d f+ zmm0.d
        zmm1.d = zmm1.d f* var_fc_1
        zmm0.d = var_108.d f+ zmm1.d
        zmm1.d = zmm8.d f* *(r11_1 + (rcx_1 << 2))
        var_108 = zmm0.d
        zmm0.d = zmm5.d f* zmm12.d
        zmm4.d = zmm4.d f+ zmm0.d
        zmm1.d = zmm1.d f* 2f
        zmm2.d = zmm2.d f* 2f
        zmm3.d = zmm3.d f* 2f
        zmm4.d = zmm4.d f+ zmm6.d
        zmm6 = var_fc_1
        zmm4.d = zmm4.d f+ zmm1.d
        zmm4.d = zmm4.d f+ zmm2.d
        zmm2.d = zmm7.d f* zmm12.d
        zmm4.d = zmm4.d f+ zmm3.d
        zmm3 = zmm15
        zmm15.d = zmm15.d f* zmm12.d
        zmm3.d = zmm3.d f* zmm11.d
        zmm4.d = zmm4.d f* zmm6.d
        zmm0.d = var_100.d f+ zmm4.d
        var_100 = zmm0.d
        zmm0.d = zmm5.d f+ zmm10.d
        zmm5.d = zmm5.d f* zmm8.d
        zmm0.d = zmm0.d f* zmm10.d
        zmm0.d = zmm0.d f+ zmm5.d
        zmm0.d = zmm0.d f+ zmm14.d
        zmm0.d = zmm0.d f* zmm6.d
        zmm5.d = var_f8.d f+ zmm0.d
        zmm0 = zx.o(*(r11_1 + (rcx_1 << 2)))
        zmm9.d = zmm9.d f* zmm0.d
        zmm1.d = zmm13.d f* zmm0.d
        zmm0.d = zmm11.d f+ zmm12.d
        var_f8 = zmm5.d
        zmm9.d = zmm9.d f+ zmm15.d
        zmm0.d = zmm0.d f* zmm13.d
        zmm9.d = zmm9.d f+ zmm0.d
        r10 = &r10[3]
        zmm11.d = zmm11.d f* zmm7.d
        zmm1.d = zmm1.d f* 2f
        zmm2.d = zmm2.d f* 2f
        zmm9.d = zmm9.d f+ zmm11.d
        zmm3.d = zmm3.d f* 2f
        zmm9.d = zmm9.d f+ zmm1.d
        zmm9.d = zmm9.d f+ zmm2.d
        zmm9.d = zmm9.d f+ zmm3.d
        zmm9.d = zmm9.d f* zmm6.d
        zmm6 = var_f0_1
        zmm8.d = var_f4.d f+ zmm9.d
        zmm9 = var_ec_1
        var_f4 = zmm8.d
    while (r10 != r8)
    
    zmm0 = var_108
    zmm1 = var_104
    zmm2 = var_100

zmm7.d = 0.100000001f f/ zmm6.d
arg1[3] = 0
arg1[7] = 0
*(arg1 + 0x2c) = 0
*(arg1 + 0x34) = 0
arg1[0xf] = 0x3f800000
zmm4 = zmm7
zmm3 = zmm7
zmm7.d = zmm7.d f* zmm5.d
zmm5.d = 0.0500000007f f/ zmm6.d
zmm4.d = zmm4.d f* zmm0.d
zmm6.d = zmm5.d f* zmm2.d
zmm2.d = zmm5.d f* zmm1.d
zmm6 ^= 0x80000000
zmm3.d = zmm3.d f* zmm9.d
zmm2 ^= 0x80000000
zmm5.d = zmm5.d f* zmm8.d
zmm1.d = zmm4.d f+ zmm3.d
arg1[2] = zmm6.d
arg1[6] = zmm2.d
zmm5 ^= 0x80000000
arg1[8] = zmm6.d
arg1[1] = zmm5.d
zmm0.d = zmm7.d f+ zmm3.d
arg1[4] = zmm5.d
zmm7.d = zmm7.d f+ zmm4.d
arg1[9] = zmm2.d
arg1[0xa] = zmm1.d
arg1[5] = zmm0.d
*arg1 = zmm7.d
__security_check_cookie(rax_1 ^ &var_108)
return arg1
