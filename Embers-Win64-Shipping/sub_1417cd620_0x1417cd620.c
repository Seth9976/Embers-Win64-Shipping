// 函数: sub_1417cd620
// 地址: 0x1417cd620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm7[0x4]
float var_48[0x4] = zmm7
float zmm8[0x4]
float var_58[0x4] = zmm8
float zmm9[0x4]
float var_68[0x4] = zmm9
void var_338
int64_t rax_1 = __security_cookie ^ &var_338
int32_t i_2 = 0
*arg1 = 0
__builtin_memset(&arg1[2], 0, 0x20)
void* rcx = &arg1[0xa]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_2 = *(rcx + 0x10)

if (rax_2 != 0)
    rcx = rax_2

*rcx = 0
*(rcx + 8) = 0
arg1[0x12] = 0xffffffff
arg1[0x13] = 0
*(arg1 + 0x58) = 0
arg1[0x18] = 0
__builtin_memset(&arg1[0x24], 0, 0x20)
InitializeCriticalSection(&arg1[0x2c])
SetCriticalSectionSpinCount(&arg1[0x2c], 0xfa0)
int64_t i = 0
int128_t var_158
__builtin_memcpy(&var_158, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x20\x41\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\xa0\x41\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xf0\x41\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"00\x00\x00\x00\x00\x20\x41\x00\x00\x00\x00\x00\x00\x20\x41\x00\x00\x20\x41\x00\x00\x20\x41\x00\x00"
"a0\x41\x00\x00\x20\x41\x00\x00\x20\x41\x00\x00\xf0\x41\x00\x00\x20\x41\x00\x00\x00\x00\x00\x00\x00"
"00\x00\x00\xa0\x41\x00\x00\x00\x00\x00\x00\x20\x41\x00\x00\xa0\x41\x00\x00\x20\x41\x00\x00\xa0\x41"
"00\x00\xa0\x41\x"
"
    0xc0)
void var_218
void var_210
float zmm0[0x4]
float i_3[0x4]

do
    i_3 = *(&var_158 + i)
    float zmm1[0x4] = *(&var_158:4 + i)
    i_3[0] = i_3[0] - 0.150000006f
    zmm0 = *(&var_158:8 + i)
    zmm1[0] = zmm1[0] - 0.150000006f
    float var_30c_1 = zmm0[0]
    *(&var_218 + i) = (_mm_unpacklo_ps(i_3, zmm1[0].q)).q
    *(&var_210 + i) = var_30c_1
    void var_214
    zmm8 = *(&var_214 + i)
    zmm7 = *(&var_218 + i)
    zmm9 = *(&var_210 + i)
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm7[0] = zmm7[0] + zmm8[0]
    zmm7[0] = zmm7[0] + zmm9[0]
    float zmm4_1[0x4]
    
    if (not(zmm7[0] <= 9.99999994e-09f))
        zmm4_1 = zx.o(0)
        zmm4_1[0] = 0x3f000000
        float temp0_2[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
        zmm7[0] = zmm7[0] * 0.5f
        temp0_2[0] = temp0_2[0] * temp0_2[0]
        zmm7[0] = zmm7[0] * temp0_2[0]
        zmm4_1[0] = zmm4_1[0] - zmm7[0]
        temp0_2[0] = temp0_2[0] * zmm4_1[0]
        temp0_2[0] = temp0_2[0] + temp0_2[0]
        temp0_2[0] = temp0_2[0] * temp0_2[0]
        zmm7[0] = zmm7[0] * temp0_2[0]
        zmm4_1[0] = 0.5f - zmm7[0]
        temp0_2[0] = temp0_2[0] * zmm4_1[0]
        temp0_2[0] = temp0_2[0] + temp0_2[0]
        zmm7[0] = zmm7[0] * temp0_2[0]
        zmm8[0] = zmm8[0] * temp0_2[0]
        zmm9[0] = zmm9[0] * temp0_2[0]
        *(&var_218 + i) = zmm7[0]
        *(&var_214 + i) = zmm8[0]
        *(&var_210 + i) = zmm9[0]
    
    i_3 = *(&var_158:0xc + i)
    int128_t var_148
    zmm1 = *(&var_148 + i)
    i_3[0] = i_3[0] - 0.150000006f
    zmm0 = *(&var_148:4 + i)
    zmm1[0] = zmm1[0] - 0.150000006f
    float var_30c_2 = zmm0[0]
    void var_20c
    *(&var_20c + i) = (_mm_unpacklo_ps(i_3, zmm1[0].q)).q
    void var_204
    *(&var_204 + i) = var_30c_2
    zmm7 = *(&var_20c + i)
    void var_208
    zmm0 = *(&var_208 + i)
    zmm1 = *(&var_204 + i)
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm0[0] = zmm0[0] * zmm0[0]
    zmm1[0] = zmm1[0] * zmm1[0]
    zmm7[0] = zmm7[0] + zmm0[0]
    zmm7[0] = zmm7[0] + zmm1[0]
    
    if (not(zmm7[0] <= 9.99999994e-09f))
        zmm4_1 = zx.o(0)
        zmm4_1[0] = 0x3f000000
        float temp0_4[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
        zmm7[0] = zmm7[0] * 0.5f
        temp0_4[0] = temp0_4[0] * temp0_4[0]
        zmm7[0] = zmm7[0] * temp0_4[0]
        zmm4_1[0] = zmm4_1[0] - zmm7[0]
        temp0_4[0] = temp0_4[0] * zmm4_1[0]
        temp0_4[0] = temp0_4[0] + temp0_4[0]
        temp0_4[0] = temp0_4[0] * temp0_4[0]
        zmm7[0] = zmm7[0] * temp0_4[0]
        zmm4_1[0] = 0.5f - zmm7[0]
        temp0_4[0] = temp0_4[0] * zmm4_1[0]
        temp0_4[0] = temp0_4[0] + temp0_4[0]
        zmm7[0] = zmm7[0] * temp0_4[0]
        *(&var_20c + i) = zmm7[0]
        temp0_4[0] = temp0_4[0] f* *(&var_208 + i)
        *(&var_208 + i) = temp0_4[0]
        temp0_4[0] = temp0_4[0] f* *(&var_204 + i)
        *(&var_204 + i) = temp0_4[0]
    
    i_3 = *(&var_148:8 + i)
    zmm1 = *(&var_148:0xc + i)
    i_3[0] = i_3[0] - 0.150000006f
    int128_t var_138
    zmm0 = *(&var_138 + i)
    zmm1[0] = zmm1[0] - 0.150000006f
    float var_30c_3 = zmm0[0]
    void var_200
    *(&var_200 + i) = (_mm_unpacklo_ps(i_3, zmm1[0].q)).q
    void var_1f8
    *(&var_1f8 + i) = var_30c_3
    zmm7 = *(&var_200 + i)
    void var_1fc
    zmm0 = *(&var_1fc + i)
    zmm1 = *(&var_1f8 + i)
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm0[0] = zmm0[0] * zmm0[0]
    zmm1[0] = zmm1[0] * zmm1[0]
    zmm7[0] = zmm7[0] + zmm0[0]
    zmm7[0] = zmm7[0] + zmm1[0]
    
    if (not(zmm7[0] <= 9.99999994e-09f))
        zmm4_1 = zx.o(0)
        zmm4_1[0] = 0x3f000000
        float temp0_6[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
        zmm7[0] = zmm7[0] * 0.5f
        temp0_6[0] = temp0_6[0] * temp0_6[0]
        zmm7[0] = zmm7[0] * temp0_6[0]
        zmm4_1[0] = zmm4_1[0] - zmm7[0]
        temp0_6[0] = temp0_6[0] * zmm4_1[0]
        temp0_6[0] = temp0_6[0] + temp0_6[0]
        temp0_6[0] = temp0_6[0] * temp0_6[0]
        zmm7[0] = zmm7[0] * temp0_6[0]
        zmm4_1[0] = 0.5f - zmm7[0]
        temp0_6[0] = temp0_6[0] * zmm4_1[0]
        temp0_6[0] = temp0_6[0] + temp0_6[0]
        zmm7[0] = zmm7[0] * temp0_6[0]
        *(&var_200 + i) = zmm7[0]
        temp0_6[0] = temp0_6[0] f* *(&var_1fc + i)
        *(&var_1fc + i) = temp0_6[0]
        temp0_6[0] = temp0_6[0] f* *(&var_1f8 + i)
        *(&var_1f8 + i) = temp0_6[0]
    
    i_3 = *(&var_138:4 + i)
    zmm1 = *(&var_138:8 + i)
    i_3[0] = i_3[0] - 0.150000006f
    zmm0 = *(&var_138:0xc + i)
    zmm1[0] = zmm1[0] - 0.150000006f
    float var_30c_4 = zmm0[0]
    void var_1f4
    *(&var_1f4 + i) = (_mm_unpacklo_ps(i_3, zmm1[0].q)).q
    void var_1ec
    *(&var_1ec + i) = var_30c_4
    zmm7 = *(&var_1f4 + i)
    void var_1f0
    zmm0 = *(&var_1f0 + i)
    zmm1 = *(&var_1ec + i)
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm0[0] = zmm0[0] * zmm0[0]
    zmm1[0] = zmm1[0] * zmm1[0]
    zmm7[0] = zmm7[0] + zmm0[0]
    zmm7[0] = zmm7[0] + zmm1[0]
    
    if (not(zmm7[0] <= 9.99999994e-09f))
        zmm4_1 = zx.o(0)
        zmm4_1[0] = 0x3f000000
        float temp0_8[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
        zmm7[0] = zmm7[0] * 0.5f
        temp0_8[0] = temp0_8[0] * temp0_8[0]
        zmm7[0] = zmm7[0] * temp0_8[0]
        zmm4_1[0] = zmm4_1[0] - zmm7[0]
        temp0_8[0] = temp0_8[0] * zmm4_1[0]
        temp0_8[0] = temp0_8[0] + temp0_8[0]
        temp0_8[0] = temp0_8[0] * temp0_8[0]
        zmm7[0] = zmm7[0] * temp0_8[0]
        zmm4_1[0] = 0.5f - zmm7[0]
        temp0_8[0] = temp0_8[0] * zmm4_1[0]
        temp0_8[0] = temp0_8[0] + temp0_8[0]
        zmm7[0] = zmm7[0] * temp0_8[0]
        *(&var_1f4 + i) = zmm7[0]
        temp0_8[0] = temp0_8[0] f* *(&var_1f0 + i)
        *(&var_1f0 + i) = temp0_8[0]
        temp0_8[0] = temp0_8[0] f* *(&var_1ec + i)
        *(&var_1ec + i) = temp0_8[0]
    
    i += 0x30
while (i s< 0xc0)

int64_t rbx_1 = sx.q(arg1[4])
int32_t var_2f8 = 0
int32_t var_2f4 = 4
int64_t var_2f0 = 5
int32_t rax_7 = (rbx_1 + 4).d
int32_t var_2e8 = 5
int32_t var_2e4 = 1
int32_t var_2e0 = 1
int32_t var_2dc = 5
int32_t var_2d8 = 6
int32_t var_2d4 = 1
int32_t var_2d0 = 6
int32_t var_2cc = 2
int32_t var_2c8 = 2
int32_t var_2c4 = 6
int32_t var_2c0 = 7
int32_t var_2bc = 2
int32_t var_2b8 = 7
int32_t var_2b4 = 3
int32_t var_2b0 = 4
int32_t var_2ac = 8
int32_t var_2a8 = 9
int32_t var_2a4 = 4
int32_t var_2a0 = 9
int32_t var_29c = 5
int32_t var_298 = 5
int32_t var_294 = 9
int32_t var_290 = 0xa
int32_t var_28c = 5
int32_t var_288 = 0xa
int32_t var_284 = 6
int32_t var_280 = 6
int32_t var_27c = 0xa
int32_t var_278 = 0xb
int32_t var_274 = 6
int32_t var_270 = 0xb
int32_t var_26c = 7
int32_t var_268 = 8
int32_t var_264 = 0xc
int32_t var_260 = 0xd
int32_t var_25c = 8
int32_t var_258 = 0xd
int32_t var_254 = 9
int32_t var_250 = 9
int32_t var_24c = 0xd
int32_t var_248 = 0xe
int32_t var_244 = 9
int32_t var_240 = 0xe
int32_t var_23c = 0xa
int32_t var_238 = 0xa
int32_t var_234 = 0xe
int32_t var_230 = 0xf
int32_t var_22c = 0xa
int32_t var_228 = 0xf
int32_t var_224 = 0xb
arg1[4] = rax_7

if (rax_7 s> arg1[5])
    sub_1405c4f50(&arg1[2])

int64_t i_1 = 0
__builtin_memset(rbx_1 * 0x30 + *(arg1 + 8), 0, 0xc0)

do
    int64_t* rbx_3 = *(arg1 + 8) + i_1
    
    if (*(rbx_3 + 0xc) s< 0x10)
        sub_140638cc0(rbx_3, 0x10)
    
    if (*(rbx_3 + 0x1c) s< 0x10)
        sub_140638cc0(&rbx_3[2], 0x10)
    
    for (int64_t j = 0; j s< 0xc0; )
        int64_t r14_1 = sx.q(rbx_3[1].d)
        int32_t rax_8 = (r14_1 + 1).d
        rbx_3[1].d = rax_8
        
        if (rax_8 s> *(rbx_3 + 0xc))
            sub_140638a00(rbx_3)
        
        int64_t rcx_10 = *rbx_3
        int64_t rdx_3 = r14_1 * 3
        int32_t rax_9 = *(&var_158:8 + j)
        *(rcx_10 + (rdx_3 << 2)) = *(&var_158 + j)
        *(rcx_10 + (rdx_3 << 2) + 8) = rax_9
        int64_t r14_2 = sx.q(rbx_3[3].d)
        int32_t rax_10 = (r14_2 + 1).d
        rbx_3[3].d = rax_10
        
        if (rax_10 s> *(rbx_3 + 0x1c))
            sub_140638a00(&rbx_3[2])
        
        int64_t rcx_12 = rbx_3[2]
        int64_t rdx_5 = r14_2 * 3
        zmm0 = zx.o(*(&var_218 + j))
        int32_t rax_11 = *(&var_210 + j)
        j += 0xc
        *(rcx_12 + (rdx_5 << 2)) = zmm0.q
        *(rcx_12 + (rdx_5 << 2) + 8) = rax_11
    
    if (*(rbx_3 + 0x2c) s< 0x36)
        sub_1405dadb0(&rbx_3[4], 0x36)
    
    for (int64_t j_1 = 0; j_1 s< 0x36; )
        int64_t rsi_1 = sx.q(rbx_3[5].d)
        int32_t rax_12 = (rsi_1 + 1).d
        rbx_3[5].d = rax_12
        
        if (rax_12 s> *(rbx_3 + 0x2c))
            sub_1405a4cf0(&rbx_3[4])
        
        int32_t rax_13 = (&var_2f8)[j_1]
        j_1 += 1
        *(rbx_3[4] + (rsi_1 << 2)) = rax_13
    
    i_1 += 0x30
while (i_1 s< 0xc0)

void** rdx_7 = nullptr

do
    int64_t rax_14 = *(arg1 + 8)
    i_3 = zx.o(i_2)
    i_2 += 1
    float temp0_9[0x4] = _mm_cvtepi32_ps(i_3)
    int32_t* rcx_16 = *(rdx_7 + rax_14)
    rdx_7 = &rdx_7[6]
    temp0_9[0] = temp0_9[0] * 30f
    temp0_9[0] = temp0_9[0] f+ *rcx_16
    temp0_9[0] = temp0_9[0] f+ rcx_16[3]
    *rcx_16 = temp0_9[0]
    rcx_16[3] = temp0_9[0]
    temp0_9[0] = temp0_9[0] f+ rcx_16[6]
    temp0_9[0] = temp0_9[0] f+ rcx_16[9]
    rcx_16[6] = temp0_9[0]
    rcx_16[9] = temp0_9[0]
    temp0_9[0] = temp0_9[0] f+ rcx_16[0xc]
    temp0_9[0] = temp0_9[0] f+ rcx_16[0xf]
    rcx_16[0xc] = temp0_9[0]
    rcx_16[0xf] = temp0_9[0]
    temp0_9[0] = temp0_9[0] f+ rcx_16[0x12]
    temp0_9[0] = temp0_9[0] f+ rcx_16[0x15]
    rcx_16[0x12] = temp0_9[0]
    rcx_16[0x15] = temp0_9[0]
    temp0_9[0] = temp0_9[0] f+ rcx_16[0x18]
    temp0_9[0] = temp0_9[0] f+ rcx_16[0x1b]
    rcx_16[0x18] = temp0_9[0]
    rcx_16[0x1b] = temp0_9[0]
    temp0_9[0] = temp0_9[0] f+ rcx_16[0x1e]
    temp0_9[0] = temp0_9[0] f+ rcx_16[0x21]
    rcx_16[0x1e] = temp0_9[0]
    rcx_16[0x21] = temp0_9[0]
    temp0_9[0] = temp0_9[0] f+ rcx_16[0x24]
    temp0_9[0] = temp0_9[0] f+ rcx_16[0x27]
    rcx_16[0x24] = temp0_9[0]
    rcx_16[0x27] = temp0_9[0]
    temp0_9[0] = temp0_9[0] f+ rcx_16[0x2a]
    temp0_9[0] = temp0_9[0] f+ rcx_16[0x2d]
    rcx_16[0x2a] = temp0_9[0]
    rcx_16[0x2d] = temp0_9[0]
while (i_2 s< 4)

__security_check_cookie(rax_1 ^ &var_338)
return arg1
