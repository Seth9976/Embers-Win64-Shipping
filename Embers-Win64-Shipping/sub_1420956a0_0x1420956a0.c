// 函数: sub_1420956a0
// 地址: 0x1420956a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x4a0) s<= 0)
    int512_t zmm0
    zmm0.o = 0x3f800000
    return zmm0

int128_t zmm6
int128_t var_18 = zmm6
int128_t zmm7
int128_t var_28 = zmm7
float zmm8[0x4]
float var_38[0x4] = zmm8
float zmm0_1[0x4] = sub_141f68b50(arg1)
int64_t rdx = sx.q(*(arg1 + 0x4a0))
int64_t rcx = 0
float zmm14[0x4] = zmm0_1
float zmm12[0x4] = zx.o(0)
int128_t zmm13 = zx.o(0)
float zmm1_1
float zmm2_1
float zmm3
float zmm4
float zmm5

if (rdx s>= 4)
    void* rax_1 = *(arg1 + 0x498)
    float zmm9[0x4]
    float var_48_1[0x4] = zmm9
    float zmm10[0x4]
    float var_58_1[0x4] = zmm10
    float zmm11[0x4]
    float var_68_1[0x4] = zmm11
    int128_t* r9_1 = rax_1 + 0x24
    void* r8_1 = rax_1 + 0x64
    int64_t i_2 = ((rdx - 4) u>> 2) + 1
    rcx = i_2 << 2
    int64_t i
    
    do
        zmm0_1 = *r9_1
        zmm2_1 = *(r9_1 - 0x14)
        zmm4 = r9_1[-1].d
        zmm1_1 = *(r9_1 + 4)
        zmm3 = *(r9_1 - 0xc)
        zmm7 = *(r9_1 - 0x24)
        zmm5 = r9_1[-2].d
        zmm6 = *(r9_1 - 0x1c)
        zmm11 = *(r9_1 - 4)
        zmm10 = *(r8_1 - 0x10)
        zmm9 = *(r8_1 + 0x2c)
        zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
        zmm7.d = zmm7.d f* zmm7.d
        zmm4 = zmm4 * zmm4 + zmm2_1 * zmm2_1
        zmm2_1 = *r8_1
        zmm4 = zmm4 + zmm3 * zmm3
        zmm11[0] = zmm11[0] * zmm11[0]
        zmm3 = *(r8_1 + 4)
        zmm7.d = zmm7.d f+ zmm5 * zmm5
        zmm5 = *(r9_1 + 0x1c)
        zmm11[0] = zmm11[0] + zmm0_1[0]
        zmm6.d = zmm6.d f* zmm6.d
        zmm10[0] = zmm10[0] * zmm10[0]
        zmm7.d = zmm7.d f+ zmm6.d
        zmm6 = *(r8_1 - 0x1c)
        zmm11[0] = zmm11[0] + zmm1_1 * zmm1_1
        zmm1_1 = *(r8_1 - 0xc)
        float temp0_1[0x4] = _mm_max_ss(zmm11[0], zmm4)
        zmm4 = *(r8_1 - 4)
        float temp0_2[0x4] = _mm_max_ss(temp0_1[0], zmm7.d)
        zmm6.d = zmm6.d f* zmm6.d
        zmm7 = *(r8_1 - 0x20)
        zmm4 = zmm4 * zmm4 + zmm2_1 * zmm2_1
        zmm2_1 = *(r8_1 + 0x3c)
        zmm7.d = zmm7.d f* zmm7.d
        float temp0_3[0x4] = _mm_sqrt_ss(0, temp0_2[0])
        zmm4 = zmm4 + zmm3 * zmm3
        zmm9[0] = zmm9[0] * zmm9[0]
        zmm3 = *(r8_1 + 0x44)
        zmm13.d = zmm13.d f+ temp0_3[0]
        zmm0_1 = *(r8_1 - 0x14)
        zmm7.d = zmm7.d f+ zmm5 * zmm5
        zmm5 = *(r9_1 + 0x5c)
        zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
        zmm7.d = zmm7.d f+ zmm6.d
        zmm6 = *(r8_1 + 0x24)
        zmm10[0] = zmm10[0] + zmm0_1[0]
        zmm10[0] = zmm10[0] + zmm1_1 * zmm1_1
        zmm1_1 = *(r8_1 + 0x34)
        float temp0_4[0x4] = _mm_max_ss(zmm10[0], zmm4)
        zmm4 = *(r8_1 + 0x40)
        float temp0_5[0x4] = _mm_max_ss(temp0_4[0], zmm7.d)
        zmm7 = *(r8_1 + 0x20)
        zmm7.d = zmm7.d f* zmm7.d
        zmm7.d = zmm7.d f+ zmm5 * zmm5
        zmm13.d = zmm13.d f+ _mm_sqrt_ss(0, temp0_5[0])[0]
        zmm0_1 = *(r8_1 + 0x30)
        zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
        zmm9[0] = zmm9[0] + zmm0_1[0]
        zmm9[0] = zmm9[0] + zmm1_1 * zmm1_1
        float temp0_7[0x4] = _mm_max_ss(zmm9[0], zmm4 * zmm4 + zmm2_1 * zmm2_1 + zmm3 * zmm3)
        zmm2_1 = *(r8_1 + 0x7c)
        temp0_2[0] = temp0_2[0] + zmm12[0]
        zmm4 = *(r8_1 + 0x80)
        zmm8 = *(r8_1 + 0x6c)
        zmm3 = *(r8_1 + 0x84)
        zmm1_1 = *(r8_1 + 0x74)
        zmm5 = *(r9_1 + 0x9c)
        zmm12 = temp0_2
        zmm6.d = zmm6.d f* zmm6.d
        zmm12[0] = zmm12[0] + temp0_5[0]
        r9_1 = &r9_1[0x10]
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm7.d = zmm7.d f+ zmm6.d
        zmm6 = *(r8_1 + 0x64)
        float temp0_8[0x4] = _mm_max_ss(temp0_7[0], zmm7.d)
        zmm7 = *(r8_1 + 0x60)
        zmm7.d = zmm7.d f* zmm7.d
        float temp0_9[0x4] = _mm_sqrt_ss(0, temp0_8[0])
        zmm12[0] = zmm12[0] + temp0_8[0]
        zmm13.d = zmm13.d f+ temp0_9[0]
        zmm0_1 = *(r8_1 + 0x70)
        zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
        r8_1 += 0x100
        zmm6.d = zmm6.d f* zmm6.d
        zmm7.d = zmm7.d f+ zmm5 * zmm5
        zmm8[0] = zmm8[0] + zmm0_1[0]
        zmm7.d = zmm7.d f+ zmm6.d
        zmm8[0] = zmm8[0] + zmm1_1 * zmm1_1
        float temp0_11[0x4] =
            _mm_max_ss(_mm_max_ss(zmm8[0], zmm4 * zmm4 + zmm2_1 * zmm2_1 + zmm3 * zmm3)[0], zmm7.d)
        float temp0_12[0x4] = _mm_sqrt_ss(0, temp0_11[0])
        zmm12[0] = zmm12[0] + temp0_11[0]
        zmm13.d = zmm13.d f+ temp0_12[0]
        i = i_2
        i_2 -= 1
    while (i != 1)

if (rcx s< rdx)
    float* rax_6 = (rcx << 6) + *(arg1 + 0x498)
    int64_t i_3 = rdx - rcx
    int64_t i_1
    
    do
        zmm0_1 = rax_6[4]
        zmm2_1 = rax_6[8]
        zmm4 = rax_6[9]
        zmm8 = rax_6[5]
        zmm3 = rax_6[0xa]
        zmm1_1 = rax_6[6]
        zmm5 = *rax_6
        zmm7 = rax_6[1]
        zmm6 = rax_6[2]
        rax_6 = &rax_6[0x10]
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
        zmm7.d = zmm7.d f* zmm7.d
        zmm8[0] = zmm8[0] + zmm0_1[0]
        zmm8[0] = zmm8[0] + zmm1_1 * zmm1_1
        zmm6.d = zmm6.d f* zmm6.d
        zmm7.d = zmm7.d f+ zmm5 * zmm5
        zmm7.d = zmm7.d f+ zmm6.d
        float temp0_14[0x4] =
            _mm_max_ss(_mm_max_ss(zmm8[0], zmm4 * zmm4 + zmm2_1 * zmm2_1 + zmm3 * zmm3)[0], zmm7.d)
        float temp0_15[0x4] = _mm_sqrt_ss(0, temp0_14[0])
        zmm12[0] = zmm12[0] + temp0_14[0]
        zmm13.d = zmm13.d f+ temp0_15[0]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (not(zmm13.d f<= 9.99999994e-09f))
    zmm12[0] = zmm12[0] f/ zmm13.d
    zmm14[0] = zmm14[0] * zmm12[0]

return zmm14
