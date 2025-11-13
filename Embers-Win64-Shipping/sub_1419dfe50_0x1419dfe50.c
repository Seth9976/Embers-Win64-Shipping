// 函数: sub_1419dfe50
// 地址: 0x1419dfe50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
void* rax_2 = *(arg1 + 0x28)
int64_t r13 = 0xffffffff
int128_t zmm6
int128_t var_48 = zmm6
int128_t zmm7
int128_t var_58 = zmm7
float zmm8[0x4] = *(rax_2 + 0x2c)
int64_t var_208
__builtin_memset(&var_208, 0, 0x2c)
int32_t var_1dc = 0x80
int32_t var_1d8 = 0xffffffff
int32_t var_1d4 = 0
int64_t var_1c8 = 0
int32_t var_1c0 = 0
int64_t var_118
__builtin_memset(&var_118, 0, 0x2c)
int32_t var_ec = 0x80
int32_t var_e8 = 0xffffffff
int32_t var_e4 = 0
int64_t var_d8 = 0
int32_t var_d0 = 0
int64_t var_168
__builtin_memset(&var_168, 0, 0x2c)
int32_t var_13c = 0x80
int32_t var_138 = 0xffffffff
int32_t var_134 = 0
int64_t var_128 = 0
int32_t var_120 = 0
int64_t var_1b8
__builtin_memset(&var_1b8, 0, 0x2c)
int32_t var_18c = 0x80
int32_t var_188 = 0xffffffff
int32_t var_184 = 0
int64_t var_178 = 0
int32_t var_170 = 0
void* rsi = *(rax_2 + 0x40)
zmm8[0] = zmm8[0] * zmm8[0]
void* r14_2 = (sx.q(*(rax_2 + 0x48)) << 5) + rsi
int64_t var_270 = 0
int128_t zmm9
int128_t var_78 = zmm9
int64_t var_268 = 0
zmm8[0] = zmm8[0] * 9.99999997e-07f
int128_t zmm0

if (rsi == r14_2)
label_1419e020c:
    int32_t i = var_268.d
    int32_t rbx_4 = *(arg1 + 0xd8) - 1
    int32_t var_274_1 = rbx_4
    
    if (i s> 0)
        void* const r14_3 = nullptr
        int128_t zmm11 = 0x3f800000
        int128_t zmm13 = 0x40c90fdb
        int128_t zmm10
        int128_t var_88_1 = zmm10
        float zmm12[0x4]
        float var_a8_1[0x4] = zmm12
        
        do
            void* rcx_20 = *(arg1 + 0x28)
            int32_t rax_17 = 0
            
            if (0 == *(rcx_20 + 0x38))
                *(rcx_20 + 0x38) = 0
            else
                rax_17 = *(rcx_20 + 0x38)
            
            if (rax_17 != *(arg1 + 0x150))
                break
            
            r13 = sx.q(mods.dp.d(sx.q((r13 + 1).d), var_268.d))
            void* rsi_1 = *(var_270 + (r13 << 3))
            
            if (rsi_1 != 0)
                int32_t var_250
                sub_140865c40(&var_168, &var_250, rsi_1)
                int64_t rax_21 = sx.q(var_250)
                
                if (rax_21.d != 0xffffffff)
                    r14_3 = var_168 + rax_21 * 0x18
                
                if (*(r14_3 + 8) != 0)
                    zmm0 = *(rsi_1 + 0x2c0)
                    int32_t rax_24 = *(arg1 + 0x148) * 0xbb38435 + 0x3619636b
                    *(arg1 + 0x148) = rax_24
                    zmm8 = rax_24 u>> 9 | 0x3f800000
                    zmm8[0] = zmm8[0] f- zmm11.d
                    zmm8[0] = zmm8[0] f* zmm0.d
                    float zmm0_1[0x4]
                    int512_t zmm7_1
                    zmm0_1, zmm7_1 = sub_1419e2f60(rsi_1, zmm8)
                    zmm12 = zmm0_1
                    int32_t var_24c
                    sub_140865c40(&var_1b8, &var_24c, rsi_1)
                    int64_t rax_27 = sx.q(var_24c)
                    void* const r8_9
                    
                    if (rax_27.d == 0xffffffff)
                        r8_9 = nullptr
                    else
                        r8_9 = var_1b8 + rax_27 * 0x18
                    
                    float zmm1_2[0x4]
                    
                    if (*(arg1 + 0x14c) == 0 || rbx_4 s< 0)
                        zmm0_1 = *(*(arg1 + 0x28) + 0x2c)
                        int32_t rcx_27 = *(r8_9 + 0xc) * 0xbb38435 + 0x3619636b
                        *(r8_9 + 0xc) = rcx_27
                        zmm0_1[0]
                        zmm0_1 = *(*(arg1 + 0x28) + 0x2c)
                        *(r8_9 + 0xc) = rcx_27 * 0xbb38435 + 0x3619636b
                        zmm10.d =
                            ((rcx_27 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- zmm11.d
                        zmm10.d = zmm10.d f* zmm0_1[0]
                        int32_t var_248
                        sub_1419e1970(&var_208, &var_248, *(rsi_1 + 0x2b4))
                        int64_t rax_46 = sx.q(var_248)
                        int64_t rcx_30
                        
                        if (rax_46.d != 0xffffffff)
                            rcx_30 = rax_46 << 4
                        
                        if (rax_46.d == 0xffffffff || rcx_30 == neg.q(var_208))
                            zmm7_1.o = zx.o(0)
                        else
                            zmm7_1.o = *(rcx_30 + var_208 + 4)
                    else
                        int32_t rax_29 = *(r8_9 + 0xc) * 0xbb38435
                        zmm0_1 = _mm_cvtepi32_ps(zx.o(rbx_4))
                        *(r8_9 + 0xc) = rax_29 + 0x3619636b
                        zmm1_2 = (rax_29 + 0x3619636b) u>> 9 | 0x3f800000
                        zmm1_2[0] = zmm1_2[0] f- zmm11.d
                        zmm1_2[0] = zmm1_2[0] * zmm0_1[0]
                        int32_t* rax_36 = sx.q(int.d(zmm1_2[0])) * 0x60 + *(arg1 + 0xd0)
                        void* rcx_25 = *(rax_36 + 0x38)
                        *rax_36
                        rax_36[1]
                        *(rcx_25 + 0x298)
                        rax_36[0xc]
                        float zmm6_2
                        zmm0_1, zmm6_2 = sub_1419e2f60(rcx_25, rax_36[0xb])
                        zmm0_1[0] + zmm12[0]
                    
                    int32_t rbx_6 = *(arg1 + 0x148) * 0xbb38435 + 0x3619636b
                    *(arg1 + 0x148) = rbx_6
                    zmm1_2 = rbx_6 u>> 9 | 0x3f800000
                    zmm1_2[0] = zmm1_2[0] f- zmm11.d
                    zmm1_2[0] = zmm1_2[0] f* zmm13.d
                    int64_t r8_11
                    float zmm0_2[0x4]
                    float zmm7_3
                    float zmm8_1
                    int32_t zmm9_2
                    float zmm10_1
                    float zmm11_1
                    float zmm12_1
                    r8_11, zmm0_2, zmm7_3, zmm8_1, zmm9_2, zmm10_1, zmm11_1, zmm12_1 =
                        __libm_sse2_sincosf_(zmm1_2)
                    float zmm1_3 = *(rsi_1 + 0x2b8)
                    float zmm3_1 = zmm0_2[0]
                    zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 1)
                    char var_290_1 = 0
                    int32_t var_234_1 = 0
                    *(arg1 + 0x148) = rbx_6 * 0xbb38435 + 0x3619636b
                    float zmm2_1 =
                        (((rbx_6 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000) - zmm11_1) * zmm1_3
                        + zmm7_3
                    zmm0_2[0] = zmm0_2[0] * zmm2_1
                    zmm0_2[0] = zmm0_2[0] f+ zmm9_2
                    float var_23c = zmm0_2[0]
                    float var_238_1 = zmm3_1 * zmm2_1 + zmm10_1
                    int64_t* rax_54
                    rax_54, zmm11, zmm13 =
                        sub_1419e3940(arg1, &var_23c, r8_11, rsi_1, zmm8_1, var_290_1)
                    
                    if (rax_54 != 0)
                        int64_t rbx_7 = sx.q(arg2[1].d)
                        int32_t rcx_33 = (rbx_7 + 1).d
                        arg2[1].d = rcx_33
                        
                        if (rcx_33 s> *(arg2 + 0xc))
                            sub_1405a4d70(arg2)
                        
                        *(*arg2 + (rbx_7 << 3)) = rax_54
                    
                    int32_t temp10_1 = *(r14_3 + 8)
                    *(r14_3 + 8) -= 1
                    rbx_4 = var_274_1
                    
                    if (temp10_1 == 1)
                        i -= 1
                
                r14_3 = nullptr
        while (i s> 0)
else
    zmm9 = 0x3f000000
    
    while (true)
        int32_t* rcx_1 = *(arg1 + 0x28) + 0x38
        int32_t rax_3 = 0
        
        if (0 == *rcx_1)
            *rcx_1 = 0
        else
            rax_3 = *rcx_1
        
        if (rax_3 != *(arg1 + 0x150))
            break
        
        void* rax_4 = *(rsi + 8)
        void* var_280 = rax_4
        
        if (rax_4 != 0)
            if (*(rax_4 + 0x2bc) == 0 || *(rax_4 + 0x2bd) == 0)
                rcx_1.b = 0
            else
                rcx_1.b = 1
            
            if (rcx_1.b == *(arg1 + 0x14c))
                float zmm1[0x4] = *(rax_4 + 0x2a4)
                zmm1[0] = zmm1[0] * zmm1[0]
                zmm1[0] = zmm1[0] * zmm8[0]
                zmm1[0] = zmm1[0] + zmm1[0]
                zmm1[0] = zmm1[0] f+ zmm9.d
                int32_t var_278 = int.d(zmm1[0]) s>> 1
                void** var_228 = &var_280
                int32_t* var_220_1 = &var_278
                void var_230
                sub_1408419d0(&var_168, &var_230, &var_228, nullptr)
                
                if (var_278 s> 0)
                    int64_t rbx_1 = sx.q(var_268.d)
                    int32_t rax_7 = (rbx_1 + 1).d
                    var_268.d = rax_7
                    
                    if (rax_7 s> var_268:4.d)
                        sub_1405a4d70(&var_270)
                    
                    *(var_270 + (rbx_1 << 3)) = var_280
                
                int32_t rcx_7 = *(arg1 + 0x140) + *(var_280 + 0x2b4) + *(*(arg1 + 0x28) + 0x28)
                void** var_218 = &var_280
                int32_t var_244 = rcx_7
                int32_t var_240_1 = rcx_7
                int32_t* var_210_1 = &var_244
                void var_22c
                sub_140bd29a0(&var_1b8, &var_22c, &var_218, nullptr)
                void* rcx_9 = var_280
                int32_t rbx_2 = *(rcx_9 + 0x2b4)
                float zmm1_1[0x4] = *(rcx_9 + 0x2c4)
                int32_t var_284 = rbx_2
                zmm0, zmm8, zmm9 = sub_1419e2f60(rcx_9, zmm1_1)
                zmm7.d = zmm0.d f* *(var_280 + 0x298)
                int32_t var_25c = zmm7.d
                int32_t var_260
                sub_1419e1970(&var_118, &var_260, rbx_2)
                int64_t rax_12 = sx.q(var_260)
                void* const rcx_13
                
                if (rax_12.d == 0xffffffff)
                    rcx_13 = nullptr
                else
                    rcx_13 = (rax_12 << 4) + var_118
                
                float (* rax_13)[0x4] = rcx_13 + 4
                
                if (rcx_13 == 0)
                    rax_13 = nullptr
                
                if (rax_13 == 0)
                    sub_140625040(&var_118, &var_284, &var_25c)
                    rbx_2 = var_284
                else
                    *rax_13 = __maxss_xmmss_memss(zmm7.d, *rax_13).d
                
                zmm6.d = zmm0.d f* *(var_280 + 0x29c)
                int32_t var_254 = zmm6.d
                int32_t var_258
                sub_1419e1970(&var_208, &var_258, rbx_2)
                int64_t rax_15 = sx.q(var_258)
                void* const rcx_18
                
                if (rax_15.d == 0xffffffff)
                    rcx_18 = nullptr
                else
                    rcx_18 = (rax_15 << 4) + var_208
                
                float (* rax_16)[0x4] = rcx_18 + 4
                
                if (rcx_18 == 0)
                    rax_16 = nullptr
                
                if (rax_16 == 0)
                    sub_140625040(&var_208, &var_284, &var_254)
                else
                    *rax_16 = __maxss_xmmss_memss(zmm6.d, *rax_16).d
        
        rsi += 0x20
        
        if (rsi == r14_2)
            goto label_1419e020c
int64_t rcx_35 = var_270

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

sub_1405ae080(&var_1b8)
sub_1405ae080(&var_168)
sub_1406270d0(&var_118)
void* result = sub_1406270d0(&var_208)
__security_check_cookie(rax_1 ^ &var_2b8)
return result
