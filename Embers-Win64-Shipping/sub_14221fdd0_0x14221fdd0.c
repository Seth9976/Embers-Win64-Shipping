// 函数: sub_14221fdd0
// 地址: 0x14221fdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* r12)[0x4] = arg4
int64_t rsi = sx.q(arg2)

if ((*(*(arg1 + 0x18) + 0x433) & 8) == 0 && data_143de5480 != 0)
    GetCurrentThreadId()

void* rdi = *(arg1 + 0x248)
float zmm6[0x4]
float var_48[0x4] = zmm6
float zmm7[0x4]
float var_58[0x4] = zmm7
int64_t var_88
int64_t* r8_1
int64_t* r9_1
int32_t* r10_2
float zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (rdi == 0)
label_1422204dc:
    r8_1 = arg6
    r9_1 = arg5
    r10_2 = arg7
label_1422204f1:
    zmm2 = *(*(arg1 + 0x18) + 0x1d0)
    float var_80_7 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
    *arg3 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
    arg3[1].d = var_80_7
    void* rdx_10 = *(arg1 + 0x248)
    
    if (rdx_10 != 0 && *(rdx_10 + 0x74) s> 0 && rsi.d s< *(rdx_10 + 0x80))
        int64_t rcx_27 = sx.q(rsi.d) * 3
        int64_t rax_48 = *(rdx_10 + 0x78)
        int32_t rax_49 = *(rax_48 + (rcx_27 << 2) + 8)
        void* rax_50 = *(arg1 + 0x28)
        var_88 = *(rax_48 + (rcx_27 << 2))
        
        if (rax_50 == 0 || (*(*(rax_50 + 0x30) + 0x59) & 1) != 0)
            zmm2 = rax_49
            zmm0 = var_88:4.d
            zmm1 = var_88.d
        else
            void* rax_52 = *(arg1 + 0x18)
            zmm5 = var_88.d
            zmm2 = _mm_unpacklo_ps(var_88:4.d, 0)
            zmm4 = *(rax_52 + 0x1c0)
            zmm5 = __mulps_xmmps_memps(
                _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5, rax_49[0].q), zmm2[0].q), *(rax_52 + 0x1e0))
            zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
            zmm3 = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), zmm1)
            zmm2 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), zmm3), zmm0)
            zmm2 = _mm_add_ps(zmm2, zmm2)
            zmm4 = _mm_mul_ps(zmm4, zmm2)
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xc9), zmm1)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
            zmm4 = _mm_add_ps(zmm4, zmm5)
            zmm1 = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm1, zmm3), zmm0), zmm4)
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            zmm2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        
        zmm1[0] = zmm1[0] f+ *arg3
        zmm0[0] = zmm0[0] f+ *(arg3 + 4)
        zmm2[0] = zmm2[0] f+ arg3[1].d
        *arg3 = zmm1[0]
        *(arg3 + 4) = zmm0[0]
        arg3[1].d = zmm2[0]
    
    zmm6 = data_142d4cc30
    *r12 = *(*(arg1 + 0x18) + 0x1c0)
    void* rax_54 = *(arg1 + 0x18)
    *r8_1 = *(rax_54 + 0x4a0)
    r8_1[1].d = *(rax_54 + 0x4a8)
    zmm0 = *(r8_1 + 4)
    zmm2 = *r8_1
    zmm1 = r8_1[1].d
    zmm0[0] = zmm0[0] * zmm0[0]
    zmm2[0] = zmm2[0] * zmm2[0]
    zmm1[0] = zmm1[0] * zmm1[0]
    zmm2[0] = zmm2[0] + zmm0[0]
    zmm2[0] = zmm2[0] + zmm1[0]
    *r10_2 = zmm2[0]
    void* rax_56 = *(arg1 + 0x18)
    zmm6 = __mulps_xmmps_memps(zmm6, *(rax_56 + 0x1e0))
    zmm5 = *(rax_56 + 0x1c0)
    zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), zmm1)
    zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm4)
    zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    zmm2 = _mm_sub_ps(zmm2, zmm0)
    zmm2 = _mm_add_ps(zmm2, zmm2)
    zmm5 = _mm_mul_ps(zmm5, zmm2)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xc9), zmm1)
    zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
    zmm5 = _mm_add_ps(zmm5, zmm6)
    zmm3 = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm3, zmm4), zmm0), zmm5)
    float var_80_9 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)[0]
    *r9_1 = (_mm_unpacklo_ps(zmm3, _mm_shuffle_ps(zmm3, zmm3, 0x55)[0].q)).q
    r9_1[1].d = var_80_9
else
    uint32_t rcx = zx.d(*(rdi + 0x30))
    
    if (rcx == 1)
        int64_t* rcx_11 = *(arg1 + 0x310)
        
        if (rcx_11 == 0)
            sub_14221f950(arg1)
            rcx_11 = *(arg1 + 0x310)
            
            if (rcx_11 == 0 || rcx_11[0x1f] == 0 || rcx_11[0x23].d s<= 0)
                goto label_1422204dc
        else if (rcx_11[0x1f] == 0 || rcx_11[0x23].d s<= 0)
            goto label_1422204dc
        
        if (*(*(arg1 + 0x320) + (rsi << 2)) != 0xffffffff)
            void* rax_11 = (*(*rcx_11 + 0x110))()
            
            if (rax_11 == 0 || not(1f f>= *(rax_11 + 0xc)))
                *(*(arg1 + 0x320) + (rsi << 2)) = 0xffffffff
        
        int32_t* r13_1 = *(arg1 + 0x320)
        int32_t i_1 = 0
        int32_t* rax_13 = r13_1
        
        if (r13_1[rsi] == 0xffffffff)
            void* rdi_1 = *(arg1 + 0x310)
            
            if (*(rdi_1 + 0x118) s> 0)
                uint64_t r8 = *(arg1 + 0x248)
                uint32_t rdx_4 = zx.d(*(r8 + 0x88))
                uint32_t rcx_13
                
                if (rdx_4 == 0)
                    void* rax_17 = sub_1421b85d0(r8, arg1)
                    rdi_1 = *(arg1 + 0x310)
                    int32_t rdx_7 = *(rdi_1 + 0x118)
                    
                    if (rdx_7 s<= 0)
                        rcx_13 = zx.d(*(*(rdi_1 + 0xf8) + (sx.q(0) << 1)))
                    else
                        int32_t rcx_17 = *(rax_17 + 4) * 0xbb38435
                        zmm0 = _mm_cvtepi32_ps(zx.o(rdx_7))
                        *(rax_17 + 4) = rcx_17 + 0x3619636b
                        rdi_1 = *(arg1 + 0x310)
                        zmm2 = (rcx_17 + 0x3619636b) u>> 9 | 0x3f800000
                        zmm2[0] = zmm2[0] - 1f
                        zmm2[0] = zmm2[0] * zmm0[0]
                        rcx_13 = int.d(zmm2[0])
                    label_1422201a6:
                        
                        if (rcx_13 != 0xffffffff)
                            rcx_13 = zx.d(*(*(rdi_1 + 0xf8) + (sx.q(rcx_13) << 1)))
                else
                    if (rdx_4 == 1)
                        *(arg1 + 0x318) += 1
                        int32_t rax_14 = *(arg1 + 0x318)
                        int32_t rcx_14 = rax_14
                        uint64_t i_3 = zx.q(*(arg1 + 0x1dc))
                        
                        if (rax_14 s>= *(rdi_1 + 0x118))
                            rcx_14 = 0
                        
                        *(arg1 + 0x318) = rcx_14
                        int32_t rax_16
                        
                        do
                            r8.b = 0
                            int64_t r9 = 0
                            
                            if (i_3.d s> 0)
                                int32_t* r10_1 = r13_1
                                uint64_t i_2 = i_3
                                uint64_t i
                                
                                do
                                    if (r9 != rsi)
                                        r8 = zx.q(r8.b)
                                        
                                        if (*r10_1 == zx.d(
                                                *(*(rdi_1 + 0xf8) + (sx.q(*(arg1 + 0x318)) << 1))))
                                            r8 = 1
                                    
                                    r9 += 1
                                    r10_1 = &r10_1[1]
                                    i = i_2
                                    i_2 -= 1
                                while (i != 1)
                            
                            if (i_3.d s<= 0 || r8.b != 1)
                                rcx_13 = *(arg1 + 0x318)
                                
                                if (r8.b == 0)
                                    rax_16 = *(rdi_1 + 0x118)
                                    break
                            else
                                *(arg1 + 0x318) += 1
                                rcx_13 = *(arg1 + 0x318)
                            
                            rax_16 = *(rdi_1 + 0x118)
                        while (rcx_13 s< rax_16)
                        
                        if (rcx_13 s>= rax_16)
                            *(arg1 + 0x318) = 0xffffffff
                            rcx_13 = -1
                        
                        r12 = arg4
                        goto label_1422201a6
                    
                    rcx_13 = zx.d(*(*(rdi_1 + 0xf8) + (sx.q(0) << 1)))
                
                *(*(arg1 + 0x320) + (rsi << 2)) = rcx_13
                rax_13 = *(arg1 + 0x320)
        
        int32_t rdx_8 = rax_13[rsi]
        int32_t* rdi_2
        
        if (rdx_8 s< 0)
            rdi_2 = nullptr
        else
            int64_t* rcx_22 = *(arg1 + 0x310)
            int32_t* rax_21
            rax_21, rdx_8 = (*(*rcx_22 + 0x110))(rcx_22, rdx_8)
            rdi_2 = rax_21
        
        void* rax_22 = *(arg1 + 0x310)
        
        if (rdi_2 == 0)
            rdx_8.b = 1
            r8_1 = arg6
            zmm2 = *(*(rax_22 + 0x18) + 0x1d0)
            float var_80_5 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
            *arg3 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
            arg3[1].d = var_80_5
            void* rax_40 = *(arg1 + 0x18)
            *r8_1 = *(rax_40 + 0x4a0)
            r8_1[1].d = *(rax_40 + 0x4a8)
            *(*(arg1 + 0x330) + (rsi << 2)) = 0
            *(*(arg1 + 0x320) + (rsi << 2)) = 0xffffffff
        else
            zmm7 = *(rax_22 + 0xd0)
            zmm6 = *(rax_22 + 0xd8)
            zmm0 = _mm_cvtps_pd(rdi_2[4][0].q)
            int128_t zmm8 = *(rax_22 + 0xd4)
            int32_t rax_23
            rax_23, rdx_8 = _finite(zmm0[0].q)
            
            if (rax_23 == 0)
            label_14222035e:
                
                if (*(*(arg1 + 0x310) + 0x118) s> 0)
                    do
                        (*(**(arg1 + 0x310) + 0x110))(zmm0, zx.q(i_1))
                        i_1 += 1
                    while (i_1 s< *(*(arg1 + 0x310) + 0x118))
                
                r8_1 = arg6
                rdx_8.b = 0
            else
                zmm0 = _mm_cvtps_pd(rdi_2[5][0].q)
                int32_t rax_24
                rax_24, rdx_8 = _finite(zmm0[0].q)
                
                if (rax_24 == 0)
                    goto label_14222035e
                
                zmm0 = _mm_cvtps_pd(rdi_2[6][0].q)
                int32_t rax_25
                rax_25, rdx_8 = _finite(zmm0[0].q)
                
                if (rax_25 == 0)
                    goto label_14222035e
                
                zmm0 = _mm_cvtps_pd((*rdi_2)[0].q)
                int32_t rax_26
                rax_26, rdx_8 = _finite(zmm0[0].q)
                
                if (rax_26 == 0)
                    goto label_14222035e
                
                zmm0 = _mm_cvtps_pd(rdi_2[1][0].q)
                int32_t rax_27
                rax_27, rdx_8 = _finite(zmm0[0].q)
                
                if (rax_27 == 0)
                    goto label_14222035e
                
                zmm0 = _mm_cvtps_pd(rdi_2[2][0].q)
                int32_t rax_28
                rax_28, rdx_8 = _finite(zmm0[0].q)
                
                if (rax_28 == 0)
                    goto label_14222035e
                
                zmm0 = _mm_cvtps_pd(zmm7[0].q)
                int32_t rax_29
                rax_29, rdx_8 = _finite(zmm0[0].q)
                
                if (rax_29 == 0)
                    goto label_14222035e
                
                zmm0 = _mm_cvtps_pd(zmm8.q)
                int32_t rax_30
                rax_30, rdx_8 = _finite(zmm0[0].q)
                
                if (rax_30 == 0)
                    goto label_14222035e
                
                zmm0 = _mm_cvtps_pd(zmm6[0].q)
                int32_t rax_31
                rax_31, rdx_8 = _finite(zmm0[0].q)
                
                if (rax_31 == 0)
                    goto label_14222035e
                
                zmm8.d = zmm8.d f+ rdi_2[5]
                zmm7[0] = zmm7[0] f+ rdi_2[4]
                zmm6[0] = zmm6[0] f+ rdi_2[6]
                r8_1 = arg6
                rdx_8.b = 1
                *arg3 = (_mm_unpacklo_ps(zmm7, zmm8.q)).q
                arg3[1].d = zmm6[0]
                zmm1 = rdi_2[4]
                zmm2 = rdi_2[5]
                zmm0 = rdi_2[6]
                zmm1[0] = zmm1[0] f- *rdi_2
                zmm2[0] = zmm2[0] f- rdi_2[1]
                zmm0[0] = zmm0[0] f- rdi_2[2]
                *r8_1 = (_mm_unpacklo_ps(zmm1, zmm2[0].q)).q
                r8_1[1].d = zmm0[0]
                *(*(arg1 + 0x330) + (rsi << 2)) = rdi_2[3]
        
        zmm0 = *(r8_1 + 4)
        zmm2 = *r8_1
        zmm1 = r8_1[1].d
        r10_2 = arg7
        zmm6 = data_142d4cc30
        r9_1 = arg5
        zmm0[0] = zmm0[0] * zmm0[0]
        zmm2[0] = zmm2[0] * zmm2[0]
        zmm1[0] = zmm1[0] * zmm1[0]
        zmm2[0] = zmm2[0] + zmm0[0]
        zmm2[0] = zmm2[0] + zmm1[0]
        *r10_2 = zmm2[0]
        void* rcx_25 = *(*(arg1 + 0x310) + 0x18)
        zmm6 = __mulps_xmmps_memps(zmm6, *(rcx_25 + 0x1e0))
        zmm5 = *(rcx_25 + 0x1c0)
        zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
        zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), zmm1)
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm4)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        zmm2 = _mm_sub_ps(zmm2, zmm0)
        zmm2 = _mm_add_ps(zmm2, zmm2)
        zmm5 = _mm_mul_ps(zmm5, zmm2)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xc9), zmm1)
        zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
        zmm5 = _mm_add_ps(zmm5, zmm6)
        zmm3 = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm3, zmm4), zmm0), zmm5)
        float var_80_6 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)[0]
        *r9_1 = (_mm_unpacklo_ps(zmm3, _mm_shuffle_ps(zmm3, zmm3, 0x55)[0].q)).q
        r9_1[1].d = var_80_6
        *r12 = data_142d3f660
        
        if (rdx_8.b != 0)
            return zx.d(rdx_8.b)
        
        rsi = zx.q(arg2)
        goto label_1422204f1
    
    if (rcx != 2)
        goto label_1422204dc
    
    int32_t rcx_2
    rcx_2.b = sub_140b5b8a0(*(rdi + 0x34), 0) == 0
    
    if ((*(rdi + 0x38) != 0 | rcx_2.b) == 0)
        goto label_1422204dc
    
    void* rax_2 = *(arg1 + 0x2f8)
    
    if (rax_2 == 0)
        sub_14221f950(arg1)
        rax_2 = *(arg1 + 0x2f8)
        
        if (rax_2 == 0)
            goto label_1422204dc
    
    void* rcx_4 = *(rax_2 + 0x130)
    int128_t* rcx_5
    
    if (rcx_4 == 0)
        rcx_5 = &data_143dbb0c0
    else
        rcx_5 = rcx_4 + 0x1c0
    
    zmm2 = rcx_5[1]
    zmm7 = *rcx_5
    rcx_5[2]
    float var_80_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
    *arg3 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
    arg3[1].d = var_80_1
    float var_78[0x4] = zmm7
    sub_140adf5d0(&var_78, &var_88)
    float (* rax_4)[0x4]
    rax_4, zmm6, zmm7 = sub_140ade170(&var_88, &var_78)
    *r12 = *rax_4
    int64_t* rcx_8 = *(arg1 + 0x2f8)
    int64_t* rax_6 = (*(*rcx_8 + 0x2f0))(rcx_8, &var_78)
    float zmm5_1[0x4] = _mm_mul_ps(data_142d4cc30, zmm6)
    *arg6 = *rax_6
    arg6[1].d = rax_6[1].d
    float zmm0_1[0x4] = *(arg6 + 4)
    float zmm2_1[0x4] = *arg6
    float zmm1_1[0x4] = arg6[1].d
    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
    zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
    zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
    float zmm4_1[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
    zmm0_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
    zmm1_1 = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
    zmm0_1 = _mm_mul_ps(zmm0_1, zmm1_1)
    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
    *arg7 = zmm2_1[0]
    zmm2_1 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2), zmm4_1), zmm0_1)
    zmm2_1 = _mm_add_ps(zmm2_1, zmm2_1)
    zmm7 = _mm_mul_ps(zmm7, zmm2_1)
    zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9), zmm1_1)
    float zmm3_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
    zmm7 = _mm_add_ps(zmm7, zmm5_1)
    zmm3_1 = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm3_1, zmm4_1), zmm0_1), zmm7)
    float var_80_2 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)[0]
    *arg5 = (_mm_unpacklo_ps(zmm3_1, _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)[0].q)).q
    arg5[1].d = var_80_2
float result
result.b = 1
return result
