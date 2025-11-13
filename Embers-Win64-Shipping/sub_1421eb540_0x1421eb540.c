// 函数: sub_1421eb540
// 地址: 0x1421eb540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (*(arg1 + 0x28) & 1) == 0
float zmm3[0x4] = data_142d4cc30
void* rax = *(arg2 + 0x80)
void* r8 = *(arg2 + 0x90)
float* r9 = *(arg2 + 0xb0)
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float zmm0[0x4] = *(rax + 0x3b0)
float temp0_1[0x4] = _mm_mul_ps(temp0, zmm0)
int64_t var_2a8 = 0
float temp0_3[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0x55), *(rax + 0x390))
int96_t var_f8 = zmm0[0].12
float temp0_5[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), *(rax + 0x3a0))
float temp0_7[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0), *(rax + 0x380))
float zmm9[0x4] = zx.o(0)
var_2a8.o = _mm_add_ps(_mm_add_ps(temp0_1, temp0_5), _mm_add_ps(temp0_3, temp0_7))
int64_t r14

if (cond:0 || r9 == 0)
    r14.b = 0
else
    r14.b = 1

int64_t r10 = *(arg1 + 0x78)
int32_t i = 0
int64_t var_190 = r10
int32_t i_1 = 0

if (*(arg1 + 0x5c) s> 0)
    void* rcx = nullptr
    float zmm1[0x4] = var_f8:8.d
    float zmm2[0x4] = var_f8:4.d
    float zmm4[0x4] = 0x40000000
    zmm3 = 0x3f800000
    float zmm5[0x4] = 0x322bcc77
    int64_t r12
    int64_t var_30_1 = r12
    float zmm6[0x4] = var_f8.d
    float zmm7[0x4]
    float var_68_1[0x4] = zmm7
    float zmm8[0x4]
    float var_78_1[0x4] = zmm8
    float zmm10[0x4]
    float var_98_1[0x4] = zmm10
    float zmm11[0x4] = 0x38d1b717
    uint32_t zmm12[0x4] = 0x7fffffff
    float zmm13[0x4]
    float var_c8_1[0x4] = zmm13
    float zmm14[0x4] = 0x3f000000
    float var_248_1 = var_2a8:4.d[0]
    float zmm15[0x4]
    float var_e8_1[0x4] = zmm15
    float var_238_1 = zmm1[0]
    float var_230_1 = zmm2[0]
    float var_228_1 = zmm6[0]
    float var_258_1 = var_2a8.d[0]
    void* var_188_1 = nullptr
    
    do
        int64_t* rdx_1 = sx.q(zx.d(*(rcx + *(arg1 + 0x80))) * *(arg1 + 0x60)) + r10
        int32_t* rcx_4 = sx.q(*(arg1 + 0x130)) + rdx_1
        int32_t rax_2 = *rcx_4
        int32_t r10_2 = rax_2 & 0xf0000000
        
        if ((r10_2 == 0x40000000 || r10_2 == 0x10000000) && (rax_2 & 0x3fff) != 0x3fff)
            zmm10 = zmm4
            float temp0_11[0x4] = _mm_cvtepi32_ps(zx.o(rcx_4[2]))
            r12.b = 0
            int32_t r13_1 = 0
            int64_t var_1e8_1 = 0
            float arg_20 = zmm9[0]
            zmm4 = zmm9
            float arg_10 = zmm4[0]
            zmm13 = zmm9
            float var_2b8_1 = zmm3[0]
            zmm10[0] = zmm10[0] / temp0_11[0]
            float arg_18 = zmm10[0]
            
            if (r14.b != 0)
                r13_1 = 0x10
                var_1e8_1 = 0x10
                
                if (*(arg1 + 0xe4) s> 0)
                    r12.b = 1
                    var_1e8_1 = 0x10
            
            void* rbx = nullptr
            int64_t* r10_3 = nullptr
            int32_t* r15_1 = nullptr
            int64_t var_288_1 = *(rcx_4 + 0x34)
            float arg_8
            
            if ((*(arg1 + 0x148) & 3) != 0)
                zmm14 = var_288_1.d
                zmm8 = rcx_4[0xf]
                zmm15 = var_288_1:4.d
                arg_8 = zmm14[0]
                goto label_1421ebab0
            
            zmm7 = rdx_1[2].d
            zmm9 = *(rdx_1 + 0x14)
            zmm7[0] = zmm7[0] - zmm6[0]
            zmm10 = rdx_1[3].d
            zmm9[0] = zmm9[0] - zmm2[0]
            zmm10[0] = zmm10[0] - zmm1[0]
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm9[0] = zmm9[0] * zmm9[0]
            zmm10[0] = zmm10[0] * zmm10[0]
            zmm9[0] = zmm9[0] + zmm7[0]
            zmm9[0] = zmm9[0] + zmm10[0]
            
            if (not(zmm9[0] <= zmm5[0]))
                zmm4 = zx.o(0)
                zmm4[0] = zmm14[0]
                float temp0_12[0x4] = _mm_rsqrt_ss(zmm9[0], zmm9[0])
                zmm9[0] = zmm9[0] * zmm4[0]
                temp0_12[0] = temp0_12[0] * temp0_12[0]
                zmm9[0] = zmm9[0] * temp0_12[0]
                zmm4[0] = zmm4[0] - zmm9[0]
                temp0_12[0] = temp0_12[0] * zmm4[0]
                temp0_12[0] = temp0_12[0] + temp0_12[0]
                temp0_12[0] = temp0_12[0] * temp0_12[0]
                zmm9[0] = zmm9[0] * temp0_12[0]
                zmm4[0] = zmm4[0] - zmm9[0]
                temp0_12[0] = temp0_12[0] * zmm4[0]
                temp0_12[0] = temp0_12[0] + temp0_12[0]
                arg_8 = temp0_12[0]
                zmm7[0] = zmm7[0] * temp0_12[0]
                zmm9[0] = zmm9[0] * temp0_12[0]
                zmm10[0] = zmm10[0] * temp0_12[0]
                zmm5 = 0x322bcc77
            
            zmm0 = zx.o(*(rcx_4 + 0x28))
            int32_t rax_5 = rcx_4[0xc]
            zmm8 = zmm0.d
            float temp0_13[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm15 = rax_5
            temp0_13[0] = temp0_13[0] * temp0_13[0]
            zmm15[0] = zmm15[0] * zmm15[0]
            temp0_13[0] = temp0_13[0] + zmm8[0]
            temp0_13[0] = temp0_13[0] + zmm15[0]
            
            if (not(temp0_13[0] <= zmm5[0]))
                zmm5 = zx.o(0)
                zmm3 = zx.o(0)
                zmm5[0] = zmm14[0]
                zmm3[0] = temp0_13[0]
                float temp0_14[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                zmm3[0] = zmm3[0] * zmm5[0]
                temp0_14[0] = temp0_14[0] * temp0_14[0]
                zmm3[0] = zmm3[0] * temp0_14[0]
                zmm5[0] = zmm5[0] - zmm3[0]
                temp0_14[0] = temp0_14[0] * zmm5[0]
                temp0_14[0] = temp0_14[0] + temp0_14[0]
                temp0_14[0] = temp0_14[0] * temp0_14[0]
                zmm3[0] = zmm3[0] * temp0_14[0]
                zmm5[0] = zmm5[0] - zmm3[0]
                temp0_14[0] = temp0_14[0] * zmm5[0]
                zmm5 = 0x322bcc77
                temp0_14[0] = temp0_14[0] + temp0_14[0]
                arg_8 = temp0_14[0]
                zmm8[0] = zmm8[0] * temp0_14[0]
                temp0_13[0] = temp0_13[0] * temp0_14[0]
                zmm15[0] = zmm15[0] * temp0_14[0]
            
            zmm14 = temp0_13
            zmm15[0] = zmm15[0] * zmm9[0]
            zmm14[0] = zmm14[0] * zmm10[0]
            zmm15[0] = zmm15[0] * zmm7[0]
            zmm14[0] = zmm14[0] - zmm15[0]
            temp0_13[0] = temp0_13[0] * zmm7[0]
            zmm8[0] = zmm8[0] * zmm9[0]
            zmm8[0] = zmm8[0] * zmm10[0]
            arg_8 = zmm14[0]
            zmm8[0] = zmm8[0] - temp0_13[0]
            zmm15[0] = zmm15[0] - zmm8[0]
            
            if (_mm_and_ps(zmm14, zmm12)[0] > zmm11[0])
                rax_5.b = 0
            else if (_mm_and_ps(zmm15, zmm12)[0] > zmm11[0])
                rax_5.b = 0
            else if (_mm_and_ps(zmm8, zmm12)[0] > zmm11[0])
                rax_5.b = 0
            else
                rax_5.b = 1
            
            if (rax_5.b != 0)
                zmm14 = var_258_1
                zmm15 = var_248_1
                zmm8 = 0
                arg_8 = zmm14[0]
            
            zmm15[0] = zmm15[0] * zmm15[0]
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm15[0] = zmm15[0] + zmm14[0]
            zmm15[0] = zmm15[0] + zmm8[0]
            
            if (not(zmm15[0] <= zmm5[0]))
                zmm5 = 0x3f000000
                float temp0_18[0x4] = _mm_rsqrt_ss(zmm15[0], zmm15[0])
                zmm2 = 0x3f000000
                zmm15[0] = zmm15[0] * 0.5f
                temp0_18[0] = temp0_18[0] * temp0_18[0]
                zmm15[0] = zmm15[0] * temp0_18[0]
                zmm2[0] = 0.5f - zmm15[0]
                temp0_18[0] = temp0_18[0] * zmm2[0]
                temp0_18[0] = temp0_18[0] + temp0_18[0]
                temp0_18[0] = temp0_18[0] * temp0_18[0]
                zmm15[0] = zmm15[0] * temp0_18[0]
                zmm5[0] = 0.5f - zmm15[0]
                temp0_18[0] = temp0_18[0] * zmm5[0]
                temp0_18[0] = temp0_18[0] + temp0_18[0]
                zmm14[0] = zmm14[0] * temp0_18[0]
                arg_8 = temp0_18[0]
                zmm15[0] = zmm15[0] * temp0_18[0]
                arg_8 = zmm14[0]
                zmm8[0] = zmm8[0] * temp0_18[0]
            
            zmm10 = arg_18
            zmm3 = 0x3f800000
            zmm4 = arg_10
            
            while (true)
                zmm9 = zx.o(0)
            label_1421ebab0:
                zmm6 = *(arg1 + 0x88)
                int32_t rdi_1 = rcx_4[7]
                zmm7 = zmm6
                zmm7[0] = zmm7[0] f* rdx_1[0xa].d
                float var_204_1 = zmm7[0]
                
                if (rdi_1 s<= 1)
                    if (r12.b == 1)
                        rbx = sx.q(*(arg1 + 0xe4)) + rdx_1
                    
                    if ((*(arg1 + 0x3c) & 0x20) == 0)
                        zmm6 = zmm4
                    else
                        zmm6 = rcx_4[5]
                    
                    zmm14[0] = zmm14[0] * zmm7[0]
                    zmm15[0] = zmm15[0] * zmm7[0]
                    zmm8[0] = zmm8[0] * zmm7[0]
                    zmm15[0] = zmm15[0] f+ *(rdx_1 + 0x14)
                    zmm8[0] = zmm8[0] f+ rdx_1[3].d
                    zmm14[0] = zmm14[0] f+ rdx_1[2].d
                    float var_138_1 = zmm8[0]
                    *r8 = (_mm_unpacklo_ps(zmm14, zmm15[0].q)).q
                    *(r8 + 8) = var_138_1
                    *(r8 + 0x10) = *rdx_1
                    int32_t rax_20 = rdx_1[1].d
                    *(r8 + 0x20) = zmm7[0]
                    *(r8 + 0x24) = zmm7[0]
                    *(r8 + 0x40) = zmm4[0]
                    *(r8 + 0x48) = zmm6[0]
                    *(r8 + 0x18) = rax_20
                    *(r8 + 0x1c) = 0
                    *(r8 + 0x44) = 0
                    *(r8 + 0x4c) = 0
                    *(r8 + 0x28) = *(rdx_1 + 0x2c)
                    *(r8 + 0x30) = *(rdx_1 + 0x60)
                    
                    if (r14.b != 0)
                        if (rbx == 0)
                            *r9 = 1f
                            zmm0 = 0x3f800000
                            r9[1] = 0x3f800000
                            r9[2] = 0x3f800000
                        else
                            *r9 = *rbx
                            r9[1] = *(rbx + 4)
                            r9[2] = *(rbx + 8)
                            zmm0 = *(rbx + 0xc)
                        
                        r9[3] = zmm0[0]
                        r9 += zx.q(r13_1)
                    
                    zmm1 = rdx_1[2].d
                    zmm0 = rdx_1[3].d
                    zmm1[0] = zmm1[0] - zmm14[0]
                    zmm2 = *(rdx_1 + 0x14)
                    zmm0[0] = zmm0[0] - zmm8[0]
                    zmm2[0] = zmm2[0] - zmm15[0]
                    float var_12c_1 = zmm0[0]
                    *(r8 + 0x50) = (_mm_unpacklo_ps(zmm1, zmm2[0].q)).q
                    *(r8 + 0x58) = var_12c_1
                    *(r8 + 0x60) = *rdx_1
                    int32_t rax_27 = rdx_1[1].d
                    *(r8 + 0x70) = zmm7[0]
                    *(r8 + 0x74) = zmm7[0]
                    *(r8 + 0x90) = zmm4[0]
                    *(r8 + 0x98) = zmm6[0]
                    *(r8 + 0x68) = rax_27
                    *(r8 + 0x6c) = 0
                    *(r8 + 0x94) = 0x3f800000
                    *(r8 + 0x9c) = 0x3f800000
                    *(r8 + 0x78) = *(rdx_1 + 0x2c)
                    *(r8 + 0x80) = *(rdx_1 + 0x60)
                    
                    if (r14.b != 0)
                        if (rbx == 0)
                            *r9 = 1f
                            zmm0 = 0x3f800000
                            r9[1] = 0x3f800000
                            r9[2] = 0x3f800000
                        else
                            *r9 = *rbx
                            r9[1] = *(rbx + 4)
                            r9[2] = *(rbx + 8)
                            zmm0 = *(rbx + 0xc)
                        
                        r9[3] = zmm0[0]
                        r9 += var_1e8_1
                    
                    zmm3 = 0x3f800000
                    zmm4[0] = zmm4[0] + zmm10[0]
                    r8 += 0xa0
                    arg_10 = zmm4[0]
                else
                    zmm0 = zx.o(rdx_1[2])
                    zmm1 = zx.o(r10_3[2])
                    int32_t rax_6 = rdx_1[3].d
                    zmm6[0] = zmm6[0] f* r10_3[0xa].d
                    int64_t var_1d0_1 = zmm0.q
                    int32_t rax_7 = rcx_4[0xc]
                    int64_t var_1c0_1 = *(rcx_4 + 0x28)
                    int64_t var_1a0_1 = zmm1.q
                    int32_t rax_8 = r10_3[3].d
                    int32_t rax_9 = r15_1[0xc]
                    float var_274_1 = zmm9[0]
                    float var_26c_1 = zmm9[0]
                    float var_264_1 = zmm9[0]
                    float var_25c_1 = zmm3[0]
                    float var_278_1 = zmm9[0]
                    float var_270_1 = zmm9[0]
                    float var_268_1 = zmm9[0]
                    float var_260_1 = zmm3[0]
                    var_2a8.o = *(rdx_1 + 0x60)
                    int64_t var_1b0_1 = *(r15_1 + 0x28)
                    float var_160_1[0x4] = *(r10_3 + 0x60)
                    float temp0_19[0x4] = _mm_cvtepi32_ps(zx.o(rdi_1))
                    zmm3[0] = zmm3[0] / temp0_19[0]
                    float var_1e0_1 = zmm3[0]
                    
                    if (r12.b != 0)
                        int64_t rax_10 = sx.q(*(arg1 + 0xe4))
                        var_26c_1 = (*(rax_10 + rdx_1 + 4))[0]
                        var_278_1 = (*(rax_10 + r10_3))[0]
                        var_270_1 = (*(rax_10 + r10_3 + 4))[0]
                        var_268_1 = (*(rax_10 + r10_3 + 8))[0]
                        var_260_1 = (*(rax_10 + r10_3 + 0xc))[0]
                        var_274_1 = (*(rax_10 + rdx_1))[0]
                        var_264_1 = (*(rax_10 + rdx_1 + 8))[0]
                        var_25c_1 = (*(rax_10 + rdx_1 + 0xc))[0]
                    
                    int32_t rdi_2 = rdi_1 - 1
                    zmm9 = zmm3
                    zmm10 = zmm3
                    zmm11 = zmm3
                    zmm12 = zmm3
                    
                    if (rdi_1 - 1 s>= 0)
                        zmm0 = arg_20
                        zmm13[0] = zmm13[0] - zmm14[0]
                        zmm0[0] = zmm0[0] - zmm15[0]
                        uint64_t r10_4 = zx.q(r13_1)
                        zmm6[0] = zmm6[0] - zmm7[0]
                        float var_1dc_1 = zmm13[0]
                        arg_20 = zmm0[0]
                        zmm0 = var_2b8_1
                        zmm0[0] = zmm0[0] - zmm8[0]
                        float var_208_1 = zmm6[0]
                        float var_2b8_2 = zmm0[0]
                        zmm0 = var_160_1[0]
                        zmm0[0] = zmm0[0] f- var_2a8.d
                        float var_1d8_1 = zmm0[0]
                        zmm0 = var_160_1[1]
                        zmm0[0] = zmm0[0] f- var_2a8:4.d
                        float var_214_1 = zmm0[0]
                        zmm0 = var_160_1[2]
                        zmm0[0] = zmm0[0] - 0f
                        float var_210_1 = zmm0[0]
                        zmm0 = var_160_1[3]
                        int32_t var_29c
                        zmm0[0] = zmm0[0] f- var_29c
                        float var_20c_1 = zmm0[0]
                    label_1421ebc80:
                        zmm2 = var_1d0_1:4.d
                        zmm13 = zx.o(0)
                        zmm13[0] = float.s(rdi_2)
                        zmm13[0] = zmm13[0] * var_1e0_1
                        zmm13[0] = zmm13[0] * zmm13[0]
                        zmm13[0] = zmm13[0] * 3f
                        zmm13[0] = zmm13[0] * zmm13[0]
                        zmm13[0] = zmm13[0] - zmm13[0]
                        zmm13[0] = zmm13[0] + zmm13[0]
                        zmm13[0] = zmm13[0] + zmm13[0]
                        zmm13[0] = zmm13[0] - zmm13[0]
                        zmm1 = var_1b0_1:4.d
                        zmm1[0] = zmm1[0] * zmm13[0]
                        zmm13[0] = zmm13[0] - zmm13[0]
                        zmm13[0] = zmm13[0] - zmm13[0]
                        zmm0 = var_1c0_1:4.d
                        zmm13[0] = zmm13[0] + zmm13[0]
                        zmm13[0] = zmm13[0] + zmm3[0]
                        zmm3 = var_210_1
                        zmm3[0] = zmm3[0] * zmm13[0]
                        zmm0[0] = zmm0[0] * zmm13[0]
                        zmm3[0] = zmm3[0] + 0f
                        zmm2[0] = zmm2[0] * zmm13[0]
                        zmm2[0] = zmm2[0] + zmm0[0]
                        float var_148_1 = zmm3[0]
                        zmm0 = var_1a0_1:4.d
                        zmm3 = var_1d0_1.d
                        zmm0[0] = zmm0[0] * zmm13[0]
                        zmm2[0] = zmm2[0] + zmm1[0]
                        zmm3[0] = zmm3[0] * zmm13[0]
                        zmm1 = rax_9
                        zmm1[0] = zmm1[0] * zmm13[0]
                        zmm2[0] = zmm2[0] + zmm0[0]
                        zmm0 = rax_7
                        zmm0[0] = zmm0[0] * zmm13[0]
                        float var_1f8_1 = zmm2[0]
                        zmm2 = rax_6
                        zmm2[0] = zmm2[0] * zmm13[0]
                        zmm2[0] = zmm2[0] + zmm0[0]
                        zmm0 = rax_8
                        zmm0[0] = zmm0[0] * zmm13[0]
                        zmm2[0] = zmm2[0] + zmm1[0]
                        zmm1 = var_20c_1
                        zmm1[0] = zmm1[0] * zmm13[0]
                        zmm2[0] = zmm2[0] + zmm0[0]
                        zmm0 = var_1dc_1
                        zmm0[0] = zmm0[0] * zmm13[0]
                        zmm0[0] = zmm0[0] + zmm14[0]
                        float var_1f4_1 = zmm2[0]
                        zmm2 = var_214_1
                        zmm14 = var_208_1
                        zmm2[0] = zmm2[0] * zmm13[0]
                        float var_200_1 = zmm0[0]
                        zmm0 = arg_20
                        zmm2[0] = zmm2[0] f+ var_2a8:4.d
                        zmm0[0] = zmm0[0] * zmm13[0]
                        zmm14[0] = zmm14[0] * zmm13[0]
                        zmm0[0] = zmm0[0] + zmm15[0]
                        float var_14c_1 = zmm2[0]
                        zmm14[0] = zmm14[0] + var_204_1
                        float var_1fc_1 = zmm0[0]
                        zmm0 = var_2b8_2
                        zmm0[0] = zmm0[0] * zmm13[0]
                        zmm0[0] = zmm0[0] + zmm8[0]
                        float var_2b4_1 = zmm0[0]
                        zmm0 = var_1d8_1
                        zmm0[0] = zmm0[0] * zmm13[0]
                        zmm0[0] = zmm0[0] f+ var_2a8.d
                        float var_150_1 = zmm0[0]
                        zmm0 = var_29c
                        zmm0[0] = zmm0[0] + zmm1[0]
                        float var_144_1 = zmm0[0]
                        zmm0 = var_1c0_1.d
                        zmm0[0] = zmm0[0] * zmm13[0]
                        zmm3[0] = zmm3[0] + zmm0[0]
                        zmm1 = var_1b0_1.d
                        zmm0 = var_1a0_1.d
                        zmm1[0] = zmm1[0] * zmm13[0]
                        zmm0[0] = zmm0[0] * zmm13[0]
                        zmm3[0] = zmm3[0] + zmm1[0]
                        zmm3[0] = zmm3[0] + zmm0[0]
                        float var_1f0_1 = zmm3[0]
                        
                        if (r12.b != 0)
                            zmm9 = var_278_1
                            zmm9[0] = zmm9[0] - var_274_1
                            zmm10 = var_270_1
                            zmm10[0] = zmm10[0] - var_26c_1
                            zmm11 = var_268_1
                            zmm11[0] = zmm11[0] - var_264_1
                            zmm12 = var_260_1
                            zmm12[0] = zmm12[0] f- var_25c_1
                            zmm9[0] = zmm9[0] * zmm13[0]
                            zmm10[0] = zmm10[0] * zmm13[0]
                            zmm9[0] = zmm9[0] + var_274_1
                            zmm11[0] = zmm11[0] * zmm13[0]
                            zmm10[0] = zmm10[0] + var_26c_1
                            zmm12[0] = zmm12[0] f* zmm13[0]
                            zmm11[0] = zmm11[0] + var_264_1
                            zmm12[0] = zmm12[0] f+ var_25c_1
                        
                        zmm4 = arg_10
                        
                        if ((*(arg1 + 0x3c) & 0x20) == 0)
                            zmm2 = zmm4
                        else
                            zmm2 = r15_1[5]
                            zmm2[0] = zmm2[0] f- rcx_4[5]
                            zmm2[0] = zmm2[0] * zmm13[0]
                            zmm2[0] = zmm2[0] f+ rcx_4[5]
                        
                        bool cond:6_1 = *(arg1 + 0x100) == 0
                        zmm5 = var_2b4_1
                        zmm7 = var_200_1
                        zmm13 = var_1fc_1
                        zmm6 = var_1f8_1
                        zmm5[0] = zmm5[0] * zmm14[0]
                        zmm7[0] = zmm7[0] * zmm14[0]
                        zmm13[0] = zmm13[0] * zmm14[0]
                        float var_2b4_2 = zmm5[0]
                        zmm7[0] = zmm7[0] + zmm3[0]
                        zmm3 = zmm5
                        zmm5 = var_1f4_1
                        zmm3[0] = zmm3[0] + zmm5[0]
                        zmm13[0] = zmm13[0] + zmm6[0]
                        float var_298_1 = zmm7[0]
                        float var_290_1 = zmm3[0]
                        float var_294_1 = zmm13[0]
                        
                        if (not(cond:6_1))
                            zmm7[0] = zmm7[0] f+ *(arg2 + 0x30)
                            zmm13[0] = zmm13[0] f+ *(arg2 + 0x34)
                            zmm3[0] = zmm3[0] f+ *(arg2 + 0x38)
                            var_298_1 = zmm7[0]
                            float var_294_2 = zmm13[0]
                            var_290_1 = zmm3[0]
                        
                        zmm1 = zx.o(var_298_1.q)
                        zmm3 = var_150_1.o
                        *r8 = zmm1.q
                        *(r8 + 0x10) = zmm1.q
                        *(r8 + 8) = var_290_1
                        *(r8 + 0x18) = var_290_1
                        *(r8 + 0x1c) = 0
                        *(r8 + 0x44) = 0
                        *(r8 + 0x4c) = 0
                        *(r8 + 0x20) = zmm14[0]
                        *(r8 + 0x24) = zmm14[0]
                        *(r8 + 0x40) = zmm4[0]
                        *(r8 + 0x48) = zmm2[0]
                        *(r8 + 0x28) = *(rdx_1 + 0x2c)
                        *(r8 + 0x30) = zmm3
                        
                        if (r14.b != 0)
                            *r9 = zmm9[0]
                            r9[1] = zmm10[0]
                            r9[2] = zmm11[0]
                            r9[3] = zmm12[0]
                            r9 += r10_4
                        
                        zmm0 = var_1f0_1
                        zmm6[0] = zmm6[0] - zmm13[0]
                        *(r8 + 0x70) = zmm14[0]
                        zmm0[0] = zmm0[0] - zmm7[0]
                        *(r8 + 0x74) = zmm14[0]
                        *(r8 + 0x90) = zmm4[0]
                        *(r8 + 0x98) = zmm2[0]
                        *(r8 + 0x6c) = 0
                        float temp0_21[0x4] = _mm_unpacklo_ps(zmm0, zmm6[0].q)
                        *(r8 + 0x50) = temp0_21.q
                        *(r8 + 0x60) = temp0_21.q
                        *(r8 + 0x94) = 0x3f800000
                        *(r8 + 0x9c) = 0x3f800000
                        var_298_1.q = temp0_21.q
                        zmm5[0] = zmm5[0] - var_2b4_2
                        float var_290_2 = zmm5[0]
                        *(r8 + 0x58) = var_290_2
                        *(r8 + 0x68) = var_290_2
                        *(r8 + 0x78) = *(rdx_1 + 0x2c)
                        *(r8 + 0x80) = zmm3
                        
                        if (r14.b != 0)
                            *r9 = zmm9[0]
                            r9[1] = zmm10[0]
                            r9[2] = zmm11[0]
                            r9[3] = zmm12[0]
                            r9 += r10_4
                        
                        zmm4[0] = zmm4[0] + arg_18
                        zmm14 = arg_8
                        r8 += 0xa0
                        int32_t temp1_1 = rdi_2
                        rdi_2 -= 1
                        zmm3 = 0x3f800000
                        arg_10 = zmm4[0]
                        
                        if (temp1_1 - 1 s>= 0)
                            goto label_1421ebc80
                    
                    zmm11 = 0x38d1b717
                    zmm12 = 0x7fffffff
                    zmm10 = arg_18
                
                r10_3 = rdx_1
                zmm13 = arg_8
                int32_t rax_16 = *rcx_4 & 0x3fff
                arg_20 = zmm15[0]
                r15_1 = rcx_4
                var_2b8_1 = zmm8[0]
                
                if (rax_16 == 0x3fff)
                    zmm5 = 0x322bcc77
                    zmm9 = zx.o(0)
                    zmm14 = 0x3f000000
                    zmm1 = var_238_1
                    zmm2 = var_230_1
                    zmm6 = var_228_1
                    zmm4 = 0x40000000
                    i = i_1
                    break
                
                rdx_1 = sx.q(rax_16 * *(arg1 + 0x60)) + var_190
                rcx_4 = sx.q(*(arg1 + 0x130)) + rdx_1
                int64_t var_288_2 = *(rcx_4 + 0x34)
                
                if ((*(arg1 + 0x148) & 3) == 0)
                    zmm6 = rdx_1[2].d
                    zmm8 = *(rdx_1 + 0x14)
                    zmm6[0] = zmm6[0] - var_228_1
                    zmm8[0] = zmm8[0] - var_230_1
                    zmm7 = rdx_1[3].d
                    zmm7[0] = zmm7[0] - var_238_1
                    zmm5 = 0x322bcc77
                    zmm6[0] = zmm6[0] * zmm6[0]
                    zmm8[0] = zmm8[0] * zmm8[0]
                    zmm7[0] = zmm7[0] * zmm7[0]
                    zmm8[0] = zmm8[0] + zmm6[0]
                    zmm8[0] = zmm8[0] + zmm7[0]
                    
                    if (not(zmm8[0] <= 9.99999994e-09f))
                        zmm4 = 0x3f000000
                        float temp0_24[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
                        zmm2 = 0x3f000000
                        zmm8[0] = zmm8[0] * 0.5f
                        temp0_24[0] = temp0_24[0] * temp0_24[0]
                        zmm8[0] = zmm8[0] * temp0_24[0]
                        zmm2[0] = 0.5f - zmm8[0]
                        temp0_24[0] = temp0_24[0] * zmm2[0]
                        temp0_24[0] = temp0_24[0] + temp0_24[0]
                        temp0_24[0] = temp0_24[0] * temp0_24[0]
                        zmm8[0] = zmm8[0] * temp0_24[0]
                        zmm4[0] = 0.5f - zmm8[0]
                        temp0_24[0] = temp0_24[0] * zmm4[0]
                        temp0_24[0] = temp0_24[0] + temp0_24[0]
                        arg_8 = temp0_24[0]
                        temp0_24[0] = temp0_24[0] * zmm6[0]
                        temp0_24[0] = temp0_24[0] * zmm7[0]
                        temp0_24[0] = temp0_24[0] * zmm8[0]
                        zmm6 = temp0_24
                        zmm7 = temp0_24
                        zmm5 = 0x322bcc77
                        zmm8 = temp0_24
                    
                    zmm0 = zx.o(*(rcx_4 + 0x28))
                    int32_t rax_32 = rcx_4[0xc]
                    zmm10 = zmm0.d
                    float temp0_25[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                    zmm10[0] = zmm10[0] * zmm10[0]
                    zmm11 = rax_32
                    temp0_25[0] = temp0_25[0] * temp0_25[0]
                    zmm11[0] = zmm11[0] * zmm11[0]
                    temp0_25[0] = temp0_25[0] + zmm10[0]
                    temp0_25[0] = temp0_25[0] + zmm11[0]
                    
                    if (not(temp0_25[0] <= zmm5[0]))
                        zmm3 = zx.o(0)
                        zmm5 = 0x3f000000
                        zmm3[0] = temp0_25[0]
                        zmm2 = 0x3f000000
                        float temp0_26[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                        zmm3[0] = zmm3[0] * 0.5f
                        temp0_26[0] = temp0_26[0] * temp0_26[0]
                        zmm3[0] = zmm3[0] * temp0_26[0]
                        zmm2[0] = 0.5f - zmm3[0]
                        temp0_26[0] = temp0_26[0] * zmm2[0]
                        temp0_26[0] = temp0_26[0] + temp0_26[0]
                        temp0_26[0] = temp0_26[0] * temp0_26[0]
                        zmm3[0] = zmm3[0] * temp0_26[0]
                        zmm5[0] = 0.5f - zmm3[0]
                        temp0_26[0] = temp0_26[0] * zmm5[0]
                        zmm5 = 0x322bcc77
                        temp0_26[0] = temp0_26[0] + temp0_26[0]
                        arg_8 = temp0_26[0]
                        zmm10[0] = zmm10[0] * temp0_26[0]
                        temp0_25[0] = temp0_25[0] * temp0_26[0]
                        zmm11[0] = zmm11[0] * temp0_26[0]
                    
                    zmm14 = zmm7
                    zmm8[0] = zmm8[0] * zmm11[0]
                    zmm15 = zmm6
                    zmm14[0] = zmm14[0] * temp0_25[0]
                    zmm15[0] = zmm15[0] * zmm11[0]
                    zmm11 = 0x38d1b717
                    zmm14[0] = zmm14[0] - zmm8[0]
                    zmm7[0] = zmm7[0] * zmm10[0]
                    zmm8[0] = zmm8[0] * zmm10[0]
                    zmm6[0] = zmm6[0] * temp0_25[0]
                    zmm0 = _mm_and_ps(zmm14, zmm12)
                    arg_8 = zmm14[0]
                    bool cond:7_1 = zmm0[0] > 9.99999975e-05f
                    zmm15[0] = zmm15[0] - zmm7[0]
                    zmm8[0] = zmm8[0] - zmm6[0]
                    
                    if (cond:7_1)
                        rax_32.b = 0
                    else if (_mm_and_ps(zmm15, zmm12)[0] > 9.99999975e-05f)
                        rax_32.b = 0
                    else if (_mm_and_ps(zmm8, zmm12)[0] > 9.99999975e-05f)
                        rax_32.b = 0
                    else
                        rax_32.b = 1
                    
                    if (rax_32.b != 0)
                        zmm14 = var_258_1
                        zmm15 = var_248_1
                        zmm8 = 0
                        arg_8 = zmm14[0]
                    
                    zmm4 = arg_10
                    zmm3 = 0x3f800000
                    zmm10 = arg_18
                    zmm15[0] = zmm15[0] * zmm15[0]
                    zmm9 = zx.o(0)
                    zmm14[0] = zmm14[0] * zmm14[0]
                    zmm8[0] = zmm8[0] * zmm8[0]
                    zmm15[0] = zmm15[0] + zmm14[0]
                    zmm15[0] = zmm15[0] + zmm8[0]
                    
                    if (zmm15[0] <= zmm5[0])
                        goto label_1421ebab0
                    
                    zmm5 = 0x3f000000
                    zmm3 = zx.o(0)
                    zmm2 = 0x3f000000
                    zmm3[0] = zmm15[0]
                    float temp0_30[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    temp0_30[0] = temp0_30[0] * temp0_30[0]
                    zmm3[0] = zmm3[0] * temp0_30[0]
                    zmm2[0] = 0.5f - zmm3[0]
                    temp0_30[0] = temp0_30[0] * zmm2[0]
                    temp0_30[0] = temp0_30[0] + temp0_30[0]
                    temp0_30[0] = temp0_30[0] * temp0_30[0]
                    zmm3[0] = zmm3[0] * temp0_30[0]
                    zmm5[0] = 0.5f - zmm3[0]
                    zmm3 = 0x3f800000
                    temp0_30[0] = temp0_30[0] * zmm5[0]
                    temp0_30[0] = temp0_30[0] + temp0_30[0]
                    zmm14[0] = zmm14[0] * temp0_30[0]
                    arg_8 = temp0_30[0]
                    zmm15[0] = zmm15[0] * temp0_30[0]
                    zmm8[0] = zmm8[0] * temp0_30[0]
                    zmm4 = arg_10
                    arg_8 = zmm14[0]
                    goto label_1421ebab0
                
                zmm14 = var_288_2.d
                zmm8 = rcx_4[0xf]
                zmm15 = var_288_2:4.d
                arg_8 = zmm14[0]
            
            goto label_1421ec683
        
    label_1421ec683:
        i += 1
        r10 = var_190
        rcx = var_188_1 + 2
        i_1 = i
        var_188_1 = rcx
    while (i s< *(arg1 + 0x5c))

return 0
