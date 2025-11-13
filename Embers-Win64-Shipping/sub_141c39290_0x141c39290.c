// 函数: sub_141c39290
// 地址: 0x141c39290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg1 + 4))
uint64_t rsi = 0
*(arg1 + 0x18) = 0
int64_t i_2 = sx.q((temp1 + (temp0 & 0xf)) s>> 4)

if (*(arg1 + 0x1c) s<= 0xffffffff)
    sub_140a05f70(arg1 + 0x10, 0)

uint64_t result = zx.q(*(arg1 + 0x18) + i_2.d)
*(arg1 + 0x18) = result.d

if (result.d s> *(arg1 + 0x1c))
    result = sub_140a05e50(arg1 + 0x10)

int64_t i_1 = i_2

if (i_2.d s> 0)
    int32_t* rdi = nullptr
    int128_t zmm6
    int128_t var_18_1 = zmm6
    double zmm7[0x2]
    double var_28_1[0x2] = zmm7
    double zmm8[0x2]
    double var_38_1[0x2] = zmm8
    int128_t zmm9
    int128_t var_48_1 = zmm9
    int128_t zmm10
    int128_t var_58_1 = zmm10
    int128_t zmm11
    int128_t var_68_1 = zmm11
    int128_t zmm12
    int128_t var_78_1 = zmm12
    int64_t i
    
    do
        zmm7 = zx.o(0)
        uint64_t rax_4 = zx.q((rsi << 2).d)
        uint64_t r8_1 = zx.q(rax_4.d)
        uint32_t rdx_6 = (zx.d(*(zx.q((rax_4 u>> 8).b) + &data_143205280))
            | zx.d(*(zx.q(r8_1.b) + &data_143205280)) << 8) << 8
            | zx.d(*(zx.q((zx.q(r8_1.d) u>> 0x10).b) + &data_143205280))
        zmm7[0] = float.d(zx.q(*((r8_1 u>> 0x18) + &data_143205280)) | zx.q(rdx_6 << 8))
        zmm7[0] = zmm7[0] f* 0x3e1921fb60000000
        zmm6 = _mm_cvtpd_ps(zmm7)
        zmm12 = cosf(zmm6.d)
        zmm11 = tanf(zmm6.d)
        zmm7[0] = zmm7[0] + zmm7[0]
        zmm6 = _mm_cvtpd_ps(zmm7)
        zmm10 = cosf(zmm6.d)
        double zmm0_4[0x2] = tanf(zmm6.d)
        zmm7[0] = zmm7[0] * 3.0
        zmm9.d = zmm10.d f+ zmm10.d
        zmm9.d = zmm9.d f- 1f
        int128_t zmm0 = tanf(_mm_cvtpd_ps(zmm7)[0].d)
        int128_t zmm2 = zmm11 ^ 0x80000000
        double zmm1[0x2] = zmm0_4 ^ 0x80000000
        zmm6 = zmm0
        zmm0 ^= 0x80000000
        *(rdi + *(arg1 + 0x10)) = zmm12.d
        int128_t zmm5_1 = zmm12 ^ 0x80000000
        int128_t zmm4_1 = zmm10 ^ 0x80000000
        int128_t zmm3 = zmm9 ^ 0x80000000
        *(rdi + *(arg1 + 0x10) + 0x40) = zmm2.d
        *(rdi + *(arg1 + 0x10) + 0x50) = zmm10.d
        *(rdi + *(arg1 + 0x10) + 0x70) = zmm1[0].d
        *(rdi + *(arg1 + 0x10) + 0x80) = zmm9.d
        *(rdi + *(arg1 + 0x10) + 0xa0) = zmm0.d
        *(rdi + *(arg1 + 0x10) + 0x10) = zmm5_1.d
        *(rdi + *(arg1 + 0x10) + 0x20) = zmm5_1.d
        *(rdi + *(arg1 + 0x10) + 0x30) = zmm12.d
        *(rdi + *(arg1 + 0x10) + 0x60) = zmm4_1.d
        *(rdi + *(arg1 + 0x10) + 0x90) = zmm3.d
        *(rdi + *(arg1 + 0x10) + 4) = zmm12.d
        *(rdi + *(arg1 + 0x10) + 0x44) = zmm11.d
        rsi = zx.q(rsi.d + 1)
        *(rdi + *(arg1 + 0x10) + 0x54) = zmm10.d
        *(rdi + *(arg1 + 0x10) + 0x74) = zmm0_4[0].d
        *(rdi + *(arg1 + 0x10) + 0x84) = zmm9.d
        *(rdi + *(arg1 + 0x10) + 0xa4) = zmm6.d
        *(rdi + *(arg1 + 0x10) + 0x14) = zmm5_1.d
        *(rdi + *(arg1 + 0x10) + 0x24) = zmm12.d
        *(rdi + *(arg1 + 0x10) + 0x34) = zmm5_1.d
        *(rdi + *(arg1 + 0x10) + 0x64) = zmm4_1.d
        *(rdi + *(arg1 + 0x10) + 0x94) = zmm3.d
        *(rdi + *(arg1 + 0x10) + 8) = zmm12.d
        *(rdi + *(arg1 + 0x10) + 0x48) = zmm2.d
        *(rdi + *(arg1 + 0x10) + 0x58) = zmm10.d
        *(rdi + *(arg1 + 0x10) + 0x78) = zmm1[0].d
        *(rdi + *(arg1 + 0x10) + 0x88) = zmm9.d
        *(rdi + *(arg1 + 0x10) + 0xa8) = zmm0.d
        *(rdi + *(arg1 + 0x10) + 0x18) = zmm5_1.d
        *(rdi + *(arg1 + 0x10) + 0x28) = zmm5_1.d
        *(rdi + *(arg1 + 0x10) + 0x38) = zmm12.d
        *(rdi + *(arg1 + 0x10) + 0x68) = zmm4_1.d
        *(rdi + *(arg1 + 0x10) + 0x98) = zmm3.d
        *(rdi + *(arg1 + 0x10) + 0xc) = zmm12.d
        *(rdi + *(arg1 + 0x10) + 0x4c) = zmm11.d
        *(rdi + *(arg1 + 0x10) + 0x5c) = zmm10.d
        *(rdi + *(arg1 + 0x10) + 0x7c) = zmm0_4[0].d
        *(rdi + *(arg1 + 0x10) + 0x8c) = zmm9.d
        *(rdi + *(arg1 + 0x10) + 0xac) = zmm6.d
        *(rdi + *(arg1 + 0x10) + 0x1c) = zmm5_1.d
        *(rdi + *(arg1 + 0x10) + 0x2c) = zmm12.d
        *(rdi + *(arg1 + 0x10) + 0x3c) = zmm5_1.d
        *(rdi + *(arg1 + 0x10) + 0x6c) = zmm4_1.d
        result = *(arg1 + 0x10)
        *(rdi + result + 0x9c) = zmm3.d
        rdi = &rdi[0x2c]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
