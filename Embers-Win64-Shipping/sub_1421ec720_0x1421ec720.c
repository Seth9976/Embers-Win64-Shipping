// 函数: sub_1421ec720
// 地址: 0x1421ec720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg2 + 0x90)
int32_t r9 = *(arg1 + 0x3c)
uint128_t zmm6
uint128_t var_58 = zmm6
uint128_t zmm7
uint128_t var_68 = zmm7
uint128_t zmm8
uint128_t var_78 = zmm8
uint128_t zmm9
uint128_t var_88 = zmm9
uint128_t zmm10
uint128_t var_98 = zmm10
uint128_t zmm11
uint128_t var_a8 = zmm11
uint128_t zmm12
uint128_t var_b8 = zmm12
uint128_t zmm13
uint128_t var_c8 = zmm13
uint128_t zmm14
uint128_t var_d8 = zmm14
uint128_t zmm15
uint128_t var_e8 = zmm15
void* rax = *(arg2 + 0x80)
int32_t rdx = *(arg1 + 0x184)
int96_t var_168 = (*(rax + 0x390))[0].12
int32_t rax_1 = 1

if (rdx != 0)
    rax_1 = rdx

int96_t var_148 = (*(rax + 0x3b0))[0].12
int32_t var_1e0
int32_t var_1dc
int32_t var_1d0
int32_t var_1cc
int32_t arg_8
int32_t arg_10
int32_t arg_18
int32_t arg_20
uint128_t zmm0
float zmm1[0x4]
uint128_t zmm2
uint128_t zmm3
uint128_t zmm4
uint128_t zmm5

if (rax_1 s> 1)
    zmm7 = 0x3f800000
    int32_t i = 0
    zmm1 = 0x3f800000
    int32_t i_2 = 0
    zmm1[0] = 1f f/ _mm_cvtepi32_ps(zx.o(rdx)).d
    float var_1a4_1 = zmm1[0]
    
    if (r9 s> 0)
        zmm5 = 0x322bcc77
        zmm4 = 0x3f000000
        int32_t var_1d8
        zmm8 = var_1d8
        zmm6 = var_1dc
        zmm9 = var_1e0
        
        do
            uint128_t* rbx_2 = nullptr
            void* r12_1 = nullptr
            uint128_t* var_198_2 = nullptr
            void* r14_3 = sx.q(*(arg1 + 0x40) * i) + *(arg1 + 0x58)
            void* r13_2 = sx.q(*(arg1 + 0x124)) + r14_3
            
            if (*(r13_2 + 0x58) != 0)
                int64_t rax_22 = sx.q(*(arg1 + 0x128))
                
                if (rax_22.d != 0xffffffff)
                    r12_1 = r14_3 + rax_22
                
                int64_t rax_23 = sx.q(*(arg1 + 0x13c))
                
                if (rax_23.d != 0xffffffff)
                    rbx_2 = r14_3 + rax_23
                    var_198_2 = rbx_2
                
                zmm3 = *(arg1 + 0x17c)
                
                if (not(zmm3.d f<= 9.99999975e-05f))
                    zmm1 = *(r13_2 + 0x1c)
                    zmm1[0] = zmm1[0] f- *r13_2
                    zmm0.d = (*(r13_2 + 0x24)).d f- *(r13_2 + 8)
                    zmm2.d = (*(r13_2 + 0x20)).d f- *(r13_2 + 4)
                    zmm1[0] = zmm1[0] * zmm1[0]
                    zmm0.d = zmm0.d f* zmm0.d
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm2.d = zmm2.d f+ zmm1[0]
                    zmm1 = zx.o(0)
                    zmm1[0] = float.s(*(arg1 + 0x184))
                    zmm2.d = zmm2.d f+ zmm0.d
                    zmm0.d = zmm7.d f/ zmm3.d
                    zmm2.d = _mm_sqrt_ss(zmm2.d, zmm2.d).d f* zmm0.d
                    zmm2.d = zmm2.d f/ zmm1[0]
                    var_1a4_1 = zmm2.d
                
                zmm14.d = (*(r14_3 + 0x50)).d f* *(arg1 + 0x68)
                zmm1 = zmm7
                int32_t rdx_4 = *(arg1 + 0x14c)
                int32_t rsi_1 = 0
                arg_10 = 0
                zmm13 = zx.o(0)
                arg_18 = 0
                int32_t var_1a0_1 = zmm14.d
                float var_1c0_1 = zmm13.d
                arg_20 = zmm13.d
                arg_8 = 0
                zmm0 = _mm_cvtepi32_ps(zx.o(*(r13_2 + 0x50)))
                zmm1[0] = zmm1[0] f/ zmm0.d
                float var_190_1 = zmm1[0]
                
                if (rdx_4 s> 0)
                    do
                        zmm1 = zx.o(*r12_1)
                        zmm11 = zx.o(*r13_2)
                        int32_t r9_3 = *(r13_2 + 8)
                        int32_t rax_24 = *(r12_1 + 8)
                        zmm15.d = zmm11.d f- zmm1[0]
                        int32_t var_1e8_2 = zx.o(0).d
                        zmm0 = zmm1
                        var_1d0.q = zmm1.q
                        zmm7 = zmm11.q:4.d
                        zmm12 = r9_3
                        zmm10.d = zmm7.d f- _mm_shuffle_ps(zmm0, zmm0, 0x55).d
                        zmm13.d = zmm12.d f- rax_24
                        zmm0.d = zmm15.d f* zmm15.d
                        float var_1a8_1 = zmm10.d
                        zmm2.d = zmm10.d f* zmm10.d
                        zmm1 = zmm13
                        zmm1[0] = zmm1[0] f* zmm13.d
                        zmm2.d = zmm2.d f+ zmm0.d
                        int32_t var_1bc_1 = zmm13.d
                        zmm2.d = zmm2.d f+ zmm1[0]
                        
                        if (not(zmm2.d f<= zmm5.d))
                            zmm4.d = zmm4.d
                            zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                            zmm3.d = zmm2.d f* zmm4.d
                            zmm0.d = zmm5.d f* zmm5.d
                            zmm1 = zmm3
                            zmm1[0] = zmm1[0] f* zmm0.d
                            zmm2.d = zmm4.d f- zmm1[0]
                            zmm0.d = zmm5.d f* zmm2.d
                            zmm5.d = zmm5.d f+ zmm0.d
                            zmm1 = zmm5
                            zmm1[0] = zmm1[0] f* zmm5.d
                            zmm3.d = zmm3.d f* zmm1[0]
                            zmm4.d = zmm4.d f- zmm3.d
                            zmm0.d = zmm5.d f* zmm4.d
                            zmm4 = 0x3f000000
                            zmm5.d = zmm5.d f+ zmm0.d
                            int32_t var_1bc_2 = zmm5.d
                            zmm1 = zmm5
                            zmm0.d = zmm5.d f* zmm15.d
                            zmm5.d = zmm5.d f* zmm13.d
                            zmm1[0] = zmm1[0] f* zmm10.d
                            zmm15 = zmm0
                            var_1bc_1 = zmm5.d
                            zmm13 = zmm5
                            zmm5 = 0x322bcc77
                            var_1a8_1 = zmm1[0]
                            zmm10 = zmm1
                        
                        if (*(arg1 + 0x120) == 0)
                            zmm1 = zmm12
                            zmm8.d = zmm7.d f- var_148:4.d
                            zmm1[0] = zmm1[0] f- var_148:8.d
                            zmm2.d = zmm11.d f- var_148.d
                            zmm0 = zmm8
                            zmm8.d = zmm8.d f* zmm15.d
                            zmm0.d = zmm0.d f* zmm13.d
                            zmm1[0] = zmm1[0] f* zmm15.d
                            zmm9.d = zmm1.d f* zmm10.d
                            zmm6.d = zmm2.d f* zmm13.d
                            zmm9.d = zmm9.d f- zmm0.d
                            zmm2.d = zmm2.d f* zmm10.d
                            zmm6.d = zmm6.d f- zmm1[0]
                            zmm8.d = zmm8.d f- zmm2.d
                            zmm0.d = zmm9.d f* zmm9.d
                            zmm3.d = zmm6.d f* zmm6.d
                            zmm1 = zmm8
                            zmm1[0] = zmm1[0] f* zmm8.d
                            zmm3.d = zmm3.d f+ zmm0.d
                            zmm3.d = zmm3.d f+ zmm1[0]
                            
                            if (zmm3.d f<= zmm5.d)
                                zmm0 = _mm_unpacklo_ps(var_168.d, var_168:4.d[0].q)
                                zmm8 = var_168:8.d.d
                                var_1e0.q = zmm0.q
                                zmm6 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                                zmm9 = var_1e0
                            else
                                zmm4.d = zmm4.d
                                zmm3.d = zmm3.d
                                zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                                zmm3.d = zmm3.d f* zmm4.d
                                zmm0.d = zmm5.d f* zmm5.d
                                zmm1 = zmm3
                                zmm1[0] = zmm1[0] f* zmm0.d
                                zmm2.d = zmm4.d f- zmm1[0]
                                zmm0.d = zmm5.d f* zmm2.d
                                zmm5.d = zmm5.d f+ zmm0.d
                                zmm1 = zmm5
                                zmm1[0] = zmm1[0] f* zmm5.d
                                zmm3.d = zmm3.d f* zmm1[0]
                                zmm4.d = zmm4.d f- zmm3.d
                                zmm0.d = zmm5.d f* zmm4.d
                                zmm5.d = zmm5.d f+ zmm0.d
                                zmm9.d = zmm9.d f* zmm5.d
                                zmm6.d = zmm6.d f* zmm5.d
                                zmm8.d = zmm8.d f* zmm5.d
                        
                        if (rsi_1 == 0)
                            zmm5 = zmm9
                            zmm10 = zmm6
                            zmm4 = zmm8
                        else
                            zmm2.d = 1.57079637f f/ _mm_cvtepi32_ps(zx.o(rdx_4)).d
                            zmm2.d = zmm2.d f* _mm_cvtepi32_ps(zx.o(rsi_1))[0]
                            zmm0.d = zmm2.d f* 0.159154937f
                            
                            if (zmm2.d f< 0f)
                                zmm0.d = zmm0.d f- 0.5f
                            else
                                zmm0.d = zmm0.d f+ 0.5f
                            
                            zmm0.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d))).d f* 6.28318548f
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
                            
                            zmm1 = zmm2
                            zmm1[0] = zmm1[0] f* zmm2.d
                            zmm0.d = zmm1.d f* 2.3889859e-08f
                            zmm5.d = 2.75255616e-06f f- zmm0.d
                            zmm0.d = zmm1.d f* 2.60516146e-07f
                            zmm5.d = zmm5.d f* zmm1[0]
                            zmm5.d = zmm5.d f- 0.000198408743f
                            zmm5.d = zmm5.d f* zmm1[0]
                            zmm5.d = zmm5.d f+ 0.00833333097f
                            zmm5.d = zmm5.d f* zmm1[0]
                            zmm5.d = zmm5.d f- 0.166666672f
                            zmm5.d = zmm5.d f* zmm1[0]
                            zmm5.d = zmm5.d f+ 1f
                            zmm5.d = zmm5.d f* zmm2.d
                            zmm2.d = 2.47604949e-05f f- zmm0.d
                            zmm0.d = zmm5.d f* zmm10.d
                            zmm2.d = zmm2.d f* zmm1[0]
                            arg_10 = zmm0.d
                            zmm2.d = zmm2.d f- 0.00138883782f
                            zmm2.d = zmm2.d f* zmm1[0]
                            zmm2.d = zmm2.d f+ 0.0416666381f
                            zmm2.d = zmm2.d f* zmm1[0]
                            zmm2.d = zmm2.d f- 0.5f
                            zmm2.d = zmm2.d f* zmm1[0]
                            zmm1 = zmm5
                            zmm1[0] = zmm1[0] f* zmm15.d
                            zmm2.d = zmm2.d f+ 1f
                            zmm5.d = zmm5.d f* zmm13.d
                            var_1c0_1 = zmm1[0]
                            zmm2.d = zmm2.d f* zmm3.d
                            zmm3.d = zmm8.d f* zmm0.d
                            zmm0.d = zmm6.d f* zmm5.d
                            zmm4.d = zmm9.d f* zmm5.d
                            zmm3.d = zmm3.d f- zmm0.d
                            arg_8 = zmm2.d
                            arg_20 = zmm5.d
                            zmm2.d = zmm6.d f* zmm1[0]
                            zmm0.d = zmm8.d f* zmm1[0]
                            zmm1 = arg_8
                            zmm3.d = zmm3.d f+ zmm3.d
                            zmm4.d = zmm4.d f- zmm0.d
                            zmm0.d = zmm9.d f* arg_10
                            zmm1[0] = zmm1[0] f* zmm3.d
                            zmm10.d = zmm3.d f* arg_20
                            zmm2.d = zmm2.d f- zmm0.d
                            zmm3.d = zmm3.d f* arg_10
                            zmm4.d = zmm4.d f+ zmm4.d
                            zmm1[0] = zmm1[0] f+ zmm9.d
                            zmm2.d = zmm2.d f+ zmm2.d
                            zmm0.d = zmm4.d f* arg_20
                            zmm5.d = zmm2.d f* arg_10
                            zmm5.d = zmm5.d f- zmm0.d
                            zmm0.d = zmm2.d f* var_1c0_1
                            zmm10.d = zmm10.d f- zmm0.d
                            zmm5.d = zmm5.d f+ zmm1[0]
                            zmm0.d = arg_8.d f* zmm2.d
                            zmm1 = arg_8
                            zmm1[0] = zmm1[0] f* zmm4.d
                            zmm4.d = zmm4.d f* var_1c0_1
                            zmm0.d = zmm0.d f+ zmm8.d
                            zmm1[0] = zmm1[0] f+ zmm6.d
                            zmm4.d = zmm4.d f- zmm3.d
                            zmm10.d = zmm10.d f+ zmm1[0]
                            zmm4.d = zmm4.d f+ zmm0.d
                        
                        zmm13 = 0x3f800000
                        
                        if (*(arg1 + 0x180) != 0)
                            zmm13 = *rbx_2
                        
                        *(r8 + 0x10) = zmm11.q
                        int32_t j = 0
                        *(r8 + 0x20) = zmm14.d
                        *(r8 + 0x24) = zmm14.d
                        *(r8 + 0x18) = r9_3
                        *(r8 + 0x1c) = 0
                        *(r8 + 0x40) = 0
                        *(r8 + 0x48) = 0
                        zmm5.d = zmm5.d f* zmm14.d
                        zmm10.d = zmm10.d f* zmm14.d
                        zmm4.d = zmm4.d f* zmm14.d
                        zmm5.d = zmm5.d f* zmm13.d
                        zmm10.d = zmm10.d f* zmm13.d
                        zmm1 = zmm5
                        zmm4.d = zmm4.d f* zmm13.d
                        zmm1[0] = zmm1[0] f+ zmm11.d
                        zmm2.d = zmm10.d f+ zmm7.d
                        zmm0.d = zmm4.d f+ zmm12.d
                        *r8 = (_mm_unpacklo_ps(zmm1, zmm2.q)).q
                        zmm2.d = zmm7.d f- zmm10.d
                        zmm1 = zmm11
                        zmm1[0] = zmm1[0] f- zmm5.d
                        *(r8 + 8) = zmm0.d
                        *(r8 + 0x28) = *(r14_3 + 0x2c)
                        zmm0 = *(r14_3 + 0x60)
                        float temp0_27[0x4] = _mm_unpacklo_ps(zmm1, zmm2.q)
                        *(r8 + 0x30) = zmm0
                        *(r8 + 0x6c) = 0
                        *(r8 + 0x50) = temp0_27.q
                        *(r8 + 0x60) = zmm11.q
                        zmm0.d = zmm12.d f- zmm4.d
                        *(r8 + 0x70) = zmm14.d
                        *(r8 + 0x74) = zmm14.d
                        *(r8 + 0x68) = r9_3
                        *(r8 + 0x90) = 0
                        *(r8 + 0x94) = 0x3f800000
                        *(r8 + 0x9c) = 0x3f800000
                        *(r8 + 0x58) = zmm0.d
                        *(r8 + 0x78) = *(r14_3 + 0x2c)
                        *(r8 + 0x80) = *(r14_3 + 0x60)
                        r8 += 0xa0
                        
                        if (*(r13_2 + 0x50) s> 0)
                            zmm4 = arg_18
                            void* rdi_2 = r8 + 0x30
                            void* r11_2 = r8 + 0x10
                            void* rdx_5 = r12_1
                            uint128_t* rbx_3 = rbx_2 + 4
                            
                            do
                                zmm4.d = zmm4.d f+ var_190_1
                                zmm14 = zx.o(*rdx_5)
                                int32_t r9_4 = *(rdx_5 + 8)
                                var_1d0.q = zmm14.q
                                arg_18 = zmm4.d
                                
                                if (*(arg1 + 0x120) == 0)
                                    zmm7.d = zmm7.d f- var_148:4.d
                                    zmm11.d = zmm11.d f- var_148.d
                                    zmm12.d = zmm12.d f- var_148:8.d
                                    zmm0 = zmm7
                                    zmm7.d = zmm7.d f* zmm15.d
                                    zmm0.d = zmm0.d f* var_1bc_1
                                    zmm6.d = zmm11.d f* var_1bc_1
                                    zmm10.d = zmm12.d f* var_1a8_1
                                    zmm11.d = zmm11.d f* var_1a8_1
                                    zmm10.d = zmm10.d f- zmm0.d
                                    zmm12.d = zmm12.d f* zmm15.d
                                    zmm7.d = zmm7.d f- zmm11.d
                                    zmm6.d = zmm6.d f- zmm12.d
                                    zmm0.d = zmm10.d f* zmm10.d
                                    zmm1 = zmm7
                                    zmm1[0] = zmm1[0] f* zmm7.d
                                    zmm2.d = zmm6.d f* zmm6.d
                                    zmm2.d = zmm2.d f+ zmm0.d
                                    zmm2.d = zmm2.d f+ zmm1[0]
                                    
                                    if (zmm2.d f<= 9.99999994e-09f)
                                        zmm0 = _mm_unpacklo_ps(var_168.d, var_168:4.d[0].q)
                                        zmm8 = var_168:8.d.d
                                        var_1e0.q = zmm0.q
                                        zmm6 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                                        zmm9 = var_1e0
                                    else
                                        zmm3.d = zmm2.d
                                        zmm4 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                                        zmm3.d = zmm3.d f* 0.5f
                                        zmm0.d = zmm4.d f* zmm4.d
                                        zmm1 = zmm3
                                        zmm1[0] = zmm1[0] f* zmm0.d
                                        zmm2.d = 0.5f - zmm1[0]
                                        zmm0.d = zmm4.d f* zmm2.d
                                        zmm4.d = zmm4.d f+ zmm0.d
                                        zmm1 = zmm4
                                        zmm1[0] = zmm1[0] f* zmm4.d
                                        zmm3.d = zmm3.d f* zmm1[0]
                                        zmm5.d = 0.5f f- zmm3.d
                                        zmm8.d = zmm4.d f* zmm5.d
                                        zmm8.d = zmm8.d f+ zmm4.d
                                        zmm6.d = zmm6.d f* zmm8.d
                                        zmm9.d = zmm8.d f* zmm10.d
                                        zmm8.d = zmm8.d f* zmm7.d
                                
                                if (rsi_1 == 0)
                                    zmm5 = zmm9
                                    zmm10 = zmm6
                                    zmm11 = zmm8
                                else
                                    zmm7 = arg_20
                                    zmm12 = arg_10
                                    zmm11 = var_1c0_1
                                    zmm1 = arg_8
                                    zmm0.d = zmm7.d f* zmm6.d
                                    zmm4.d = zmm12.d f* zmm8.d
                                    zmm3.d = zmm7.d f* zmm9.d
                                    zmm4.d = zmm4.d f- zmm0.d
                                    zmm2.d = zmm11.d f* zmm6.d
                                    zmm0.d = zmm11.d f* zmm8.d
                                    zmm4.d = zmm4.d f+ zmm4.d
                                    zmm3.d = zmm3.d f- zmm0.d
                                    zmm0.d = zmm12.d f* zmm9.d
                                    zmm1[0] = zmm1[0] f* zmm4.d
                                    zmm2.d = zmm2.d f- zmm0.d
                                    zmm10.d = zmm7.d f* zmm4.d
                                    zmm3.d = zmm3.d f+ zmm3.d
                                    zmm0 = zmm7
                                    zmm7 = arg_8
                                    zmm1[0] = zmm1[0] f+ zmm9.d
                                    zmm2.d = zmm2.d f+ zmm2.d
                                    zmm0.d = zmm0.d f* zmm3.d
                                    zmm5.d = zmm12.d f* zmm2.d
                                    zmm5.d = zmm5.d f- zmm0.d
                                    zmm0.d = zmm11.d f* zmm2.d
                                    zmm11.d = zmm11.d f* zmm3.d
                                    zmm5.d = zmm5.d f+ zmm1[0]
                                    zmm1 = zmm7
                                    zmm1[0] = zmm1[0] f* zmm3.d
                                    zmm10.d = zmm10.d f- zmm0.d
                                    zmm0.d = zmm12.d f* zmm4.d
                                    zmm1[0] = zmm1[0] f+ zmm6.d
                                    zmm11.d = zmm11.d f- zmm0.d
                                    zmm10.d = zmm10.d f+ zmm1[0]
                                    zmm1 = zmm7
                                    zmm1[0] = zmm1[0] f* zmm2.d
                                    zmm1[0] = zmm1[0] f+ zmm8.d
                                    zmm11.d = zmm11.d f+ zmm1[0]
                                
                                if (*(arg1 + 0x180) != 0)
                                    zmm13 = *rbx_3
                                
                                zmm4 = var_1a0_1
                                j += 1
                                zmm3 = var_1d0
                                rbx_3 += 4
                                zmm12 = r9_4
                                rdx_5 += 0xc
                                zmm7 = var_1cc
                                *r11_2 = zmm14.q
                                *(r8 + 0x20) = zmm4.d
                                *(r8 + 0x24) = zmm4.d
                                *(r11_2 + 8) = r9_4
                                *(r8 + 0x1c) = 0
                                *(r8 + 0x44) = 0
                                *(r8 + 0x4c) = 0
                                zmm11.d = zmm11.d f* zmm4.d
                                zmm5.d = zmm5.d f* zmm4.d
                                zmm10.d = zmm10.d f* zmm4.d
                                zmm11.d = zmm11.d f* zmm13.d
                                zmm5.d = zmm5.d f* zmm13.d
                                zmm10.d = zmm10.d f* zmm13.d
                                zmm0.d = zmm11.d f+ zmm12.d
                                zmm2.d = zmm5.d f+ zmm3.d
                                zmm1 = zmm10
                                zmm1[0] = zmm1[0] f+ zmm7.d
                                int32_t var_130_2 = zmm0.d
                                zmm0 = _mm_unpacklo_ps(zmm2, zmm1[0].q)
                                zmm2.d = zmm7.d f- zmm10.d
                                *r8 = zmm0.q
                                zmm1 = zmm3
                                zmm1[0] = zmm1[0] f- zmm5.d
                                zmm0.d = var_1e8_2.d f+ var_1a4_1
                                *(r8 + 8) = var_130_2
                                float temp0_32[0x4] = _mm_unpacklo_ps(zmm1, zmm2.q)
                                *(r8 + 0x40) = zmm0.d
                                var_1e8_2 = zmm0.d
                                *(r8 + 0x48) = arg_18.d
                                *(r8 + 0x28) = *(r14_3 + 0x2c)
                                *rdi_2 = *(r14_3 + 0x60)
                                *(r8 + 0x6c) = 0
                                *(r8 + 0x70) = zmm4.d
                                *(r8 + 0x74) = zmm4.d
                                zmm0.d = zmm12.d f- zmm11.d
                                zmm4 = arg_18
                                zmm11 = zmm3
                                *(r8 + 0x50) = temp0_32.q
                                *(r11_2 + 0x50) = zmm14.q
                                *(r8 + 0x98) = zmm4.d
                                *(r11_2 + 0x58) = r9_4
                                r11_2 += 0xa0
                                *(r8 + 0x94) = 0x3f800000
                                *(r8 + 0x9c) = 0x3f800000
                                *(r8 + 0x90) = var_1e8_2.d
                                *(r8 + 0x58) = zmm0.d
                                *(r8 + 0x78) = *(r14_3 + 0x2c)
                                r8 += 0xa0
                                *(rdi_2 + 0x50) = *(r14_3 + 0x60)
                                rdi_2 += 0xa0
                            while (j s< *(r13_2 + 0x50))
                            
                            zmm14 = var_1a0_1
                        
                        rdx_4 = *(arg1 + 0x14c)
                        rsi_1 += 1
                        zmm4 = 0x3f000000
                        zmm5 = 0x322bcc77
                        rbx_2 = var_198_2
                    while (rsi_1 s< rdx_4)
                    
                    zmm7 = 0x3f800000
                    i = i_2
            
            i += 1
            i_2 = i
        while (i s< *(arg1 + 0x3c))
else
    int32_t i_1 = 0
    
    if (r9 s> 0)
        zmm4 = var_1cc
        zmm5 = var_1d0
        zmm6 = 0xbf800000
        int32_t var_1c8
        zmm15 = var_1c8
        arg_8 = zmm4.d
        arg_10 = zmm5.d
        
        do
            uint128_t* rdi_1 = nullptr
            int64_t* r9_2 = sx.q(*(arg1 + 0x40) * i_1) + *(arg1 + 0x58)
            int32_t* rdx_2 = sx.q(*(arg1 + 0x124)) + r9_2
            
            if (rdx_2[0x16] != 0)
                int64_t rax_4 = sx.q(*(arg1 + 0x13c))
                
                if (rax_4.d != 0xffffffff)
                    rdi_1 = r9_2 + rax_4
                
                zmm0 = zx.o(r9_2[2])
                zmm7 = zx.o(*rdx_2)
                int32_t r14_1 = rdx_2[2]
                int32_t rax_5 = r9_2[3].d
                zmm9.d = zmm7.d f- zmm0.d
                zmm11.d = r9_2[0xa].d.d f* *(arg1 + 0x68)
                zmm12 = r14_1
                uint64_t var_1b8_1 = zmm0.q
                uint64_t var_188_1 = zmm0.q
                var_1e0.q = zmm7.q
                zmm3 = var_1dc
                zmm10.d = zmm3.d f- var_1b8_1:4.d
                zmm8.d = zmm12.d f- rax_5
                zmm0.d = zmm9.d f* zmm9.d
                arg_20 = zmm9.d
                int32_t var_1e8_1 = zmm10.d
                zmm2.d = zmm10.d f* zmm10.d
                zmm1 = zmm8
                zmm1[0] = zmm1[0] f* zmm8.d
                zmm2.d = zmm2.d f+ zmm0.d
                arg_18 = zmm8.d
                uint64_t var_198_1 = zmm7.q
                zmm2.d = zmm2.d f+ zmm1[0]
                
                if (not(zmm2.d f<= 9.99999994e-09f))
                    zmm4.d = 0x3f000000
                    zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                    zmm3.d = zmm2.d f* 0.5f
                    zmm0.d = zmm5.d f* zmm5.d
                    zmm1 = zmm3
                    zmm1[0] = zmm1[0] f* zmm0.d
                    zmm2.d = zmm4.d f- zmm1[0]
                    zmm0.d = zmm5.d f* zmm2.d
                    zmm5.d = zmm5.d f+ zmm0.d
                    zmm1 = zmm5
                    zmm1[0] = zmm1[0] f* zmm5.d
                    zmm3.d = zmm3.d f* zmm1[0]
                    zmm4.d = 0.5f f- zmm3.d
                    zmm3 = var_1dc
                    zmm0.d = zmm5.d f* zmm4.d
                    zmm4 = arg_8
                    zmm5.d = zmm5.d f+ zmm0.d
                    zmm9.d = zmm9.d f* zmm5.d
                    zmm10.d = zmm10.d f* zmm5.d
                    zmm8.d = zmm8.d f* zmm5.d
                    arg_18 = zmm5.d
                    zmm5 = arg_10
                    arg_20 = zmm9.d
                    var_1e8_1 = zmm10.d
                    arg_18 = zmm8.d
                
                int32_t rax_6 = *(arg1 + 0x120)
                
                if (rax_6 != 1)
                    if (rax_6 == 0)
                    label_1421ec9b4:
                        zmm6.d = zmm3.d f- var_148:4.d
                        zmm2.d = zmm7.d f- var_148.d
                        zmm1 = zmm12
                        zmm1[0] = zmm1[0] f- var_148:8.d
                        zmm0 = zmm6
                        zmm6.d = zmm6.d f* zmm9.d
                        zmm0.d = zmm0.d f* zmm8.d
                        zmm8.d = zmm2.d f* arg_18
                        zmm1[0] = zmm1[0] f* zmm9.d
                        zmm7.d = zmm1.d f* zmm10.d
                        zmm8.d = zmm8.d f- zmm1[0]
                        zmm2.d = zmm2.d f* zmm10.d
                        zmm7.d = zmm7.d f- zmm0.d
                        zmm6.d = zmm6.d f- zmm2.d
                        zmm3.d = zmm8.d f* zmm8.d
                        zmm0.d = zmm7.d f* zmm7.d
                        zmm1 = zmm6
                        zmm1[0] = zmm1[0] f* zmm6.d
                        zmm3.d = zmm3.d f+ zmm0.d
                        zmm3.d = zmm3.d f+ zmm1[0]
                        
                        if (zmm3.d f<= 9.99999994e-09f)
                            zmm0 = _mm_unpacklo_ps(var_168.d, var_168:4.d[0].q)
                            zmm1 = zmm0
                            zmm15 = var_168:8.d.d
                            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                            var_1d0.q = zmm1.q
                            zmm4 = zmm0
                            zmm5 = var_1d0
                            arg_8 = zmm0.d
                        else
                            zmm5.d = 0x3f000000
                            zmm3.d = zmm3.d
                            zmm4 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                            zmm3.d = zmm3.d f* 0.5f
                            zmm0.d = zmm4.d f* zmm4.d
                            zmm1 = zmm3
                            zmm1[0] = zmm1[0] f* zmm0.d
                            zmm2.d = zmm5.d f- zmm1[0]
                            zmm0.d = zmm4.d f* zmm2.d
                            zmm4.d = zmm4.d f+ zmm0.d
                            zmm1 = zmm4
                            zmm1[0] = zmm1[0] f* zmm4.d
                            zmm3.d = zmm3.d f* zmm1[0]
                            zmm5.d = 0.5f f- zmm3.d
                            zmm0.d = zmm4.d f* zmm5.d
                            zmm4.d = zmm4.d f+ zmm0.d
                            zmm15 = zmm4
                            arg_8 = zmm4.d
                            zmm4.d = zmm15.d f* zmm8.d
                            zmm5.d = zmm15.d f* zmm7.d
                            arg_8 = zmm4.d
                            zmm15.d = zmm15.d f* zmm6.d
                        
                        zmm6 = 0xbf800000
                        zmm8 = arg_18
                        arg_10 = zmm5.d
                else if (i_1 == 0)
                    goto label_1421ec9b4
                
                zmm3 = *(arg1 + 0x17c)
                
                if (zmm3.d f<= 9.99999975e-05f)
                    zmm12 = _mm_max_ss(_mm_cvtepi32_ps(zx.o(*(arg1 + 0x178))).d, 0x3f800000)
                else
                    zmm0.d = rdx_2[9].d f- rdx_2[2]
                    zmm1 = rdx_2[7]
                    zmm2.d = rdx_2[8].d f- rdx_2[1]
                    zmm1[0] = zmm1[0] f- *rdx_2
                    zmm0.d = zmm0.d f* zmm0.d
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm1[0] = zmm1[0] * zmm1[0]
                    zmm2.d = zmm2.d f+ zmm1[0]
                    zmm2.d = zmm2.d f+ zmm0.d
                    zmm0.d = 1f f/ zmm3.d
                    zmm12.d = _mm_sqrt_ss(0, zmm2.d).d f* zmm0.d
                
                zmm0 = rdx_2[0x15]
                
                if (not(zmm0.d f<= 9.99999975e-05f))
                    zmm0.d = zmm0.d f* zmm12.d
                    zmm12 = zmm0
                
                int32_t rax_8 = *(arg1 + 0x14c)
                int32_t rbx_1 = 0
                
                if (rax_8 s> 0)
                    void* r11_1 = r8 + 0x30
                    void* rdx_3 = r8 + 0x10
                    
                    do
                        if (rbx_1 == 0)
                            zmm9 = zmm5
                            zmm10 = zmm4
                            zmm8 = zmm15
                        else
                            zmm2.d = 1.57079637f f/ _mm_cvtepi32_ps(zx.o(rax_8)).d
                            zmm2.d = zmm2.d f* _mm_cvtepi32_ps(zx.o(rbx_1))[0]
                            zmm0.d = zmm2.d f* 0.159154937f
                            
                            if (zmm2.d f< 0f)
                                zmm0.d = zmm0.d f- 0.5f
                            else
                                zmm0.d = zmm0.d f+ 0.5f
                            
                            zmm0.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d))).d f* 6.28318548f
                            zmm2.d = zmm2.d f- zmm0.d
                            
                            if (not(zmm2.d f<= 1.57079637f))
                                zmm4 = zmm6
                                zmm0.d = 3.14159274f f- zmm2.d
                                zmm2 = zmm0
                            else if (zmm2.d f>= -1.57079637f)
                                zmm4 = 0x3f800000
                            else
                                zmm4 = zmm6
                                zmm0.d = -3.14159274f f- zmm2.d
                                zmm2 = zmm0
                            
                            zmm1 = zmm2
                            zmm5 = zmm10
                            zmm10 = arg_10
                            zmm1[0] = zmm1[0] f* zmm2.d
                            zmm0.d = zmm1.d f* 2.3889859e-08f
                            zmm3.d = 2.75255616e-06f f- zmm0.d
                            zmm0.d = zmm1.d f* 2.60516146e-07f
                            zmm3.d = zmm3.d f* zmm1[0]
                            zmm7.d = 2.47604949e-05f f- zmm0.d
                            zmm3.d = zmm3.d f- 0.000198408743f
                            zmm7.d = zmm7.d f* zmm1[0]
                            zmm7.d = zmm7.d f- 0.00138883782f
                            zmm3.d = zmm3.d f* zmm1[0]
                            zmm3.d = zmm3.d f+ 0.00833333097f
                            zmm7.d = zmm7.d f* zmm1[0]
                            zmm7.d = zmm7.d f+ 0.0416666381f
                            zmm3.d = zmm3.d f* zmm1[0]
                            zmm3.d = zmm3.d f- 0.166666672f
                            zmm7.d = zmm7.d f* zmm1[0]
                            zmm3.d = zmm3.d f* zmm1[0]
                            zmm7.d = zmm7.d f- 0.5f
                            zmm3.d = zmm3.d f+ 1f
                            zmm7.d = zmm7.d f* zmm1[0]
                            zmm3.d = zmm3.d f* zmm2.d
                            zmm7.d = zmm7.d f+ 1f
                            zmm5.d = zmm5.d f* zmm3.d
                            zmm2.d = zmm8.d f* zmm3.d
                            zmm6.d = zmm9.d f* zmm3.d
                            zmm7.d = zmm7.d f* zmm4.d
                            zmm4.d = zmm5.d f* zmm15.d
                            zmm8.d = zmm2.d f* zmm10.d
                            zmm3.d = zmm6.d f* arg_8
                            zmm0.d = zmm2.d f* arg_8
                            zmm4.d = zmm4.d f- zmm0.d
                            zmm0.d = zmm6.d f* zmm15.d
                            zmm8.d = zmm8.d f- zmm0.d
                            zmm0.d = zmm5.d f* zmm10.d
                            zmm4.d = zmm4.d f+ zmm4.d
                            zmm3.d = zmm3.d f- zmm0.d
                            zmm8.d = zmm8.d f+ zmm8.d
                            zmm1 = zmm4
                            zmm1[0] = zmm1[0] f* zmm7.d
                            zmm3.d = zmm3.d f+ zmm3.d
                            zmm1[0] = zmm1[0] f+ zmm10.d
                            zmm0.d = zmm8.d f* zmm2.d
                            zmm10.d = zmm4.d f* zmm2.d
                            zmm4.d = zmm4.d f* zmm5.d
                            zmm9.d = zmm3.d f* zmm5.d
                            zmm9.d = zmm9.d f- zmm0.d
                            zmm0.d = zmm3.d f* zmm6.d
                            zmm3.d = zmm3.d f* zmm7.d
                            zmm9.d = zmm9.d f+ zmm1[0]
                            zmm1 = zmm8
                            zmm8.d = zmm8.d f* zmm6.d
                            zmm10.d = zmm10.d f- zmm0.d
                            zmm1[0] = zmm1[0] f* zmm7.d
                            zmm3.d = zmm3.d f+ zmm15.d
                            zmm8.d = zmm8.d f- zmm4.d
                            zmm1[0] = zmm1[0] f+ arg_8
                            zmm8.d = zmm8.d f+ zmm3.d
                            zmm10.d = zmm10.d f+ zmm1[0]
                        
                        zmm6 = 0x3f800000
                        
                        if (*(arg1 + 0x180) != 0)
                            zmm6 = *rdi_1
                        
                        zmm7 = zx.o(var_198_1)
                        *rdx_3 = zmm7.q
                        *(r8 + 0x20) = zmm11.d
                        *(r8 + 0x24) = zmm11.d
                        *(rdx_3 + 8) = r14_1
                        *(r8 + 0x1c) = 0
                        *(r8 + 0x40) = 0
                        *(r8 + 0x48) = 0
                        zmm9.d = zmm9.d f* zmm11.d
                        zmm10.d = zmm10.d f* zmm11.d
                        zmm8.d = zmm8.d f* zmm11.d
                        zmm5.d = zmm9.d f* zmm6.d
                        zmm4.d = zmm10.d f* zmm6.d
                        zmm1 = zmm5
                        zmm3.d = zmm8.d f* zmm6.d
                        zmm1[0] = zmm1[0] f+ zmm7.d
                        zmm2.d = zmm4.d f+ var_1dc
                        zmm0.d = zmm3.d f+ r14_1
                        *r8 = (_mm_unpacklo_ps(zmm1, zmm2.q)).q
                        zmm2.d = var_1dc.d f- zmm4.d
                        zmm1 = zmm7
                        zmm1[0] = zmm1[0] f- zmm5.d
                        *(r8 + 8) = zmm0.d
                        *(r8 + 0x28) = *(r9_2 + 0x2c)
                        zmm0 = *(r9_2 + 0x60)
                        float temp0_12[0x4] = _mm_unpacklo_ps(zmm1, zmm2.q)
                        *r11_1 = zmm0
                        *(r8 + 0x6c) = 0
                        *(r8 + 0x50) = temp0_12.q
                        zmm0.d = r14_1.d f- zmm3.d
                        *(rdx_3 + 0x50) = zmm7.q
                        *(r8 + 0x70) = zmm11.d
                        *(r8 + 0x74) = zmm11.d
                        *(rdx_3 + 0x58) = r14_1
                        *(r8 + 0x90) = 0
                        *(r8 + 0x94) = 0x3f800000
                        *(r8 + 0x9c) = 0x3f800000
                        *(r8 + 0x58) = zmm0.d
                        *(r8 + 0x78) = *(r9_2 + 0x2c)
                        *(r11_1 + 0x50) = *(r9_2 + 0x60)
                        
                        if (*(arg1 + 0x180) != 0)
                            zmm6 = *(rdi_1 + 4)
                        
                        zmm4 = var_1b8_1:4.d
                        rbx_1 += 1
                        zmm5 = rax_5
                        zmm3 = zx.o(var_188_1)
                        zmm9.d = zmm9.d f* zmm6.d
                        zmm10.d = zmm10.d f* zmm6.d
                        zmm8.d = zmm8.d f* zmm6.d
                        zmm1 = zmm9
                        zmm6 = 0xbf800000
                        zmm1[0] = zmm1[0] f+ zmm3.d
                        zmm2.d = zmm10.d f+ zmm4.d
                        zmm0.d = zmm8.d f+ zmm5.d
                        float temp0_13[0x4] = _mm_unpacklo_ps(zmm1, zmm2.q)
                        zmm2 = zmm4
                        zmm4 = arg_8
                        zmm2.d = zmm2.d f- zmm10.d
                        zmm10 = var_1e8_1
                        *(r8 + 0xa0) = temp0_13.q
                        zmm1 = zmm3
                        zmm1[0] = zmm1[0] f- zmm9.d
                        zmm9 = arg_20
                        *(r8 + 0xa8) = zmm0.d
                        *(rdx_3 + 0xa0) = *r9_2
                        *(rdx_3 + 0xa8) = r9_2[1].d
                        *(r8 + 0xc0) = zmm11.d
                        *(r8 + 0xc4) = zmm11.d
                        *(r8 + 0xe0) = zmm12.d
                        *(r8 + 0xbc) = 0
                        *(r8 + 0xe4) = 0
                        *(r8 + 0xe8) = 0x3f800000
                        *(r8 + 0xc8) = *(r9_2 + 0x2c)
                        zmm0 = *(r9_2 + 0x60)
                        float temp0_14[0x4] = _mm_unpacklo_ps(zmm1, zmm2.q)
                        *(r11_1 + 0xa0) = zmm0
                        *(r8 + 0xf0) = temp0_14.q
                        zmm0 = zmm5
                        zmm5 = arg_10
                        zmm0.d = zmm0.d f- zmm8.d
                        zmm8 = arg_18
                        *(r8 + 0xf8) = zmm0.d
                        *(rdx_3 + 0xf0) = *r9_2
                        int32_t rax_18 = r9_2[1].d
                        *(r8 + 0x110) = zmm11.d
                        *(r8 + 0x114) = zmm11.d
                        *(r8 + 0x130) = zmm12.d
                        *(rdx_3 + 0xf8) = rax_18
                        rdx_3 += 0x140
                        *(r8 + 0x10c) = 0
                        *(r8 + 0x134) = 0x3f800000
                        *(r8 + 0x138) = 0x3f800000
                        *(r8 + 0x13c) = 0x3f800000
                        *(r8 + 0x118) = *(r9_2 + 0x2c)
                        r8 += 0x140
                        *(r11_1 + 0xf0) = *(r9_2 + 0x60)
                        rax_8 = *(arg1 + 0x14c)
                        r11_1 += 0x140
                    while (rbx_1 s< rax_8)
            
            zmm6 = 0xbf800000
            i_1 += 1
        while (i_1 s< *(arg1 + 0x3c))
return 0
