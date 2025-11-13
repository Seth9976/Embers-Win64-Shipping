// 函数: sub_1421e28f0
// 地址: 0x1421e28f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg2[8].q
void* rbx = arg2[9].q
int32_t r8 = 1
float zmm7[0x4] = 0x3f800000
uint128_t var_278 = *(rax + 0x380)
uint128_t var_258 = *(rax + 0x3a0)
int96_t var_268 = (*(rax + 0x390))[0].12
int32_t rax_1 = *(arg1 + 0x154)
int96_t var_248 = (*(rax + 0x3b0))[0].12
float zmm1[0x4] = 0x3f800000

if (rax_1 != 0)
    r8 = rax_1

int32_t rax_2 = *(arg1 + 0x150)
float zmm12[0x4] = zx.o(0)
int32_t rcx = 1

if (rax_2 s> 0)
    rcx = rax_2

float zmm13[0x4] = zx.o(0)
uint128_t zmm14 = zx.o(0)
int32_t i = 0
int32_t i_1 = 0
int32_t var_3dc = 0
zmm1[0] = 1f f/ _mm_cvtepi32_ps(zx.o(r8)).d
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rcx * r8))
float var_344 = zmm1[0]
zmm1 = 0x3f800000
zmm1[0] = 1f f/ zmm0.d
float var_3a8 = zmm1[0]
int96_t var_128 = arg2[4].12
float var_118[0x4] = arg2[5]
uint128_t var_108 = arg2[6]
float var_f8[0x4] = arg2[7]
uint128_t var_298 = *arg2
float arg_10 = 0f
uint128_t var_2a8 = arg2[1]
int32_t arg_8 = 0
uint128_t var_2b8 = arg2[2]
uint128_t var_2c8 = arg2[3]

if (*(arg1 + 0x3c) s> 0)
    float zmm6[0x4]
    float var_58_1[0x4] = zmm6
    float zmm8[0x4] = 0x3f000000
    uint128_t zmm9
    uint128_t var_88_1 = zmm9
    float zmm10[0x4]
    float var_98_1[0x4] = zmm10
    float zmm11[0x4]
    float var_a8_1[0x4] = zmm11
    float zmm15[0x4]
    float var_e8_1[0x4] = zmm15
    
    do
        void* r14_1 = nullptr
        uint128_t* r13_1 = nullptr
        uint128_t* var_3c0_1 = nullptr
        float (* r15_1)[0x4] = nullptr
        float (* var_2f8_1)[0x4] = nullptr
        uint128_t* var_300_1 = nullptr
        uint128_t* rax_4 = nullptr
        void* rsi_2 = sx.q(i * *(arg1 + 0x40)) + *(arg1 + 0x58)
        int64_t* r12_2 = sx.q(*(arg1 + 0x124)) + rsi_2
        void* var_308_1 = rsi_2
        int64_t* var_1a8_1 = r12_2
        
        if (r12_2[0xb].d != 0)
            int32_t rdx = r12_2[0xa].d
            
            if (rdx != 0)
                int64_t rcx_2 = sx.q(*(arg1 + 0x128))
                
                if (rcx_2.d != 0xffffffff)
                    r14_1 = rsi_2 + rcx_2
                
                int64_t rcx_3 = sx.q(*(arg1 + 0x12c))
                
                if (rcx_3.d != 0xffffffff)
                    var_3c0_1 = rcx_3 + rsi_2
                
                int64_t rcx_5 = sx.q(*(arg1 + 0x134))
                
                if (rcx_5.d != 0xffffffff)
                    r13_1 = rsi_2 + rcx_5
                
                int64_t rcx_6 = sx.q(*(arg1 + 0x138))
                
                if (rcx_6.d != 0xffffffff)
                    r15_1 = rsi_2 + rcx_6
                    var_2f8_1 = r15_1
                
                int64_t rcx_7 = sx.q(*(arg1 + 0x13c))
                
                if (rcx_7.d != 0xffffffff)
                    var_300_1 = rsi_2 + rcx_7
                
                int64_t rcx_8 = sx.q(*(arg1 + 0x140))
                
                if (rcx_8.d != 0xffffffff)
                    rax_4 = rsi_2 + rcx_8
                
                float var_3e8_1 = zmm7[0]
                
                if (rax_4 != 0)
                    var_3e8_1 = (*rax_4).d
                
                zmm6 = zx.o(*(r12_2 + 0x3c))
                zmm0 = _mm_cvtepi32_ps(zx.o(rdx))
                float temp0_3[0x4] = _mm_cvtepi32_ps(zmm6)
                temp0_3[0] = temp0_3[0] f/ zmm0.d
                zmm0 = temp0_3
                truncf(zmm0.d)
                uint128_t zmm2
                zmm2.d = temp0_3.d f- zmm0.d
                int32_t rcx_9 = int.d(temp0_3[0])
                int32_t var_3d8_1 = zmm2.d
                float var_3e0_1 = (*(arg1 + 0x158))[0]
                
                if (r13_1 != 0)
                    zmm0.d = (*(rsi_2 + 0x50)).d f* *(arg1 + 0x68)
                    int32_t var_384_1 = zmm0.d
                    int32_t rax_5
                    
                    if (*(arg1 + 0x147) == 0)
                        rax_5 = var_128:8.d.d
                        zmm0 = _mm_unpacklo_ps(var_128.d, var_128:4.d[0].q)
                    else
                        zmm0 = zx.o(*(r12_2 + 0xc))
                        rax_5 = *(r12_2 + 0x14)
                    
                    int32_t rax_6 = r12_2[7].d
                    int32_t j = 0
                    uint64_t var_2f0_1 = zmm0.q
                    zmm0 = *(arg1 + 0x15c)
                    zmm1 = var_2f0_1.d
                    zmm1[0] = zmm1[0] f* zmm0.d
                    uint8_t rax_7 = (rax_6 u>> 0x1f).b
                    float var_3cc_1 = zmm0.d
                    float var_390_1 = zmm1[0]
                    zmm1 = var_2f0_1:4.d
                    zmm1[0] = zmm1[0] f* zmm0.d
                    int32_t j_1 = 0
                    float var_38c_1 = zmm1[0]
                    zmm1 = rax_5
                    zmm1[0] = zmm1[0] f* zmm0.d
                    float var_388_1 = zmm1[0]
                    
                    if (*(arg1 + 0x14c) s> 0)
                        int64_t rax_8 = sx.q(rcx_9)
                        zmm1 = zmm7
                        zmm1[0] = zmm1[0] f- zmm2.d
                        int32_t var_1ec_1 = 0
                        int64_t rcx_11 = (rax_8 + 1) * 3
                        int64_t rdx_1 = rax_8 * 3
                        int64_t var_1b0_1 = rcx_11
                        float var_3d4_1 = zmm1[0]
                        int64_t var_1b8_1 = rdx_1
                        
                        do
                            bool cond:5_1 = zmm12[0] f> *(arg1 + 0x16c)
                            uint128_t zmm4_1 = zx.o(*r12_2)
                            zmm0 = r12_2[1].d
                            zmm10 = zmm1
                            zmm9.d = zmm2.d f* *(r14_1 + (rdx_1 << 2))
                            zmm11 = zmm1
                            zmm10[0] = zmm10[0] f* *(r14_1 + (rcx_11 << 2) + 4)
                            zmm11[0] = zmm11[0] f* *(r14_1 + (rcx_11 << 2) + 8)
                            int32_t arg_20 = zmm0.d
                            zmm0.d = zmm1.d f* *(r14_1 + (rcx_11 << 2))
                            float zmm5_1[0x4] = zmm4_1.q:4.d
                            zmm9.d = zmm9.d f+ zmm0.d
                            float arg_18 = zmm5_1[0]
                            uint64_t var_3c8_1 = zmm4_1.q
                            zmm0.d = zmm2.d f* *(r14_1 + (rdx_1 << 2) + 4)
                            zmm10[0] = zmm10[0] f+ zmm0.d
                            zmm0.d = zmm2.d f* *(r14_1 + (rdx_1 << 2) + 8)
                            zmm11[0] = zmm11[0] f+ zmm0.d
                            uint128_t* r9_1
                            float zmm3[0x4]
                            
                            if (cond:5_1 || *(arg1 + 0x146) == 0)
                                r9_1 = var_3c0_1
                            else
                                zmm3 = (*r15_1)[2]
                                zmm13 = *r15_1
                                zmm7 = zmm3
                                zmm7[0] = zmm7[0] f- *(r13_1 + 8)
                                zmm12 = (*r15_1)[1]
                                zmm8 = zmm13
                                zmm14 = *r13_1
                                zmm6 = zmm12
                                zmm15 = *(r13_1 + 4)
                                zmm8[0] = zmm8[0] f- zmm14.d
                                zmm6[0] = zmm6[0] - zmm15[0]
                                float var_418_1 = zmm3[0]
                                zmm7[0] = zmm7[0] * zmm7[0]
                                zmm0.d = zmm8.d f* zmm8[0]
                                zmm2.d = zmm6.d f* zmm6[0]
                                zmm2.d = zmm2.d f+ zmm0.d
                                zmm2.d = zmm2.d f+ zmm7[0]
                                
                                if (not(zmm2.d f<= 9.99999994e-09f))
                                    zmm3 = zmm2
                                    float temp0_5[0x4] = _mm_rsqrt_ss(zmm2[0], zmm3[0])
                                    zmm3[0] = zmm3[0] * 0.5f
                                    zmm0.d = temp0_5.d f* temp0_5[0]
                                    zmm3[0] = zmm3[0] f* zmm0.d
                                    zmm2.d = 0.5f - zmm3[0]
                                    zmm0.d = temp0_5.d f* zmm2.d
                                    temp0_5[0] = temp0_5[0] f+ zmm0.d
                                    temp0_5[0] = temp0_5[0] * temp0_5[0]
                                    zmm3[0] = zmm3[0] * temp0_5[0]
                                    zmm4_1.d = 0.5f - zmm3[0]
                                    zmm3 = var_418_1
                                    zmm0.d = temp0_5.d f* zmm4_1.d
                                    zmm4_1 = zx.o(var_3c8_1)
                                    temp0_5[0] = temp0_5[0] f+ zmm0.d
                                    float var_408_1 = temp0_5[0]
                                    zmm0.d = temp0_5.d f* zmm8[0]
                                    temp0_5[0] = temp0_5[0] * zmm7[0]
                                    temp0_5[0] = temp0_5[0] * zmm6[0]
                                    zmm8 = zmm0
                                    zmm7 = temp0_5
                                    zmm5_1 = arg_18
                                    zmm6 = temp0_5
                                
                                zmm8[0] = zmm8[0] f* *(arg1 + 0x160)
                                r9_1 = var_3c0_1
                                zmm6[0] = zmm6[0] f* *(arg1 + 0x164)
                                zmm7[0] = zmm7[0] f* *(arg1 + 0x168)
                                zmm0 = *r9_1
                                zmm8[0] = zmm8[0] f* zmm0.d
                                zmm6[0] = zmm6[0] f* zmm0.d
                                zmm8[0] = zmm8[0] f+ zmm14.d
                                zmm7[0] = zmm7[0] f* zmm0.d
                                zmm0 = *(arg1 + 0x170)
                                zmm6[0] = zmm6[0] + zmm15[0]
                                zmm7[0] = zmm7[0] f+ *(r13_1 + 8)
                                float var_3f8_1 = zmm8[0]
                                zmm8[0] = zmm8[0] - zmm13[0]
                                float var_3f4_1 = zmm6[0]
                                float var_3f0_1 = zmm7[0]
                                float rax_10
                                
                                if (_mm_and_ps(zmm8, 0x7fffffff)[0] f>= zmm0.d)
                                    rax_10 = var_3f0_1
                                    *r13_1 = var_3f8_1.q
                                else
                                    zmm6[0] = zmm6[0] - zmm12[0]
                                    
                                    if (_mm_and_ps(zmm6, 0x7fffffff)[0] f>= zmm0.d)
                                        rax_10 = var_3f0_1
                                        *r13_1 = var_3f8_1.q
                                    else
                                        zmm7[0] = zmm7[0] - zmm3[0]
                                        
                                        if (_mm_and_ps(zmm7, 0x7fffffff)[0] f>= zmm0.d)
                                            rax_10 = var_3f0_1
                                            *r13_1 = var_3f8_1.q
                                        else
                                            *r13_1 = *r15_1
                                            rax_10 = (*r15_1)[2]
                                
                                zmm8 = 0x3f000000
                                zmm14 = arg_8
                                zmm13 = arg_10
                                *(r13_1 + 8) = rax_10
                            
                            zmm2 = var_3e8_1
                            zmm6 = zmm5_1
                            zmm0.d = zmm2.d f* *r13_1
                            zmm1 = zmm2
                            int64_t var_338_1 = 0
                            zmm1[0] = zmm1[0] f* *(r13_1 + 4)
                            zmm15 = zmm4_1
                            int32_t var_330_1 = 0
                            zmm2.d = zmm2.d f* *(r13_1 + 8)
                            float var_1f8[0x4]
                            var_1f8[0] = zmm0.d
                            zmm12 = arg_20
                            float temp0_9[0x4] = _mm_shuffle_ps(var_1f8, var_1f8, 0xe1)
                            zmm7 = zmm12
                            temp0_9[0] = zmm1[0]
                            float var_37c_1 = zmm5_1[0]
                            zmm5_1 = 0x322bcc77
                            float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
                            temp0_10[0] = zmm2.d
                            int32_t var_380_1 = zmm4_1.d
                            float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc9)
                            var_1f8 = temp0_11
                            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_11, temp0_11, 0xff), 
                                var_2c8)
                            float temp0_15[0x4] = __mulps_xmmps_memps(
                                _mm_shuffle_ps(temp0_11, temp0_11, 0x55), var_2a8)
                            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_11, temp0_11, 0xaa), 
                                var_2b8)
                            float temp0_19[0x4] =
                                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_11, temp0_11, 0), var_298)
                            zmm2 = _mm_add_ps(zmm2, zmm0)
                            float var_378_1 = zmm12[0]
                            zmm3 = var_3e0_1
                            zmm2 = _mm_add_ps(zmm2, _mm_add_ps(temp0_15, temp0_19))
                            float temp0_23[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                            temp0_23[0] = temp0_23[0] * zmm3[0]
                            zmm0.d = zmm2.d f* zmm3[0]
                            temp0_23[0] = temp0_23[0] + zmm10[0]
                            zmm2.d = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d f* zmm3[0]
                            zmm0.d = zmm0.d f+ zmm9.d
                            zmm6[0] = zmm6[0] - temp0_23[0]
                            zmm2.d = zmm2.d f+ zmm11[0]
                            zmm15[0] = zmm15[0] f- zmm0.d
                            float var_408_2 = zmm6[0]
                            zmm7[0] = zmm7[0] f- zmm2.d
                            zmm0.d = zmm6.d f* zmm6[0]
                            zmm15[0] = zmm15[0] * zmm15[0]
                            float var_418_2 = zmm7[0]
                            zmm7[0] = zmm7[0] * zmm7[0]
                            zmm15[0] = zmm15[0] f+ zmm0.d
                            zmm15[0] = zmm15[0] + zmm7[0]
                            
                            if (not(zmm15[0] <= 9.99999994e-09f))
                                zmm4_1.d = zmm8.d
                                zmm3 = zx.o(0)
                                zmm3[0] = zmm15.d
                                float temp0_25[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                                zmm3[0] = zmm3[0] f* zmm4_1.d
                                zmm0.d = temp0_25.d f* temp0_25[0]
                                zmm3[0] = zmm3[0] f* zmm0.d
                                zmm2.d = zmm4_1.d f- zmm3[0]
                                zmm0.d = temp0_25.d f* zmm2.d
                                temp0_25[0] = temp0_25[0] f+ zmm0.d
                                temp0_25[0] = temp0_25[0] * temp0_25[0]
                                zmm3[0] = zmm3[0] * temp0_25[0]
                                zmm4_1.d = zmm4_1.d f- zmm3[0]
                                zmm0.d = temp0_25.d f* zmm4_1.d
                                zmm4_1 = zx.o(var_3c8_1)
                                temp0_25[0] = temp0_25[0] f+ zmm0.d
                                float var_418_3 = temp0_25[0]
                                zmm0.d = temp0_25.d f* zmm15[0]
                                temp0_25[0] = temp0_25[0] * zmm7[0]
                                temp0_25[0] = temp0_25[0] * zmm6[0]
                                zmm15 = zmm0
                                var_418_2 = temp0_25[0]
                                zmm7 = temp0_25
                                zmm5_1 = 0x322bcc77
                                var_408_2 = temp0_25[0]
                                zmm6 = temp0_25
                            
                            int32_t rax_11 = *(arg1 + 0x120)
                            
                            if (rax_11 == 1)
                                if (i_1 == 0)
                                    goto label_1421e31d5
                                
                                goto label_1421e30ef
                            
                            float var_414_1
                            float var_410_1
                            float var_40c_1
                            float var_404_1
                            float var_400_1
                            float var_3fc_1
                            float var_3e4_1
                            float var_3a0_1
                            float var_39c_1
                            float var_358_1
                            
                            if (rax_11 != 0)
                            label_1421e30ef:
                                zmm6 = var_3dc
                                zmm10 = zmm13
                                zmm9 = arg_8
                                zmm5_1 = zmm13
                                var_3a0_1 = zmm13[0]
                                zmm7 = zmm13
                                var_358_1 = zmm13[0]
                                zmm12 = zmm13
                                var_3fc_1 = zmm13[0]
                                zmm3 = zmm14
                                var_3e4_1 = zmm13[0]
                                zmm8 = zmm14
                                var_40c_1 = zmm13[0]
                                zmm4_1 = zmm14
                                zmm13 = zmm14
                                var_404_1 = zmm14.d
                                var_39c_1 = zmm14.d
                                zmm11 = zmm14
                                var_410_1 = zmm14.d
                                var_400_1 = zmm14.d
                                var_414_1 = zmm14.d
                                zmm14 = arg_10
                            else
                            label_1421e31d5:
                                zmm2 = zmm4_1
                                zmm12[0] = zmm12[0] f- var_248:8.d
                                zmm4_1.d = arg_18.d f- var_248:4.d
                                zmm2.d = zmm2.d f- var_248.d
                                zmm12[0] = zmm12[0] * zmm15[0]
                                zmm9.d = zmm12.d f* zmm6[0]
                                zmm0.d = zmm4_1.d f* zmm7[0]
                                zmm4_1.d = zmm4_1.d f* zmm15[0]
                                zmm9.d = zmm9.d f- zmm0.d
                                zmm0.d = zmm2.d f* zmm7[0]
                                zmm2.d = zmm2.d f* zmm6[0]
                                zmm0.d = zmm0.d f- zmm12[0]
                                zmm4_1.d = zmm4_1.d f- zmm2.d
                                zmm3 = zmm0
                                arg_10 = zmm0.d
                                zmm3[0] = zmm3[0] f* zmm0.d
                                zmm0.d = zmm9.d f* zmm9.d
                                zmm1 = zmm4_1
                                zmm1[0] = zmm1[0] f* zmm4_1.d
                                zmm3[0] = zmm3[0] f+ zmm0.d
                                arg_8 = zmm4_1.d
                                zmm3[0] = zmm3[0] + zmm1[0]
                                
                                if (zmm3[0] <= zmm5_1[0])
                                    zmm0 = _mm_unpacklo_ps(var_268.d, var_268:4.d[0].q)
                                    zmm1 = zmm0
                                    zmm2 = var_268:8.d.d
                                    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                                    int32_t var_228_1 = zmm1.d
                                    zmm1 = zmm0
                                    zmm9 = var_228_1
                                    arg_10 = zmm0.d
                                else
                                    zmm4_1.d = zmm8.d
                                    zmm0 = zmm3
                                    zmm3 = zx.o(0)
                                    zmm3[0] = zmm0.d
                                    float temp0_28[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                                    zmm3[0] = zmm3[0] f* zmm4_1.d
                                    zmm0.d = temp0_28.d f* temp0_28[0]
                                    zmm3[0] = zmm3[0] f* zmm0.d
                                    zmm2.d = zmm4_1.d f- zmm3[0]
                                    zmm0.d = temp0_28.d f* zmm2.d
                                    temp0_28[0] = temp0_28[0] f+ zmm0.d
                                    temp0_28[0] = temp0_28[0] * temp0_28[0]
                                    zmm3[0] = zmm3[0] * temp0_28[0]
                                    zmm1 = arg_10
                                    zmm4_1.d = zmm4_1.d f- zmm3[0]
                                    zmm0.d = temp0_28.d f* zmm4_1.d
                                    temp0_28[0] = temp0_28[0] f+ zmm0.d
                                    zmm1[0] = zmm1[0] * temp0_28[0]
                                    float var_40c_2 = temp0_28[0]
                                    zmm9.d = zmm9.d f* temp0_28[0]
                                    arg_10 = zmm1[0]
                                    zmm2.d = arg_8.d f* temp0_28[0]
                                
                                var_3dc = zmm9.d
                                zmm6 = zmm9
                                zmm9 = zmm2
                                arg_8 = zmm2.d
                                var_404_1 = zmm2.d
                                zmm3 = zmm2
                                var_3a0_1 = zmm1[0]
                                zmm8 = zmm2
                                var_39c_1 = zmm2.d
                                zmm4_1 = zmm2
                                var_410_1 = zmm2.d
                                zmm10 = zmm1
                                var_358_1 = zmm1[0]
                                zmm5_1 = zmm1
                                var_3fc_1 = zmm1[0]
                                zmm11 = zmm2
                                var_3e4_1 = zmm1[0]
                                zmm7 = zmm1
                                var_40c_1 = zmm1[0]
                                zmm12 = zmm1
                                var_400_1 = zmm2.d
                                zmm13 = zmm2
                                var_414_1 = zmm2.d
                                zmm14 = zmm1
                            
                            if (j == 0)
                                zmm10 = zmm6
                            else
                                zmm2.d = 1.57079637f f/ _mm_cvtepi32_ps(zx.o(*(arg1 + 0x14c))).d
                                zmm2.d = zmm2.d f* _mm_cvtepi32_ps(zx.o(j))[0]
                                zmm0.d = zmm2.d f* 0.159154937f
                                
                                if (zmm2.d f< 0f)
                                    zmm14 = arg_10
                                    zmm13 = arg_8
                                    zmm10 = zmm14
                                    zmm0.d = zmm0.d f- 0.5f
                                    var_404_1 = zmm3[0]
                                    var_414_1 = zmm13[0]
                                    zmm8 = zmm13
                                    var_3a0_1 = zmm14.d
                                    zmm4_1 = zmm13
                                    var_39c_1 = zmm13[0]
                                    zmm5_1 = zmm14
                                    var_410_1 = zmm13[0]
                                    zmm11 = zmm13
                                    var_358_1 = zmm14.d
                                    zmm7 = zmm14
                                    var_3e4_1 = zmm14.d
                                    zmm9 = zmm14
                                    var_400_1 = zmm13[0]
                                    zmm12 = zmm14
                                else
                                    zmm0.d = zmm0.d f+ 0.5f
                                    zmm9 = var_3fc_1
                                    zmm14 = var_40c_1
                                
                                zmm0.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d))).d f* 6.28318548f
                                zmm2.d = zmm2.d f- zmm0.d
                                
                                if (not(zmm2.d f<= 1.57079637f))
                                    zmm3 = 0xbf800000
                                    zmm0.d = 3.14159274f f- zmm2.d
                                    zmm2 = zmm0
                                else if (zmm2.d f>= -1.57079637f)
                                    zmm3 = 0x3f800000
                                    zmm8 = zmm4_1
                                    zmm13 = var_414_1
                                    zmm10 = zmm5_1
                                    zmm11 = var_410_1
                                    zmm7 = zmm9
                                    zmm12 = zmm14
                                else
                                    zmm3 = 0xbf800000
                                    zmm0.d = -3.14159274f f- zmm2.d
                                    zmm8 = var_404_1
                                    zmm10 = var_3a0_1
                                    zmm11 = var_39c_1
                                    zmm7 = var_358_1
                                    zmm12 = var_3e4_1
                                    zmm2 = zmm0
                                    zmm13 = var_400_1
                                
                                zmm5_1 = 0x3638b88e
                                zmm1 = zmm2
                                zmm1[0] = zmm1[0] f* zmm2.d
                                zmm0.d = zmm1.d f* 2.3889859e-08f
                                zmm5_1[0] = 2.75255616e-06f f- zmm0.d
                                zmm0.d = zmm1.d f* 2.60516146e-07f
                                zmm5_1[0] = zmm5_1[0] * zmm1[0]
                                zmm4_1.d = 2.47604949e-05f f- zmm0.d
                                zmm5_1[0] = zmm5_1[0] - 0.000198408743f
                                zmm4_1.d = zmm4_1.d f* zmm1[0]
                                zmm4_1.d = zmm4_1.d f- 0.00138883782f
                                zmm5_1[0] = zmm5_1[0] * zmm1[0]
                                zmm5_1[0] = zmm5_1[0] + 0.00833333097f
                                zmm4_1.d = zmm4_1.d f* zmm1[0]
                                zmm4_1.d = zmm4_1.d f+ 0.0416666381f
                                zmm5_1[0] = zmm5_1[0] * zmm1[0]
                                zmm5_1[0] = zmm5_1[0] - 0.166666672f
                                zmm4_1.d = zmm4_1.d f* zmm1[0]
                                zmm4_1.d = zmm4_1.d f- 0.5f
                                zmm5_1[0] = zmm5_1[0] * zmm1[0]
                                zmm5_1[0] = zmm5_1[0] + 1f
                                zmm4_1.d = zmm4_1.d f* zmm1[0]
                                zmm4_1.d = zmm4_1.d f+ 1f
                                zmm5_1[0] = zmm5_1[0] f* zmm2.d
                                zmm4_1.d = zmm4_1.d f* zmm3[0]
                                zmm2.d = zmm5_1.d f* var_408_2
                                zmm5_1[0] = zmm5_1[0] * var_418_2
                                zmm8[0] = zmm8[0] f* zmm2.d
                                zmm10[0] = zmm10[0] * zmm5_1[0]
                                zmm9.d = zmm5_1.d f* zmm6[0]
                                zmm8[0] = zmm8[0] - zmm10[0]
                                zmm0.d = zmm2.d f* zmm6[0]
                                zmm5_1[0] = zmm5_1[0] * zmm15[0]
                                zmm8[0] = zmm8[0] + zmm8[0]
                                zmm7[0] = zmm7[0] * zmm5_1[0]
                                zmm11[0] = zmm11[0] * zmm5_1[0]
                                zmm7[0] = zmm7[0] f- zmm0.d
                                zmm8[0] = zmm8[0] f* zmm4_1.d
                                zmm9.d = zmm9.d f- zmm11[0]
                                zmm14.d = zmm8.d f* zmm5_1[0]
                                zmm7[0] = zmm7[0] + zmm7[0]
                                zmm8[0] = zmm8[0] f* zmm2.d
                                zmm8[0] = zmm8[0] + zmm6[0]
                                zmm9.d = zmm9.d f+ zmm9.d
                                zmm10 = zmm7
                                zmm10[0] = zmm10[0] f* zmm2.d
                                zmm0.d = zmm9.d f* zmm5_1[0]
                                zmm10[0] = zmm10[0] f- zmm0.d
                                zmm0.d = zmm7.d f* zmm5_1[0]
                                zmm7[0] = zmm7[0] f* zmm4_1.d
                                zmm10[0] = zmm10[0] + zmm8[0]
                                zmm1 = zmm9
                                zmm9.d = zmm9.d f* zmm5_1[0]
                                zmm14.d = zmm14.d f- zmm0.d
                                zmm1[0] = zmm1[0] f* zmm4_1.d
                                zmm7[0] = zmm7[0] + zmm13[0]
                                zmm9.d = zmm9.d f- zmm8[0]
                                zmm1[0] = zmm1[0] + zmm12[0]
                                zmm9.d = zmm9.d f+ zmm7[0]
                                zmm14.d = zmm14.d f+ zmm1[0]
                            
                            zmm15 = 0x3f800000
                            zmm0 = 0x3f800000
                            float var_410_2 = 1f
                            
                            if (*(arg1 + 0x180) != 0)
                                zmm0 = *var_300_1
                                var_410_2 = zmm0.d
                            
                            zmm7 = var_384_1
                            int32_t r10_1 = 0
                            zmm8 = zx.o(var_3c8_1)
                            zmm3 = zx.o(var_380_1.q)
                            *(rbx + 0x10) = zmm3.q
                            *(rbx + 0x20) = zmm7[0]
                            *(rbx + 0x24) = zmm7[0]
                            *(rbx + 0x18) = var_378_1
                            *(rbx + 0x1c) = 0
                            *(rbx + 0x40) = 0
                            zmm7[0] = zmm7[0] * zmm10[0]
                            int32_t var_408_3 = 0
                            zmm10 = arg_20
                            zmm4_1.d = zmm7.d f* zmm9.d
                            zmm9 = arg_18
                            zmm7[0] = zmm7[0] f* zmm0.d
                            zmm4_1.d = zmm4_1.d f* zmm0.d
                            zmm8[0] = zmm8[0] + zmm7[0]
                            zmm7[0] = zmm7[0] f* zmm14.d
                            zmm7[0] = zmm7[0] f* zmm0.d
                            zmm0.d = zmm10.d f+ zmm4_1.d
                            zmm2.d = zmm9.d f+ zmm7[0]
                            *rbx = (_mm_unpacklo_ps(zmm8, zmm2.q)).q
                            zmm2.d = zmm9.d f- zmm7[0]
                            *(rbx + 8) = zmm0.d
                            int32_t rax_16 = *(rsi_2 + 0x2c)
                            zmm8[0] = zmm8[0] - zmm7[0]
                            *(rbx + 0x28) = rax_16
                            *(rbx + 0x30) = *(rsi_2 + 0x60)
                            *(rbx + 0x6c) = 0
                            *(rbx + 0x60) = zmm3.q
                            *(rbx + 0x70) = zmm7[0]
                            zmm0.d = zmm10.d f- zmm4_1.d
                            *(rbx + 0x74) = zmm7[0]
                            *(rbx + 0x68) = var_378_1
                            *(rbx + 0x90) = 0
                            *(rbx + 0x94) = 0x3f800000
                            *(rbx + 0x50) = (_mm_unpacklo_ps(zmm8, zmm2.q)).q
                            *(rbx + 0x58) = zmm0.d
                            *(rbx + 0x78) = *(rsi_2 + 0x2c)
                            *(rbx + 0x80) = *(rsi_2 + 0x60)
                            rbx += 0xa0
                            int32_t rax_19 = r12_2[0xa].d
                            float var_404_2 = var_3a8.d
                            int64_t var_288
                            
                            if (rax_19 s> 0)
                                int32_t rsi_3 = 0
                                int32_t var_3fc_2 = 0
                                int32_t r11_1 = 0
                                int32_t var_40c_3 = 0
                                float (* r8_2)[0x4] = &r13_1[1]
                                int32_t var_1fc_1 = 0
                                int64_t r15_2 = r15_1 - r13_1
                                
                                while (true)
                                    zmm1 = var_3d8_1
                                    int64_t rdx_2 = sx.q(r11_1)
                                    zmm10 = zmm1
                                    int64_t rcx_13 = rdx_2 * 3
                                    
                                    if (r10_1 != rax_19 - 1)
                                        zmm9 = var_3d4_1
                                        int64_t rax_21 = rdx_2 * 3
                                        zmm10[0] = zmm10[0] f* *(r14_1 + (rax_21 << 2) + 0xc)
                                        zmm0.d = zmm9.d f* *(r14_1 + (rcx_13 << 2))
                                        zmm11 = zmm9
                                        zmm11[0] = zmm11[0] f* *(r14_1 + (rcx_13 << 2) + 4)
                                        zmm9.d = zmm9.d f* *(r14_1 + (rcx_13 << 2) + 8)
                                        zmm10[0] = zmm10[0] f+ zmm0.d
                                        zmm0.d = zmm1.d f* *(r14_1 + (rax_21 << 2) + 0x10)
                                        zmm11[0] = zmm11[0] f+ zmm0.d
                                        zmm0.d = zmm1.d f* *(r14_1 + (rax_21 << 2) + 0x14)
                                    else
                                        zmm2 = var_3d4_1
                                        zmm11 = zmm1
                                        zmm10[0] = zmm10[0] f* *(r12_2 + 0x1c)
                                        zmm0.d = zmm2.d f* *(r14_1 + (rcx_13 << 2))
                                        zmm11[0] = zmm11[0] f* r12_2[4].d
                                        zmm9.d = zmm1.d f* *(r12_2 + 0x24)
                                        zmm10[0] = zmm10[0] f+ zmm0.d
                                        zmm0.d = zmm2.d f* *(r14_1 + (rcx_13 << 2) + 4)
                                        zmm11[0] = zmm11[0] f+ zmm0.d
                                        zmm0.d = zmm2.d f* *(r14_1 + (rcx_13 << 2) + 8)
                                    
                                    zmm5_1 = zx.o(0)
                                    zmm9.d = zmm9.d f+ zmm0.d
                                    
                                    if (zmm5_1[0] f> *(arg1 + 0x16c) || *(arg1 + 0x146) == 0)
                                        zmm4_1 = 0x7fffffff
                                    else
                                        zmm3 = *(r8_2 + r15_2 - 8)
                                        zmm13 = *(r8_2 + r15_2 - 0x10)
                                        zmm7 = zmm3
                                        zmm7[0] = zmm7[0] - (*r8_2)[-2]
                                        zmm12 = *(r8_2 + r15_2 - 0xc)
                                        zmm8 = zmm13
                                        zmm14 = r8_2[-1][0]
                                        zmm6 = zmm12
                                        zmm15 = (*r8_2)[-3]
                                        zmm8[0] = zmm8[0] f- zmm14.d
                                        zmm6[0] = zmm6[0] - zmm15[0]
                                        float var_418_4 = zmm3[0]
                                        zmm7[0] = zmm7[0] * zmm7[0]
                                        zmm0.d = zmm8.d f* zmm8[0]
                                        zmm2.d = zmm6.d f* zmm6[0]
                                        zmm2.d = zmm2.d f+ zmm0.d
                                        zmm2.d = zmm2.d f+ zmm7[0]
                                        
                                        if (not(zmm2.d f<= 9.99999994e-09f))
                                            zmm3 = zmm2
                                            float temp0_34[0x4] = _mm_rsqrt_ss(zmm2[0], zmm3[0])
                                            zmm3[0] = zmm3[0] * 0.5f
                                            zmm0.d = temp0_34.d f* temp0_34[0]
                                            zmm3[0] = zmm3[0] f* zmm0.d
                                            zmm2.d = 0.5f - zmm3[0]
                                            zmm0.d = temp0_34.d f* zmm2.d
                                            temp0_34[0] = temp0_34[0] f+ zmm0.d
                                            temp0_34[0] = temp0_34[0] * temp0_34[0]
                                            zmm3[0] = zmm3[0] * temp0_34[0]
                                            zmm4_1.d = 0.5f - zmm3[0]
                                            zmm3 = var_418_4
                                            zmm0.d = temp0_34.d f* zmm4_1.d
                                            temp0_34[0] = temp0_34[0] f+ zmm0.d
                                            float var_414_2 = temp0_34[0]
                                            zmm0.d = temp0_34.d f* zmm8[0]
                                            temp0_34[0] = temp0_34[0] * zmm7[0]
                                            temp0_34[0] = temp0_34[0] * zmm6[0]
                                            zmm8 = zmm0
                                            zmm7 = temp0_34
                                            zmm5_1 = zx.o(0)
                                            zmm6 = temp0_34
                                        
                                        zmm8[0] = zmm8[0] f* *(arg1 + 0x160)
                                        zmm0 = *r9_1
                                        zmm6[0] = zmm6[0] f* *(arg1 + 0x164)
                                        zmm7[0] = zmm7[0] f* *(arg1 + 0x168)
                                        zmm4_1 = 0x7fffffff
                                        zmm8[0] = zmm8[0] f* zmm0.d
                                        zmm6[0] = zmm6[0] f* zmm0.d
                                        zmm8[0] = zmm8[0] f+ zmm14.d
                                        zmm7[0] = zmm7[0] f* zmm0.d
                                        zmm0 = *(arg1 + 0x170)
                                        zmm6[0] = zmm6[0] + zmm15[0]
                                        zmm7[0] = zmm7[0] + (*r8_2)[-2]
                                        float var_3f8_2 = zmm8[0]
                                        zmm8[0] = zmm8[0] - zmm13[0]
                                        float var_3f4_2 = zmm6[0]
                                        float var_3f0_2 = zmm7[0]
                                        
                                        if (_mm_and_ps(zmm8, 0x7fffffff)[0] f>= zmm0.d)
                                            r8_2[-1][0].q = var_3f8_2.q
                                            (*r8_2)[-2] = var_3f0_2
                                        else
                                            zmm6[0] = zmm6[0] - zmm12[0]
                                            
                                            if (_mm_and_ps(zmm6, 0x7fffffff)[0] f>= zmm0.d)
                                                r8_2[-1][0].q = var_3f8_2.q
                                                (*r8_2)[-2] = var_3f0_2
                                            else
                                                zmm7[0] = zmm7[0] - zmm3[0]
                                                
                                                if (_mm_and_ps(zmm7, 0x7fffffff)[0] f>= zmm0.d)
                                                    r8_2[-1][0].q = var_3f8_2.q
                                                    (*r8_2)[-2] = var_3f0_2
                                                else
                                                    r8_2[-1][0].q = *(r8_2 + r15_2 - 0x10)
                                                    (*r8_2)[-2] = *(r8_2 + r15_2 - 8)
                                    
                                    zmm6 = var_3e8_1
                                    zmm0.d = zmm6.d f* r8_2[-1][0]
                                    int32_t r9_2 = r12_2[0xa].d
                                    zmm6[0] = zmm6[0] * (*r8_2)[-3]
                                    int64_t var_338_2 = 0
                                    zmm2.d = zmm6.d f* (*r8_2)[-2]
                                    float var_208[0x4]
                                    var_208[0] = zmm0.d
                                    int32_t var_330_2 = 0
                                    float temp0_38[0x4] = _mm_shuffle_ps(var_208, var_208, 0xe1)
                                    temp0_38[0] = zmm6[0]
                                    float temp0_39[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xc6)
                                    temp0_39[0] = zmm2.d
                                    zmm2 = var_3d4_1
                                    float temp0_40[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xc9)
                                    var_208 = temp0_40
                                    zmm14 = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(temp0_40, temp0_40, 0xff), var_2c8)
                                    zmm0 = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(temp0_40, temp0_40, 0xaa), var_2b8)
                                    float temp0_46[0x4] = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(temp0_40, temp0_40, 0x55), var_2a8)
                                    zmm3 = var_3e0_1
                                    zmm14 = _mm_add_ps(_mm_add_ps(zmm14, zmm0), 
                                        _mm_add_ps(temp0_46, 
                                            __mulps_xmmps_memps(
                                                _mm_shuffle_ps(temp0_40, temp0_40, 0), var_298)))
                                    zmm1 = var_3d8_1
                                    zmm0 = zmm14
                                    zmm15 = _mm_shuffle_ps(zmm14, zmm14, 0x55)
                                    zmm14 = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
                                    zmm0.d = zmm0.d f* zmm3[0]
                                    zmm14.d = zmm14.d f* zmm3[0]
                                    zmm0.d = zmm0.d f+ zmm10[0]
                                    zmm15[0] = zmm15[0] * zmm3[0]
                                    zmm14.d = zmm14.d f+ zmm9.d
                                    zmm9 = zmm1
                                    zmm15[0] = zmm15[0] + zmm11[0]
                                    int32_t var_418_5 = zmm0.d
                                    var_358_1.o = zmm14
                                    var_338_2.o = zmm15
                                    int64_t rax_27
                                    
                                    if (r10_1 != r9_2 - 1)
                                        int64_t rcx_15 = sx.q(rcx_9 + r11_1)
                                        int64_t rdx_3 = rcx_15 * 3
                                        zmm0.d = zmm2.d f* *(r14_1 + (rdx_3 << 2) + 0xc)
                                        rax_27 = rcx_15 * 3
                                        zmm9.d = zmm9.d f* *(r14_1 + (rax_27 << 2))
                                        zmm1[0] = zmm1[0] f* *(r14_1 + (rax_27 << 2) + 4)
                                        zmm9.d = zmm9.d f+ zmm0.d
                                        zmm0.d = zmm2.d f* *(r14_1 + (rdx_3 << 2) + 0x10)
                                        zmm1[0] = zmm1[0] f+ zmm0.d
                                        zmm0.d = zmm2.d f* *(r14_1 + (rdx_3 << 2) + 0x14)
                                    else
                                        zmm0.d = zmm2.d f* *(r12_2 + 0x1c)
                                        rax_27 = sx.q(rcx_9 + r11_1) * 3
                                        zmm9.d = zmm9.d f* *(r14_1 + (rax_27 << 2))
                                        zmm1[0] = zmm1[0] f* *(r14_1 + (rax_27 << 2) + 4)
                                        zmm9.d = zmm9.d f+ zmm0.d
                                        zmm0.d = zmm2.d f* r12_2[4].d
                                        zmm1[0] = zmm1[0] f+ zmm0.d
                                        zmm0.d = zmm2.d f* *(r12_2 + 0x24)
                                    
                                    zmm1[0] = zmm1[0] f* *(r14_1 + (rax_27 << 2) + 8)
                                    zmm1[0] = zmm1[0] f+ zmm0.d
                                    int64_t var_2d8
                                    
                                    if (rax_7 == 0 || r10_1 + 1 != r9_2)
                                        if (not(zmm5_1[0] f> *(arg1 + 0x16c))
                                                && *(arg1 + 0x146) != 0)
                                            zmm3 = *(r8_2 + r15_2 + 4)
                                            zmm13 = *(r8_2 + r15_2 - 4)
                                            zmm7 = zmm3
                                            zmm7[0] = zmm7[0] - (*r8_2)[1]
                                            zmm12 = *(r8_2 + r15_2)
                                            zmm8 = zmm13
                                            zmm14 = (*r8_2)[-1]
                                            zmm6 = zmm12
                                            zmm15 = *r8_2
                                            zmm8[0] = zmm8[0] f- zmm14.d
                                            zmm6[0] = zmm6[0] - zmm15[0]
                                            float var_414_3 = zmm3[0]
                                            zmm7[0] = zmm7[0] * zmm7[0]
                                            zmm0.d = zmm8.d f* zmm8[0]
                                            zmm2.d = zmm6.d f* zmm6[0]
                                            zmm2.d = zmm2.d f+ zmm0.d
                                            zmm2.d = zmm2.d f+ zmm7[0]
                                            
                                            if (not(zmm2.d f<= 9.99999994e-09f))
                                                zmm3 = zmm2
                                                float temp0_74[0x4] = _mm_rsqrt_ss(zmm2[0], zmm3[0])
                                                zmm3[0] = zmm3[0] * 0.5f
                                                zmm0.d = temp0_74.d f* temp0_74[0]
                                                zmm3[0] = zmm3[0] f* zmm0.d
                                                zmm2.d = 0.5f - zmm3[0]
                                                zmm0.d = temp0_74.d f* zmm2.d
                                                temp0_74[0] = temp0_74[0] f+ zmm0.d
                                                temp0_74[0] = temp0_74[0] * temp0_74[0]
                                                zmm3[0] = zmm3[0] * temp0_74[0]
                                                zmm4_1.d = 0.5f - zmm3[0]
                                                zmm3 = var_414_3
                                                zmm0.d = temp0_74.d f* zmm4_1.d
                                                zmm4_1 = 0x7fffffff
                                                temp0_74[0] = temp0_74[0] f+ zmm0.d
                                                float var_400_2 = temp0_74[0]
                                                zmm0.d = temp0_74.d f* zmm8[0]
                                                temp0_74[0] = temp0_74[0] * zmm6[0]
                                                temp0_74[0] = temp0_74[0] * zmm7[0]
                                                zmm8 = zmm0
                                                zmm6 = temp0_74
                                                zmm7 = temp0_74
                                            
                                            zmm8[0] = zmm8[0] f* *(arg1 + 0x160)
                                            zmm6[0] = zmm6[0] f* *(arg1 + 0x164)
                                            zmm7[0] = zmm7[0] f* *(arg1 + 0x168)
                                            zmm0 = *var_3c0_1
                                            zmm8[0] = zmm8[0] f* zmm0.d
                                            zmm6[0] = zmm6[0] f* zmm0.d
                                            zmm8[0] = zmm8[0] f+ zmm14.d
                                            zmm7[0] = zmm7[0] f* zmm0.d
                                            zmm0 = *(arg1 + 0x170)
                                            zmm6[0] = zmm6[0] + zmm15[0]
                                            zmm7[0] = zmm7[0] + (*r8_2)[1]
                                            float var_3f8_4 = zmm8[0]
                                            zmm8[0] = zmm8[0] - zmm13[0]
                                            float var_3f4_4 = zmm6[0]
                                            float var_3f0_4 = zmm7[0]
                                            float rax_35
                                            
                                            if (_mm_and_ps(zmm8, zmm4_1)[0] f>= zmm0.d)
                                                rax_35 = var_3f0_4
                                                *(r8_2 - 4) = var_3f8_4.q
                                            else
                                                zmm6[0] = zmm6[0] - zmm12[0]
                                                
                                                if (_mm_and_ps(zmm6, zmm4_1)[0] f>= zmm0.d)
                                                    rax_35 = var_3f0_4
                                                    *(r8_2 - 4) = var_3f8_4.q
                                                else
                                                    zmm7[0] = zmm7[0] - zmm3[0]
                                                    
                                                    if (_mm_and_ps(zmm7, zmm4_1)[0] f>= zmm0.d)
                                                        rax_35 = var_3f0_4
                                                        *(r8_2 - 4) = var_3f8_4.q
                                                    else
                                                        *(r8_2 - 4) = *(r8_2 + r15_2 - 4)
                                                        rax_35 = *(r8_2 + r15_2 + 4)
                                            
                                            zmm6 = var_3e8_1
                                            zmm15 = var_338_2.o
                                            zmm14 = var_358_1.o
                                            (*r8_2)[1] = rax_35
                                        
                                        zmm8 = var_3cc_1
                                        zmm0.d = zmm6.d f* (*r8_2)[-1]
                                        int32_t var_1cc_1 = 0
                                        zmm6[0] = zmm6[0] * *r8_2
                                        var_2d8 = 0
                                        zmm2.d = zmm6.d f* (*r8_2)[1]
                                        float var_1d8[0x4]
                                        var_1d8[0] = zmm0.d
                                        int32_t var_2d0_2 = 0
                                        float temp0_78[0x4] = _mm_shuffle_ps(var_1d8, var_1d8, 0xe1)
                                        temp0_78[0] = zmm6[0]
                                        float temp0_79[0x4] =
                                            _mm_shuffle_ps(temp0_78, temp0_78, 0xc6)
                                        temp0_79[0] = zmm2.d
                                        float temp0_80[0x4] =
                                            _mm_shuffle_ps(temp0_79, temp0_79, 0xc9)
                                        var_1d8 = temp0_80
                                        float temp0_82[0x4] = __mulps_xmmps_memps(
                                            _mm_shuffle_ps(temp0_80, temp0_80, 0xff), var_2c8)
                                        zmm0 = __mulps_xmmps_memps(
                                            _mm_shuffle_ps(temp0_80, temp0_80, 0xaa), var_2b8)
                                        float temp0_86[0x4] = __mulps_xmmps_memps(
                                            _mm_shuffle_ps(temp0_80, temp0_80, 0x55), var_2a8)
                                        float temp0_87[0x4] = _mm_add_ps(temp0_82, zmm0)
                                        zmm0 = var_3e0_1
                                        float temp0_91[0x4] = _mm_add_ps(temp0_87, 
                                            _mm_add_ps(temp0_86, 
                                                __mulps_xmmps_memps(
                                                    _mm_shuffle_ps(temp0_80, temp0_80, 0), 
                                                    var_298)))
                                        zmm7 = temp0_91
                                        zmm12 = _mm_shuffle_ps(temp0_91, temp0_91, 0x55)
                                        zmm13 = _mm_shuffle_ps(temp0_91, temp0_91, 0xaa)
                                        zmm13[0] = zmm13[0] f* zmm0.d
                                        zmm7[0] = zmm7[0] f* zmm0.d
                                        zmm12[0] = zmm12[0] f* zmm0.d
                                        zmm13[0] = zmm13[0] + zmm1[0]
                                        zmm7[0] = zmm7[0] f+ zmm9.d
                                        zmm12[0] = zmm12[0] + zmm1[0]
                                    else
                                        int32_t rax_30 = *(r12_2 + 0x24)
                                        uint64_t var_3b8_1 = *(r12_2 + 0x1c)
                                        
                                        if (*(arg1 + 0x149) == 0)
                                            zmm8 = *(arg1 + 0x15c)
                                            zmm13 = rax_30
                                            zmm12 = var_3b8_1:4.d
                                            zmm7 = var_3b8_1.d
                                            var_3cc_1 = zmm8[0]
                                        else
                                            if (not(zmm5_1[0] f> *(arg1 + 0x16c))
                                                    && *(arg1 + 0x146) != 0)
                                                int64_t rcx_16 = sx.q(*(arg1 + 0x150)) * 3
                                                zmm11 = *(r13_1 + (rcx_16 << 2))
                                                zmm12 = *(r13_1 + (rcx_16 << 2) + 4)
                                                zmm13 = *(r13_1 + (rcx_16 << 2) + 8)
                                                zmm10 = (*var_2f8_1)[rcx_16]
                                                zmm9 = (*var_2f8_1)[rcx_16 + 1]
                                                zmm8 = zmm10
                                                zmm14 = (*var_2f8_1)[rcx_16 + 2]
                                                zmm8[0] = zmm8[0] - zmm11[0]
                                                zmm6 = zmm9
                                                zmm7 = zmm14
                                                zmm6[0] = zmm6[0] - zmm12[0]
                                                zmm7[0] = zmm7[0] - zmm13[0]
                                                zmm0.d = zmm8.d f* zmm8[0]
                                                zmm2.d = zmm6.d f* zmm6[0]
                                                zmm7[0] = zmm7[0] * zmm7[0]
                                                zmm2.d = zmm2.d f+ zmm0.d
                                                zmm2.d = zmm2.d f+ zmm7[0]
                                                
                                                if (not(zmm2.d f<= 9.99999994e-09f))
                                                    zmm3 = zmm2
                                                    float temp0_54[0x4] =
                                                        _mm_rsqrt_ss(zmm2[0], zmm3[0])
                                                    zmm3[0] = zmm3[0] * 0.5f
                                                    zmm0.d = temp0_54.d f* temp0_54[0]
                                                    zmm3[0] = zmm3[0] f* zmm0.d
                                                    zmm2.d = 0.5f - zmm3[0]
                                                    zmm0.d = temp0_54.d f* zmm2.d
                                                    temp0_54[0] = temp0_54[0] f+ zmm0.d
                                                    temp0_54[0] = temp0_54[0] * temp0_54[0]
                                                    zmm3[0] = zmm3[0] * temp0_54[0]
                                                    zmm4_1.d = 0.5f - zmm3[0]
                                                    zmm0.d = temp0_54.d f* zmm4_1.d
                                                    zmm4_1 = 0x7fffffff
                                                    temp0_54[0] = temp0_54[0] f+ zmm0.d
                                                    float var_3cc_2 = temp0_54[0]
                                                    zmm0.d = temp0_54.d f* zmm8[0]
                                                    temp0_54[0] = temp0_54[0] * zmm6[0]
                                                    temp0_54[0] = temp0_54[0] * zmm7[0]
                                                    zmm8 = zmm0
                                                    zmm6 = temp0_54
                                                    zmm7 = temp0_54
                                                
                                                zmm8[0] = zmm8[0] f* *(arg1 + 0x160)
                                                zmm6[0] = zmm6[0] f* *(arg1 + 0x164)
                                                zmm7[0] = zmm7[0] f* *(arg1 + 0x168)
                                                zmm0 = *var_3c0_1
                                                zmm8[0] = zmm8[0] f* zmm0.d
                                                zmm6[0] = zmm6[0] f* zmm0.d
                                                zmm8[0] = zmm8[0] + zmm11[0]
                                                zmm7[0] = zmm7[0] f* zmm0.d
                                                zmm0 = *(arg1 + 0x170)
                                                zmm6[0] = zmm6[0] + zmm12[0]
                                                zmm7[0] = zmm7[0] + zmm13[0]
                                                float var_3f8_3 = zmm8[0]
                                                zmm8[0] = zmm8[0] - zmm10[0]
                                                float var_3f4_3 = zmm6[0]
                                                float var_3f0_3 = zmm7[0]
                                                float rax_33
                                                
                                                if (_mm_and_ps(zmm8, zmm4_1)[0] f>= zmm0.d)
                                                    rax_33 = var_3f0_3
                                                    *(r13_1 + (rcx_16 << 2)) = var_3f8_3.q
                                                else
                                                    zmm6[0] = zmm6[0] f- zmm9.d
                                                    
                                                    if (_mm_and_ps(zmm6, zmm4_1)[0] f>= zmm0.d)
                                                        rax_33 = var_3f0_3
                                                        *(r13_1 + (rcx_16 << 2)) = var_3f8_3.q
                                                    else
                                                        zmm7[0] = zmm7[0] f- zmm14.d
                                                        
                                                        if (_mm_and_ps(zmm7, zmm4_1)[0] f>= zmm0.d)
                                                            rax_33 = var_3f0_3
                                                            *(r13_1 + (rcx_16 << 2)) = var_3f8_3.q
                                                        else
                                                            *(r13_1 + (rcx_16 << 2)) =
                                                                *(var_2f8_1 + (rcx_16 << 2))
                                                            rax_33 = (*var_2f8_1)[rcx_16 + 2]
                                                
                                                zmm14 = var_358_1.o
                                                *(r13_1 + (rcx_16 << 2) + 8) = rax_33
                                            
                                            zmm4_1 = var_3e8_1
                                            zmm7 = var_3b8_1.d
                                            zmm1 = zmm4_1
                                            zmm12 = var_3b8_1:4.d
                                            zmm13 = rax_30
                                            zmm8 = *(arg1 + 0x15c)
                                            int64_t rcx_17 = sx.q(*(arg1 + 0x150)) * 3
                                            zmm1[0] = zmm1[0] f* *(r13_1 + (rcx_17 << 2) + 4)
                                            int32_t var_1dc_1 = 0
                                            zmm2.d = zmm4_1.d f* *(r13_1 + (rcx_17 << 2) + 8)
                                            var_2d8 = 0
                                            zmm0.d = zmm4_1.d f* *(r13_1 + (rcx_17 << 2))
                                            int32_t var_2d0_1 = 0
                                            var_3cc_1 = zmm8[0]
                                            float var_1e8[0x4]
                                            var_1e8[0] = zmm0.d
                                            float temp0_58[0x4] =
                                                _mm_shuffle_ps(var_1e8, var_1e8, 0xe1)
                                            temp0_58[0] = zmm1[0]
                                            float temp0_59[0x4] =
                                                _mm_shuffle_ps(temp0_58, temp0_58, 0xc6)
                                            temp0_59[0] = zmm2.d
                                            float temp0_60[0x4] =
                                                _mm_shuffle_ps(temp0_59, temp0_59, 0xc9)
                                            var_1e8 = temp0_60
                                            zmm2 = __mulps_xmmps_memps(
                                                _mm_shuffle_ps(temp0_60, temp0_60, 0xff), var_2c8)
                                            float temp0_64[0x4] = __mulps_xmmps_memps(
                                                _mm_shuffle_ps(temp0_60, temp0_60, 0x55), var_2a8)
                                            zmm0 = __mulps_xmmps_memps(
                                                _mm_shuffle_ps(temp0_60, temp0_60, 0xaa), var_2b8)
                                            float temp0_68[0x4] = __mulps_xmmps_memps(
                                                _mm_shuffle_ps(temp0_60, temp0_60, 0), var_298)
                                            zmm3 = var_3e0_1
                                            zmm2 = _mm_add_ps(_mm_add_ps(zmm2, zmm0), 
                                                _mm_add_ps(temp0_64, temp0_68))
                                            zmm0 = zmm2
                                            float temp0_72[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                                            zmm2.d = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d f* zmm3[0]
                                            zmm0.d = zmm0.d f* zmm3[0]
                                            temp0_72[0] = temp0_72[0] * zmm3[0]
                                            zmm13[0] = zmm13[0] f+ zmm2.d
                                            zmm7[0] = zmm7[0] f+ zmm0.d
                                            zmm12[0] = zmm12[0] + temp0_72[0]
                                    
                                    zmm0.d = 1f f- *(arg1 + 0x174)
                                    zmm6 = zx.o(var_3c8_1)
                                    zmm9 = arg_18
                                    zmm7[0] = zmm7[0] - zmm6[0]
                                    zmm10 = 0x3f000000
                                    zmm12[0] = zmm12[0] f- zmm9.d
                                    zmm11 = arg_20
                                    zmm0.d = zmm0.d f* 0.5f
                                    zmm13[0] = zmm13[0] - zmm11[0]
                                    zmm12[0] = zmm12[0] f* zmm0.d
                                    zmm13[0] = zmm13[0] f* zmm0.d
                                    zmm7[0] = zmm7[0] f* zmm0.d
                                    zmm2.d = zmm12.d f* zmm12[0]
                                    zmm13[0] = zmm13[0] * zmm13[0]
                                    zmm0.d = zmm7.d f* zmm7[0]
                                    zmm2.d = zmm2.d f+ zmm0.d
                                    zmm2.d = zmm2.d f+ zmm13[0]
                                    
                                    if (not(zmm2.d f<= 9.99999994e-09f))
                                        zmm3 = zx.o(0)
                                        zmm3[0] = zmm2.d
                                        float temp0_94[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                                        zmm3[0] = zmm3[0] * 0.5f
                                        zmm0.d = temp0_94.d f* temp0_94[0]
                                        zmm3[0] = zmm3[0] f* zmm0.d
                                        zmm2.d = 0.5f - zmm3[0]
                                        zmm0.d = temp0_94.d f* zmm2.d
                                        temp0_94[0] = temp0_94[0] f+ zmm0.d
                                        temp0_94[0] = temp0_94[0] * temp0_94[0]
                                        zmm3[0] = zmm3[0] * temp0_94[0]
                                        zmm4_1.d = 0.5f - zmm3[0]
                                        zmm0.d = temp0_94.d f* zmm4_1.d
                                        temp0_94[0] = temp0_94[0] f+ zmm0.d
                                        float var_414_4 = temp0_94[0]
                                        zmm0.d = temp0_94.d f* zmm7[0]
                                        temp0_94[0] = temp0_94[0] * zmm12[0]
                                        temp0_94[0] = temp0_94[0] * zmm13[0]
                                        zmm7 = zmm0
                                        zmm12 = temp0_94
                                        zmm13 = temp0_94
                                    
                                    int64_t rax_36 = sx.q(r8)
                                    zmm7[0] = zmm7[0] * zmm8[0]
                                    zmm12[0] = zmm12[0] * zmm8[0]
                                    zmm13[0] = zmm13[0] * zmm8[0]
                                    zmm8 = zmm6
                                    var_288.o = zmm7
                                    zmm6 = zmm9
                                    var_2d8.o = zmm12
                                    zmm9 = zmm11
                                    
                                    if (rax_36.d s> 0)
                                        void* r9_3 = rbx + 0x30
                                        void* rdx_6 = rbx + 0x10
                                        int32_t r11_2 = 1
                                        int64_t rsi_4 = rax_36
                                        void* r10_3 = var_300_1 + (sx.q(rsi_3) << 2)
                                        
                                        while (true)
                                            float var_380_2 = zmm8[0]
                                            zmm2.d = float.s(r11_2)
                                            float var_37c_2 = zmm6[0]
                                            zmm2.d = zmm2.d f* var_344
                                            int32_t var_378_2 = zmm9.d
                                            zmm1 = zmm2
                                            zmm1[0] = zmm1[0] f* zmm2.d
                                            zmm11 = zmm1
                                            zmm0.d = zmm1.d f* 3f
                                            zmm11[0] = zmm11[0] f* zmm2.d
                                            zmm5_1 = zmm0
                                            zmm11[0] = zmm11[0] - zmm1[0]
                                            zmm4_1.d = zmm11.d f+ zmm11[0]
                                            zmm1[0] = zmm1[0] + zmm1[0]
                                            zmm5_1[0] = zmm5_1[0] f- zmm4_1.d
                                            zmm11[0] = zmm11[0] - zmm1[0]
                                            zmm4_1.d = zmm4_1.d f- zmm0.d
                                            zmm11[0] = zmm11[0] * zmm7[0]
                                            zmm11[0] = zmm11[0] f+ zmm2.d
                                            zmm4_1.d = zmm4_1.d f+ 1f
                                            zmm2.d = zmm11.d f* var_390_1
                                            zmm11[0] = zmm11[0] * var_38c_1
                                            zmm11[0] = zmm11[0] * var_388_1
                                            zmm0.d = var_3c8_1.d.d f* zmm4_1.d
                                            zmm2.d = zmm2.d f+ zmm0.d
                                            zmm0.d = zmm5_1.d f* var_418_5
                                            zmm2.d = zmm2.d f+ zmm11[0]
                                            zmm11[0] = zmm11[0] * zmm12[0]
                                            zmm12 = zmm8
                                            zmm11[0] = zmm11[0] * zmm13[0]
                                            zmm2.d = zmm2.d f+ zmm0.d
                                            zmm0.d = arg_18.d f* zmm4_1.d
                                            zmm11[0] = zmm11[0] f+ zmm0.d
                                            int32_t var_414_5 = zmm2.d
                                            zmm12[0] = zmm12[0] f- zmm2.d
                                            int32_t var_370_1 = zmm2.d
                                            zmm5_1[0] = zmm5_1[0] f* zmm14.d
                                            zmm0.d = zmm5_1.d f* zmm15[0]
                                            zmm11[0] = zmm11[0] + zmm11[0]
                                            zmm15 = zmm9
                                            zmm11[0] = zmm11[0] f+ zmm0.d
                                            zmm0.d = arg_20.d f* zmm4_1.d
                                            zmm11[0] = zmm11[0] f+ zmm0.d
                                            float var_400_3 = zmm11[0]
                                            zmm14.d = zmm6.d f- zmm11[0]
                                            float var_36c_1 = zmm11[0]
                                            zmm0.d = zmm12.d f* zmm12[0]
                                            zmm11[0] = zmm11[0] + zmm11[0]
                                            zmm3 = 0x322bcc77
                                            zmm2.d = zmm14.d f* zmm14.d
                                            zmm11[0] = zmm11[0] + zmm5_1[0]
                                            zmm2.d = zmm2.d f+ zmm0.d
                                            zmm15[0] = zmm15[0] - zmm11[0]
                                            float var_368_1 = zmm11[0]
                                            zmm15[0] = zmm15[0] * zmm15[0]
                                            zmm2.d = zmm2.d f+ zmm15[0]
                                            
                                            if (not(zmm2.d f<= 9.99999994e-09f))
                                                zmm4_1 = zmm10
                                                zmm3 = zmm2
                                                float temp0_95[0x4] = _mm_rsqrt_ss(zmm2[0], zmm3[0])
                                                zmm3[0] = zmm3[0] f* zmm4_1.d
                                                zmm0.d = temp0_95.d f* temp0_95[0]
                                                zmm3[0] = zmm3[0] f* zmm0.d
                                                zmm2.d = zmm4_1.d f- zmm3[0]
                                                zmm0.d = temp0_95.d f* zmm2.d
                                                temp0_95[0] = temp0_95[0] f+ zmm0.d
                                                temp0_95[0] = temp0_95[0] * temp0_95[0]
                                                zmm3[0] = zmm3[0] * temp0_95[0]
                                                zmm4_1.d = zmm4_1.d f- zmm3[0]
                                                zmm3 = 0x322bcc77
                                                zmm0.d = temp0_95.d f* zmm4_1.d
                                                temp0_95[0] = temp0_95[0] f+ zmm0.d
                                                float var_3e4_2 = temp0_95[0]
                                                zmm0.d = temp0_95.d f* zmm12[0]
                                                temp0_95[0] = temp0_95[0] f* zmm14.d
                                                temp0_95[0] = temp0_95[0] * zmm15[0]
                                                zmm12 = zmm0
                                                zmm14 = temp0_95
                                                zmm15 = temp0_95
                                            
                                            if (*(arg1 + 0x120) != 0)
                                                zmm9 = var_3dc
                                                zmm10 = arg_10
                                                zmm8 = arg_8
                                            else
                                                zmm6[0] = zmm6[0] f- var_248:4.d
                                                zmm8[0] = zmm8[0] f- var_248.d
                                                zmm9.d = zmm9.d f- var_248:8.d
                                                zmm6[0] = zmm6[0] * zmm12[0]
                                                zmm7 = zmm8
                                                zmm0.d = zmm6.d f* zmm15[0]
                                                zmm5_1 = zmm9
                                                zmm7[0] = zmm7[0] * zmm15[0]
                                                zmm5_1[0] = zmm5_1[0] f* zmm14.d
                                                zmm9.d = zmm9.d f* zmm12[0]
                                                zmm5_1[0] = zmm5_1[0] f- zmm0.d
                                                zmm8[0] = zmm8[0] f* zmm14.d
                                                zmm7[0] = zmm7[0] f- zmm9.d
                                                zmm6[0] = zmm6[0] - zmm8[0]
                                                zmm0.d = zmm5_1.d f* zmm5_1[0]
                                                zmm2.d = zmm7.d f* zmm7[0]
                                                zmm6[0] = zmm6[0] * zmm6[0]
                                                zmm2.d = zmm2.d f+ zmm0.d
                                                zmm2.d = zmm2.d f+ zmm6[0]
                                                
                                                if (zmm2.d f<= zmm3[0])
                                                    zmm0 =
                                                        _mm_unpacklo_ps(var_268.d, var_268:4.d[0].q)
                                                    zmm8 = var_268:8.d.d
                                                    zmm10 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                                                    zmm9 = zmm0.d
                                                else
                                                    zmm3 = zx.o(0)
                                                    zmm4_1 = zmm10
                                                    zmm3[0] = zmm2.d
                                                    zmm8 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                                                    zmm3[0] = zmm3[0] f* zmm4_1.d
                                                    zmm0.d = zmm8.d f* zmm8[0]
                                                    zmm3[0] = zmm3[0] f* zmm0.d
                                                    zmm2.d = zmm4_1.d f- zmm3[0]
                                                    zmm0.d = zmm8.d f* zmm2.d
                                                    zmm8[0] = zmm8[0] f+ zmm0.d
                                                    zmm8[0] = zmm8[0] * zmm8[0]
                                                    zmm3[0] = zmm3[0] * zmm8[0]
                                                    zmm4_1.d = zmm4_1.d f- zmm3[0]
                                                    zmm0.d = zmm8.d f* zmm4_1.d
                                                    zmm8[0] = zmm8[0] f+ zmm0.d
                                                    float var_3e4_3 = zmm8[0]
                                                    zmm10 = zmm8
                                                    zmm9.d = zmm8.d f* zmm5_1[0]
                                                    zmm10[0] = zmm10[0] * zmm7[0]
                                                    zmm8[0] = zmm8[0] * zmm6[0]
                                            
                                            if (j_1 == 0)
                                                zmm14 = zmm9
                                                zmm12 = zmm8
                                                zmm9 = zmm10
                                            else
                                                zmm2.d = 1.57079637f
                                                    f/ _mm_cvtepi32_ps(zx.o(*(arg1 + 0x14c))).d
                                                zmm2.d = zmm2.d f* _mm_cvtepi32_ps(zx.o(j_1))[0]
                                                zmm0.d = zmm2.d f* 0.159154937f
                                                
                                                if (zmm2.d f< 0f)
                                                    zmm0.d = zmm0.d f- 0.5f
                                                else
                                                    zmm0.d = zmm0.d f+ 0.5f
                                                
                                                zmm0.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d))).d
                                                    f* 6.28318548f
                                                zmm2.d = zmm2.d f- zmm0.d
                                                
                                                if (not(zmm2.d f<= 1.57079637f))
                                                    zmm3 = 0xbf800000
                                                    zmm0.d = 3.14159274f f- zmm2.d
                                                    zmm2 = zmm0
                                                else if (zmm2.d f>= -1.57079637f)
                                                    zmm3 = 0x3f800000
                                                else
                                                    zmm3 = 0xbf800000
                                                    zmm0.d = -3.14159274f f- zmm2.d
                                                    zmm2 = zmm0
                                                
                                                zmm7 = 0x3638b88e
                                                zmm1 = zmm2
                                                zmm6 = 0x37cfb4c2
                                                zmm1[0] = zmm1[0] f* zmm2.d
                                                zmm0.d = zmm1.d f* 2.3889859e-08f
                                                zmm7[0] = 2.75255616e-06f f- zmm0.d
                                                zmm0.d = zmm1.d f* 2.60516146e-07f
                                                zmm6[0] = 2.47604949e-05f f- zmm0.d
                                                zmm7[0] = zmm7[0] * zmm1[0]
                                                zmm7[0] = zmm7[0] - 0.000198408743f
                                                zmm6[0] = zmm6[0] * zmm1[0]
                                                zmm6[0] = zmm6[0] - 0.00138883782f
                                                zmm7[0] = zmm7[0] * zmm1[0]
                                                zmm7[0] = zmm7[0] + 0.00833333097f
                                                zmm6[0] = zmm6[0] * zmm1[0]
                                                zmm6[0] = zmm6[0] + 0.0416666381f
                                                zmm7[0] = zmm7[0] * zmm1[0]
                                                zmm7[0] = zmm7[0] - 0.166666672f
                                                zmm6[0] = zmm6[0] * zmm1[0]
                                                zmm7[0] = zmm7[0] * zmm1[0]
                                                zmm6[0] = zmm6[0] - 0.5f
                                                zmm7[0] = zmm7[0] + 1f
                                                zmm6[0] = zmm6[0] * zmm1[0]
                                                zmm6[0] = zmm6[0] + 1f
                                                zmm7[0] = zmm7[0] f* zmm2.d
                                                zmm6[0] = zmm6[0] * zmm3[0]
                                                zmm4_1.d = zmm7.d f* zmm14.d
                                                zmm7[0] = zmm7[0] * zmm15[0]
                                                zmm7[0] = zmm7[0] * zmm12[0]
                                                zmm12 = zmm9
                                                zmm0.d = zmm10.d f* zmm7[0]
                                                zmm12[0] = zmm12[0] * zmm7[0]
                                                zmm2.d = zmm10.d f* zmm7[0]
                                                zmm8[0] = zmm8[0] f* zmm4_1.d
                                                zmm8[0] = zmm8[0] f- zmm0.d
                                                zmm0.d = zmm8.d f* zmm7[0]
                                                zmm12[0] = zmm12[0] f- zmm0.d
                                                zmm0.d = zmm9.d f* zmm4_1.d
                                                zmm8[0] = zmm8[0] + zmm8[0]
                                                zmm2.d = zmm2.d f- zmm0.d
                                                zmm12[0] = zmm12[0] + zmm12[0]
                                                zmm8[0] = zmm8[0] * zmm6[0]
                                                zmm2.d = zmm2.d f+ zmm2.d
                                                zmm8[0] = zmm8[0] f+ zmm9.d
                                                zmm0.d = zmm12.d f* zmm7[0]
                                                zmm9.d = zmm8.d f* zmm7[0]
                                                zmm8[0] = zmm8[0] f* zmm4_1.d
                                                zmm14.d = zmm2.d f* zmm4_1.d
                                                zmm14.d = zmm14.d f- zmm0.d
                                                zmm0.d = zmm2.d f* zmm7[0]
                                                zmm2.d = zmm2.d f* zmm6[0]
                                                zmm14.d = zmm14.d f+ zmm8[0]
                                                zmm12[0] = zmm12[0] * zmm7[0]
                                                zmm9.d = zmm9.d f- zmm0.d
                                                zmm12[0] = zmm12[0] * zmm6[0]
                                                zmm2.d = zmm2.d f+ zmm8[0]
                                                zmm12[0] = zmm12[0] - zmm8[0]
                                                zmm12[0] = zmm12[0] + zmm10[0]
                                                zmm12[0] = zmm12[0] f+ zmm2.d
                                                zmm9.d = zmm9.d f+ zmm12[0]
                                            
                                            if (*(arg1 + 0x180) == 0)
                                                zmm10 = var_410_2
                                            else
                                                zmm10 = *r10_3
                                                var_410_2 = zmm10[0]
                                            
                                            zmm15 = var_384_1
                                            r11_2 += 1
                                            zmm7 = var_400_3
                                            zmm8 = var_414_5
                                            zmm3 = zx.o(var_370_1.q)
                                            r10_3 += 4
                                            *rdx_6 = zmm3.q
                                            *(rbx + 0x20) = zmm15[0]
                                            *(rbx + 0x24) = zmm15[0]
                                            *(rdx_6 + 8) = var_368_1
                                            zmm15[0] = zmm15[0] f* zmm14.d
                                            zmm14 = var_358_1.o
                                            zmm15[0] = zmm15[0] f* zmm9.d
                                            zmm9 = zmm11
                                            zmm15[0] = zmm15[0] * zmm10[0]
                                            zmm15[0] = zmm15[0] * zmm10[0]
                                            zmm4_1.d = zmm15.d f* zmm12[0]
                                            zmm12 = var_2d8.o
                                            zmm15[0] = zmm15[0] + zmm8[0]
                                            zmm4_1.d = zmm4_1.d f* zmm10[0]
                                            zmm2.d = zmm15.d f+ zmm7[0]
                                            zmm10 = var_404_2
                                            *(rbx + 0x40) = zmm10[0]
                                            float temp0_102[0x4] = _mm_unpacklo_ps(zmm15, zmm2.q)
                                            zmm0.d = zmm4_1.d f+ zmm11[0]
                                            *rbx = temp0_102.q
                                            zmm2.d = zmm7.d f- zmm15[0]
                                            zmm8[0] = zmm8[0] - zmm15[0]
                                            zmm6 = zmm7
                                            zmm7 = var_288.o
                                            *(rbx + 8) = zmm0.d
                                            *(rbx + 0x1c) = 0
                                            *(rbx + 0x44) = 0
                                            float temp0_103[0x4] = _mm_unpacklo_ps(zmm8, zmm2.q)
                                            *(rbx + 0x28) = *(var_308_1 + 0x2c)
                                            *r9_3 = *(var_308_1 + 0x60)
                                            *(rbx + 0x6c) = 0
                                            *(rdx_6 + 0x50) = zmm3.q
                                            *(rdx_6 + 0x58) = var_368_1
                                            zmm0.d = zmm11.d f- zmm4_1.d
                                            rdx_6 += 0xa0
                                            *(rbx + 0x50) = temp0_103.q
                                            *(rbx + 0x70) = zmm15[0]
                                            *(rbx + 0x74) = zmm15[0]
                                            zmm15 = var_338_2.o
                                            *(rbx + 0x90) = zmm10[0]
                                            zmm10[0] = zmm10[0] + var_3a8
                                            *(rbx + 0x94) = 0x3f800000
                                            *(rbx + 0x58) = zmm0.d
                                            *(rbx + 0x78) = *(var_308_1 + 0x2c)
                                            rbx += 0xa0
                                            var_404_2 = zmm10[0]
                                            *(r9_3 + 0x50) = *(var_308_1 + 0x60)
                                            r9_3 += 0xa0
                                            int64_t temp0_104 = rsi_4
                                            rsi_4 -= 1
                                            
                                            if (temp0_104 == 1)
                                                break
                                            
                                            zmm10 = 0x3f000000
                                        
                                        r12_2 = var_1a8_1
                                        r10_1 = var_408_3
                                        r11_1 = var_40c_3
                                        rsi_3 = var_3fc_2
                                        rax_36 = zx.q(r8)
                                    
                                    rsi_3 += rax_36.d
                                    r11_1 += rcx_9
                                    r10_1 += 1
                                    rax_19 = r12_2[0xa].d
                                    r8_2 = &(*r8_2)[3]
                                    var_3c8_1 = var_418_5.q
                                    arg_18 = var_338_2.d.d
                                    arg_20 = var_358_1.d
                                    var_390_1 = zmm7[0]
                                    var_38c_1 = zmm12[0]
                                    var_388_1 = zmm13[0]
                                    var_408_3 = r10_1
                                    var_40c_3 = r11_1
                                    var_3fc_2 = rsi_3
                                    
                                    if (r10_1 s>= rax_19)
                                        break
                                    
                                    r9_1 = var_3c0_1
                                
                                zmm15 = 0x3f800000
                                j = j_1
                                rsi_2 = var_308_1
                                r15_1 = var_2f8_1
                            
                            if (rax_7 != 0)
                                int32_t rax_46 = *(r12_2 + 0x24)
                                uint64_t var_328_1 = *(r12_2 + 0x1c)
                                float var_418_7
                                
                                if (*(arg1 + 0x149) == 0)
                                    zmm14 = var_328_1:4.d
                                    zmm13 = var_328_1.d
                                    var_418_7 = rax_46.d
                                else
                                    if (not(0f f> *(arg1 + 0x16c)) && *(arg1 + 0x146) != 0)
                                        int64_t rcx_21 = sx.q(*(arg1 + 0x150)) * 3
                                        zmm10 = (*r15_1)[rcx_21]
                                        zmm9 = (*r15_1)[rcx_21 + 1]
                                        zmm11 = *(r13_1 + (rcx_21 << 2))
                                        zmm6 = zmm9
                                        zmm12 = *(r13_1 + (rcx_21 << 2) + 4)
                                        zmm10[0] = zmm10[0] - zmm11[0]
                                        zmm14 = (*r15_1)[rcx_21 + 2]
                                        zmm6[0] = zmm6[0] - zmm12[0]
                                        zmm13 = *(r13_1 + (rcx_21 << 2) + 8)
                                        zmm7 = zmm14
                                        zmm7[0] = zmm7[0] - zmm13[0]
                                        zmm0.d = zmm10.d f* zmm10[0]
                                        zmm2.d = zmm6.d f* zmm6[0]
                                        zmm7[0] = zmm7[0] * zmm7[0]
                                        zmm2.d = zmm2.d f+ zmm0.d
                                        zmm2.d = zmm2.d f+ zmm7[0]
                                        
                                        if (not(zmm2.d f<= 9.99999994e-09f))
                                            zmm3 = zmm2
                                            float temp0_105[0x4] = _mm_rsqrt_ss(zmm2[0], zmm3[0])
                                            zmm3[0] = zmm3[0] * 0.5f
                                            zmm0.d = temp0_105.d f* temp0_105[0]
                                            zmm3[0] = zmm3[0] f* zmm0.d
                                            zmm2.d = 0.5f - zmm3[0]
                                            zmm0.d = temp0_105.d f* zmm2.d
                                            temp0_105[0] = temp0_105[0] f+ zmm0.d
                                            temp0_105[0] = temp0_105[0] * temp0_105[0]
                                            zmm3[0] = zmm3[0] * temp0_105[0]
                                            zmm4_1.d = 0.5f - zmm3[0]
                                            zmm0.d = temp0_105.d f* zmm4_1.d
                                            temp0_105[0] = temp0_105[0] f+ zmm0.d
                                            float var_418_6 = temp0_105[0]
                                            zmm10[0] = zmm10[0] * temp0_105[0]
                                            zmm6[0] = zmm6[0] * temp0_105[0]
                                            zmm7[0] = zmm7[0] * temp0_105[0]
                                        
                                        zmm10[0] = zmm10[0] f* *(arg1 + 0x160)
                                        zmm6[0] = zmm6[0] f* *(arg1 + 0x164)
                                        zmm7[0] = zmm7[0] f* *(arg1 + 0x168)
                                        zmm0 = *var_3c0_1
                                        zmm10[0] = zmm10[0] f* zmm0.d
                                        zmm6[0] = zmm6[0] f* zmm0.d
                                        zmm10[0] = zmm10[0] + zmm11[0]
                                        zmm7[0] = zmm7[0] f* zmm0.d
                                        zmm0 = *(arg1 + 0x170)
                                        zmm6[0] = zmm6[0] + zmm12[0]
                                        zmm7[0] = zmm7[0] + zmm13[0]
                                        float var_3f8_5 = zmm10[0]
                                        zmm10[0] = zmm10[0] - zmm10[0]
                                        float var_3f4_5 = zmm6[0]
                                        float var_3f0_5 = zmm7[0]
                                        float rax_49
                                        
                                        if (_mm_and_ps(zmm10, 0x7fffffff)[0] f>= zmm0.d)
                                            rax_49 = var_3f0_5
                                            *(r13_1 + (rcx_21 << 2)) = var_3f8_5.q
                                        else
                                            zmm6[0] = zmm6[0] f- zmm9.d
                                            
                                            if (_mm_and_ps(zmm6, 0x7fffffff)[0] f>= zmm0.d)
                                                rax_49 = var_3f0_5
                                                *(r13_1 + (rcx_21 << 2)) = var_3f8_5.q
                                            else
                                                zmm7[0] = zmm7[0] f- zmm14.d
                                                
                                                if (_mm_and_ps(zmm7, 0x7fffffff)[0] f>= zmm0.d)
                                                    rax_49 = var_3f0_5
                                                    *(r13_1 + (rcx_21 << 2)) = var_3f8_5.q
                                                else
                                                    *(r13_1 + (rcx_21 << 2)) =
                                                        *(r15_1 + (rcx_21 << 2))
                                                    rax_49 = (*r15_1)[rcx_21 + 2]
                                        
                                        *(r13_1 + (rcx_21 << 2) + 8) = rax_49
                                    
                                    zmm2 = var_3e8_1
                                    zmm0 = zmm2
                                    zmm1 = zmm2
                                    zmm13 = var_328_1.d
                                    int32_t var_1bc_1 = 0
                                    int64_t rcx_22 = sx.q(*(arg1 + 0x150)) * 3
                                    zmm1[0] = zmm1[0] f* *(r13_1 + (rcx_22 << 2) + 4)
                                    var_288 = 0
                                    zmm2.d = zmm2.d f* *(r13_1 + (rcx_22 << 2) + 8)
                                    int32_t var_280_1 = 0
                                    zmm0.d = zmm0.d f* *(r13_1 + (rcx_22 << 2))
                                    float var_1c8[0x4]
                                    var_1c8[0] = zmm0.d
                                    float temp0_109[0x4] = _mm_shuffle_ps(var_1c8, var_1c8, 0xe1)
                                    temp0_109[0] = zmm1[0]
                                    float temp0_110[0x4] =
                                        _mm_shuffle_ps(temp0_109, temp0_109, 0xc6)
                                    temp0_110[0] = zmm2.d
                                    float temp0_111[0x4] =
                                        _mm_shuffle_ps(temp0_110, temp0_110, 0xc9)
                                    var_1c8 = temp0_111
                                    zmm2 = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(temp0_111, temp0_111, 0xff), var_2c8)
                                    float temp0_115[0x4] = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(temp0_111, temp0_111, 0x55), var_2a8)
                                    zmm0 = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(temp0_111, temp0_111, 0xaa), var_2b8)
                                    float temp0_119[0x4] = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(temp0_111, temp0_111, 0), var_298)
                                    zmm3 = var_3e0_1
                                    zmm2 = _mm_add_ps(_mm_add_ps(zmm2, zmm0), 
                                        _mm_add_ps(temp0_115, temp0_119))
                                    zmm0 = zmm2
                                    float temp0_123[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                                    temp0_123[0] = temp0_123[0] * zmm3[0]
                                    zmm2.d = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d f* zmm3[0]
                                    zmm14.d = var_328_1:4.d.d f+ temp0_123[0]
                                    zmm0.d = zmm0.d f* zmm3[0]
                                    zmm1 = rax_46
                                    zmm1[0] = zmm1[0] f+ zmm2.d
                                    zmm13[0] = zmm13[0] f+ zmm0.d
                                    var_418_7 = zmm1[0]
                                
                                int32_t rax_51 = *(r12_2 + 0x24)
                                uint64_t var_3b8_2 = *(r12_2 + 0x1c)
                                float var_408_4 = zmm13[0]
                                int32_t var_40c_4 = zmm14.d
                                
                                if (*(arg1 + 0x148) == 0)
                                    zmm6 = var_3b8_2:4.d
                                    zmm0.d = zmm15.d f- *(arg1 + 0x174)
                                    zmm6[0] = zmm6[0] - arg_18
                                    zmm10 = var_3b8_2.d
                                    zmm10[0] = zmm10[0] f- var_3c8_1.d
                                    zmm11 = rax_51
                                    zmm11[0] = zmm11[0] f- arg_20
                                    zmm0.d = zmm0.d f* 0.5f
                                    zmm6[0] = zmm6[0] f* zmm0.d
                                    zmm11[0] = zmm11[0] f* zmm0.d
                                    zmm10[0] = zmm10[0] f* zmm0.d
                                    zmm2.d = zmm6.d f* zmm6[0]
                                    zmm12 = zmm6
                                    zmm0.d = zmm10.d f* zmm10[0]
                                    zmm11[0] = zmm11[0] * zmm11[0]
                                    zmm2.d = zmm2.d f+ zmm0.d
                                    zmm2.d = zmm2.d f+ zmm11[0]
                                    
                                    if (not(zmm2.d f<= 9.99999994e-09f))
                                        zmm3 = zmm2
                                        float temp0_126[0x4] = _mm_rsqrt_ss(zmm2[0], zmm3[0])
                                        zmm3[0] = zmm3[0] * 0.5f
                                        zmm0.d = temp0_126.d f* temp0_126[0]
                                        zmm3[0] = zmm3[0] f* zmm0.d
                                        zmm2.d = 0.5f - zmm3[0]
                                        zmm0.d = temp0_126.d f* zmm2.d
                                        temp0_126[0] = temp0_126[0] f+ zmm0.d
                                        temp0_126[0] = temp0_126[0] * temp0_126[0]
                                        zmm3[0] = zmm3[0] * temp0_126[0]
                                        zmm4_1.d = 0.5f - zmm3[0]
                                        zmm0.d = temp0_126.d f* zmm4_1.d
                                        temp0_126[0] = temp0_126[0] f+ zmm0.d
                                        zmm6[0] = zmm6[0] * temp0_126[0]
                                        float var_3fc_3 = temp0_126[0]
                                        zmm10[0] = zmm10[0] * temp0_126[0]
                                        zmm12 = zmm6
                                        zmm11[0] = zmm11[0] * temp0_126[0]
                                else
                                    zmm0 = zx.o(r12_2[5])
                                    zmm12 = zmm0
                                    zmm11 = r12_2[6].d
                                    zmm10 = zmm0.d
                                    zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                                
                                zmm3 = var_3cc_1
                                int32_t rcx_23 = 0
                                zmm8 = var_3c8_1.d
                                zmm7 = arg_18
                                zmm9 = arg_20
                                zmm10[0] = zmm10[0] * zmm3[0]
                                zmm12[0] = zmm12[0] * zmm3[0]
                                zmm11[0] = zmm11[0] * zmm3[0]
                                float var_400_4 = zmm10[0]
                                var_358_1.q = zmm12.q
                                float var_414_6 = zmm11[0]
                                
                                if (r8 s> 0)
                                    void* r8_3 = rbx + 0x30
                                    void* rdx_7 = rbx + 0x10
                                    
                                    while (true)
                                        float var_380_3 = zmm8[0]
                                        int32_t r9_4 = rcx_23 + 1
                                        float var_37c_3 = zmm7[0]
                                        zmm2.d = float.s(r9_4)
                                        int32_t var_378_3 = zmm9.d
                                        zmm2.d = zmm2.d f* var_344
                                        zmm1 = zmm2
                                        zmm6 = zmm2
                                        zmm1[0] = zmm1[0] f* zmm2.d
                                        zmm6[0] = zmm6[0] * zmm1[0]
                                        zmm0.d = zmm1.d f* 3f
                                        zmm6[0] = zmm6[0] - zmm1[0]
                                        zmm5_1 = zmm0
                                        zmm1[0] = zmm1[0] + zmm1[0]
                                        zmm4_1.d = zmm6.d f+ zmm6[0]
                                        zmm6[0] = zmm6[0] - zmm1[0]
                                        zmm1 = zmm10
                                        zmm10 = arg_20
                                        zmm5_1[0] = zmm5_1[0] f- zmm4_1.d
                                        zmm4_1.d = zmm4_1.d f- zmm0.d
                                        zmm1[0] = zmm1[0] * zmm6[0]
                                        zmm6[0] = zmm6[0] f+ zmm2.d
                                        zmm4_1.d = zmm4_1.d f+ zmm15[0]
                                        zmm15 = var_3c8_1.d
                                        zmm0.d = var_390_1.d f* zmm6[0]
                                        zmm2.d = arg_18.d f* zmm4_1.d
                                        zmm15[0] = zmm15[0] f* zmm4_1.d
                                        zmm10[0] = zmm10[0] f* zmm4_1.d
                                        zmm15[0] = zmm15[0] f+ zmm0.d
                                        zmm0.d = zmm13.d f* zmm5_1[0]
                                        zmm13 = zmm7
                                        zmm15[0] = zmm15[0] + zmm1[0]
                                        zmm1 = zmm12
                                        zmm1[0] = zmm1[0] * zmm6[0]
                                        zmm12 = zmm8
                                        zmm15[0] = zmm15[0] f+ zmm0.d
                                        zmm0.d = var_38c_1.d f* zmm6[0]
                                        zmm2.d = zmm2.d f+ zmm0.d
                                        float var_370_2 = zmm15[0]
                                        zmm12[0] = zmm12[0] - zmm15[0]
                                        zmm0.d = zmm14.d f* zmm5_1[0]
                                        zmm2.d = zmm2.d f+ zmm1[0]
                                        zmm11[0] = zmm11[0] * zmm6[0]
                                        zmm3 = 0x322bcc77
                                        zmm2.d = zmm2.d f+ zmm0.d
                                        zmm0.d = var_388_1.d f* zmm6[0]
                                        zmm10[0] = zmm10[0] f+ zmm0.d
                                        int32_t var_3fc_4 = zmm2.d
                                        zmm13[0] = zmm13[0] f- zmm2.d
                                        int32_t var_36c_2 = zmm2.d
                                        zmm0.d = var_418_7.d f* zmm5_1[0]
                                        zmm10[0] = zmm10[0] + zmm11[0]
                                        zmm2.d = zmm13.d f* zmm13[0]
                                        zmm10[0] = zmm10[0] f+ zmm0.d
                                        zmm0.d = zmm12.d f* zmm12[0]
                                        zmm14.d = zmm9.d f- zmm10[0]
                                        float var_3d0_1 = zmm10[0]
                                        zmm2.d = zmm2.d f+ zmm0.d
                                        float var_368_2 = zmm10[0]
                                        zmm1 = zmm14
                                        zmm1[0] = zmm1[0] f* zmm14.d
                                        zmm2.d = zmm2.d f+ zmm1[0]
                                        
                                        if (not(zmm2.d f<= 9.99999994e-09f))
                                            zmm3 = zmm2
                                            float temp0_127[0x4] = _mm_rsqrt_ss(zmm2[0], zmm3[0])
                                            zmm3[0] = zmm3[0] * 0.5f
                                            zmm0.d = temp0_127.d f* temp0_127[0]
                                            zmm3[0] = zmm3[0] f* zmm0.d
                                            zmm2.d = 0.5f - zmm3[0]
                                            zmm0.d = temp0_127.d f* zmm2.d
                                            temp0_127[0] = temp0_127[0] f+ zmm0.d
                                            temp0_127[0] = temp0_127[0] * temp0_127[0]
                                            zmm3[0] = zmm3[0] * temp0_127[0]
                                            zmm4_1.d = 0.5f - zmm3[0]
                                            zmm3 = 0x322bcc77
                                            zmm0.d = temp0_127.d f* zmm4_1.d
                                            temp0_127[0] = temp0_127[0] f+ zmm0.d
                                            float var_3e4_4 = temp0_127[0]
                                            zmm0.d = temp0_127.d f* zmm12[0]
                                            temp0_127[0] = temp0_127[0] * zmm13[0]
                                            temp0_127[0] = temp0_127[0] f* zmm14.d
                                            zmm12 = zmm0
                                            zmm13 = temp0_127
                                            zmm14 = temp0_127
                                        
                                        if (*(arg1 + 0x120) != 0)
                                            zmm10 = var_3dc
                                            zmm11 = arg_10
                                            zmm8 = arg_8
                                            zmm9 = 0x3f000000
                                        else
                                            zmm7[0] = zmm7[0] f- var_248:4.d
                                            zmm9.d = zmm9.d f- var_248:8.d
                                            zmm8[0] = zmm8[0] f- var_248.d
                                            zmm7[0] = zmm7[0] * zmm12[0]
                                            zmm5_1 = zmm9
                                            zmm0.d = zmm7.d f* zmm14.d
                                            zmm6 = zmm8
                                            zmm5_1[0] = zmm5_1[0] * zmm13[0]
                                            zmm6[0] = zmm6[0] f* zmm14.d
                                            zmm9.d = zmm9.d f* zmm12[0]
                                            zmm5_1[0] = zmm5_1[0] f- zmm0.d
                                            zmm8[0] = zmm8[0] * zmm13[0]
                                            zmm6[0] = zmm6[0] f- zmm9.d
                                            zmm9 = 0x3f000000
                                            zmm7[0] = zmm7[0] - zmm8[0]
                                            zmm0.d = zmm5_1.d f* zmm5_1[0]
                                            zmm2.d = zmm6.d f* zmm6[0]
                                            zmm7[0] = zmm7[0] * zmm7[0]
                                            zmm2.d = zmm2.d f+ zmm0.d
                                            zmm2.d = zmm2.d f+ zmm7[0]
                                            
                                            if (zmm2.d f<= zmm3[0])
                                                zmm0 = _mm_unpacklo_ps(var_268.d, var_268:4.d[0].q)
                                                zmm8 = var_268:8.d.d
                                                zmm11 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                                                zmm10 = zmm0.d
                                            else
                                                zmm3 = zmm2
                                                zmm8 = _mm_rsqrt_ss(zmm2[0], zmm3[0])
                                                zmm3[0] = zmm3[0] * 0.5f
                                                zmm0.d = zmm8.d f* zmm8[0]
                                                zmm3[0] = zmm3[0] f* zmm0.d
                                                zmm2.d = 0.5f - zmm3[0]
                                                zmm0.d = zmm8.d f* zmm2.d
                                                zmm8[0] = zmm8[0] f+ zmm0.d
                                                zmm8[0] = zmm8[0] * zmm8[0]
                                                zmm3[0] = zmm3[0] * zmm8[0]
                                                zmm4_1.d = 0.5f - zmm3[0]
                                                zmm0.d = zmm8.d f* zmm4_1.d
                                                zmm8[0] = zmm8[0] f+ zmm0.d
                                                zmm10 = zmm8
                                                float var_3e4_5 = zmm8[0]
                                                zmm11 = zmm8
                                                zmm10[0] = zmm10[0] * zmm5_1[0]
                                                zmm11[0] = zmm11[0] * zmm6[0]
                                                zmm8[0] = zmm8[0] * zmm7[0]
                                        
                                        if (j == 0)
                                            zmm12 = zmm10
                                            zmm9 = zmm8
                                            zmm10 = zmm11
                                        else
                                            zmm2.d = 1.57079637f
                                                f/ _mm_cvtepi32_ps(zx.o(*(arg1 + 0x14c))).d
                                            zmm2.d = zmm2.d f* _mm_cvtepi32_ps(zx.o(j))[0]
                                            zmm0.d = zmm2.d f* 0.159154937f
                                            
                                            if (zmm2.d f< 0f)
                                                zmm0.d = zmm0.d f- zmm9.d
                                            else
                                                zmm0.d = zmm0.d f+ zmm9.d
                                            
                                            zmm0.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d))).d
                                                f* 6.28318548f
                                            zmm2.d = zmm2.d f- zmm0.d
                                            
                                            if (not(zmm2.d f<= 1.57079637f))
                                                zmm3 = 0xbf800000
                                                zmm0.d = 3.14159274f f- zmm2.d
                                                zmm2 = zmm0
                                            else if (zmm2.d f>= -1.57079637f)
                                                zmm3 = 0x3f800000
                                            else
                                                zmm3 = 0xbf800000
                                                zmm0.d = -3.14159274f f- zmm2.d
                                                zmm2 = zmm0
                                            
                                            zmm6 = 0x3638b88e
                                            zmm1 = zmm2
                                            zmm7 = 0x37cfb4c2
                                            zmm1[0] = zmm1[0] f* zmm2.d
                                            zmm0.d = zmm1.d f* 2.3889859e-08f
                                            zmm6[0] = 2.75255616e-06f f- zmm0.d
                                            zmm0.d = zmm1.d f* 2.60516146e-07f
                                            zmm7[0] = 2.47604949e-05f f- zmm0.d
                                            zmm6[0] = zmm6[0] * zmm1[0]
                                            zmm6[0] = zmm6[0] - 0.000198408743f
                                            zmm7[0] = zmm7[0] * zmm1[0]
                                            zmm7[0] = zmm7[0] - 0.00138883782f
                                            zmm6[0] = zmm6[0] * zmm1[0]
                                            zmm6[0] = zmm6[0] + 0.00833333097f
                                            zmm7[0] = zmm7[0] * zmm1[0]
                                            zmm7[0] = zmm7[0] + 0.0416666381f
                                            zmm6[0] = zmm6[0] * zmm1[0]
                                            zmm6[0] = zmm6[0] - 0.166666672f
                                            zmm7[0] = zmm7[0] * zmm1[0]
                                            zmm7[0] = zmm7[0] f- zmm9.d
                                            zmm6[0] = zmm6[0] * zmm1[0]
                                            zmm6[0] = zmm6[0] + 1f
                                            zmm7[0] = zmm7[0] * zmm1[0]
                                            zmm7[0] = zmm7[0] + 1f
                                            zmm6[0] = zmm6[0] f* zmm2.d
                                            zmm7[0] = zmm7[0] * zmm3[0]
                                            zmm4_1.d = zmm6.d f* zmm13[0]
                                            zmm6[0] = zmm6[0] * zmm12[0]
                                            zmm6[0] = zmm6[0] f* zmm14.d
                                            zmm8[0] = zmm8[0] f* zmm4_1.d
                                            zmm0.d = zmm11.d f* zmm6[0]
                                            zmm9.d = zmm10.d f* zmm6[0]
                                            zmm8[0] = zmm8[0] f- zmm0.d
                                            zmm2.d = zmm11.d f* zmm6[0]
                                            zmm0.d = zmm8.d f* zmm6[0]
                                            zmm8[0] = zmm8[0] + zmm8[0]
                                            zmm9.d = zmm9.d f- zmm0.d
                                            zmm0.d = zmm10.d f* zmm4_1.d
                                            zmm7[0] = zmm7[0] * zmm8[0]
                                            zmm2.d = zmm2.d f- zmm0.d
                                            zmm9.d = zmm9.d f+ zmm9.d
                                            zmm7[0] = zmm7[0] + zmm10[0]
                                            zmm10 = zmm8
                                            zmm10[0] = zmm10[0] * zmm6[0]
                                            zmm2.d = zmm2.d f+ zmm2.d
                                            zmm8[0] = zmm8[0] f* zmm4_1.d
                                            zmm0.d = zmm9.d f* zmm6[0]
                                            zmm12 = zmm2
                                            zmm12[0] = zmm12[0] f* zmm4_1.d
                                            zmm12[0] = zmm12[0] f- zmm0.d
                                            zmm0.d = zmm2.d f* zmm6[0]
                                            zmm12[0] = zmm12[0] + zmm7[0]
                                            zmm7[0] = zmm7[0] f* zmm9.d
                                            zmm10[0] = zmm10[0] f- zmm0.d
                                            zmm9.d = zmm9.d f* zmm6[0]
                                            zmm7[0] = zmm7[0] f* zmm2.d
                                            zmm7[0] = zmm7[0] + zmm11[0]
                                            zmm9.d = zmm9.d f- zmm8[0]
                                            zmm7[0] = zmm7[0] + zmm8[0]
                                            zmm10[0] = zmm10[0] + zmm7[0]
                                            zmm9.d = zmm9.d f+ zmm7[0]
                                        
                                        if (*(arg1 + 0x180) == 0)
                                            zmm0 = var_410_2
                                        else
                                            zmm0 = *(var_300_1
                                                + (sx.q(r12_2[0xa].d * r8 + rcx_23) << 2))
                                            var_410_2 = zmm0.d
                                        
                                        zmm8 = var_384_1
                                        zmm7 = var_3fc_4
                                        zmm3 = zx.o(var_370_2.q)
                                        zmm11 = var_414_6
                                        zmm13 = var_408_4
                                        zmm14 = var_40c_4
                                        *rdx_7 = zmm3.q
                                        *(rbx + 0x20) = zmm8[0]
                                        *(rbx + 0x24) = zmm8[0]
                                        *(rdx_7 + 8) = var_368_2
                                        zmm8[0] = zmm8[0] * zmm10[0]
                                        zmm10 = var_404_2
                                        *(rbx + 0x40) = zmm10[0]
                                        zmm8[0] = zmm8[0] f* zmm0.d
                                        zmm8[0] = zmm8[0] * zmm12[0]
                                        zmm12 = zx.o(var_358_1.q)
                                        zmm4_1.d = zmm8.d f* zmm9.d
                                        zmm2.d = zmm8.d f+ zmm7[0]
                                        zmm9 = var_3d0_1
                                        zmm8[0] = zmm8[0] f* zmm0.d
                                        zmm4_1.d = zmm4_1.d f* zmm0.d
                                        zmm8[0] = zmm8[0] + zmm15[0]
                                        zmm0.d = zmm4_1.d f+ zmm9.d
                                        *rbx = (_mm_unpacklo_ps(zmm8, zmm2.q)).q
                                        zmm2.d = zmm7.d f- zmm8[0]
                                        zmm15[0] = zmm15[0] - zmm8[0]
                                        *(rbx + 8) = zmm0.d
                                        *(rbx + 0x1c) = 0
                                        *(rbx + 0x44) = 0
                                        *(rbx + 0x28) = *(rsi_2 + 0x2c)
                                        zmm0 = *(rsi_2 + 0x60)
                                        float temp0_135[0x4] = _mm_unpacklo_ps(zmm15, zmm2.q)
                                        *r8_3 = zmm0
                                        *(rbx + 0x6c) = 0
                                        *(rbx + 0x90) = zmm10[0]
                                        zmm10[0] = zmm10[0] + var_3a8
                                        *(rbx + 0x50) = temp0_135.q
                                        zmm0.d = zmm9.d f- zmm4_1.d
                                        *(rdx_7 + 0x50) = zmm3.q
                                        *(rbx + 0x70) = zmm8[0]
                                        *(rbx + 0x74) = zmm8[0]
                                        zmm8 = zmm15
                                        *(rdx_7 + 0x58) = var_368_2
                                        rdx_7 += 0xa0
                                        *(rbx + 0x94) = 0x3f800000
                                        rcx_23 = r9_4
                                        *(rbx + 0x58) = zmm0.d
                                        *(rbx + 0x78) = *(rsi_2 + 0x2c)
                                        rbx += 0xa0
                                        var_404_2 = zmm10[0]
                                        zmm10 = var_400_4
                                        *(r8_3 + 0x50) = *(rsi_2 + 0x60)
                                        r8_3 += 0xa0
                                        
                                        if (r9_4 s>= r8)
                                            break
                                        
                                        zmm15 = 0x3f800000
                                    
                                    r15_1 = var_2f8_1
                            
                            zmm8 = 0x3f000000
                            j += 1
                            zmm12 = zx.o(0)
                            zmm14 = arg_8
                            zmm13 = arg_10
                            zmm2 = var_3d8_1
                            zmm1 = var_3d4_1
                            rcx_11 = var_1b0_1
                            rdx_1 = var_1b8_1
                            j_1 = j
                        while (j s< *(arg1 + 0x14c))
                        
                        zmm7 = 0x3f800000
        
        i = i_1 + 1
        i_1 = i
    while (i s< *(arg1 + 0x3c))

return 0
