// 函数: sub_1421fac90
// 地址: 0x1421fac90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = &__return_addr
void* r14 = arg4
uint128_t zmm6 = 0x41700000
void* r13 = arg2
void* rdi = arg1
int128_t zmm13 = zx.o(0)
int32_t var_358
int32_t var_350
int32_t var_348
uint64_t var_318
uint64_t var_2e0
void var_178
void var_168
void var_158

if (*(arg1 + 0x144) != 0)
    int32_t var_118
    uint128_t zmm7_1
    uint128_t zmm8_1
    uint128_t zmm9_1
    uint128_t zmm10_1
    uint128_t zmm11_1
    uint128_t zmm12_1
    uint128_t zmm14_1
    uint128_t zmm15_1
    zmm6, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13, zmm14_1, zmm15_1 =
        sub_140631b10(r13 + 0x80, &var_118)
    int32_t rax = *(rdi + 0x154)
    int32_t rbx_1 = 1
    uint128_t zmm1_1 = 0x3f800000
    float var_208_1[0x4] = *(r13 + 0x80)
    
    if (rax != 0)
        rbx_1 = rax
    
    float var_218_1[0x4] = *(r13 + 0x90)
    i = 0
    float var_228_1[0x4] = *(r13 + 0xa0)
    float var_1f8_1[0x4] = *(r13 + 0xb0)
    int32_t var_270_1 = rbx_1
    int32_t i_2 = 0
    uint128_t zmm2
    zmm2.d = 1f f/ _mm_cvtepi32_ps(zx.o(rbx_1)).d
    int32_t var_274_1 = zmm2.d
    
    if (*(rdi + 0x3c) s> 0)
        uint128_t zmm3_1 = 0x322bcc77
        uint128_t zmm4_1 = 0x3f000000
        uint128_t var_58_1 = zmm7_1
        uint128_t var_68_1 = zmm8_1
        uint128_t var_78_1 = zmm9_1
        uint128_t var_88_1 = zmm10_1
        uint128_t var_98_1 = zmm11_1
        uint128_t var_a8_1 = zmm12_1
        uint128_t var_c8_1 = zmm14_1
        uint128_t var_d8_1 = zmm15_1
        
        do
            uint128_t* r8 = nullptr
            uint64_t* r15_1 = nullptr
            void* rsi_1 = nullptr
            uint128_t* var_268_1 = nullptr
            uint64_t* var_238_1 = nullptr
            void* var_260_1 = nullptr
            void* rax_2 = nullptr
            void* rcx_2 = sx.q(i * *(rdi + 0x40)) + *(rdi + 0x58)
            int64_t* r14_2 = sx.q(*(rdi + 0x124)) + rcx_2
            int64_t* var_188_1 = r14_2
            
            if (r14_2[0xb].d == 0)
                r14 = arg4
            else
                int64_t rdx_1 = sx.q(*(rdi + 0x12c))
                
                if (rdx_1.d != 0xffffffff)
                    r8 = rcx_2 + rdx_1
                    var_268_1 = r8
                
                int64_t rdx_2 = sx.q(*(rdi + 0x134))
                
                if (rdx_2.d != 0xffffffff)
                    r15_1 = rcx_2 + rdx_2
                    var_238_1 = r15_1
                
                int64_t rdx_3 = sx.q(*(rdi + 0x138))
                
                if (rdx_3.d != 0xffffffff)
                    rsi_1 = rcx_2 + rdx_3
                    var_260_1 = rsi_1
                
                int64_t rdx_4 = sx.q(*(rdi + 0x140))
                
                if (rdx_4.d != 0xffffffff)
                    rax_2 = rcx_2 + rdx_4
                
                int32_t var_354_1 = zmm1_1.d
                
                if (rax_2 != 0)
                    var_354_1 = (*rax_2).d
                
                int32_t var_328_1 = (*(rdi + 0x158)).d
                
                if (r15_1 == 0)
                    r14 = arg4
                else
                    int32_t rax_3
                    uint128_t zmm0
                    
                    if (*(rdi + 0x147) == 0)
                        zmm6 = *(rdi + 0x15c)
                        int32_t var_110
                        rax_3 = var_110.d
                        int32_t var_114
                        zmm0 = _mm_unpacklo_ps(var_118, var_114.q)
                    else
                        zmm0 = zx.o(*(r14_2 + 0xc))
                        rax_3 = *(r14_2 + 0x14)
                        zmm6 = r14_2[3].d
                    
                    var_2e0 = zmm0.q
                    zmm7_1 = var_2e0:4.d
                    zmm8_1 = var_2e0.d
                    zmm2.d = zmm7_1.d f* zmm7_1.d
                    zmm9_1 = rax_3
                    zmm0.d = zmm8_1.d f* zmm8_1.d
                    zmm1_1.d = zmm9_1.d f* zmm9_1.d
                    zmm2.d = zmm2.d f+ zmm0.d
                    zmm2.d = zmm2.d f+ zmm1_1.d
                    uint128_t zmm5_1
                    
                    if (not(zmm2.d f<= zmm3_1.d))
                        zmm5_1.d = zmm4_1.d
                        zmm4_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                        zmm3_1.d = zmm2.d f* zmm5_1.d
                        zmm0.d = zmm4_1.d f* zmm4_1.d
                        zmm1_1.d = zmm3_1.d f* zmm0.d
                        zmm2.d = zmm5_1.d f- zmm1_1.d
                        zmm0.d = zmm4_1.d f* zmm2.d
                        zmm4_1.d = zmm4_1.d f+ zmm0.d
                        zmm1_1.d = zmm4_1.d f* zmm4_1.d
                        zmm3_1.d = zmm3_1.d f* zmm1_1.d
                        zmm5_1.d = zmm5_1.d f- zmm3_1.d
                        zmm3_1 = 0x322bcc77
                        zmm0.d = zmm4_1.d f* zmm5_1.d
                        zmm4_1.d = zmm4_1.d f+ zmm0.d
                        int32_t var_324_1 = zmm4_1.d
                        zmm8_1.d = zmm8_1.d f* zmm4_1.d
                        zmm7_1.d = zmm7_1.d f* zmm4_1.d
                        zmm9_1.d = zmm9_1.d f* zmm4_1.d
                        zmm4_1 = 0x3f000000
                    
                    zmm12_1 = zx.o(*r14_2)
                    zmm5_1 = zmm12_1
                    int32_t var_2b0_1 = (*(rdi + 0x15c)).d
                    zmm0 = *(r14_2 + 0x4c)
                    uint8_t rax_5 = (r14_2[7].d u>> 0x1f).b
                    zmm15_1.d = zmm0.d f* r14_2[8].d
                    zmm1_1.d = zmm0.d f* *(r14_2 + 0x44)
                    zmm0.d = zmm0.d f* r14_2[9].d
                    zmm15_1.d = zmm15_1.d f+ zmm12_1.d
                    zmm8_1.d = zmm8_1.d f* zmm6.d
                    zmm7_1.d = zmm7_1.d f* zmm6.d
                    int32_t var_2ac_1 = zmm8_1.d
                    zmm8_1 = r14_2[1].d
                    int32_t var_2a8_1 = zmm7_1.d
                    zmm0.d = zmm0.d f+ zmm8_1.d
                    zmm7_1 = zmm12_1.q:4.d
                    zmm1_1.d = zmm1_1.d f+ zmm7_1.d
                    zmm9_1.d = zmm9_1.d f* zmm6.d
                    var_358 = zmm15_1.d
                    int32_t var_330_1 = zmm5_1.d
                    int32_t var_2a4_1 = zmm9_1.d
                    int32_t var_2b8_1 = zmm1_1.d
                    int32_t var_338_1 = zmm7_1.d
                    int32_t var_32c_1 = zmm7_1.d
                    int32_t var_334_1 = zmm8_1.d
                    int32_t var_2f8_1 = zmm8_1.d
                    int32_t var_2b4_1 = zmm0.d
                    
                    if (not(zmm13.d f> *(rdi + 0x16c)) && *(rdi + 0x146) != 0)
                        zmm11_1 = *rsi_1
                        zmm9_1 = *(rsi_1 + 4)
                        zmm14_1 = *r15_1
                        zmm15_1 = *(r15_1 + 4)
                        zmm8_1.d = zmm11_1.d f- zmm14_1.d
                        zmm10_1 = *(rsi_1 + 8)
                        zmm7_1.d = zmm9_1.d f- zmm15_1.d
                        zmm6.d = zmm10_1.d f- r15_1[1].d
                        zmm2.d = zmm8_1.d f* zmm8_1.d
                        zmm0.d = zmm7_1.d f* zmm7_1.d
                        zmm1_1.d = zmm6.d f* zmm6.d
                        zmm2.d = zmm2.d f+ zmm0.d
                        zmm2.d = zmm2.d f+ zmm1_1.d
                        
                        if (not(zmm2.d f<= zmm3_1.d))
                            zmm4_1.d = zmm4_1.d
                            zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                            zmm3_1.d = zmm2.d f* zmm4_1.d
                            zmm0.d = zmm5_1.d f* zmm5_1.d
                            zmm1_1.d = zmm3_1.d f* zmm0.d
                            zmm2.d = zmm4_1.d f- zmm1_1.d
                            zmm0.d = zmm5_1.d f* zmm2.d
                            zmm5_1.d = zmm5_1.d f+ zmm0.d
                            zmm1_1.d = zmm5_1.d f* zmm5_1.d
                            zmm3_1.d = zmm3_1.d f* zmm1_1.d
                            zmm4_1.d = zmm4_1.d f- zmm3_1.d
                            zmm0.d = zmm5_1.d f* zmm4_1.d
                            zmm5_1.d = zmm5_1.d f+ zmm0.d
                            int32_t var_324_2 = zmm5_1.d
                            zmm1_1 = zmm5_1
                            zmm0.d = zmm5_1.d f* zmm8_1.d
                            zmm5_1.d = zmm5_1.d f* zmm6.d
                            zmm1_1.d = zmm1_1.d f* zmm7_1.d
                            zmm8_1 = zmm0
                            zmm6 = zmm5_1
                            zmm5_1 = var_330_1
                            zmm7_1 = zmm1_1
                        
                        zmm8_1.d = zmm8_1.d f* *(rdi + 0x160)
                        zmm0 = *r8
                        zmm7_1.d = zmm7_1.d f* *(rdi + 0x164)
                        zmm6.d = zmm6.d f* *(rdi + 0x168)
                        zmm8_1.d = zmm8_1.d f* zmm0.d
                        zmm7_1.d = zmm7_1.d f* zmm0.d
                        zmm8_1.d = zmm8_1.d f+ zmm14_1.d
                        zmm6.d = zmm6.d f* zmm0.d
                        zmm7_1.d = zmm7_1.d f+ zmm15_1.d
                        zmm0 = *(rdi + 0x170)
                        zmm6.d = zmm6.d f+ r15_1[1].d
                        var_350 = zmm8_1.d
                        zmm8_1.d = zmm8_1.d f- zmm11_1.d
                        int32_t var_34c_1 = zmm7_1.d
                        var_348 = zmm6.d
                        int32_t rax_7
                        
                        if (_mm_and_ps(zmm8_1, 0x7fffffff).d f>= zmm0.d)
                            rax_7 = var_348
                            *r15_1 = var_350.q
                        else
                            zmm7_1.d = zmm7_1.d f- zmm9_1.d
                            
                            if (_mm_and_ps(zmm7_1, 0x7fffffff).d f>= zmm0.d)
                                rax_7 = var_348
                                *r15_1 = var_350.q
                            else
                                zmm6.d = zmm6.d f- zmm10_1.d
                                
                                if (_mm_and_ps(zmm6, 0x7fffffff).d f>= zmm0.d)
                                    rax_7 = var_348
                                    *r15_1 = var_350.q
                                else
                                    *r15_1 = *rsi_1
                                    rax_7 = *(rsi_1 + 8)
                        
                        zmm8_1 = var_334_1
                        zmm15_1 = var_358
                        r15_1[1].d = rax_7
                    
                    zmm2 = var_354_1
                    zmm0.d = zmm2.d f* *r15_1
                    int32_t var_1cc_1 = 0
                    zmm1_1.d = zmm2.d f* *(r15_1 + 4)
                    int32_t var_304_1 = var_2f8_1
                    zmm2.d = zmm2.d f* r15_1[1].d
                    int32_t var_280_1 = var_2f8_1
                    zmm3_1.d = zmm0.d
                    int64_t var_2c8 = 0
                    _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
                    zmm3_1.d = zmm1_1.d
                    int32_t var_2c0_1 = 0
                    _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
                    zmm3_1.d = zmm2.d
                    zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
                    uint128_t var_1d8 = zmm3_1
                    zmm4_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), var_1f8_1)
                    zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), var_228_1)
                    zmm1_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x55), var_218_1)
                    zmm4_1 = _mm_add_ps(zmm4_1, zmm0)
                    zmm0 = var_328_1
                    zmm4_1 = _mm_add_ps(zmm4_1, 
                        _mm_add_ps(zmm1_1, 
                            __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), var_208_1)))
                    zmm2.d = zmm4_1.d f* zmm0.d
                    zmm1_1.d = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55).d f* zmm0.d
                    zmm2.d = zmm2.d f+ zmm15_1.d
                    zmm4_1.d = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa).d f* zmm0.d
                    zmm1_1.d = zmm1_1.d f+ var_2b8_1
                    zmm0 = _mm_unpacklo_ps(zmm5_1, var_32c_1.q)
                    zmm4_1.d = zmm4_1.d f+ var_2b4_1
                    uint64_t var_300_1 = zmm0.q
                    uint64_t var_288 = zmm0.q
                    uint64_t var_298 = (_mm_unpacklo_ps(zmm2, zmm1_1.q)).q
                    int32_t var_290_1 = zmm4_1.d
                    sub_140acc920(&var_178, &data_14399f63c)
                    zmm6, zmm7_1 = sub_14229cc60(arg3, &var_288, 0x41700000, &var_178, 
                        sub_14082c3b0(r13, arg4))
                    int32_t rax_10 = 0
                    int32_t var_308_1 = 0
                    uint64_t var_2f0
                    int64_t var_248
                    
                    if (r14_2[0xa].d s> 0)
                        void* rdx_7 = var_260_1
                        void* rsi_2 = &r15_1[2]
                        int32_t var_1bc_1 = 0
                        int128_t* rcx_8 = rdx_7 - r15_1
                        int128_t* var_180_1 = rcx_8
                        
                        while (true)
                            zmm1_1 = *(r14_2 + 0x4c)
                            zmm15_1 = zmm1_1
                            zmm0.d = zmm1_1.d f* *(r14_2 + 0x44)
                            zmm1_1.d = zmm1_1.d f* r14_2[9].d
                            zmm15_1.d = zmm15_1.d f* r14_2[8].d
                            zmm0.d = zmm0.d f+ zmm7_1.d
                            zmm1_1.d = zmm1_1.d f+ zmm8_1.d
                            zmm15_1.d = zmm15_1.d f+ zmm12_1.d
                            int32_t var_338_2 = zmm0.d
                            zmm4_1 = zmm0
                            var_2b8_1 = zmm0.d
                            int32_t var_334_2 = zmm1_1.d
                            zmm5_1 = zmm1_1
                            var_2b4_1 = zmm1_1.d
                            var_358 = zmm15_1.d
                            uint128_t* r8_1
                            
                            if (zmm13.d f> *(rdi + 0x16c) || *(rdi + 0x146) == 0)
                                r8_1 = var_268_1
                            else
                                zmm11_1 = *(rsi_2 + rcx_8 - 0x10)
                                zmm9_1 = *(rsi_2 + rcx_8 - 0xc)
                                zmm12_1 = *(rsi_2 - 0x10)
                                zmm14_1 = *(rsi_2 - 0xc)
                                zmm8_1.d = zmm11_1.d f- zmm12_1.d
                                zmm10_1 = *(rsi_2 + rcx_8 - 8)
                                zmm7_1.d = zmm9_1.d f- zmm14_1.d
                                zmm15_1 = *(rsi_2 - 8)
                                zmm6.d = zmm10_1.d f- zmm15_1.d
                                zmm0.d = zmm8_1.d f* zmm8_1.d
                                zmm2.d = zmm7_1.d f* zmm7_1.d
                                zmm1_1.d = zmm6.d f* zmm6.d
                                zmm2.d = zmm2.d f+ zmm0.d
                                zmm2.d = zmm2.d f+ zmm1_1.d
                                
                                if (not(zmm2.d f<= 9.99999994e-09f))
                                    zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                                    zmm3_1.d = zmm2.d f* 0.5f
                                    zmm0.d = zmm5_1.d f* zmm5_1.d
                                    zmm1_1.d = zmm3_1.d f* zmm0.d
                                    zmm2.d = 0.5f f- zmm1_1.d
                                    zmm0.d = zmm5_1.d f* zmm2.d
                                    zmm5_1.d = zmm5_1.d f+ zmm0.d
                                    zmm1_1.d = zmm5_1.d f* zmm5_1.d
                                    zmm3_1.d = zmm3_1.d f* zmm1_1.d
                                    zmm4_1.d = 0.5f f- zmm3_1.d
                                    zmm0.d = zmm5_1.d f* zmm4_1.d
                                    zmm4_1 = var_338_2
                                    zmm5_1.d = zmm5_1.d f+ zmm0.d
                                    int32_t var_324_3 = zmm5_1.d
                                    zmm1_1 = zmm5_1
                                    zmm0.d = zmm5_1.d f* zmm8_1.d
                                    zmm5_1.d = zmm5_1.d f* zmm6.d
                                    zmm1_1.d = zmm1_1.d f* zmm7_1.d
                                    zmm8_1 = zmm0
                                    zmm6 = zmm5_1
                                    zmm5_1 = var_334_2
                                    zmm7_1 = zmm1_1
                                
                                zmm8_1.d = zmm8_1.d f* *(rdi + 0x160)
                                r8_1 = var_268_1
                                zmm7_1.d = zmm7_1.d f* *(rdi + 0x164)
                                zmm6.d = zmm6.d f* *(rdi + 0x168)
                                zmm0 = *r8_1
                                zmm8_1.d = zmm8_1.d f* zmm0.d
                                zmm7_1.d = zmm7_1.d f* zmm0.d
                                zmm8_1.d = zmm8_1.d f+ zmm12_1.d
                                zmm6.d = zmm6.d f* zmm0.d
                                zmm0 = *(rdi + 0x170)
                                zmm7_1.d = zmm7_1.d f+ zmm14_1.d
                                zmm6.d = zmm6.d f+ zmm15_1.d
                                var_350 = zmm8_1.d
                                zmm8_1.d = zmm8_1.d f- zmm11_1.d
                                int32_t var_34c_2 = zmm7_1.d
                                var_348 = zmm6.d
                                
                                if (_mm_and_ps(zmm8_1, 0x7fffffff).d f>= zmm0.d)
                                label_1421fb583:
                                    zmm15_1 = var_358
                                    *(rsi_2 - 0x10) = var_350.q
                                    *(rsi_2 - 8) = var_348
                                    rax_10 = var_308_1
                                else
                                    zmm7_1.d = zmm7_1.d f- zmm9_1.d
                                    
                                    if (_mm_and_ps(zmm7_1, 0x7fffffff).d f>= zmm0.d)
                                        goto label_1421fb583
                                    
                                    zmm6.d = zmm6.d f- zmm10_1.d
                                    
                                    if (_mm_and_ps(zmm6, 0x7fffffff).d f>= zmm0.d)
                                        goto label_1421fb583
                                    
                                    zmm15_1 = var_358
                                    *(rsi_2 - 0x10) = *(rsi_2 + rcx_8 - 0x10)
                                    *(rsi_2 - 8) = *(rsi_2 + rcx_8 - 8)
                                    rax_10 = var_308_1
                            
                            zmm6 = var_354_1
                            zmm0.d = zmm6.d f* *(rsi_2 - 0x10)
                            var_2c8 = 0
                            zmm1_1.d = zmm6.d f* *(rsi_2 - 0xc)
                            int32_t var_2c0_2 = 0
                            zmm7_1 = var_328_1
                            zmm3_1.d = zmm0.d
                            zmm2.d = zmm6.d f* *(rsi_2 - 8)
                            _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
                            zmm3_1.d = zmm1_1.d
                            _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
                            zmm3_1.d = zmm2.d
                            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
                            uint128_t var_1c8 = zmm3_1
                            zmm14_1 =
                                __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), var_1f8_1)
                            zmm0 =
                                __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), var_228_1)
                            zmm1_1 =
                                __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x55), var_218_1)
                            zmm14_1 = _mm_add_ps(_mm_add_ps(zmm14_1, zmm0), 
                                _mm_add_ps(zmm1_1, 
                                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), 
                                        var_208_1)))
                            zmm1_1 = zmm14_1
                            zmm0.d = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55).d f* zmm7_1.d
                            zmm14_1.d = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa).d f* zmm7_1.d
                            zmm0.d = zmm0.d f+ zmm4_1.d
                            zmm1_1.d = zmm1_1.d f* zmm7_1.d
                            zmm4_1 = *(r14_2 + 0x4c)
                            zmm14_1.d = zmm14_1.d f+ zmm5_1.d
                            zmm5_1.d = zmm4_1.d f* r14_2[8].d
                            zmm1_1.d = zmm1_1.d f+ zmm15_1.d
                            var_2f0:4.d = zmm0.d
                            var_248.o = zmm0
                            zmm0.d = zmm4_1.d f* *(r14_2 + 0x44)
                            zmm5_1.d = zmm5_1.d f+ zmm15_1.d
                            zmm4_1.d = zmm4_1.d f* r14_2[9].d
                            zmm0.d = zmm0.d f+ var_338_2
                            int32_t var_278_1 = zmm1_1.d
                            zmm4_1.d = zmm4_1.d f+ var_334_2
                            var_2f0.d = zmm1_1.d
                            int32_t var_2e8_2 = zmm14_1.d
                            int32_t var_324_4 = zmm0.d
                            int32_t var_254_1 = zmm5_1.d
                            int32_t var_258_1 = zmm4_1.d
                            var_2c8.o = zmm14_1
                            
                            if (rax_5 == 0 || rax_10 + 1 != r14_2[0xa].d)
                                if (not(zmm13.d f> *(rdi + 0x16c)) && *(rdi + 0x146) != 0)
                                    zmm10_1 = *(rsi_2 + rcx_8 - 4)
                                    zmm9_1 = *(rcx_8 + rsi_2)
                                    zmm11_1 = *(rsi_2 - 4)
                                    zmm12_1 = *rsi_2
                                    zmm8_1.d = zmm10_1.d f- zmm11_1.d
                                    zmm15_1 = *(rcx_8 + rsi_2 + 4)
                                    zmm7_1.d = zmm9_1.d f- zmm12_1.d
                                    zmm14_1 = *(rsi_2 + 4)
                                    zmm6.d = zmm15_1.d f- zmm14_1.d
                                    zmm0.d = zmm8_1.d f* zmm8_1.d
                                    zmm2.d = zmm7_1.d f* zmm7_1.d
                                    zmm1_1.d = zmm6.d f* zmm6.d
                                    zmm2.d = zmm2.d f+ zmm0.d
                                    zmm2.d = zmm2.d f+ zmm1_1.d
                                    
                                    if (not(zmm2.d f<= 9.99999994e-09f))
                                        zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                                        zmm3_1.d = zmm2.d f* 0.5f
                                        zmm0.d = zmm5_1.d f* zmm5_1.d
                                        zmm1_1.d = zmm3_1.d f* zmm0.d
                                        zmm2.d = 0.5f f- zmm1_1.d
                                        zmm0.d = zmm5_1.d f* zmm2.d
                                        zmm5_1.d = zmm5_1.d f+ zmm0.d
                                        zmm1_1.d = zmm5_1.d f* zmm5_1.d
                                        zmm3_1.d = zmm3_1.d f* zmm1_1.d
                                        zmm4_1.d = 0.5f f- zmm3_1.d
                                        zmm0.d = zmm5_1.d f* zmm4_1.d
                                        zmm4_1 = var_258_1
                                        zmm5_1.d = zmm5_1.d f+ zmm0.d
                                        zmm0 = zmm5_1
                                        zmm1_1 = zmm5_1
                                        zmm5_1.d = zmm5_1.d f* zmm6.d
                                        zmm0.d = zmm0.d f* zmm8_1.d
                                        zmm1_1.d = zmm1_1.d f* zmm7_1.d
                                        zmm6 = zmm5_1
                                        zmm5_1 = var_254_1
                                        zmm8_1 = zmm0
                                        zmm7_1 = zmm1_1
                                    
                                    zmm8_1.d = zmm8_1.d f* *(rdi + 0x160)
                                    zmm0 = *r8_1
                                    zmm7_1.d = zmm7_1.d f* *(rdi + 0x164)
                                    zmm6.d = zmm6.d f* *(rdi + 0x168)
                                    zmm8_1.d = zmm8_1.d f* zmm0.d
                                    zmm7_1.d = zmm7_1.d f* zmm0.d
                                    zmm8_1.d = zmm8_1.d f+ zmm11_1.d
                                    zmm6.d = zmm6.d f* zmm0.d
                                    zmm0 = *(rdi + 0x170)
                                    zmm7_1.d = zmm7_1.d f+ zmm12_1.d
                                    zmm6.d = zmm6.d f+ zmm14_1.d
                                    var_350 = zmm8_1.d
                                    zmm8_1.d = zmm8_1.d f- zmm10_1.d
                                    int32_t var_34c_4 = zmm7_1.d
                                    var_348 = zmm6.d
                                    int32_t rax_18
                                    
                                    if (_mm_and_ps(zmm8_1, 0x7fffffff).d f>= zmm0.d)
                                        rax_18 = var_348
                                        *(rsi_2 - 4) = var_350.q
                                    else
                                        zmm7_1.d = zmm7_1.d f- zmm9_1.d
                                        
                                        if (_mm_and_ps(zmm7_1, 0x7fffffff).d f>= zmm0.d)
                                            rax_18 = var_348
                                            *(rsi_2 - 4) = var_350.q
                                        else
                                            zmm6.d = zmm6.d f- zmm15_1.d
                                            
                                            if (_mm_and_ps(zmm6, 0x7fffffff).d f>= zmm0.d)
                                                rax_18 = var_348
                                                *(rsi_2 - 4) = var_350.q
                                            else
                                                *(rsi_2 - 4) = *(rsi_2 + rcx_8 - 4)
                                                rax_18 = *(rsi_2 + rcx_8 + 4)
                                    
                                    zmm7_1 = var_328_1
                                    zmm6 = var_354_1
                                    zmm15_1 = var_358
                                    zmm14_1 = var_2c8.o
                                    *(rsi_2 + 4) = rax_18
                                
                                int32_t var_19c_1 = 0
                                zmm0.d = zmm6.d f* *(rsi_2 - 4)
                                var_2c8 = 0
                                zmm1_1.d = zmm6.d f* *rsi_2
                                int32_t var_2c0_3 = 0
                                zmm2.d = zmm6.d f* *(rsi_2 + 4)
                                zmm3_1.d = zmm0.d
                                zmm6 = var_2b0_1
                                _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
                                zmm3_1.d = zmm1_1.d
                                _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
                                zmm3_1.d = zmm2.d
                                zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
                                uint128_t var_1a8 = zmm3_1
                                zmm10_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), 
                                    var_1f8_1)
                                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), 
                                    var_228_1)
                                zmm1_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x55), 
                                    var_218_1)
                                zmm10_1 = _mm_add_ps(zmm10_1, zmm0)
                                zmm1_1 = _mm_add_ps(zmm1_1, 
                                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), 
                                        var_208_1))
                                zmm3_1 = 0x3f000000
                                zmm10_1 = _mm_add_ps(zmm10_1, zmm1_1)
                                zmm1_1.d = 1f f- *(rdi + 0x174)
                                zmm0.d = _mm_shuffle_ps(zmm10_1, zmm10_1, 0x55).d f* zmm7_1.d
                                zmm11_1.d = zmm10_1.d f* zmm7_1.d
                                zmm0.d = zmm0.d f+ var_324_4
                                zmm10_1.d = _mm_shuffle_ps(zmm10_1, zmm10_1, 0xaa).d f* zmm7_1.d
                                zmm1_1.d = zmm1_1.d f* 0.5f
                                zmm11_1.d = zmm11_1.d f+ zmm5_1.d
                                zmm0.d = zmm0.d f- var_32c_1
                                zmm10_1.d = zmm10_1.d f+ zmm4_1.d
                                zmm11_1.d = zmm11_1.d f- var_330_1
                                zmm0.d = zmm0.d f* zmm1_1.d
                                zmm10_1.d = zmm10_1.d f- var_2f8_1
                                zmm11_1.d = zmm11_1.d f* zmm1_1.d
                                zmm9_1 = zmm0
                                zmm10_1.d = zmm10_1.d f* zmm1_1.d
                            else
                                if (*(rdi + 0x149) != 0)
                                    if (not(zmm13.d f> *(rdi + 0x16c)) && *(rdi + 0x146) != 0)
                                        int64_t rcx_9 = sx.q(*(rdi + 0x150)) * 3
                                        zmm11_1 = *(rdx_7 + (rcx_9 << 2))
                                        zmm9_1 = *(rdx_7 + (rcx_9 << 2) + 4)
                                        zmm12_1 = *(r15_1 + (rcx_9 << 2))
                                        zmm14_1 = *(r15_1 + (rcx_9 << 2) + 4)
                                        zmm8_1.d = zmm11_1.d f- zmm12_1.d
                                        zmm10_1 = *(rdx_7 + (rcx_9 << 2) + 8)
                                        zmm7_1.d = zmm9_1.d f- zmm14_1.d
                                        zmm15_1 = *(r15_1 + (rcx_9 << 2) + 8)
                                        zmm6.d = zmm10_1.d f- zmm15_1.d
                                        zmm0.d = zmm8_1.d f* zmm8_1.d
                                        zmm2.d = zmm7_1.d f* zmm7_1.d
                                        zmm1_1.d = zmm6.d f* zmm6.d
                                        zmm2.d = zmm2.d f+ zmm0.d
                                        zmm2.d = zmm2.d f+ zmm1_1.d
                                        
                                        if (not(zmm2.d f<= 9.99999994e-09f))
                                            zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                                            zmm3_1.d = zmm2.d f* 0.5f
                                            zmm0.d = zmm5_1.d f* zmm5_1.d
                                            zmm1_1.d = zmm3_1.d f* zmm0.d
                                            zmm2.d = 0.5f f- zmm1_1.d
                                            zmm0.d = zmm5_1.d f* zmm2.d
                                            zmm5_1.d = zmm5_1.d f+ zmm0.d
                                            zmm1_1.d = zmm5_1.d f* zmm5_1.d
                                            zmm3_1.d = zmm3_1.d f* zmm1_1.d
                                            zmm4_1.d = 0.5f f- zmm3_1.d
                                            zmm0.d = zmm5_1.d f* zmm4_1.d
                                            zmm5_1.d = zmm5_1.d f+ zmm0.d
                                            int32_t var_324_5 = zmm5_1.d
                                            zmm8_1.d = zmm8_1.d f* zmm5_1.d
                                            zmm7_1.d = zmm7_1.d f* zmm5_1.d
                                            zmm6.d = zmm6.d f* zmm5_1.d
                                        
                                        zmm8_1.d = zmm8_1.d f* *(rdi + 0x160)
                                        zmm0 = *r8_1
                                        zmm7_1.d = zmm7_1.d f* *(rdi + 0x164)
                                        zmm6.d = zmm6.d f* *(rdi + 0x168)
                                        zmm8_1.d = zmm8_1.d f* zmm0.d
                                        zmm7_1.d = zmm7_1.d f* zmm0.d
                                        zmm8_1.d = zmm8_1.d f+ zmm12_1.d
                                        zmm6.d = zmm6.d f* zmm0.d
                                        zmm0 = *(rdi + 0x170)
                                        zmm7_1.d = zmm7_1.d f+ zmm14_1.d
                                        zmm6.d = zmm6.d f+ zmm15_1.d
                                        var_350 = zmm8_1.d
                                        zmm8_1.d = zmm8_1.d f- zmm11_1.d
                                        int32_t var_34c_3 = zmm7_1.d
                                        var_348 = zmm6.d
                                        int32_t rax_15
                                        
                                        if (_mm_and_ps(zmm8_1, 0x7fffffff).d f>= zmm0.d)
                                            rax_15 = var_348
                                            *(r15_1 + (rcx_9 << 2)) = var_350.q
                                        else
                                            zmm7_1.d = zmm7_1.d f- zmm9_1.d
                                            
                                            if (_mm_and_ps(zmm7_1, 0x7fffffff).d f>= zmm0.d)
                                                rax_15 = var_348
                                                *(r15_1 + (rcx_9 << 2)) = var_350.q
                                            else
                                                zmm6.d = zmm6.d f- zmm10_1.d
                                                
                                                if (_mm_and_ps(zmm6, 0x7fffffff).d f>= zmm0.d)
                                                    rax_15 = var_348
                                                    *(r15_1 + (rcx_9 << 2)) = var_350.q
                                                else
                                                    *(r15_1 + (rcx_9 << 2)) =
                                                        *(rdx_7 + (rcx_9 << 2))
                                                    rax_15 = *(rdx_7 + (rcx_9 << 2) + 8)
                                        
                                        zmm6 = var_354_1
                                        zmm15_1 = var_358
                                        zmm14_1 = var_2c8.o
                                        *(r15_1 + (rcx_9 << 2) + 8) = rax_15
                                    
                                    int32_t var_1ac_1 = 0
                                    int64_t rcx_10 = sx.q(*(rdi + 0x150)) * 3
                                    zmm2.d = zmm6.d f* *(r15_1 + (rcx_10 << 2) + 8)
                                    zmm1_1.d = zmm6.d f* *(r15_1 + (rcx_10 << 2) + 4)
                                    zmm0.d = zmm6.d f* *(r15_1 + (rcx_10 << 2))
                                    zmm3_1.d = zmm0.d
                                    _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
                                    zmm3_1.d = zmm1_1.d
                                    _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
                                    zmm3_1.d = zmm2.d
                                    zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
                                    uint128_t var_1b8 = zmm3_1
                                    zmm2 = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), var_1f8_1)
                                    zmm1_1 = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55), var_218_1)
                                    zmm0 = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), var_228_1)
                                    zmm3_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), 
                                        var_208_1)
                                    var_2c8.o = _mm_add_ps(_mm_add_ps(zmm2, zmm0), 
                                        _mm_add_ps(zmm1_1, zmm3_1))
                                
                                zmm0 = zx.o(r14_2[5])
                                zmm6 = *(r14_2 + 0x34)
                                zmm3_1 = 0x3f000000
                                zmm10_1 = r14_2[6].d
                                var_318 = zmm0.q
                                zmm11_1 = var_318.d
                                zmm9_1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                                var_2b0_1 = zmm6.d
                            
                            zmm2.d = zmm9_1.d f* zmm9_1.d
                            zmm0.d = zmm11_1.d f* zmm11_1.d
                            zmm1_1.d = zmm10_1.d f* zmm10_1.d
                            zmm2.d = zmm2.d f+ zmm0.d
                            zmm2.d = zmm2.d f+ zmm1_1.d
                            
                            if (not(zmm2.d f<= 9.99999994e-09f))
                                zmm5_1 = zmm3_1
                                zmm3_1.d = zmm2.d
                                zmm4_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1.d)
                                zmm3_1.d = zmm3_1.d f* zmm5_1.d
                                zmm0.d = zmm4_1.d f* zmm4_1.d
                                zmm1_1.d = zmm3_1.d f* zmm0.d
                                zmm2.d = zmm5_1.d f- zmm1_1.d
                                zmm0.d = zmm4_1.d f* zmm2.d
                                zmm4_1.d = zmm4_1.d f+ zmm0.d
                                zmm1_1.d = zmm4_1.d f* zmm4_1.d
                                zmm3_1.d = zmm3_1.d f* zmm1_1.d
                                zmm5_1.d = zmm5_1.d f- zmm3_1.d
                                zmm0.d = zmm4_1.d f* zmm5_1.d
                                zmm4_1.d = zmm4_1.d f+ zmm0.d
                                zmm11_1.d = zmm11_1.d f* zmm4_1.d
                                zmm9_1.d = zmm9_1.d f* zmm4_1.d
                                zmm10_1.d = zmm10_1.d f* zmm4_1.d
                            
                            zmm12_1 = zx.o(var_300_1)
                            int32_t rdx_8 = 0
                            zmm11_1.d = zmm11_1.d f* zmm6.d
                            zmm9_1.d = zmm9_1.d f* zmm6.d
                            zmm10_1.d = zmm10_1.d f* zmm6.d
                            
                            if (rbx_1 s> 0)
                                zmm15_1 = var_248.o
                                int32_t r15_2 = var_304_1
                                int32_t r13_1
                                
                                do
                                    r13_1 = rdx_8 + 1
                                    int32_t var_280_2 = r15_2
                                    var_288 = zmm12_1.q
                                    int32_t var_340 = 0xffff00ff
                                    zmm2.d = float.s(r13_1)
                                    zmm2.d = zmm2.d f* var_274_1
                                    zmm1_1.d = zmm2.d f* zmm2.d
                                    zmm8_1.d = zmm2.d f* zmm1_1.d
                                    zmm0.d = zmm1_1.d f* 3f
                                    zmm5_1.d = zmm8_1.d f- zmm1_1.d
                                    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
                                    zmm6.d = zmm8_1.d f+ zmm8_1.d
                                    zmm8_1.d = zmm8_1.d f- zmm1_1.d
                                    zmm1_1.d = zmm11_1.d f* zmm5_1.d
                                    zmm7_1.d = zmm0.d f- zmm6.d
                                    zmm6.d = zmm6.d f- zmm0.d
                                    zmm8_1.d = zmm8_1.d f+ zmm2.d
                                    zmm6.d = zmm6.d f+ 1f
                                    zmm0.d = var_2ac_1.d f* zmm8_1.d
                                    zmm4_1.d = var_330_1.d f* zmm6.d
                                    zmm3_1.d = var_32c_1.d f* zmm6.d
                                    zmm2.d = var_2f8_1.d f* zmm6.d
                                    zmm4_1.d = zmm4_1.d f+ zmm0.d
                                    zmm0.d = zmm7_1.d f* var_278_1
                                    zmm4_1.d = zmm4_1.d f+ zmm1_1.d
                                    zmm1_1.d = zmm9_1.d f* zmm5_1.d
                                    zmm4_1.d = zmm4_1.d f+ zmm0.d
                                    zmm0.d = var_2a8_1.d f* zmm8_1.d
                                    zmm3_1.d = zmm3_1.d f+ zmm0.d
                                    zmm0.d = zmm7_1.d f* zmm15_1.d
                                    zmm7_1.d = zmm7_1.d f* zmm14_1.d
                                    zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                                    zmm1_1.d = zmm10_1.d f* zmm5_1.d
                                    zmm3_1.d = zmm3_1.d f+ zmm0.d
                                    zmm0.d = var_2a4_1.d f* zmm8_1.d
                                    zmm2.d = zmm2.d f+ zmm0.d
                                    var_298 = (_mm_unpacklo_ps(zmm4_1, zmm3_1.q)).q
                                    zmm2.d = zmm2.d f+ zmm1_1.d
                                    zmm2.d = zmm2.d f+ zmm7_1.d
                                    r15_2 = zmm2.d
                                    int32_t var_290_2 = r15_2
                                    
                                    if (rdx_8 != 0)
                                        int32_t rcx_11 = var_340
                                        
                                        if (rdx_8 == rbx_1 - 1)
                                            rcx_11 = data_14399f644
                                        
                                        var_340 = rcx_11
                                    else
                                        var_340 = data_14399f640
                                    
                                    sub_140acc920(&var_168, &var_340)
                                    zmm6 = sub_14229cc60(arg3, &var_298, 0x41700000, &var_168, 
                                        sub_14082c3b0(arg2, arg4))
                                    var_2c8.o = data_142f2cb30
                                    (*(*arg3 + 0x30))(arg3, &var_288, &var_298, &var_2c8, 
                                        sub_14082c3b0(arg2, arg4), zmm13.d, zmm13.d, 0, var_358, 
                                        var_350, var_348)
                                    rbx_1 = var_270_1
                                    zmm12_1 = zmm6
                                    rdx_8 = r13_1
                                while (r13_1 s< rbx_1)
                                zmm15_1 = var_358
                                rdi = arg1
                                r14_2 = var_188_1
                                r15_1 = var_238_1
                            
                            zmm0 = var_278_1
                            rsi_2 += 0xc
                            zmm12_1 = zmm15_1
                            rax_10 = var_308_1 + 1
                            var_330_1 = zmm0.d
                            var_300_1.d = zmm0.d
                            zmm0 = var_248.d
                            var_2f8_1 = zmm14_1.d
                            var_32c_1 = zmm0.d
                            var_300_1:4.d = zmm0.d
                            var_2ac_1 = zmm11_1.d
                            var_2a8_1 = zmm9_1.d
                            var_2a4_1 = zmm10_1.d
                            var_308_1 = rax_10
                            var_304_1 = var_2f8_1
                            
                            if (rax_10 s>= r14_2[0xa].d)
                                break
                            
                            zmm7_1 = var_338_2
                            zmm8_1 = var_334_2
                            rcx_8 = var_180_1
                            rdx_7 = var_260_1
                        
                        zmm6 = 0x41700000
                        r13 = arg2
                        rsi_1 = var_260_1
                    
                    if (rax_5 == 0)
                        zmm3_1 = 0x322bcc77
                        zmm4_1 = 0x3f000000
                        zmm1_1 = 0x3f800000
                        r14 = arg4
                    else
                        int32_t rax_24 = *(r14_2 + 0x24)
                        var_2f0 = *(r14_2 + 0x1c)
                        
                        if (*(rdi + 0x149) == 0)
                            zmm0 = rax_24
                            zmm15_1 = var_2f0:4.d
                            zmm14_1 = var_2f0.d
                        else
                            if (not(zmm13.d f> *(rdi + 0x16c)) && *(rdi + 0x146) != 0)
                                int64_t rcx_18 = sx.q(*(rdi + 0x150)) * 3
                                zmm11_1 = *(rsi_1 + (rcx_18 << 2))
                                zmm9_1 = *(rsi_1 + (rcx_18 << 2) + 4)
                                zmm12_1 = *(r15_1 + (rcx_18 << 2))
                                zmm14_1 = *(r15_1 + (rcx_18 << 2) + 4)
                                zmm8_1.d = zmm11_1.d f- zmm12_1.d
                                zmm10_1 = *(rsi_1 + (rcx_18 << 2) + 8)
                                zmm7_1.d = zmm9_1.d f- zmm14_1.d
                                zmm15_1 = *(r15_1 + (rcx_18 << 2) + 8)
                                zmm6.d = zmm10_1.d f- zmm15_1.d
                                zmm0.d = zmm8_1.d f* zmm8_1.d
                                zmm2.d = zmm7_1.d f* zmm7_1.d
                                zmm1_1.d = zmm6.d f* zmm6.d
                                zmm2.d = zmm2.d f+ zmm0.d
                                zmm2.d = zmm2.d f+ zmm1_1.d
                                
                                if (not(zmm2.d f<= 9.99999994e-09f))
                                    zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                                    zmm3_1.d = zmm2.d f* 0.5f
                                    zmm0.d = zmm5_1.d f* zmm5_1.d
                                    zmm1_1.d = zmm3_1.d f* zmm0.d
                                    zmm2.d = 0.5f f- zmm1_1.d
                                    zmm0.d = zmm5_1.d f* zmm2.d
                                    zmm5_1.d = zmm5_1.d f+ zmm0.d
                                    zmm1_1.d = zmm5_1.d f* zmm5_1.d
                                    zmm3_1.d = zmm3_1.d f* zmm1_1.d
                                    zmm4_1.d = 0.5f f- zmm3_1.d
                                    zmm0.d = zmm5_1.d f* zmm4_1.d
                                    zmm5_1.d = zmm5_1.d f+ zmm0.d
                                    zmm0.d = zmm5_1.d f* zmm8_1.d
                                    zmm1_1.d = zmm5_1.d f* zmm7_1.d
                                    zmm5_1.d = zmm5_1.d f* zmm6.d
                                    zmm8_1 = zmm0
                                    zmm7_1 = zmm1_1
                                    zmm6 = zmm5_1
                                
                                zmm8_1.d = zmm8_1.d f* *(rdi + 0x160)
                                zmm7_1.d = zmm7_1.d f* *(rdi + 0x164)
                                zmm6.d = zmm6.d f* *(rdi + 0x168)
                                zmm0 = *var_268_1
                                zmm8_1.d = zmm8_1.d f* zmm0.d
                                zmm7_1.d = zmm7_1.d f* zmm0.d
                                zmm8_1.d = zmm8_1.d f+ zmm12_1.d
                                zmm6.d = zmm6.d f* zmm0.d
                                zmm0 = *(rdi + 0x170)
                                zmm7_1.d = zmm7_1.d f+ zmm14_1.d
                                zmm6.d = zmm6.d f+ zmm15_1.d
                                var_350 = zmm8_1.d
                                zmm8_1.d = zmm8_1.d f- zmm11_1.d
                                int32_t var_34c_5 = zmm7_1.d
                                var_348 = zmm6.d
                                int32_t rax_27
                                
                                if (_mm_and_ps(zmm8_1, 0x7fffffff).d f>= zmm0.d)
                                    rax_27 = var_348
                                    *(r15_1 + (rcx_18 << 2)) = var_350.q
                                else
                                    zmm7_1.d = zmm7_1.d f- zmm9_1.d
                                    
                                    if (_mm_and_ps(zmm7_1, 0x7fffffff).d f>= zmm0.d)
                                        rax_27 = var_348
                                        *(r15_1 + (rcx_18 << 2)) = var_350.q
                                    else
                                        zmm6.d = zmm6.d f- zmm10_1.d
                                        
                                        if (_mm_and_ps(zmm6, 0x7fffffff).d f>= zmm0.d)
                                            rax_27 = var_348
                                            *(r15_1 + (rcx_18 << 2)) = var_350.q
                                        else
                                            *(r15_1 + (rcx_18 << 2)) = *(rsi_1 + (rcx_18 << 2))
                                            rax_27 = *(rsi_1 + (rcx_18 << 2) + 8)
                                
                                *(r15_1 + (rcx_18 << 2) + 8) = rax_27
                            
                            zmm3_1 = var_354_1
                            int32_t var_18c_1 = 0
                            int64_t rcx_19 = sx.q(*(rdi + 0x150)) * 3
                            zmm0.d = zmm3_1.d f* *(r15_1 + (rcx_19 << 2))
                            var_248 = 0
                            zmm1_1.d = zmm3_1.d f* *(r15_1 + (rcx_19 << 2) + 4)
                            int32_t var_240_1 = 0
                            zmm3_1.d = zmm3_1.d f* *(r15_1 + (rcx_19 << 2) + 8)
                            zmm2.d = zmm0.d
                            _mm_shuffle_ps(zmm2, zmm2, 0xe1)
                            zmm2.d = zmm1_1.d
                            _mm_shuffle_ps(zmm2, zmm2, 0xc6)
                            zmm2.d = zmm3_1.d
                            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                            uint128_t var_198 = zmm2
                            zmm3_1 =
                                __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_1f8_1)
                            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), var_228_1)
                            zmm1_1 =
                                __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), var_218_1)
                            zmm3_1 = _mm_add_ps(zmm3_1, zmm0)
                            zmm1_1 = _mm_add_ps(zmm1_1, 
                                __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), var_208_1))
                            zmm2 = var_328_1
                            zmm3_1 = _mm_add_ps(zmm3_1, zmm1_1)
                            zmm0.d = zmm3_1.d f* zmm2.d
                            zmm1_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                            zmm14_1.d = var_2f0.d.d f+ zmm0.d
                            zmm3_1.d = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa).d f* zmm2.d
                            zmm1_1.d = zmm1_1.d f* zmm2.d
                            zmm0.d = rax_24.d f+ zmm3_1.d
                            zmm15_1.d = var_2f0:4.d.d f+ zmm1_1.d
                        
                        int32_t var_320_2 = zmm0.d
                        
                        if (*(rdi + 0x148) == 0)
                            zmm9_1 = *(r14_2 + 0x4c)
                            zmm0.d = zmm9_1.d f* *(r14_2 + 0x44)
                            zmm10_1.d = zmm9_1.d f* r14_2[8].d
                            zmm0.d = zmm0.d f+ var_2b8_1
                            zmm9_1.d = zmm9_1.d f* r14_2[9].d
                            zmm10_1.d = zmm10_1.d f+ var_358
                            zmm1_1.d = 1f f- *(rdi + 0x174)
                            zmm9_1.d = zmm9_1.d f+ var_2b4_1
                            zmm0.d = zmm0.d f- var_32c_1
                            zmm10_1.d = zmm10_1.d f- var_330_1
                            zmm1_1.d = zmm1_1.d f* 0.5f
                            zmm9_1.d = zmm9_1.d f- var_2f8_1
                            zmm0.d = zmm0.d f* zmm1_1.d
                            zmm10_1.d = zmm10_1.d f* zmm1_1.d
                            zmm11_1 = zmm0
                            zmm9_1.d = zmm9_1.d f* zmm1_1.d
                        else
                            zmm0 = zx.o(r14_2[5])
                            zmm9_1 = r14_2[6].d
                            var_318 = zmm0.q
                            zmm10_1 = var_318.d
                            zmm11_1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                        
                        zmm3_1 = 0x322bcc77
                        zmm2.d = zmm11_1.d f* zmm11_1.d
                        zmm0.d = zmm10_1.d f* zmm10_1.d
                        zmm1_1.d = zmm9_1.d f* zmm9_1.d
                        zmm2.d = zmm2.d f+ zmm0.d
                        zmm2.d = zmm2.d f+ zmm1_1.d
                        
                        if (not(zmm2.d f<= 9.99999994e-09f))
                            zmm3_1.d = zmm2.d
                            zmm4_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1.d)
                            zmm3_1.d = zmm3_1.d f* 0.5f
                            zmm0.d = zmm4_1.d f* zmm4_1.d
                            zmm1_1.d = zmm3_1.d f* zmm0.d
                            zmm2.d = 0.5f f- zmm1_1.d
                            zmm0.d = zmm4_1.d f* zmm2.d
                            zmm4_1.d = zmm4_1.d f+ zmm0.d
                            zmm1_1.d = zmm4_1.d f* zmm4_1.d
                            zmm3_1.d = zmm3_1.d f* zmm1_1.d
                            zmm5_1.d = 0.5f f- zmm3_1.d
                            zmm3_1 = 0x322bcc77
                            zmm0.d = zmm4_1.d f* zmm5_1.d
                            zmm4_1.d = zmm4_1.d f+ zmm0.d
                            zmm10_1.d = zmm10_1.d f* zmm4_1.d
                            zmm11_1.d = zmm11_1.d f* zmm4_1.d
                            zmm9_1.d = zmm9_1.d f* zmm4_1.d
                        
                        zmm0 = var_2b0_1
                        int32_t rdx_14 = 0
                        zmm12_1 = zx.o(var_300_1)
                        r14 = arg4
                        zmm10_1.d = zmm10_1.d f* zmm0.d
                        zmm11_1.d = zmm11_1.d f* zmm0.d
                        zmm9_1.d = zmm9_1.d f* zmm0.d
                        
                        if (rbx_1 s<= 0)
                            zmm6 = 0x41700000
                            zmm4_1 = 0x3f000000
                            zmm1_1 = 0x3f800000
                        else
                            int32_t rdi_2 = var_304_1
                            int32_t rsi_3
                            
                            do
                                rsi_3 = rdx_14 + 1
                                int32_t var_280_3 = rdi_2
                                var_288 = zmm12_1.q
                                int32_t var_33c = 0xffff00ff
                                zmm2.d = float.s(rsi_3)
                                zmm2.d = zmm2.d f* var_274_1
                                zmm1_1.d = zmm2.d f* zmm2.d
                                zmm8_1.d = zmm2.d f* zmm1_1.d
                                zmm0.d = zmm1_1.d f* 3f
                                zmm5_1.d = zmm8_1.d f- zmm1_1.d
                                zmm1_1.d = zmm1_1.d f+ zmm1_1.d
                                zmm6.d = zmm8_1.d f+ zmm8_1.d
                                zmm8_1.d = zmm8_1.d f- zmm1_1.d
                                zmm1_1.d = zmm10_1.d f* zmm5_1.d
                                zmm7_1.d = zmm0.d f- zmm6.d
                                zmm6.d = zmm6.d f- zmm0.d
                                zmm8_1.d = zmm8_1.d f+ zmm2.d
                                zmm6.d = zmm6.d f+ 1f
                                zmm0.d = var_2ac_1.d f* zmm8_1.d
                                zmm4_1.d = var_330_1.d f* zmm6.d
                                zmm3_1.d = var_32c_1.d f* zmm6.d
                                zmm2.d = var_2f8_1.d f* zmm6.d
                                zmm4_1.d = zmm4_1.d f+ zmm0.d
                                zmm0.d = zmm14_1.d f* zmm7_1.d
                                zmm4_1.d = zmm4_1.d f+ zmm1_1.d
                                zmm1_1.d = zmm11_1.d f* zmm5_1.d
                                zmm4_1.d = zmm4_1.d f+ zmm0.d
                                zmm0.d = var_2a8_1.d f* zmm8_1.d
                                zmm3_1.d = zmm3_1.d f+ zmm0.d
                                zmm0.d = zmm15_1.d f* zmm7_1.d
                                zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                                zmm1_1.d = zmm9_1.d f* zmm5_1.d
                                zmm3_1.d = zmm3_1.d f+ zmm0.d
                                zmm0.d = var_2a4_1.d f* zmm8_1.d
                                zmm2.d = zmm2.d f+ zmm0.d
                                zmm0.d = var_320_2.d f* zmm7_1.d
                                zmm2.d = zmm2.d f+ zmm1_1.d
                                zmm2.d = zmm2.d f+ zmm0.d
                                var_298 = (_mm_unpacklo_ps(zmm4_1, zmm3_1.q)).q
                                rdi_2 = zmm2.d
                                int32_t var_290_3 = rdi_2
                                
                                if (rdx_14 != 0)
                                    int32_t rcx_20 = var_33c
                                    
                                    if (rdx_14 == rbx_1 - 1)
                                        rcx_20 = data_14399f644
                                    
                                    var_33c = rcx_20
                                else
                                    var_33c = data_14399f630
                                
                                sub_140acc920(&var_158, &var_33c)
                                zmm6 = sub_14229cc60(arg3, &var_298, 0x41700000, &var_158, 
                                    sub_14082c3b0(r13, r14))
                                var_248.o = data_142f2cb30
                                (*(*arg3 + 0x30))(arg3, &var_288, &var_298, &var_248, 
                                    sub_14082c3b0(r13, r14), zmm13.d, zmm13.d, 0, var_358, var_350, 
                                    var_348)
                                rbx_1 = var_270_1
                                zmm12_1 = zmm6
                                rdx_14 = rsi_3
                            while (rsi_3 s< rbx_1)
                            zmm6 = 0x41700000
                            zmm3_1 = 0x322bcc77
                            zmm4_1 = 0x3f000000
                            zmm1_1 = 0x3f800000
                            rdi = arg1
            
            i = i_2 + 1
            i_2 = i
        while (i s< *(rdi + 0x3c))

if (*(rdi + 0x184) s> 1)
    int32_t i_1 = 0
    int32_t i_3 = 0
    
    if (*(rdi + 0x3c) s> 0)
        do
            i = i_1 * *(rdi + 0x40)
            int64_t* rsi_4 = nullptr
            void* rcx_27 = sx.q(i) + *(rdi + 0x58)
            int64_t* r15_4 = sx.q(*(rdi + 0x124)) + rcx_27
            
            if (r15_4[0xb].d != 0)
                int64_t rax_36 = sx.q(*(rdi + 0x128))
                
                if (rax_36.d != 0xffffffff)
                    rsi_4 = rcx_27 + rax_36
                
                var_2e0 = *r15_4
                int32_t var_2d8_2 = r15_4[1].d
                var_318 = *rsi_4
                int32_t var_310_3 = rsi_4[1].d
                sub_140acc920(&var_158, &data_14399f638)
                i, zmm6 = sub_14229cc60(arg3, &var_2e0, zmm6, &var_158, sub_14082c3b0(arg2, r14))
                int32_t j = 0
                
                if (*(r15_4 + 0x3c) s> 0)
                    do
                        var_318 = *rsi_4
                        int32_t i_5 = rsi_4[1].d
                        sub_140acc920(&var_168, &data_14399f638)
                        zmm6 =
                            sub_14229cc60(arg3, &var_318, zmm6, &var_168, sub_14082c3b0(arg2, arg4))
                        sub_140acc920(&var_178, &data_14399f644)
                        (*(*arg3 + 0x30))(arg3, &var_2e0, &var_318, &var_178, 
                            sub_14082c3b0(arg2, arg4), zmm13.d, zmm13.d, 0, var_358, var_350, 
                            var_348)
                        rsi_4 += 0xc
                        i = i_5
                        j += 1
                        var_2e0 = var_318
                        int32_t i_4 = i
                    while (j s< *(r15_4 + 0x3c))
                    
                    rdi = arg1
                    i_1 = i_3
            
            r14 = arg4
            i_1 += 1
            i_3 = i_1
        while (i_1 s< *(rdi + 0x3c))

return i
