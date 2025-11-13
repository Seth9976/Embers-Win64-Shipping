// 函数: sub_141484cd0
// 地址: 0x141484cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
int64_t* rsi = arg2
void* rax_3 = arg3[1]
int64_t rbx = sx.q(*(rax_3 + 0x110))
void* rax_4 = *arg3
*(arg1 + 0x3b0)
int64_t* rax_7 = sx.q(*(rax_4 + 0x28)) * 0x70 + *(arg1 + 0x2f0)
char var_337 = 0
char var_334 = 0
char var_333 = 0
char var_335 = 0
int64_t* var_318 = arg2
char var_338 = 0
char var_336 = 0
uint64_t result = sub_14141f720()
int32_t r12 = result.d
int32_t r14 = 0

if (*(arg1 + 0xa8) s> 0)
    void* r8 = rax_3
    result = arg1 + 0xa0
    uint64_t result_1 = result
    int64_t r15_1 = 0
    uint128_t var_2f0
    uint128_t var_2b8
    uint128_t var_248
    char rdx_4
    char r9_2
    char r10_1
    
    while (true)
        void* rdi_2 = *result + r15_1
        uint128_t zmm0 = *(*(rdi_2 + 0x1658) + rbx * 0x10)
        var_2f0 = zmm0
        int32_t rbx_1 = _mm_bsrli_si128(zmm0, 8).d
        
        if (not(test_bit(rbx_1, 0xf)))
            int64_t* rcx_2 = *(r8 + 8)
            r8 = rax_3
            void var_228
            var_2f0 = *(*(*rcx_2 + 0x70))(rcx_2, &var_228, rdi_2)
            rbx_1 = var_2f0:8.d
        
        void* rdx_1 = rax_4
        uint8_t rbx_2 = (rbx_1 u>> 3).b & 1
        char var_1ec_1 = 0
        int64_t var_1f8_1 = *(*(rdx_1 + 0x20) + 0x10)
        
        if (arg5 == 0)
            rsi.b = 1
        else if ((*(rdi_2 + 0x497c) & 0x10) != 0)
            rsi.b = 0
        else
            void* rcx_4 = *(rdi_2 + 8)
            
            if (rcx_4 == 0)
                rsi.b = 0
            else
                var_248 = (*(r8 + 0x10)).o
                int64_t var_238_1 = 0xffffffff.q
                r8 = rax_3
                rdx_1 = rax_4
                
                if (sub_141421690(rcx_4, rsi, &var_248, r12) != 0)
                    rsi.b = 1
                else
                    rsi.b = 0
        
        char var_1d4_1 = 1
        int64_t var_1e0_1 = *(*(rdx_1 + 0x20) + 0x10)
        
        if (arg4 == 0)
            rdx_1.b = 1
        else if ((*(rdi_2 + 0x497c) & 0x10) != 0)
            rdx_1.b = 0
        else
            void* rcx_6 = *(rdi_2 + 8)
            
            if (rcx_6 == 0)
                rdx_1.b = 0
            else
                int64_t* rdx_3 = var_318
                var_2b8 = (*(r8 + 0x10)).o
                int64_t var_2a8_1 = 0xffffffff.q
                char rax_16
                rax_16, rdx_1 = sub_141421690(rcx_6, rdx_3, &var_2b8, r12)
                r8 = rax_3
                
                if (rax_16 != 0)
                    rdx_1.b = 1
                else
                    rdx_1.b = 0
        
        uint64_t rax_21
        
        if (*(*(r8 + 8) + 0x37) s< 0)
            int32_t rcx_7 = *(r8 + 0x110)
            void* rdi_3 = rdi_2 + 0x15b8
            void* rax_17 = *(rdi_3 + 0x10)
            
            if (rax_17 != 0)
                rdi_3 = rax_17
            
            int32_t rax_18 = rcx_7
            
            if (rcx_7 s< 0)
                rax_18 = rcx_7 + 0x1f
            
            rax_21.b = test_bit(*(rdi_3 + (sx.q(rax_18 s>> 5) << 2)), rcx_7 & 0x1f)
            var_337 |= rax_21.b
        
        if (rbx_2 == 0 || rsi.b != 0)
            rax_21.b = 0
        else
            rax_21.b = 1
        
        r9_2 = var_336 | rax_21.b
        var_336 = r9_2
        
        if (rbx_2 == 0 || rdx_1.b != 0)
            rax_21.b = 0
        else
            rax_21.b = 1
        
        char rcx_9 = var_2f0:2.b
        r10_1 = var_335 | rax_21.b
        var_335 = r10_1
        var_334 |= rcx_9 & 1
        rdx_4 = var_338 | rbx_2
        var_338 = rdx_4
        char rax_22
        
        if ((rcx_9 & 0x10) != 0 || (rcx_9 & 0x40) != 0 || (rcx_9 & 0x20) != 0)
            rax_22 = 1
        else
            rax_22 = 0
        
        var_333 |= rax_22
        r14 += 1
        r15_1 += 0x5240
        result = result_1
        
        if (r14 s>= *(arg1 + 0xa8))
            break
        
        rsi = var_318
    
    if (r9_2 != 0 || r10_1 != 0 || rdx_4 != 0)
        uint128_t zmm7
        uint128_t var_58_1 = zmm7
        uint128_t zmm8
        uint128_t var_68_1 = zmm8
        uint128_t zmm10
        uint128_t var_88_1 = zmm10
        float zmm11[0x4]
        float var_98_1[0x4] = zmm11
        uint128_t zmm12
        uint128_t var_a8_1 = zmm12
        uint128_t zmm14
        uint128_t var_c8_1 = zmm14
        uint128_t zmm15
        uint128_t var_d8_1 = zmm15
        int64_t* var_2d8 = nullptr
        int32_t var_2d0_1 = 0
        sub_14139bda0(r8, &var_2d8)
        void* rax_25 = *(*var_2d8 + 8)
        uint128_t zmm13 = *(rax_25 + 0xc0)
        int32_t rax_26 = *(rax_25 + 0xd8)
        uint64_t var_2a8_2 = *(rax_25 + 0xd0)
        uint128_t zmm0_1
        zmm0_1.q = fconvert.d(zmm13.d)
        var_2f0 = zmm13
        var_2b8 = zmm13
        int32_t var_330_1
        int32_t var_320_1
        int32_t var_31c_1
        int32_t var_308_1
        int32_t var_304_1
        int32_t var_300_1
        float zmm1_1[0x4]
        uint128_t zmm6_1
        
        if (_finite(zmm0_1.q) == 0)
        label_14148513e:
            zmm1_1 = data_142d3f670
            zmm13 = data_143dbb1f8
            zmm0_1 = zmm1_1
            zmm12 = data_143dbb1fc
            zmm14 = data_143dbb200
            var_2b8 = zmm1_1
            zmm6_1 = var_2a8_2:4.d
            zmm7 = var_2a8_2.d
            zmm8 = var_2b8:0xc.d
            zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xff)
            var_31c_1 = zmm0_1.d
            zmm15 = zmm0_1
            var_320_1 = zmm12.d
            var_330_1 = zmm14.d
            var_308_1 = zmm6_1.d
            var_304_1 = zmm7.d
            var_300_1 = zmm8.d
            var_2f0 = zmm13
        else
            zmm12 = var_2b8:4.d
            var_320_1 = zmm12.d
            
            if (_finite(_mm_cvtps_pd(zmm12.q).q) == 0)
                goto label_14148513e
            
            zmm14 = var_2b8:8.d
            var_330_1 = zmm14.d
            
            if (_finite(_mm_cvtps_pd(zmm14.q).q) == 0)
                goto label_14148513e
            
            zmm8 = var_2b8:0xc.d
            var_300_1 = zmm8.d
            
            if (_finite(_mm_cvtps_pd(zmm8.q).q) == 0)
                goto label_14148513e
            
            zmm7 = var_2a8_2.d
            var_304_1 = zmm7.d
            
            if (_finite(_mm_cvtps_pd(zmm7.q).q) == 0)
                goto label_14148513e
            
            zmm6_1 = var_2a8_2:4.d
            var_308_1 = zmm6_1.d
            
            if (_finite(_mm_cvtps_pd(zmm6_1.q).q) == 0)
                goto label_14148513e
            
            zmm15 = rax_26
            var_31c_1 = zmm15.d
            
            if (_finite(_mm_cvtps_pd(zmm15.q).q) == 0)
                goto label_14148513e
        
        uint128_t zmm9 = 0x3f000000
        int32_t rdi_4 = 1
        uint128_t zmm2
        uint128_t zmm3
        uint128_t zmm4_1
        uint128_t zmm5_1
        
        if (var_2d0_1 s> 1)
            int64_t rbx_3 = 8
            
            do
                void* rax_35 = *(*(var_2d8 + rbx_3) + 8)
                
                if ((*(rax_35 + 0x39) & 2) != 0)
                    zmm0_1 = *(rax_35 + 0xc0)
                    int32_t rax_36 = *(rax_35 + 0xd8)
                    zmm2.d = zmm14.d f- zmm6_1.d
                    int64_t var_238_2 = *(rax_35 + 0xd0)
                    zmm6_1.d = zmm6_1.d f+ zmm14.d
                    zmm1_1 = zmm13
                    zmm1_1[0] = zmm1_1[0] f- zmm8.d
                    var_248 = zmm0_1
                    zmm8.d = zmm8.d f+ zmm13.d
                    zmm0_1.d = zmm12.d f- zmm7.d
                    zmm10 = zmm2
                    zmm11 = zmm1_1
                    zmm7.d = zmm7.d f+ zmm12.d
                    zmm9 = zmm0_1
                    
                    if (not(zmm1_1[0] f<= zmm8.d))
                        zmm11 = zmm8
                    
                    if (not(zmm0_1.d f<= zmm7.d))
                        zmm9 = zmm7
                    
                    if (not(zmm2.d f<= zmm6_1.d))
                        zmm10 = zmm6_1
                    
                    if (not(zmm1_1[0] f< zmm8.d))
                        zmm8 = zmm1_1
                    
                    if (not(zmm0_1.d f< zmm7.d))
                        zmm7 = zmm0_1
                    
                    if (not(zmm2.d f< zmm6_1.d))
                        zmm6_1 = zmm2
                    
                    zmm13 = var_248.d
                    zmm1_1 = var_248:0xc.d
                    zmm12 = var_248:4.d
                    zmm3.d = zmm13.d f- zmm1_1[0]
                    zmm14 = var_248:8.d
                    zmm0_1 = var_238_2.d
                    zmm2 = var_238_2:4.d
                    zmm4_1.d = zmm12.d f- zmm0_1.d
                    zmm5_1.d = zmm14.d f- zmm2.d
                    
                    if (not(zmm11[0] f<= zmm3.d))
                        zmm11 = zmm3
                    
                    if (not(zmm9.d f<= zmm4_1.d))
                        zmm9 = zmm4_1
                    
                    if (not(zmm10.d f<= zmm5_1.d))
                        zmm10 = zmm5_1
                    
                    if (not(zmm8.d f>= zmm3.d))
                        zmm8 = zmm3
                    
                    if (not(zmm7.d f>= zmm4_1.d))
                        zmm7 = zmm4_1
                    
                    if (not(zmm6_1.d f>= zmm5_1.d))
                        zmm6_1 = zmm5_1
                    
                    zmm1_1[0] = zmm1_1[0] f+ zmm13.d
                    zmm0_1.d = zmm0_1.d f+ zmm12.d
                    zmm2.d = zmm2.d f+ zmm14.d
                    
                    if (not(zmm11[0] <= zmm1_1[0]))
                        zmm11 = zmm1_1
                    
                    if (not(zmm9.d f<= zmm0_1.d))
                        zmm9 = zmm0_1
                    
                    if (not(zmm10.d f<= zmm2.d))
                        zmm10 = zmm2
                    
                    if (not(zmm8.d f>= zmm1_1[0]))
                        zmm8 = zmm1_1
                    
                    if (not(zmm7.d f>= zmm0_1.d))
                        zmm7 = zmm0_1
                    
                    if (not(zmm6_1.d f>= zmm2.d))
                        zmm6_1 = zmm2
                    
                    zmm8.d = zmm8.d f- zmm11[0]
                    zmm1_1 = var_330_1
                    zmm7.d = zmm7.d f- zmm9.d
                    zmm5_1 = var_2f0
                    zmm6_1.d = zmm6_1.d f- zmm10.d
                    zmm4_1 = zmm8
                    zmm8.d = zmm8.d f* 0.5f
                    zmm2 = zmm7
                    zmm4_1.d = zmm4_1.d f* zmm4_1.d
                    zmm7.d = zmm7.d f* 0.5f
                    zmm11[0] = zmm11[0] f+ zmm8.d
                    zmm3 = zmm6_1
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm6_1.d = zmm6_1.d f* 0.5f
                    zmm9.d = zmm9.d f+ zmm7.d
                    zmm5_1.d = zmm5_1.d f- zmm11[0]
                    zmm13.d = zmm13.d f- zmm11[0]
                    zmm3.d = zmm3.d f* zmm3.d
                    zmm0_1.d = var_320_1.d f- zmm9.d
                    var_320_1 = zmm9.d
                    zmm10.d = zmm10.d f+ zmm6_1.d
                    zmm12.d = zmm12.d f- zmm9.d
                    zmm5_1.d = zmm5_1.d f* zmm5_1.d
                    zmm13.d = zmm13.d f* zmm13.d
                    zmm4_1.d = zmm4_1.d f+ zmm2.d
                    zmm0_1.d = zmm0_1.d f* zmm0_1.d
                    zmm1_1[0] = zmm1_1[0] f- zmm10.d
                    zmm12.d = zmm12.d f* zmm12.d
                    zmm14.d = zmm14.d f- zmm10.d
                    zmm0_1.d = zmm0_1.d f+ zmm5_1.d
                    zmm4_1.d = zmm4_1.d f+ zmm3.d
                    zmm5_1 = zmm1_1[0]
                    zmm12.d = zmm12.d f+ zmm13.d
                    zmm14.d = zmm14.d f* zmm14.d
                    zmm5_1.d = zmm5_1.d f* zmm5_1.d
                    zmm13 = zmm11
                    zmm4_1.d = zmm4_1.d f* 0.25f
                    zmm12.d = zmm12.d f+ zmm14.d
                    zmm0_1.d = zmm0_1.d f+ zmm5_1.d
                    var_330_1 = zmm10.d
                    zmm14 = zmm10
                    var_2f0 = zmm11
                    float temp0_9[0x4] = _mm_sqrt_ss(0, zmm12.d)
                    zmm12 = zmm9
                    zmm0_1 = _mm_sqrt_ss(zmm0_1.d, zmm0_1.d)
                    temp0_9[0] = temp0_9[0] f+ rax_36
                    zmm0_1.d = zmm0_1.d f+ zmm15.d
                    zmm15 =
                        _mm_min_ss(_mm_max_ss(temp0_9.d, zmm0_1.d).d, _mm_sqrt_ss(0, zmm4_1.d).d)
                    zmm0_1.q = fconvert.d(zmm11[0])
                    
                    if (_finite(zmm0_1.q) == 0)
                    label_1414854ab:
                        zmm1_1 = data_142d3f670
                        zmm13 = data_143dbb1f8
                        zmm0_1 = zmm1_1
                        zmm12 = data_143dbb1fc
                        zmm14 = data_143dbb200
                        var_2b8 = zmm1_1
                        zmm6_1 = var_2a8_2:4.d
                        zmm7 = var_2a8_2.d
                        zmm8 = var_2b8:0xc.d
                        zmm15 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xff)
                        var_320_1 = zmm12.d
                        var_330_1 = zmm14.d
                        var_2f0 = zmm13
                    else
                        zmm0_1.q = fconvert.d(zmm9.d)
                        
                        if (_finite(zmm0_1.q) == 0)
                            goto label_1414854ab
                        
                        zmm0_1.q = fconvert.d(zmm10.d)
                        
                        if (_finite(zmm0_1.q) == 0)
                            goto label_1414854ab
                        
                        zmm0_1.q = fconvert.d(zmm8.d)
                        
                        if (_finite(zmm0_1.q) == 0)
                            goto label_1414854ab
                        
                        zmm0_1.q = fconvert.d(zmm7.d)
                        
                        if (_finite(zmm0_1.q) == 0)
                            goto label_1414854ab
                        
                        zmm0_1.q = fconvert.d(zmm6_1.d)
                        
                        if (_finite(zmm0_1.q) == 0)
                            goto label_1414854ab
                        
                        if (_finite(_mm_cvtps_pd(zmm15.q).q) == 0)
                            goto label_1414854ab
                
                rdi_4 += 1
                rbx_3 += 8
            while (rdi_4 s< var_2d0_1)
            
            zmm9 = 0x3f000000
            var_31c_1 = zmm15.d
            var_300_1 = zmm8.d
            var_304_1 = zmm7.d
            var_308_1 = zmm6_1.d
        
        var_318 = &data_143ec4c60
        int32_t rdi_5 = data_143a30378.d
        int64_t var_260
        sub_14139db90(&data_143ec4c60, &var_260)
        int32_t rbx_4 = var_260.d
        int32_t r12_1 = 2
        int32_t rax_44 = var_260:4.d
        zmm4_1 = zx.o(0)
        
        if (rdi_5 s<= rbx_4)
            rbx_4 = rdi_5
        
        float var_32c_1 = 0f
        uint64_t rbx_5 = zx.q(rbx_4 - 8)
        int32_t var_2fc_1 = 0
        uint64_t var_270 = rbx_5
        uint64_t rsi_1 = 0
        zmm14 = zx.o(0)
        
        if (rdi_5 s<= rax_44)
            rax_44 = rdi_5
        
        zmm13 = zx.o(0)
        int32_t rdi_6 = 0
        zmm15 = zx.o(0)
        int32_t r13_3 = 0
        int32_t r15_2 = *(data_143ed9cb0 + 4)
        
        if (r15_2 s<= 0)
            r15_2 = 0
        
        int32_t rdx_7 = *(data_143ed9c98 + 4)
        void* rax_48 = data_143ed9cc8
        
        if (rdx_7 s<= 0)
            rdx_7 = 0
        
        int32_t var_278 = rdx_7
        int32_t rax_49 = *(rax_48 + 4)
        
        if (rax_49 s<= 0)
            rax_49 = 0
        
        int32_t rax_51 = *(data_143ed9c80 + 4)
        void* result_2 = nullptr
        
        if (rax_51 s<= 0)
            rax_51 = 0
        
        int32_t var_108_1 = 0
        int32_t var_104_1 = 2
        void* var_f8_1 = nullptr
        int32_t var_f0_1 = 0
        int32_t var_ec_1 = 2
        void var_118
        void var_100
        uint64_t rcx_14
        void* r12_2
        
        if (*(arg1 + 0xa8) s<= 0)
            r12_2 = rax_4
        else
            zmm14 = var_31c_1
            zmm6_1 = var_320_1
            zmm7 = var_2f0
            int32_t rbx_6 = 0
            zmm8 = var_330_1
            zmm12.d = float.s(zx.q(rbx_5.d))
            void* r14_1 = *(rax_4 + 0x20)
            
            while (true)
                int64_t rcx_15 = *result_1
                zmm1_1 = zx.o(*(rsi_1 + rcx_15 + 0x60c))
                zmm2.d = zmm7.d f- zmm1_1[0]
                zmm0_1 = zmm1_1
                void* rax_57 = data_143ed9c20
                zmm1_1 = zmm8
                zmm1_1[0] = zmm1_1[0] f- *(rsi_1 + rcx_15 + 0x614)
                zmm3.d = zmm6_1.d f- _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55).d
                zmm2.d = zmm2.d f* zmm2.d
                zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                zmm3.d = zmm3.d f* zmm3.d
                zmm3.d = zmm3.d f+ zmm2.d
                zmm3.d = zmm3.d f+ zmm1_1[0]
                zmm1_1 = *(rsi_1 + rcx_15 + 0xa4c)
                zmm1_1[0] = zmm1_1[0] f* zmm9.d
                zmm2.d = 1f f/ _mm_max_ss(_mm_sqrt_ss(0, zmm3.d).d, 0x3f800000).d
                zmm0_1.d = (*(rsi_1 + rcx_15 + 0xa48)).d f* zmm9.d
                zmm9.d = zmm14.d f* *(rsi_1 + rcx_15 + 0xa58)
                float temp0_19[0x4] = _mm_max_ss(zmm1_1[0], zmm0_1.d)
                zmm9.d = zmm9.d f* zmm2.d
                temp0_19[0] = temp0_19[0] f* zmm14.d
                zmm9.d = zmm9.d f* *(rax_57 + 4)
                temp0_19[0] = temp0_19[0] f* zmm2.d
                var_32c_1 = _mm_max_ss(temp0_19[0], zmm4_1.d)[0]
                float zmm0_2[0x4]
                float zmm9_1[0x4]
                zmm0_2, zmm9_1 = sub_141481cb0(zmm9, rdx_7, r15_2)
                zmm0_2[0] = zmm0_2[0] f* *(r14_1 + 0x168)
                var_108_1 = rdi_6 + 1
                zmm13 = _mm_max_ss(zmm0_2[0], zmm13.d)
                
                if (rdi_6 + 1 s> r12_1)
                    sub_140bcee10(&var_118, rdi_6)
                
                void* result_3 = &var_118
                
                if (result_2 != 0)
                    result_3 = result_2
                
                *(result_3 + (sx.q(rdi_6) << 2)) = zmm0_2[0]
                zmm9_1[0] = zmm9_1[0] f* *(data_143ed9c08 + 4)
                zmm0_1, zmm6_1, zmm7, zmm8, zmm9 = sub_141481cb0(zmm9_1, rax_51, rax_49)
                int64_t rdi_7 = sx.q(var_f0_1)
                r12_2 = rax_4
                zmm10.d = zmm0_1.d f* *(*(r12_2 + 0x20) + 0x168)
                int32_t rax_63 = (rdi_7 + 1).d
                var_f0_1 = rax_63
                zmm15 = _mm_max_ss(zmm10[0], zmm15.d)
                
                if (rax_63 s> var_ec_1)
                    sub_140bcee10(&var_100, rdi_7.d)
                
                void* rcx_18 = &var_100
                
                if (var_f8_1 != 0)
                    rcx_18 = var_f8_1
                
                *(rcx_18 + (rdi_7 << 2)) = zmm10.d
                r14_1 = *(r12_2 + 0x20)
                zmm1_1 = *(r14_1 + 0xd0)
                zmm1_1[0] - 1f
                bool cond:11_1 = zmm1_1[0] > 1f
                
                if (not(zmm1_1[0] <= 1f))
                    zmm0_1.d = zmm1_1.d f* zmm9.d
                    zmm9 = zmm0_1
                
                zmm0_1 = _mm_min_ss(zmm12.d, zmm9.d)
                
                if (not(cond:11_1))
                    zmm0_1.d = zmm0_1.d f* zmm1_1[0]
                
                rcx_14 = zx.q(var_260.d - 8)
                int32_t rax_65 = (int.q(zmm0_1.d)).d
                
                if (r15_2 s<= rcx_14.d)
                    rcx_14 = zx.q(r15_2)
                
                if (rax_65 u>= rcx_14.d)
                    rcx_14 = zx.q(rax_65)
                
                if (rbx_6 u>= rcx_14.d)
                    rcx_14 = zx.q(rbx_6)
                
                r13_3 += 1
                rsi_1 += 0x5240
                rbx_6 = rcx_14.d
                
                if (r13_3 s>= *(arg1 + 0xa8))
                    break
                
                r12_1 = var_104_1
                rdi_6 = var_108_1
                zmm4_1 = var_32c_1
                zmm9 = 0x3f000000
                rdx_7 = var_278
            
            zmm6_1 = var_308_1
            zmm14 = zx.o(0)
            zmm7 = var_304_1
            rsi_1 = zx.q(rcx_14.d)
            zmm8 = var_300_1
            rbx_5 = var_270
            var_2fc_1 = rcx_14.d
        
        zmm10 = var_2f0
        void* rax_67 = data_143ed9b70
        zmm9 = var_320_1
        zmm12 = var_330_1
        int32_t var_288_1 = zmm7.d
        zmm7 = var_31c_1
        float var_298 = zmm10.d
        int32_t var_294_1 = zmm9.d
        float var_290_1 = zmm12.d
        int32_t var_28c_1 = zmm8.d
        int32_t var_284_1 = zmm6_1.d
        float var_280_1 = zmm7.d
        char var_337_1
        
        if (*(rax_67 + 4) == 0 || (*(*(r12_2 + 0x20) + 0x138) & 8) == 0 || var_337 == 0)
            rcx_14.b = 0
            var_337_1 = 0
        else
            rcx_14 = *(rax_3 + 8)
            
            if ((*(rcx_14 + 0x37) & 8) == 0 || ((*(arg3 + 0x34) u>> 3).b & 1) == 0)
                if (sub_1422afcf0(rcx_14) == 0 || *(*(r12_2 + 0x20) + 0x13c) != 0)
                    rcx_14.b = 1
                    var_337_1 = 1
                    
                    if (*(data_143ed9bc8 + 4) != 0)
                        zmm5_1 = var_28c_1
                        zmm4_1 = var_288_1
                        zmm1_1 = zmm5_1
                        zmm3 = var_284_1
                        zmm6_1 = _mm_max_ss((*(data_143ed9bf0 + 4)).d, zmm14.d)
                        zmm1_1[0] = zmm1_1[0] f* zmm6_1.d
                        zmm2.d = zmm4_1.d f* zmm6_1.d
                        zmm0_1.d = zmm3.d f* zmm6_1.d
                        zmm6_1.d = zmm6_1.d f+ 1f
                        zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                        zmm0_1.d = zmm0_1.d f* zmm0_1.d
                        zmm2.d = zmm2.d f* zmm2.d
                        zmm5_1.d = zmm5_1.d f* zmm6_1.d
                        zmm2.d = zmm2.d f+ zmm1_1[0]
                        zmm4_1.d = zmm4_1.d f* zmm6_1.d
                        zmm1_1 = var_280_1
                        zmm3.d = zmm3.d f* zmm6_1.d
                        zmm2.d = zmm2.d f+ zmm0_1.d
                        int32_t var_28c_2 = zmm5_1.d
                        int32_t var_288_2 = zmm4_1.d
                        int32_t var_284_2 = zmm3.d
                        zmm0_1 = _mm_sqrt_ss(0, zmm2.d)
                        zmm1_1[0] = zmm1_1[0] f+ zmm0_1.d
                        var_280_1 = zmm1_1[0]
                else
                    rcx_14.b = 0
                    var_337_1 = 0
            else
                rcx_14.b = 0
                var_337_1 = 0
        
        zmm6_1 = 0x3b800000
        uint128_t var_138_1 = data_142d3f660
        
        if (zmm13.d f> 0.00390625f)
        label_141485a14:
            int64_t* rcx_20 = *(r12_2 + 0x20)
            void var_1c8
            
            if ((*(*rcx_20 + 0xb8))(rcx_20, &var_298, &var_1c8) != 0)
                char var_368
                int32_t var_360
                int32_t var_358
                int32_t var_350
                float var_348
                char var_340
                void* rdi_12
                int64_t* r13_6
                
                if (*(data_143ed9b88 + 4) == 0 || zmm13.d f<= 0.00390625f)
                    zmm11 = var_32c_1
                    rdi_12 = arg1
                    r13_6 = var_318
                else
                    if (rsi_1.d u< rbx_5.d)
                        uint64_t rflags_1
                        int32_t temp0_26
                        temp0_26, rflags_1 = _bit_scan_reverse(rsi_1.d)
                        int32_t rdx_12
                        
                        if (rsi_1.d == rbx_5.d)
                            rdx_12 = 0x20
                        else
                            rdx_12 = 0x1f - temp0_26
                        
                        int32_t rdx_14 = rdx_12 << 0x1a s>> 0x1f
                        uint64_t rflags_2
                        char temp0_27
                        temp0_27, rflags_2 = _bit_scan_reverse((rsi_1 - 1).d)
                        char rax_81
                        
                        if (rdx_14 == 0)
                            rax_81 = 0x20
                        else
                            rax_81 = 0x1f - temp0_27
                        
                        rbx_5 = zx.q(1 << (((0x20 - rax_81) & (not.d(rdx_14)).b) - 1))
                    
                    char var_332
                    char rcx_25
                    
                    if (var_334 == 0 || arg5 == 0)
                        zmm11 = var_32c_1
                        rcx_25 = var_338
                    else
                        char r15_3 = var_336
                        
                        if (r15_3 == 0)
                            rcx_25 = var_338
                        
                        if (r15_3 == 0 && rcx_25 == 0)
                            zmm11 = var_32c_1
                        else
                            var_2f0.q = j_sub_140597fc0
                            var_2f0:8.q = &var_332
                            var_332 = 0
                            void*** rax_83 = sub_14081d830(0x900, 
                                sub_140a756e0(&var_2f0, &data_143958018) + 0x10, 1, 0x10)
                            void*** rsi_2
                            
                            if (rax_83 == 0)
                                rsi_2 = nullptr
                            else
                                rsi_2 = sub_141475910(rax_83)
                            
                            var_340 = 0
                            var_348 = var_32c_1[0]
                            var_350 = 4
                            var_358 = rax_44 - 8
                            var_360 = rbx_5.d
                            char rax_86
                            rax_86, zmm6_1, zmm7, zmm9, zmm10, zmm11, zmm12, zmm14, zmm15 =
                                sub_1414a0350(rsi_2, rax_4, rax_3, &var_1c8, 0, var_360, var_358, 
                                var_350, var_348, var_340)
                            
                            if (rax_86 == 0)
                                rcx_25 = var_338
                            else
                                rsi_2[0xae].d |= 0x2000
                                void* rdi_9 = &rsi_2[0xab]
                                
                                if (rdi_9 != &var_118)
                                    int64_t r15_4 = sx.q(var_108_1)
                                    int32_t r8_8 = *(rdi_9 + 0x14)
                                    *(rdi_9 + 0x10) = r15_4.d
                                    
                                    if (r15_4.d != 0 || r8_8 != 0)
                                        sub_14149bdb0(rdi_9, r15_4.d, r8_8)
                                        void* rax_87 = *(rdi_9 + 8)
                                        void* result_4 = &var_118
                                        
                                        if (result_2 != 0)
                                            result_4 = result_2
                                        
                                        if (rax_87 != 0)
                                            rdi_9 = rax_87
                                        
                                        memcpy(rdi_9, result_4, (r15_4 << 2).d)
                                    else
                                        *(rdi_9 + 0x14) = 2
                                    
                                    r15_3 = var_336
                                
                                int64_t rdi_10 = sx.q(rax_7[1].d)
                                int32_t rax_88 = (rdi_10 + 1).d
                                rax_7[1].d = rax_88
                                
                                if (rax_88 s> *(rax_7 + 0xc))
                                    zmm6_1 = sub_14083a310(rax_7, rdi_10.d)
                                
                                *(*rax_7 + (rdi_10 << 3)) = rsi_2
                                
                                if (r15_3 == 0)
                                    rcx_25 = var_338
                                    
                                    if (rcx_25 != 0)
                                        int64_t r15_8 = sx.q(rax_7[0xd].d)
                                        int32_t rax_96 = (r15_8 + 1).d
                                        rax_7[0xd].d = rax_96
                                        
                                        if (rax_96 s> *(rax_7 + 0x6c))
                                            zmm6_1 = sub_14083a310(&rax_7[0xc], r15_8.d)
                                        
                                        *(rax_7[0xc] + (r15_8 << 3)) = rsi_2
                                        rcx_25 = var_338
                                else
                                    int64_t r15_5 = sx.q(rax_7[3].d)
                                    int32_t rax_90 = (r15_5 + 1).d
                                    rax_7[3].d = rax_90
                                    
                                    if (rax_90 s> *(rax_7 + 0x1c))
                                        zmm6_1 = sub_14083a310(&rax_7[2], r15_5.d)
                                    
                                    *(rax_7[2] + (r15_5 << 3)) = rsi_2
                                    int64_t r15_6 = sx.q(var_2d0_1)
                                    
                                    if (r15_6 s> 0)
                                        int64_t rdi_11 = 0
                                        
                                        do
                                            var_368 = 0
                                            zmm6_1, zmm7, zmm9, zmm10, zmm11, zmm12, zmm14, zmm15 =
                                                sub_141479710(rsi_2, var_2d8[rdi_11], result_1, 
                                                (*(arg1 + 0x3b0)).b)
                                            rdi_11 += 1
                                        while (rdi_11 s< r15_6)
                                    
                                    rcx_25 = var_338
                    
                    rdi_12 = arg1
                    
                    if (var_333 == 0 || *(*(rdi_12 + 8) + 8) s< 3 || arg4 == 0)
                        r13_6 = var_318
                    else
                        char r15_7 = var_335
                        
                        if (r15_7 != 0 || rcx_25 != 0)
                            var_2f0.q = j_sub_140597fc0
                            var_2f0:8.q = &var_332
                            var_332 = 0
                            void*** rax_94 = sub_14081d830(0x900, 
                                sub_140a756e0(&var_2f0, &data_143958018) + 0x10, 1, 0x10)
                            void*** rdi_13
                            
                            if (rax_94 == 0)
                                rdi_13 = nullptr
                            else
                                rdi_13 = sub_141475910(rax_94)
                            
                            r13_6 = var_318
                            int32_t rsi_4 = sub_14139f5d0(r13_6, &var_270)[1] - 8
                            int32_t rax_100 = (rax_44 - 8) u>> 1
                            
                            if (rax_100 u< 1)
                                rsi_4 = 1
                            else if (rax_100 s< rsi_4)
                                rsi_4 = rax_100
                            
                            int32_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = sx.q(rbx_5.d)
                            int32_t rcx_43 = *sub_14139f5d0(r13_6, &var_278) - 8
                            int32_t rax_105 = (temp3_1 - temp2_1) s>> 1
                            
                            if (rax_105 s< 1)
                                rcx_43 = 1
                            else if (rax_105 s< rcx_43)
                                rcx_43 = rax_105
                            
                            var_340 = 1
                            var_348 = zmm11[0]
                            var_350 = 4
                            var_358 = rsi_4
                            var_360 = rcx_43
                            char rax_106
                            rax_106, zmm6_1, zmm7, zmm9, zmm10, zmm11, zmm12, zmm14, zmm15 =
                                sub_1414a0350(rdi_13, rax_4, rax_3, &var_1c8, 0, var_360, var_358, 
                                var_350, var_348, var_340)
                            
                            if (rax_106 == 0)
                                rdi_12 = arg1
                            else
                                void* rbx_7 = &rdi_13[0xab]
                                
                                if (rbx_7 != &var_118)
                                    int64_t rsi_5 = sx.q(var_108_1)
                                    int32_t r8_13 = *(rbx_7 + 0x14)
                                    *(rbx_7 + 0x10) = rsi_5.d
                                    
                                    if (rsi_5.d != 0 || r8_13 != 0)
                                        sub_14149bdb0(rbx_7, rsi_5.d, r8_13)
                                        void* rax_107 = *(rbx_7 + 8)
                                        void* result_5 = &var_118
                                        
                                        if (result_2 != 0)
                                            result_5 = result_2
                                        
                                        if (rax_107 != 0)
                                            rbx_7 = rax_107
                                        
                                        memcpy(rbx_7, result_5, (rsi_5 << 2).d)
                                    else
                                        *(rbx_7 + 0x14) = 2
                                    
                                    r15_7 = var_335
                                
                                int64_t rbx_8 = sx.q(rax_7[1].d)
                                int32_t rax_108 = (rbx_8 + 1).d
                                rax_7[1].d = rax_108
                                
                                if (rax_108 s> *(rax_7 + 0xc))
                                    zmm6_1 = sub_14083a310(rax_7, rbx_8.d)
                                
                                *(*rax_7 + (rbx_8 << 3)) = rdi_13
                                
                                if (r15_7 == 0)
                                    if (var_338 != 0)
                                        int64_t rsi_9 = sx.q(rax_7[0xd].d)
                                        int32_t rax_112 = (rsi_9 + 1).d
                                        rax_7[0xd].d = rax_112
                                        
                                        if (rax_112 s> *(rax_7 + 0x6c))
                                            zmm6_1 = sub_14083a310(&rax_7[0xc], rsi_9.d)
                                        
                                        *(rax_7[0xc] + (rsi_9 << 3)) = rdi_13
                                    
                                    rdi_12 = arg1
                                else
                                    int64_t rsi_7 = sx.q(rax_7[3].d)
                                    int32_t rax_110 = (rsi_7 + 1).d
                                    rax_7[3].d = rax_110
                                    
                                    if (rax_110 s> *(rax_7 + 0x1c))
                                        zmm6_1 = sub_14083a310(&rax_7[2], rsi_7.d)
                                    
                                    *(rax_7[2] + (rsi_7 << 3)) = rdi_13
                                    int64_t rsi_8 = sx.q(var_2d0_1)
                                    
                                    if (rsi_8 s<= 0)
                                        rdi_12 = arg1
                                    else
                                        int64_t rbx_10 = 0
                                        
                                        do
                                            var_368 = 0
                                            zmm6_1, zmm7, zmm9, zmm10, zmm11, zmm12, zmm14, zmm15 =
                                                sub_141479710(rdi_13, var_2d8[rbx_10], result_1, 
                                                (*(arg1 + 0x3b0)).b)
                                            rbx_10 += 1
                                        while (rbx_10 s< rsi_8)
                                        
                                        rdi_12 = arg1
                                        r13_6 = var_318
                        else
                            r13_6 = var_318
                
                if (not(zmm15.d f<= zmm6_1.d) && var_337_1 != 0 && var_334 != 0)
                    int32_t temp0_28 = *(*(rdi_12 + 8) + 8)
                    
                    if (temp0_28 s>= 3)
                        zmm1_1 = zx.o(0)
                        zmm1_1[0] = float.s(zx.q(var_2fc_1))
                        zmm1_1[0] = zmm1_1[0] f* *(data_143ed9c08 + 4)
                        int32_t rax_117 = int.d(zmm1_1[0])
                        uint64_t rflags_3
                        int32_t temp0_29
                        temp0_29, rflags_3 = _bit_scan_reverse(rax_117)
                        int32_t rcx_51
                        
                        if (temp0_28 == 3)
                            rcx_51 = 0x20
                        else
                            rcx_51 = 0x1f - temp0_29
                        
                        uint64_t rflags_4
                        char temp0_30
                        temp0_30, rflags_4 = _bit_scan_reverse(rax_117 - 1)
                        char r12_5
                        
                        if (rax_117 == 1)
                            r12_5 = 0x20
                        else
                            r12_5 = 0x1f - temp0_30
                        
                        int32_t r15_10 =
                            1 << (((not.d(rcx_51 << 0x1a s>> 0x1f)).b & (0x20 - r12_5)) - 1)
                        var_278 = r15_10
                        sub_14139d2b0(r13_6, &var_318)
                        int64_t* rax_119 = arg6
                        int64_t r13_8 = 0
                        int32_t r12_6 = 0
                        float zmm0_3[0x4]
                        
                        if (rax_119[1].d s<= 0)
                        label_141486144:
                            void* rax_129
                            int32_t rsi_11
                            int64_t r12_7
                            int64_t r14_5
                            
                            if (*(data_143ed9bc8 + 4) != 0 && *(*(rdi_12 + 0xa0) + 0xd72) == 0)
                                rsi_11 = 0
                                r14_5 = arg3[1]
                                r12_7 = *arg3
                                rax_129 = *(rdi_12 + 8)
                            
                            int64_t* rbx_14
                            
                            if (*(data_143ed9bc8 + 4) != 0 && *(*(rdi_12 + 0xa0) + 0xd72) == 0
                                    && *(rax_129 + 0x1b18) s> 0)
                                void** rdi_15 = nullptr
                                
                                while (true)
                                    rbx_14 = *(rdi_15 + *(rax_129 + 0x1b10))
                                    
                                    if (rbx_14 != 0)
                                        rbx_14[1].d += 1
                                    
                                    if (rbx_14[0xc0] == r14_5 && rbx_14[0xb8] == r12_7)
                                        zmm3.d = rbx_14[0x78].d.d f* 0.0399999991f
                                        zmm3.d = zmm3.d f+ rbx_14[0x78].d
                                        
                                        if (not(zmm7.d f> zmm3.d))
                                            zmm1_1 = zmm10
                                            zmm3.d = zmm3.d f- zmm7.d
                                            zmm1_1[0] = zmm1_1[0] f- *(rbx_14 + 0x3b4)
                                            zmm0_3 = zmm12
                                            float zmm2_1 = zmm9.d f- rbx_14[0x77].d
                                            zmm0_3[0] = zmm0_3[0] f- *(rbx_14 + 0x3bc)
                                            zmm3.d = zmm3.d f* zmm3.d
                                            zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                            zmm0_3[0] = zmm0_3[0] * zmm0_3[0]
                                            rax_129.b =
                                                zmm3.d f>= zmm2_1 * zmm2_1 + zmm1_1[0] + zmm0_3[0]
                                            
                                            if (rax_129.b != 0 && rbx_14[0xa9].d == r15_10
                                                    && (rbx_14[0xae].b & 1) != 0)
                                                sub_141482230(rbx_14)
                                                break
                                    
                                    rbx_14[1].d -= 1
                                    
                                    if (rbx_14[1].d == 1)
                                        (**rbx_14)(rbx_14, 1)
                                    
                                    rsi_11 += 1
                                    rdi_15 = &rdi_15[1]
                                    rax_129 = *(arg1 + 8)
                                    
                                    if (rsi_11 s>= *(rax_129 + 0x1b18))
                                        goto label_14148625d
                                
                                goto label_1414862e6
                            
                        label_14148625d:
                            void*** rax_132 = j_sub_140a82f30(0x900)
                            
                            if (rax_132 == 0)
                                rbx_14 = nullptr
                            else
                                rbx_14 = sub_141475910(rax_132)
                            
                            if (rbx_14 != 0)
                                rbx_14[1].d += 1
                            
                            zmm1_1 = zx.o(0)
                            char var_340_1 = 0
                            zmm1_1[0] = float.s(zx.q(rax_44 - 8))
                            float var_348_1 = zmm11[0]
                            int32_t var_350_1 = 4
                            zmm1_1[0] = zmm1_1[0] f* *(data_143ed9c08 + 4)
                            
                            if (sub_1414a0350(rbx_14, rax_4, rax_3, &var_1c8, 1, r15_10, 
                                int.d(zmm1_1[0]), var_350_1, var_348_1, var_340_1) != 0)
                            label_1414862e6:
                                void* rdi_16 = &rbx_14[0xab]
                                
                                if (rdi_16 != &var_100)
                                    int64_t rsi_12 = sx.q(var_f0_1)
                                    int32_t r8_19 = *(rdi_16 + 0x14)
                                    *(rdi_16 + 0x10) = rsi_12.d
                                    
                                    if (rsi_12.d != 0 || r8_19 != 0)
                                        sub_14149bdb0(rdi_16, rsi_12.d, r8_19)
                                        void* rax_138 = *(rdi_16 + 8)
                                        void* rdx_41 = &var_100
                                        
                                        if (var_f8_1 != 0)
                                            rdx_41 = var_f8_1
                                        
                                        if (rax_138 != 0)
                                            rdi_16 = rax_138
                                        
                                        memcpy(rdi_16, rdx_41, (rsi_12 << 2).d)
                                    else
                                        *(rdi_16 + 0x14) = 2
                                
                                int64_t rsi_13 = sx.q(rax_7[3].d)
                                int32_t rax_139 = (rsi_13 + 1).d
                                rax_7[3].d = rax_139
                                
                                if (rax_139 s> *(rax_7 + 0x1c))
                                    sub_14083a310(&rax_7[2], rsi_13.d)
                                
                                *(rax_7[2] + (rsi_13 << 3)) = rbx_14
                                int64_t rsi_14 = sx.q(rax_7[0xb].d)
                                int32_t rax_141 = (rsi_14 + 1).d
                                rax_7[0xb].d = rax_141
                                
                                if (rax_141 s> *(rax_7 + 0x5c))
                                    sub_14083a310(&rax_7[0xa], rsi_14.d)
                                
                                *(rax_7[0xa] + (rsi_14 << 3)) = rbx_14
                                
                                if (rbx_14 != 0)
                                    rbx_14[1].d += 1
                                
                                if ((rbx_14[0xae].b & 8) == 0 && rbx_14[0x50].d != 0)
                                    int64_t rdi_17 = sx.q(arg7[1].d)
                                    int32_t rax_143 = (rdi_17 + 1).d
                                    arg7[1].d = rax_143
                                    
                                    if (rax_143 s> *(arg7 + 0xc))
                                        sub_14083a310(arg7, rdi_17.d)
                                    
                                    *(*arg7 + (rdi_17 << 3)) = rbx_14
                                
                                int32_t rdi_18 = var_2d0_1
                                int32_t r14_8 = 0
                                
                                if (rdi_18 s> 0)
                                    int64_t r15_12 = 0
                                    
                                    do
                                        int64_t r8_22 = 0
                                        void* r13_9 = *(var_2d8 + r15_12)
                                        int64_t rax_147 = sx.q(*(arg1 + 0xa8))
                                        
                                        if (rax_147.d s> 0)
                                            int32_t rcx_69 = *(r13_9 + 0x110)
                                            int32_t r11_2 = rcx_69 & 0x1f
                                            
                                            if (rcx_69 s< 0)
                                                rcx_69 += 0x1f
                                            
                                            void* rdx_46 = *result_1 + 0x15b8
                                            
                                            do
                                                void* rax_149 = *(rdx_46 + 0x10)
                                                void* rcx_71 = rdx_46
                                                
                                                if (rax_149 != 0)
                                                    rcx_71 = rax_149
                                                
                                                if (test_bit(*(rcx_71 + (sx.q(rcx_69 s>> 5) << 2)), 
                                                        r11_2))
                                                    int64_t rsi_16 = sx.q(rbx_14[0xc4].d)
                                                    int32_t rax_151 = (rsi_16 + 1).d
                                                    rbx_14[0xc4].d = rax_151
                                                    
                                                    if (rax_151 s> *(rbx_14 + 0x624))
                                                        sub_14083a310(&rbx_14[0xc3], rsi_16.d)
                                                    
                                                    *(rbx_14[0xc3] + (rsi_16 << 3)) = r13_9
                                                    rdi_18 = var_2d0_1
                                                    break
                                                
                                                r8_22 += 1
                                                rdx_46 += 0x5240
                                            while (r8_22 s< rax_147)
                                        
                                        r14_8 += 1
                                        r15_12 += 8
                                    while (r14_8 s< rdi_18)
                            
                            if (rbx_14 != 0)
                                rbx_14[1].d -= 1
                                
                                if (rbx_14[1].d == 1)
                                    (**rbx_14)(rbx_14, 1)
                        else
                            while (true)
                                void* r15_11 = *(*rax_119 + r13_8)
                                void* rcx_58 = *(r15_11 + 0x5c0)
                                int32_t rdi_14 = *(*(rdi_12 + 8) + 8)
                                void* rbx_12 = *(r15_11 + 0x48)
                                int64_t* r14_4 = *(rcx_58 + 0x20)
                                int64_t rsi_10 = *r14_4
                                uint64_t r9_7 = zx.q(sub_14122cc00(rcx_58))
                                var_368.d = *(rbx_12 + 0x278)
                                (*(rsi_10 + 0x70))(r14_4, &var_270, zx.q(rdi_14), r9_7, var_368, 
                                    var_360, var_358, var_350, var_348, var_340, var_338, 
                                    var_330_1, arg1, var_320_1)
                                void* rax_124 = *(r15_11 + 0x48)
                                zmm6_1.d = (*(r15_11 + 0x3b8)).d f- var_294_1
                                zmm0_3 = zx.o(*(rax_124 + 0xa3c))
                                float zmm5_2 = *(r15_11 + 0x3b4) - var_298
                                zmm7 = zmm0_3
                                zmm1_1 = zmm0_3
                                zmm0_3 = *(r15_11 + 0x3c0)
                                float zmm4_2 = *(r15_11 + 0x3bc) - var_290_1
                                int32_t rax_125 = *(rax_124 + 0xa44)
                                zmm0_3[0] = zmm0_3[0] - var_280_1
                                zmm7.d = zmm7.d f- var_298
                                zmm6_1.d = zmm6_1.d f* zmm6_1.d
                                zmm3.d = rax_125.d f- var_290_1
                                float temp0_31[0x4] = _mm_max_ss(zmm0_3[0], zmm14.d)
                                zmm6_1.d = zmm6_1.d f+ zmm5_2 * zmm5_2
                                float temp0_32[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                                temp0_32[0] = temp0_32[0] f- var_294_1
                                temp0_31[0] = temp0_31[0] * temp0_31[0]
                                zmm6_1.d = zmm6_1.d f+ zmm4_2 * zmm4_2
                                
                                if (not(zmm6_1.d f>= temp0_31[0]))
                                    zmm0_3 = var_270.d
                                    zmm0_3[0] = zmm0_3[0] - 200f
                                    temp0_32[0] = temp0_32[0] * temp0_32[0]
                                    zmm7.d = zmm7.d f* zmm7.d
                                    zmm3.d = zmm3.d f* zmm3.d
                                    zmm0_3[0] = zmm0_3[0] - var_280_1
                                    temp0_32[0] = temp0_32[0] f+ zmm7.d
                                    float temp0_33[0x4] = _mm_max_ss(zmm0_3[0], zmm14.d)
                                    temp0_32[0] = temp0_32[0] f+ zmm3.d
                                    temp0_33[0] = temp0_33[0] * temp0_33[0]
                                    
                                    if (temp0_32[0] < temp0_33[0])
                                        break
                                
                                rax_119 = arg6
                                r12_6 += 1
                                rdi_12 = arg1
                                r13_8 += 8
                                
                                if (r12_6 s>= rax_119[1].d)
                                    zmm7 = var_31c_1
                                    r15_10 = var_278
                                    goto label_141486144
        else if (rcx_14.b != 0 && not(zmm15.d f<= 0.00390625f))
            goto label_141485a14
        
        if (var_f8_1 != 0)
            sub_140a74f90(var_f8_1)
        
        result = result_2
        
        if (result != 0)
            result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_388)
return result
