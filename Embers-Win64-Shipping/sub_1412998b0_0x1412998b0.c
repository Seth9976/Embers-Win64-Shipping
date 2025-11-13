// 函数: sub_1412998b0
// 地址: 0x1412998b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int128_t zmm6
int128_t var_28 = zmm6
*arg3 = 0
arg3[1] = 0
void* rbp = data_143f10e68
int128_t zmm7
int128_t var_38 = zmm7

if (arg2 == 0 || *(arg2 + 0x158) == 0)
    arg3[0x27].d = 0
else
    uint128_t zmm1 = *(arg2 + 0x24)
    uint128_t zmm2 = *(arg2 + 0x28)
    int32_t var_9c_1 = 0x3f800000
    float var_a8[0x4]
    var_a8[0] = (*(arg2 + 0x20)).d
    float temp0_1[0x4] = _mm_shuffle_ps(var_a8, var_a8, 0xe1)
    temp0_1[0] = zmm1.d
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_2[0] = zmm2.d
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
    *arg3 = temp0_3
    *(arg3 + 0xc) = *(arg2 + 0x2c)
    rbp = *(arg2 + 0x158)
    float var_a8_1[0x4] = temp0_3
    int64_t arg_10
    (*(*(rbp + 0x48) + 0x18))(rbp + 0x48, &arg_10)
    zmm2 = 0x3ff0000000000000
    int32_t rax_3 = arg_10.d
    int32_t r10_1 = arg_10:4.d
    int32_t r8 = *(arg2 + 0x100)
    int32_t rcx_2 = *(arg2 + 0x108) - r8
    int32_t r9_1 = *(arg2 + 0x104)
    int128_t zmm8
    zmm8.d = 1f f/ _mm_cvtepi32_ps(zx.o(rax_3)).d
    int128_t zmm9
    zmm9.d = 1f f/ _mm_cvtepi32_ps(zx.o(r10_1)).d
    int32_t rcx_3 = *(arg2 + 0x10c)
    zmm1.q = zmm2.q f/ _mm_cvtepi32_pd(zx.q(rcx_2)).q
    uint128_t zmm0
    zmm0.q = zmm2.q f- zmm1.q
    float zmm10[0x4] = _mm_cvtpd_ps(zmm0)
    void* rcx_5 = *arg1
    zmm0 = _mm_cvtepi32_pd(zx.q(rcx_3 - r9_1))
    int32_t rdx_1 = *(rcx_5 + 8)
    zmm1.q = zmm2.q f/ zmm0.q
    zmm2.q = zmm2.q f- zmm1.q
    float zmm11[0x4] = _mm_cvtpd_ps(zmm2)
    
    if (rdx_1 == 1 && r8 == data_143dbb180.d && r9_1 == data_143dbb180:4.d
            && *(arg2 + 0x108) == rax_3 && *(arg2 + 0x10c) == r10_1)
        zmm10 = 0x3f800000
        zmm11 = 0x3f800000
    
    int32_t r8_1 = 2
    zmm7 = zx.o(0)
    int128_t var_98 = zx.o(0)
    float zmm4_1[0x4] = zx.o(0)
    int32_t r11_1 = 0
    
    if (rdx_1 s<= 2)
        r8_1 = rdx_1
    
    float var_88_1[0x4] = zx.o(0)
    float zmm3[0x4]
    int128_t zmm5_1
    
    if (r8_1 s> 0)
        zmm5_1.d = data_1439c7a1c.d f* -2f
        int128_t* r10_2 = &var_98
        
        do
            zmm1 = *(arg2 - &var_98 + r10_2 + 0x100)
            r11_1 += 1
            zmm3 = zx.o(0)
            int64_t rdx_2 = zmm1.q
            int64_t rcx_6 = _mm_bsrli_si128(zmm1, 8).q
            zmm0.d = float.s(rdx_2.d)
            zmm3[0] = float.s(rcx_6.d - rdx_2.d)
            uint32_t rax_7 = (rdx_2 u>> 0x20).d
            zmm3[0] = zmm3[0] * 0.5f
            zmm3[0] = zmm3[0] f* zmm8.d
            zmm2.d = float.s((rcx_6 u>> 0x20).d - rax_7)
            zmm3[0] = zmm3[0] * 0.5f
            zmm3[0] = zmm3[0] f+ zmm0.d
            zmm1.d = zmm2.d f* zmm9.d
            float temp0_11[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm2.d = zmm2.d f* 0.5f
            zmm1.d = zmm1.d f/ zmm5_1.d
            zmm0.d = float.s(rax_7)
            temp0_11[0] = zmm1.d
            zmm3[0] = zmm3[0] f* zmm8.d
            float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc6)
            zmm2.d = zmm2.d f+ zmm0.d
            temp0_12[0] = zmm3[0]
            float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x27)
            zmm2.d = zmm2.d f* zmm9.d
            temp0_13[0] = zmm2.d
            float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x39)
            *r10_2 = temp0_14
            r10_2 = &r10_2[1]
            var_a8_1 = temp0_14
        while (r11_1 s< r8_1)
        
        zmm4_1 = var_88_1
        zmm7 = var_98
    
    zmm1 = *(arg2 + 0x34)
    zmm2 = *(arg2 + 0x38)
    int32_t var_9c_2 = 0x3f800000
    var_a8_1[0] = (*(arg2 + 0x30)).d
    float temp0_15[0x4] = _mm_shuffle_ps(var_a8_1, var_a8_1, 0xe1)
    temp0_15[0] = zmm1.d
    float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc6)
    temp0_16[0] = zmm2.d
    *(arg3 + 0x10) = _mm_shuffle_ps(temp0_16, temp0_16, 0xc9)
    *(arg3 + 0x20) = *(arg2 + 0x40)
    *(arg3 + 0x30) = *(arg2 + 0x50)
    *(arg3 + 0x40) = *(arg2 + 0x120)
    *(arg3 + 0x50) = *(arg2 + 0x130)
    *(arg3 + 0x60) = *(arg2 + 0x140)
    arg3[0xe] = *(arg2 + 0x60)
    arg3[0xf].d = *(arg2 + 0x68)
    arg3[0x10] = *(arg2 + 0x6c)
    uint32_t rax_9 = zx.d(*(arg2 + 0x1c))
    arg3[0x26].d = zmm10[0]
    *(arg3 + 0x134) = zmm11[0]
    arg3[0x27].d = rax_9
    int64_t rax_10
    int64_t** r9_4
    
    if (*(arg2 + 0x1c) == 0)
        r9_4 = *arg1
        rax_10 = sx.q(r9_4[1].d)
    
    if (*(arg2 + 0x1c) != 0 || rax_10.d == 1)
        *(arg3 + 0x90) = *(arg2 + 0x80)
        *(arg3 + 0xa0) = *(arg2 + 0x90)
        *(arg3 + 0xb0) = *(arg2 + 0xa0)
        *(arg3 + 0xc0) = *(arg2 + 0xb0)
        *(arg3 + 0xd0) = *(arg2 + 0xc0)
        *(arg3 + 0xe0) = *(arg2 + 0xd0)
        *(arg3 + 0xf0) = *(arg2 + 0xe0)
        *(arg3 + 0x100) = *(arg2 + 0xf0)
        *(arg3 + 0x110) = zmm7
        *(arg3 + 0x120) = zmm4_1
    else
        int32_t rdx_3 = 0
        
        if (rax_10.d s> 0)
            int64_t rcx_9 = 0
            int64_t* rax_11 = *r9_4
            
            do
                if (arg1 == *rax_11)
                    rsi = rdx_3
                    break
                
                rdx_3 += 1
                rcx_9 += 1
                rax_11 = &rax_11[1]
            while (rcx_9 s< rax_10)
        
        zmm2 = data_14399f6e0
        zmm3 = data_14399f6f0
        zmm4_1 = data_14399f700
        zmm5_1 = data_14399f710
        uint128_t* rax_14 = (sx.q(rsi) + 2) << 6
        *(arg3 + 0x90) = *(rax_14 + arg2)
        *(arg3 + 0xa0) = *(rax_14 + arg2 + 0x10)
        *(arg3 + 0xb0) = *(rax_14 + arg2 + 0x20)
        zmm1 = *(rax_14 + arg2 + 0x30)
        *(arg3 + 0xd0) = zmm2
        *(arg3 + 0xe0) = zmm3
        *(arg3 + 0xf0) = zmm4_1
        *(arg3 + 0xc0) = zmm1
        *(arg3 + 0x100) = zmm5_1
        *(arg3 + 0x110) = zmm7
        *(arg3 + 0x120) = zx.o(0)

arg3[0x28] = *(rbp + 0x10)
int64_t result = *(rbp + 0x18)
arg3[0x29] = result
return result
