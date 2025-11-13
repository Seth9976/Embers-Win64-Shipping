// 函数: sub_1423241d0
// 地址: 0x1423241d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_398
int64_t rax_1 = __security_cookie ^ &var_398
void* r10 = arg4
int64_t r13 = *(r10 + 0x28)
int64_t* r9 = arg5
int64_t var_148 = 0
int32_t var_134 = 0
int64_t* var_308 = r9
int32_t rdx = r9[1].d
float zmm10[0x4] = zx.o(0)
int32_t r12 = *(arg6 + 0x24)
int32_t rcx_1 = 0
int64_t* rdi = arg11
char var_370_1

if (rdx s<= 0)
label_1423242ab_1:
    var_370_1 = 0
else
    int32_t* rax_5 = *r9 + 0x20
    
    while (*rax_5 s<= 0)
        rcx_1 += 1
        rax_5 = &rax_5[0x3a]
        
        if (rcx_1 s>= rdx)
            goto label_1423242ab
    
    if (rdi == 0)
    label_1423242ab_2:
        var_370_1 = 0
    else
        var_370_1 = 1
        
        if (not(arg12.d f> 0f))
        label_1423242ab:
            var_370_1 = 0

uint64_t result = zx.q(*(r10 + 0x38))
int32_t var_328 = result.d

if (result.d s> 0)
    int32_t rcx_2 = arg7
    
    if (rcx_2 s< result.d)
        uint64_t r11_1 = zx.q(data_14401b1a0)
        uint128_t zmm6 = 0x3f800000
        int32_t zmm7[0x4] = data_142dd3f80
        uint128_t zmm8 = data_142dd3fd0
        float zmm9[0x4] = zx.o(0)
        uint128_t zmm11
        uint128_t var_98_1 = zmm11
        uint128_t zmm12 = data_142dd3fb0
        float zmm13[0x4]
        float var_b8_1[0x4] = zmm13
        int32_t rsi_2 = int.d(fconvert.t(254.5f)) s>> 1
        int32_t var_324_1 = rsi_2
        
        do
            uint64_t rdx_2 = zx.q(*(r10 + 0x10) + rcx_2)
            int32_t var_36c_1 = rdx_2.d
            int64_t* rcx_5 = zx.q(r9[0x1d].d * rdx_2.d) + r9[0x1c]
            int32_t rax_6 = rcx_5[1].d
            char r10_1 = *(r9 + 0xb1)
            zmm11 = zx.o(*rcx_5)
            int64_t r8 = r9[0x12]
            uint64_t var_120_1 = zmm11.q
            int32_t var_118_1 = rax_6
            uint64_t r15_1 = zx.q(rdx_2.d)
            uint128_t zmm1
            float zmm2[0x4]
            float zmm3[0x4]
            
            if (r10_1 == 0)
                zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(r8 + (rdx_2 << 3))), zmm9[0].q), 
                    zmm9[0].q)
                zmm1 =
                    _mm_mul_ps(_mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm7) & zmm8) | zmm1), zmm12)
                zmm2 = zmm1
                zmm3 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
            else
                zmm1 = _mm_unpacklo_epi16(zx.o(*(r8 + zx.q(r15_1.d) * 0x10)), zmm9[0].q)
                zmm2 = __mulps_xmmps_memps(
                    _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f90) & data_142dd3fc0)
                        | zmm1), 
                    data_142dd3fa0)
                zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            
            zmm2[0] = zmm2[0] * 127f
            zmm2[0] = zmm2[0] + zmm2[0]
            zmm2[0] = zmm2[0] + 0.5f
            int32_t rdx_4 = int.d(zmm2[0]) s>> 1
            char var_128
            
            if (rdx_4 s>= 0xffffff80)
                char rcx_6 = 0x7f
                
                if (rdx_4 s< 0x7f)
                    rcx_6 = rdx_4.b
                
                var_128 = rcx_6
            else
                var_128 = 0x80
            
            zmm3[0] = zmm3[0] * 127f
            zmm3[0] = zmm3[0] + zmm3[0]
            zmm3[0] = zmm3[0] + 0.5f
            int32_t rdx_6 = int.d(zmm3[0]) s>> 1
            
            if (rdx_6 s>= 0xffffff80)
                char rcx_7 = 0x7f
                
                if (rdx_6 s< 0x7f)
                    rcx_7 = rdx_6.b
                
                char var_127_2 = rcx_7
            else
                char var_127_1 = 0x80
            
            zmm1.d = zmm1.d f* 127f
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f+ 0.5f
            int32_t rdx_8 = int.d(zmm1.d) s>> 1
            
            if (rdx_8 s>= 0xffffff80)
                char rcx_8 = 0x7f
                
                if (rdx_8 s< 0x7f)
                    rcx_8 = rdx_8.b
                
                char var_126_2 = rcx_8
            else
                char var_126_1 = 0x80
            
            if (rsi_2 s>= 0xffffff80)
                char rcx_9 = 0x7f
                
                if (rsi_2 s< 0x7f)
                    rcx_9 = rsi_2.b
                
                char var_125_2 = rcx_9
            else
                char var_125_1 = 0x80
            
            if (r10_1 == 0)
                zmm1 = _mm_unpacklo_epi16(
                    _mm_unpacklo_epi8(zx.o(*(r8 + (r15_1 << 3) + 4)), zmm9[0].q), zmm9[0].q)
                zmm1 =
                    _mm_mul_ps(_mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm7) & zmm8) | zmm1), zmm12)
            else
                zmm1 = _mm_unpacklo_epi16(zx.o(*(r8 + r15_1 * 0x10 + 8)), zmm9[0].q)
                zmm1 = __mulps_xmmps_memps(
                    _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f90) & data_142dd3fc0)
                        | zmm1), 
                    data_142dd3fa0)
            
            uint128_t var_358_1 = zmm1
            zmm1.d = var_358_1.d.d f* 127f
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f+ 0.5f
            int32_t rax_16 = int.d(zmm1.d) s>> 1
            char rcx_10
            
            if (rax_16 s>= 0xffffff80)
                rcx_10 = 0x7f
                
                if (rax_16 s< 0x7f)
                    rcx_10 = rax_16.b
            else
                rcx_10 = -0x80
            
            zmm1.d = var_358_1:4.d.d f* 127f
            char var_124_1 = rcx_10
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f+ 0.5f
            int32_t rax_18 = int.d(zmm1.d) s>> 1
            char rcx_11
            
            if (rax_18 s>= 0xffffff80)
                rcx_11 = 0x7f
                
                if (rax_18 s< 0x7f)
                    rcx_11 = rax_18.b
            else
                rcx_11 = -0x80
            
            zmm1.d = var_358_1:8.d.d f* 127f
            char var_123_1 = rcx_11
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f+ 0.5f
            int32_t rax_20 = int.d(zmm1.d) s>> 1
            char rcx_12
            
            if (rax_20 s>= 0xffffff80)
                rcx_12 = 0x7f
                
                if (rax_20 s< 0x7f)
                    rcx_12 = rax_20.b
            else
                rcx_12 = -0x80
            
            zmm1.d = var_358_1:0xc.d.d f* 127f
            char var_122_1 = rcx_12
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f+ 0.5f
            int32_t rax_22 = int.d(zmm1.d) s>> 1
            char rcx_13
            
            if (rax_22 s>= 0xffffff80)
                rcx_13 = 0x7f
                
                if (rax_22 s< 0x7f)
                    rcx_13 = rax_22.b
            else
                rcx_13 = -0x80
            
            char var_121_1 = rcx_13
            int16_t* r15_3 = r15_1 * (zx.q(r9[0x15].d) << 2) + r9[0x13]
            uint32_t rsi_3 = zx.d(r15_3[1])
            int32_t r14_3 = (rsi_3 & 0xffff8000) << 0x10
            int16_t rax_25 = rsi_3.w & 0x7c00
            int32_t var_374_1
            TEB* gsbase
            uint128_t zmm0
            
            if (rax_25 == 0)
                int32_t rsi_4 = rsi_3 & 0x3ff
                
                if (rsi_4 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r11_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rsi_4))
                    zmm0.d = logf(zmm0.d).d f* data_143cda910
                    r11_1 = zx.q(data_14401b1a0)
                    var_374_1 = (rsi_4 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | r14_3
                else
                    var_374_1 = r14_3
            else if (rax_25 != 0x7c00)
                var_374_1 = ((rsi_3 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rsi_3 & 0x3ff) << 0xd | r14_3
            else
                var_374_1 = r14_3 | 0x477fe000
            
            uint32_t rsi_11 = zx.d(*r15_3)
            int32_t r14_7 = (rsi_11 & 0xffff8000) << 0x10
            int16_t rax_40 = rsi_11.w & 0x7c00
            int32_t var_378_1
            
            if (rax_40 == 0)
                int32_t rsi_12 = rsi_11 & 0x3ff
                
                if (rsi_12 != 0)
                    if (data_143cda914
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r11_1 << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.d = float.s(zx.q(rsi_12))
                    zmm0.d = logf(zmm0.d).d f* data_143cda910
                    var_378_1 = (rsi_12 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | r14_7
                else
                    var_378_1 = r14_7
            else if (rax_40 != 0x7c00)
                var_378_1 =
                    ((rsi_11 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rsi_11 & 0x3ff) << 0xd | r14_7
            else
                var_378_1 = r14_7 | 0x477fe000
            
            int32_t var_378_2 = var_378_1.d
            uint16_t rcx_19 = (var_378_2 u>> 0x17).w
            uint16_t r14_10 = (var_378_2 u>> 0x1f).w << 0xf
            uint32_t rdx_11 = zx.d(rcx_19.b)
            
            if (rdx_11 u> 0x70)
                if (rdx_11 u< 0x8f)
                    r14_10 |= ((var_378_2 u>> 0xd).w & 0x3ff) | ((rcx_19 - 0x10) & 0x1f) << 0xa
                else
                    r14_10 |= 0x7bff
            else if (0x70 - rdx_11 + 0xe s<= 0x18)
                int32_t rax_57 = (var_378_2 & 0x7fffff) | 0x800000
                uint16_t rdx_13 = ((rax_57 u>> (0x70 - rdx_11 + 0xe).b).w & 0x3ff) | r14_10
                r14_10 = rdx_13
                
                if (((rax_57 u>> ((0x70 - rdx_11).b + 0xd)).b & 1) != 0)
                    r14_10 = rdx_13 + 1
            
            int32_t var_374_2 = var_374_1.d
            uint16_t rcx_23 = (var_374_2 u>> 0x17).w
            uint16_t rsi_20 = (var_374_2 u>> 0x1f).w << 0xf
            uint32_t rdx_14 = zx.d(rcx_23.b)
            uint16_t var_114_1 = r14_10
            
            if (rdx_14 u> 0x70)
                if (rdx_14 u< 0x8f)
                    rsi_20 |= ((rcx_23 - 0x10) & 0x1f) << 0xa | ((var_374_2 u>> 0xd).w & 0x3ff)
                else
                    rsi_20 |= 0x7bff
            else if (0x70 - rdx_14 + 0xe s<= 0x18)
                int32_t rax_62 = (var_374_2 & 0x7fffff) | 0x800000
                uint16_t rdx_16 = ((rax_62 u>> (0x70 - rdx_14 + 0xe).b).w & 0x3ff) | rsi_20
                rsi_20 = rdx_16
                
                if (((rax_62 u>> ((0x70 - rdx_14).b + 0xd)).b & 1) != 0)
                    rsi_20 = rdx_16 + 1
            
            char* r15_4 = &var_128
            uint16_t var_112_1 = rsi_20
            int16_t var_108
            sub_1422c8440(arg6, &var_108, zx.q(var_36c_1))
            uint128_t zmm4
            float zmm5[0x4]
            
            if (arg8 != 0)
                r15_4 = &var_148
                var_134.w = r14_10
                var_134:2.w = rsi_20
                int32_t i = 0
                int32_t rcx_27 = *arg9
                var_148 = var_128.q
                int32_t var_36c_2 = rcx_27
                uint64_t var_140_1 = zmm11.q
                
                if (arg2[1].d s> 0)
                    zmm11 = rax_6
                    int64_t rdx_18 = 0
                    zmm12 = var_140_1:4.d
                    zmm13 = var_140_1.d
                    zmm10 = data_142dd3fb0
                    
                    do
                        int64_t r10_2 = *arg2
                        int64_t r11_2 = sx.q(*(rdx_18 + r10_2 + 0x10))
                        
                        if (r11_2.d != 0xffffffff && r11_2.d s< *(rdx_18 + r10_2 + 0x20))
                            int64_t r9_1 = *(rdx_18 + r10_2 + 0x18)
                            int32_t* r8_4 = r11_2 * 0x1c
                            
                            if (*(r8_4 + r9_1 + 0x18) == rcx_27)
                                zmm5 = *(*arg3 + (sx.q(*(rdx_18 + r10_2 + 8)) << 2))
                                zmm0.d = zmm5.d f* *(r8_4 + r9_1)
                                zmm5[0] = zmm5[0] f* *(r8_4 + r9_1 + 8)
                                float temp0_23[0x4] = _mm_min_ss(zmm5[0], zmm6.d)
                                zmm1.d = zmm5.d f* *(r8_4 + r9_1 + 4)
                                zmm13[0] = zmm13[0] f+ zmm0.d
                                zmm11.d = zmm11.d f+ zmm5[0]
                                zmm2 = _mm_unpacklo_epi16(
                                    _mm_unpacklo_epi8(zx.o(var_148:4.d), zmm9[0].q), zmm9[0].q)
                                zmm12.d = zmm12.d f+ zmm1.d
                                zmm1 = zmm8
                                zmm0 = _mm_cmpgt_epi32(zmm2, zmm7)
                                zmm8.d = temp0_23.d f* *(r8_4 + r9_1 + 0x10)
                                zmm7 = temp0_23
                                temp0_23[0] = temp0_23[0] f* *(r8_4 + r9_1 + 0xc)
                                zmm7[0] = zmm7[0] f* *(r8_4 + r9_1 + 0x14)
                                float temp0_28[0x4] =
                                    _mm_mul_ps(zmm10, _mm_cvtepi32_ps((zmm1 & zmm0) | zmm2))
                                temp0_23[0] = temp0_23[0] + temp0_28[0]
                                zmm0 = _mm_shuffle_ps(temp0_28, temp0_28, 0xaa)
                                zmm7[0] = zmm7[0] f+ zmm0.d
                                zmm8.d = zmm8.d f+ _mm_shuffle_ps(temp0_28, temp0_28, 0x55).d
                                temp0_23[0] = temp0_23[0] * temp0_23[0]
                                zmm1.d = zmm7.d f* zmm7[0]
                                zmm0.d = zmm8.d f* zmm8.d
                                temp0_23[0] = temp0_23[0] f+ zmm0.d
                                zmm4.d = 0x3f000000
                                temp0_23[0] = temp0_23[0] f+ zmm1.d
                                zmm0 = temp0_23
                                zmm3 = zmm0
                                zmm6 = _mm_rsqrt_ss(zmm0.d, zmm3[0])
                                zmm3[0] = zmm3[0] * 0.5f
                                zmm0.d = zmm6.d f* zmm6.d
                                zmm3[0] = zmm3[0] f* zmm0.d
                                zmm1.d = zmm4.d f- zmm3[0]
                                zmm0.d = zmm6.d f* zmm1.d
                                zmm6.d = zmm6.d f+ zmm0.d
                                zmm0.d = zmm6.d f* zmm6.d
                                zmm3[0] = zmm3[0] f* zmm0.d
                                zmm4.d = 0.5f - zmm3[0]
                                zmm0.d = zmm6.d f* zmm4.d
                                zmm6.d = zmm6.d f+ zmm0.d
                                temp0_23[0] = temp0_23[0] f* zmm6.d
                                int32_t var_368_1 = zmm6.d
                                temp0_23[0] = temp0_23[0] * 127f
                                temp0_23[0] = temp0_23[0] + temp0_23[0]
                                temp0_23[0] = temp0_23[0] + 0.5f
                                int32_t rax_70 = int.d(temp0_23[0]) s>> 1
                                char rcx_29
                                
                                if (rax_70 s>= 0xffffff80)
                                    rcx_29 = 0x7f
                                    
                                    if (rax_70 s< 0x7f)
                                        rcx_29 = rax_70.b
                                else
                                    rcx_29 = -0x80
                                
                                zmm1 = zmm6
                                var_148:4.b = rcx_29
                                zmm6.d = zmm6.d f* zmm8.d
                                zmm1.d = zmm1.d f* zmm7[0]
                                zmm6.d = zmm6.d f* 127f
                                zmm6.d = zmm6.d f+ zmm6.d
                                zmm6.d = zmm6.d f+ 0.5f
                                int32_t rax_72 = int.d(zmm6.d) s>> 1
                                char rcx_30
                                
                                if (rax_72 s>= 0xffffff80)
                                    rcx_30 = 0x7f
                                    
                                    if (rax_72 s< 0x7f)
                                        rcx_30 = rax_72.b
                                else
                                    rcx_30 = -0x80
                                
                                zmm1.d = zmm1.d f* 127f
                                var_148:5.b = rcx_30
                                zmm1.d = zmm1.d f+ zmm1.d
                                zmm1.d = zmm1.d f+ 0.5f
                                int32_t rax_74 = int.d(zmm1.d) s>> 1
                                char rcx_31
                                
                                if (rax_74 s>= 0xffffff80)
                                    rcx_31 = 0x7f
                                    
                                    if (rax_74 s< 0x7f)
                                        rcx_31 = rax_74.b
                                else
                                    rcx_31 = -0x80
                                
                                zmm6 = 0x3f800000
                                zmm7 = data_142dd3f80
                                zmm8 = data_142dd3fd0
                                var_148:6.b = rcx_31
                                rcx_27 = var_36c_2
                                *(rdx_18 + r10_2 + 0x10) = (r11_2 + 1).d
                        
                        i += 1
                        rdx_18 += 0x28
                    while (i s< arg2[1].d)
                    
                    rdi = arg11
                    zmm10 = zx.o(0)
                    var_140_1:4.d = zmm12.d
                    zmm12 = data_142dd3fb0
                    int32_t var_138_2 = zmm11.d
                    var_140_1.d = zmm13[0]
                
                zmm2 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_148.d), zmm9[0].q), zmm9[0].q)
                zmm1 = (zmm8 & _mm_cmpgt_epi32(zmm2, zmm7)) | zmm2
                zmm2 = zx.o(var_148:4.d)
                zmm0 = _mm_cvtepi32_ps(zmm1)
                zmm2 = _mm_unpacklo_epi8(zmm2, zmm9[0].q)
                zmm6 = _mm_mul_ps(zmm12, zmm0)
                zmm2 = _mm_unpacklo_epi16(zmm2, zmm9[0].q)
                zmm1 = zmm8 & _mm_cmpgt_epi32(zmm2, zmm7)
                zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                float temp0_42[0x4] = _mm_mul_ps(zmm12, _mm_cvtepi32_ps(zmm1 | zmm2))
                zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm0.d = temp0_42.d f* zmm6.d
                float temp0_44[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0xaa)
                float temp0_45[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0x55)
                zmm4.d = temp0_45.d f* zmm7[0]
                zmm4.d = zmm4.d f+ zmm0.d
                zmm0.d = temp0_44.d f* zmm8.d
                zmm4.d = zmm4.d f+ zmm0.d
                zmm1.d = zmm4.d f* temp0_44[0]
                zmm0.d = zmm4.d f* temp0_45[0]
                zmm8.d = zmm8.d f- zmm1.d
                zmm4.d = zmm4.d f* temp0_42[0]
                zmm7[0] = zmm7[0] f- zmm0.d
                zmm6.d = zmm6.d f- zmm4.d
                zmm1.d = zmm8.d f* zmm8.d
                zmm2 = zmm7
                zmm2[0] = zmm2[0] f* zmm7[0]
                zmm0.d = zmm6.d f* zmm6.d
                zmm2[0] = zmm2[0] f+ zmm0.d
                zmm2[0] = zmm2[0] f+ zmm1.d
                
                if (not(zmm2[0] <= 9.99999994e-09f))
                    zmm3 = zx.o(0)
                    zmm4.d = 0x3f000000
                    zmm3[0] = zmm2.d
                    float temp0_46[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm0.d = temp0_46.d f* temp0_46[0]
                    zmm3[0] = zmm3[0] f* zmm0.d
                    zmm1.d = zmm4.d f- zmm3[0]
                    zmm0.d = temp0_46.d f* zmm1.d
                    temp0_46[0] = temp0_46[0] f+ zmm0.d
                    zmm0.d = temp0_46.d f* temp0_46[0]
                    zmm3[0] = zmm3[0] f* zmm0.d
                    zmm4.d = 0.5f - zmm3[0]
                    zmm0.d = temp0_46.d f* zmm4.d
                    temp0_46[0] = temp0_46[0] f+ zmm0.d
                    float var_368_2 = temp0_46[0]
                    zmm6.d = zmm6.d f* temp0_46[0]
                    zmm0.d = temp0_46.d f* zmm7[0]
                    temp0_46[0] = temp0_46[0] f* zmm8.d
                    zmm7 = zmm0
                    zmm8 = temp0_46
                
                zmm6.d = zmm6.d f* 127f
                zmm6.d = zmm6.d f+ zmm6.d
                zmm6.d = zmm6.d f+ 0.5f
                int32_t rax_77 = int.d(zmm6.d) s>> 1
                char rcx_32
                
                if (rax_77 s>= 0xffffff80)
                    rcx_32 = 0x7f
                    
                    if (rax_77 s< 0x7f)
                        rcx_32 = rax_77.b
                else
                    rcx_32 = -0x80
                
                zmm7[0] = zmm7[0] f* 127f
                var_148.b = rcx_32
                zmm7[0] = zmm7[0] f+ zmm7[0]
                zmm7[0] = zmm7[0] f+ 0.5f
                int32_t rax_79 = int.d(zmm7[0]) s>> 1
                char rcx_33
                
                if (rax_79 s>= 0xffffff80)
                    rcx_33 = 0x7f
                    
                    if (rax_79 s< 0x7f)
                        rcx_33 = rax_79.b
                else
                    rcx_33 = -0x80
                
                zmm8.d = zmm8.d f* 127f
                var_148:1.b = rcx_33
                zmm8.d = zmm8.d f+ zmm8.d
                zmm8.d = zmm8.d f+ 0.5f
                int32_t rax_81 = int.d(zmm8.d) s>> 1
                char rcx_34
                
                if (rax_81 s>= 0xffffff80)
                    rcx_34 = 0x7f
                    
                    if (rax_81 s< 0x7f)
                        rcx_34 = rax_81.b
                else
                    rcx_34 = -0x80
                
                zmm6 = 0x3f800000
                zmm7 = data_142dd3f80
                zmm8 = data_142dd3fd0
                var_148:2.b = rcx_34
                var_148:3.b = 0x7f
            
            uint128_t* r8_7 = nullptr
            
            if (var_370_1 != 0)
                r8_7 = (sx.q(arg7) << 6) + *(arg4 + 0x18)
            
            zmm11 = zx.o(0)
            zmm1 = zx.o(*r15_4)
            zmm2 = *(r15_4 + 0xc)
            float temp0_47[0x4] = _mm_unpacklo_ps(*(r15_4 + 8), (*(r15_4 + 0x10)).q)
            zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zmm1, zmm9[0].q), zmm9[0].q)
            float temp0_51[0x4] = _mm_unpacklo_ps(temp0_47, _mm_unpacklo_ps(zmm2, zmm6.q)[0].q)
            zmm0 = _mm_cmpgt_epi32(zmm1, zmm7) & zmm8
            data_143f59220 = temp0_51
            zmm1 = __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm0 | zmm1), data_143329cd0)
            uint128_t var_258_1 = zmm1
            data_143f59230 = zmm1
            zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(r15_4 + 4)), zmm9[0].q), zmm9[0].q)
            zmm1 = _mm_mul_ps(_mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm7) & zmm8) | zmm1), zmm12)
            zmm12 = zx.o(0)
            int32_t var_f0
            float temp0_62[0x4] = _mm_cvtepi32_ps(_mm_unpacklo_epi16(
                _mm_unpacklo_epi8(zx.o(var_f0), zmm9[0].q), zmm9[0].q))
            uint128_t var_268_1 = zmm1
            data_143f59240 = zmm1
            zmm1 = data_142e669d0
            float temp0_63[0x4] = _mm_mul_ps(temp0_62, zmm1)
            int32_t var_ec
            
            if (r12 u> 4)
                zmm11 = _mm_mul_ps(
                    _mm_cvtepi32_ps(_mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_ec), zmm9[0].q), 
                        zmm9[0].q)), 
                    zmm1)
            int32_t var_e8
            
            if (r12 u> 8)
                zmm12 = _mm_mul_ps(
                    _mm_cvtepi32_ps(_mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_e8), zmm9[0].q), 
                        zmm9[0].q)), 
                    zmm1)
            uint64_t rax_83 = zx.q(var_108)
            zmm0 = _mm_shuffle_ps(temp0_63, temp0_63, 0)
            uint64_t rcx_36 = zx.q(*(r13 + (rax_83 << 1))) << 6
            zmm6 = *(rcx_36 + arg10 + 0x10)
            zmm7 = *(rcx_36 + arg10 + 0x20)
            zmm8 = *(rcx_36 + arg10 + 0x30)
            zmm5 = _mm_mul_ps(*(rcx_36 + arg10), zmm0)
            zmm6 = _mm_mul_ps(zmm6, zmm0)
            zmm7 = _mm_mul_ps(zmm7, zmm0)
            zmm8 = _mm_mul_ps(zmm8, zmm0)
            
            if (r12 u> 1)
                float temp0_77[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x55)
                int16_t var_106
                uint64_t rcx_38 = zx.q(*(r13 + (zx.q(var_106) << 1))) << 6
                zmm1 = *(rcx_38 + arg10 + 0x10)
                zmm2 = *(rcx_38 + arg10 + 0x20)
                zmm4 = *(rcx_38 + arg10 + 0x30)
                zmm0 = _mm_mul_ps(*(rcx_38 + arg10), temp0_77)
                zmm1 = _mm_mul_ps(zmm1, temp0_77)
                float temp0_80[0x4] = _mm_mul_ps(zmm2, temp0_77)
                zmm4 = _mm_mul_ps(zmm4, temp0_77)
                zmm5 = _mm_add_ps(zmm5, zmm0)
                zmm6 = _mm_add_ps(zmm6, zmm1)
                zmm7 = _mm_add_ps(zmm7, temp0_80)
                zmm8 = _mm_add_ps(zmm8, zmm4)
                
                if (r12 u> 2)
                    float temp0_86[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xaa)
                    int16_t var_104
                    uint64_t rcx_40 = zx.q(*(r13 + (zx.q(var_104) << 1))) << 6
                    zmm1 = *(rcx_40 + arg10 + 0x10)
                    zmm2 = *(rcx_40 + arg10 + 0x20)
                    zmm4 = *(rcx_40 + arg10 + 0x30)
                    zmm0 = _mm_mul_ps(*(rcx_40 + arg10), temp0_86)
                    zmm1 = _mm_mul_ps(zmm1, temp0_86)
                    float temp0_89[0x4] = _mm_mul_ps(zmm2, temp0_86)
                    zmm4 = _mm_mul_ps(zmm4, temp0_86)
                    zmm5 = _mm_add_ps(zmm5, zmm0)
                    zmm6 = _mm_add_ps(zmm6, zmm1)
                    zmm7 = _mm_add_ps(zmm7, temp0_89)
                    zmm8 = _mm_add_ps(zmm8, zmm4)
                    
                    if (r12 u> 3)
                        float temp0_95[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xff)
                        int16_t var_102
                        uint64_t rcx_42 = zx.q(*(r13 + (zx.q(var_102) << 1))) << 6
                        zmm1 = *(rcx_42 + arg10 + 0x10)
                        zmm2 = *(rcx_42 + arg10 + 0x20)
                        zmm3 = *(rcx_42 + arg10 + 0x30)
                        zmm0 = _mm_mul_ps(*(rcx_42 + arg10), temp0_95)
                        zmm1 = _mm_mul_ps(zmm1, temp0_95)
                        float temp0_98[0x4] = _mm_mul_ps(zmm2, temp0_95)
                        float temp0_99[0x4] = _mm_mul_ps(zmm3, temp0_95)
                        zmm5 = _mm_add_ps(zmm5, zmm0)
                        zmm6 = _mm_add_ps(zmm6, zmm1)
                        zmm7 = _mm_add_ps(zmm7, temp0_98)
                        zmm8 = _mm_add_ps(zmm8, temp0_99)
                    
                    if (r12 u> 4)
                        float temp0_104[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
                        int16_t var_100
                        uint64_t rcx_44 = zx.q(*(r13 + (zx.q(var_100) << 1))) << 6
                        zmm1 = *(rcx_44 + arg10 + 0x10)
                        zmm2 = *(rcx_44 + arg10 + 0x20)
                        zmm4 = *(rcx_44 + arg10 + 0x30)
                        zmm0 = _mm_mul_ps(*(rcx_44 + arg10), temp0_104)
                        zmm1 = _mm_mul_ps(zmm1, temp0_104)
                        float temp0_107[0x4] = _mm_mul_ps(zmm2, temp0_104)
                        zmm4 = _mm_mul_ps(zmm4, temp0_104)
                        zmm5 = _mm_add_ps(zmm5, zmm0)
                        zmm6 = _mm_add_ps(zmm6, zmm1)
                        zmm7 = _mm_add_ps(zmm7, temp0_107)
                        zmm8 = _mm_add_ps(zmm8, zmm4)
                        
                        if (r12 u> 5)
                            float temp0_113[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x55)
                            int16_t var_fe
                            uint64_t rcx_46 = zx.q(*(r13 + (zx.q(var_fe) << 1))) << 6
                            zmm1 = *(rcx_46 + arg10 + 0x10)
                            zmm2 = *(rcx_46 + arg10 + 0x20)
                            zmm4 = *(rcx_46 + arg10 + 0x30)
                            zmm0 = _mm_mul_ps(*(rcx_46 + arg10), temp0_113)
                            zmm1 = _mm_mul_ps(zmm1, temp0_113)
                            float temp0_116[0x4] = _mm_mul_ps(zmm2, temp0_113)
                            zmm4 = _mm_mul_ps(zmm4, temp0_113)
                            zmm5 = _mm_add_ps(zmm5, zmm0)
                            zmm6 = _mm_add_ps(zmm6, zmm1)
                            zmm7 = _mm_add_ps(zmm7, temp0_116)
                            zmm8 = _mm_add_ps(zmm8, zmm4)
                            
                            if (r12 u> 6)
                                float temp0_122[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
                                int16_t var_fc
                                uint64_t rcx_48 = zx.q(*(r13 + (zx.q(var_fc) << 1))) << 6
                                zmm1 = *(rcx_48 + arg10 + 0x10)
                                zmm2 = *(rcx_48 + arg10 + 0x20)
                                zmm4 = *(rcx_48 + arg10 + 0x30)
                                zmm0 = _mm_mul_ps(*(rcx_48 + arg10), temp0_122)
                                zmm1 = _mm_mul_ps(zmm1, temp0_122)
                                float temp0_125[0x4] = _mm_mul_ps(zmm2, temp0_122)
                                zmm4 = _mm_mul_ps(zmm4, temp0_122)
                                zmm5 = _mm_add_ps(zmm5, zmm0)
                                zmm6 = _mm_add_ps(zmm6, zmm1)
                                zmm7 = _mm_add_ps(zmm7, temp0_125)
                                zmm8 = _mm_add_ps(zmm8, zmm4)
                                
                                if (r12 u> 7)
                                    zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0xff)
                                    int16_t var_fa
                                    uint64_t rcx_50 = zx.q(*(r13 + (zx.q(var_fa) << 1))) << 6
                                    zmm1 = *(rcx_50 + arg10 + 0x10)
                                    zmm2 = *(rcx_50 + arg10 + 0x20)
                                    zmm3 = *(rcx_50 + arg10 + 0x30)
                                    zmm0 = _mm_mul_ps(*(rcx_50 + arg10), zmm11)
                                    zmm1 = _mm_mul_ps(zmm1, zmm11)
                                    float temp0_134[0x4] = _mm_mul_ps(zmm2, zmm11)
                                    float temp0_135[0x4] = _mm_mul_ps(zmm3, zmm11)
                                    zmm5 = _mm_add_ps(zmm5, zmm0)
                                    zmm6 = _mm_add_ps(zmm6, zmm1)
                                    zmm7 = _mm_add_ps(zmm7, temp0_134)
                                    zmm8 = _mm_add_ps(zmm8, temp0_135)
                                    
                                    if (r12 u> 8)
                                        float temp0_140[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
                                        int16_t var_f8
                                        uint64_t rcx_52 = zx.q(*(r13 + (zx.q(var_f8) << 1))) << 6
                                        zmm1 = *(rcx_52 + arg10 + 0x10)
                                        zmm2 = *(rcx_52 + arg10 + 0x20)
                                        zmm4 = *(rcx_52 + arg10 + 0x30)
                                        zmm0 = _mm_mul_ps(*(rcx_52 + arg10), temp0_140)
                                        zmm1 = _mm_mul_ps(zmm1, temp0_140)
                                        float temp0_143[0x4] = _mm_mul_ps(zmm2, temp0_140)
                                        zmm4 = _mm_mul_ps(zmm4, temp0_140)
                                        zmm5 = _mm_add_ps(zmm5, zmm0)
                                        zmm6 = _mm_add_ps(zmm6, zmm1)
                                        zmm7 = _mm_add_ps(zmm7, temp0_143)
                                        zmm8 = _mm_add_ps(zmm8, zmm4)
                                        
                                        if (r12 u> 9)
                                            float temp0_149[0x4] =
                                                _mm_shuffle_ps(zmm12, zmm12, 0x55)
                                            int16_t var_f6
                                            uint64_t rcx_54 =
                                                zx.q(*(r13 + (zx.q(var_f6) << 1))) << 6
                                            zmm1 = *(rcx_54 + arg10 + 0x10)
                                            zmm2 = *(rcx_54 + arg10 + 0x20)
                                            zmm4 = *(rcx_54 + arg10 + 0x30)
                                            zmm0 = _mm_mul_ps(*(rcx_54 + arg10), temp0_149)
                                            zmm1 = _mm_mul_ps(zmm1, temp0_149)
                                            float temp0_152[0x4] = _mm_mul_ps(zmm2, temp0_149)
                                            zmm4 = _mm_mul_ps(zmm4, temp0_149)
                                            zmm5 = _mm_add_ps(zmm5, zmm0)
                                            zmm6 = _mm_add_ps(zmm6, zmm1)
                                            zmm7 = _mm_add_ps(zmm7, temp0_152)
                                            zmm8 = _mm_add_ps(zmm8, zmm4)
                                            
                                            if (r12 u> 0xa)
                                                float temp0_158[0x4] =
                                                    _mm_shuffle_ps(zmm12, zmm12, 0xaa)
                                                int16_t var_f4
                                                uint64_t rcx_56 =
                                                    zx.q(*(r13 + (zx.q(var_f4) << 1))) << 6
                                                zmm1 = *(rcx_56 + arg10 + 0x10)
                                                zmm2 = *(rcx_56 + arg10 + 0x20)
                                                zmm4 = *(rcx_56 + arg10 + 0x30)
                                                zmm0 = _mm_mul_ps(*(rcx_56 + arg10), temp0_158)
                                                zmm1 = _mm_mul_ps(zmm1, temp0_158)
                                                float temp0_161[0x4] = _mm_mul_ps(zmm2, temp0_158)
                                                zmm4 = _mm_mul_ps(zmm4, temp0_158)
                                                zmm5 = _mm_add_ps(zmm5, zmm0)
                                                zmm6 = _mm_add_ps(zmm6, zmm1)
                                                zmm7 = _mm_add_ps(zmm7, temp0_161)
                                                zmm8 = _mm_add_ps(zmm8, zmm4)
                                                
                                                if (r12 u> 0xb)
                                                    zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xff)
                                                    int16_t var_f2
                                                    uint64_t rcx_58 =
                                                        zx.q(*(r13 + (zx.q(var_f2) << 1))) << 6
                                                    zmm1 = *(rcx_58 + arg10 + 0x10)
                                                    zmm2 = *(rcx_58 + arg10 + 0x20)
                                                    zmm3 = *(rcx_58 + arg10 + 0x30)
                                                    zmm0 = _mm_mul_ps(*(rcx_58 + arg10), zmm12)
                                                    zmm1 = _mm_mul_ps(zmm1, zmm12)
                                                    float temp0_170[0x4] = _mm_mul_ps(zmm2, zmm12)
                                                    float temp0_171[0x4] = _mm_mul_ps(zmm3, zmm12)
                                                    zmm5 = _mm_add_ps(zmm5, zmm0)
                                                    zmm6 = _mm_add_ps(zmm6, zmm1)
                                                    zmm7 = _mm_add_ps(zmm7, temp0_170)
                                                    zmm8 = _mm_add_ps(zmm8, temp0_171)
            
            zmm11 = temp0_51
            int64_t* r14_12 = arg1
            zmm1 = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
            zmm0 = _mm_shuffle_ps(zmm11, zmm11, 0x55)
            zmm1 = _mm_mul_ps(zmm1, zmm7)
            uint128_t* rax_95 = *r14_12
            zmm0 = _mm_mul_ps(zmm0, zmm6)
            zmm11 = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0), zmm5)
            zmm1 = _mm_add_ps(zmm1, zmm8)
            float temp0_184[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_268_1, var_268_1, 0), zmm5)
            zmm11 = _mm_add_ps(zmm11, _mm_add_ps(zmm1, zmm0))
            zmm0 = _mm_shuffle_ps(var_258_1, var_258_1, 0xaa)
            float temp0_188[0x4] = _mm_shuffle_ps(var_258_1, var_258_1, 0x55)
            zmm0 = _mm_mul_ps(zmm0, zmm7)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(var_258_1, var_258_1, 0), zmm5)
            float temp0_194[0x4] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_188, zmm6), zmm0), zmm1)
            zmm1 = _mm_mul_ps(temp0_194, temp0_194)
            zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(var_268_1, var_268_1, 0x55), zmm6)
            zmm4 = _mm_rsqrt_ps(zmm0)
            zmm0 = _mm_shuffle_ps(var_268_1, var_268_1, 0xaa)
            zmm8 = __mulps_xmmps_memps(var_268_1, data_143327d30)
            zmm0 = _mm_mul_ps(zmm0, zmm7)
            zmm4 = _mm_mul_ps(zmm4, temp0_194)
            *rax_95 = zmm11
            void* rcx_59 = *r14_12
            float temp0_208[0x4] = _mm_add_ps(temp0_184, _mm_add_ps(zmm1, zmm0))
            zmm1 = _mm_mul_ps(temp0_208, temp0_208)
            zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
            float temp0_214[0x4] = _mm_rsqrt_ps(_mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1))
            zmm0 = _mm_mul_ps(data_143329ce0, zmm4)
            float temp0_216[0x4] = _mm_mul_ps(temp0_214, temp0_208)
            zmm1 = _mm_cvttps_epi32(zmm0)
            zmm0 = data_142d3f700
            float temp0_218[0x4] = _mm_add_ps(temp0_216, zmm8)
            *(rcx_59 + 0xc) = _mm_packs_epi16(_mm_packs_epi32(zmm1, zmm9), zmm9).d
            *(*r14_12 + 0x10) = _mm_packs_epi16(
                _mm_packs_epi32(_mm_cvttps_epi32(_mm_mul_ps(zmm0, temp0_218)), zmm9), zmm9).d
            
            if (r8_7 == 0 || *(r8_7 + 0x36) u>= 0xffff)
                zmm12 = data_142dd3fb0
                zmm8 = data_142dd3fd0
                zmm7 = data_142dd3f80
                zmm6 = 0x3f800000
            else
                uint64_t r9_2 = zx.q(*(r8_7 + 0x34))
                int32_t r10_3 = rdi[3].d
                
                if (r9_2.d s>= r10_3)
                    zmm12 = 0x3f800000
                    zmm0 = zmm10
                    zmm2 = 0x3f800000
                    zmm1 = zmm10
                else
                    zmm4 = *(rdi + 0x20)
                    int64_t rdx_19 = rdi[2]
                    zmm5 = *(rdi + 0x40)
                    zmm12 = 0x3f800000
                    zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    int64_t rcx_61 = sx.q(r9_2.d) * 3
                    float temp0_229[0x4] = _mm_mul_ps(zmm5, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_19 + (rcx_61 << 2)), 
                                (*(rdx_19 + (rcx_61 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_19 + (rcx_61 << 2) + 4), zmm10[0].q)[0].q))
                    float temp0_230[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                    zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_229, temp0_229, 0xc9), zmm4)
                    float temp0_236[0x4] = _mm_sub_ps(
                        _mm_mul_ps(_mm_shuffle_ps(temp0_229, temp0_229, 0xd2), temp0_230), zmm0)
                    float temp0_237[0x4] = _mm_add_ps(temp0_236, temp0_236)
                    float temp0_239[0x4] = _mm_add_ps(temp0_229, _mm_mul_ps(temp0_237, zmm1))
                    zmm0 = _mm_add_ps(
                        _mm_sub_ps(
                            _mm_mul_ps(_mm_shuffle_ps(temp0_237, temp0_237, 0xd2), temp0_230), 
                            _mm_mul_ps(_mm_shuffle_ps(temp0_237, temp0_237, 0xc9), zmm4)), 
                        temp0_239)
                    zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                    zmm2 = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
                
                zmm13 = *(r8_7 + 0xc)
                int32_t rsi_21 = rdi[1].d
                int32_t r11_3 = data_143dbb200
                zmm6.d = zmm13.d f* zmm2[0]
                zmm7 = zmm13
                zmm8.d = zmm13.d f* zmm1.d
                zmm7[0] = zmm7[0] f* zmm0.d
                
                if (r9_2.d s>= rsi_21)
                    zmm1 = zx.o(data_143dbb1f8.q)
                    zmm0 = zmm1
                    zmm2 = r11_3
                    zmm1 = zmm1.d
                    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                else
                    zmm4 = *(rdi + 0x20)
                    uint64_t rcx_62 = r9_2 * 3
                    int64_t rdx_20 = *rdi
                    zmm5 = *(rdi + 0x40)
                    zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    float temp0_252[0x4] = _mm_mul_ps(zmm5, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_20 + (rcx_62 << 2)), 
                                (*(rdx_20 + (rcx_62 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_20 + (rcx_62 << 2) + 4), zmm10[0].q)[0].q))
                    float temp0_253[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                    zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_252, temp0_252, 0xc9), zmm4)
                    float temp0_259[0x4] = _mm_sub_ps(
                        _mm_mul_ps(_mm_shuffle_ps(temp0_252, temp0_252, 0xd2), temp0_253), zmm0)
                    float temp0_260[0x4] = _mm_add_ps(temp0_259, temp0_259)
                    zmm0 = _mm_mul_ps(temp0_260, zmm1)
                    zmm1 = *(rdi + 0x30)
                    float temp0_262[0x4] = _mm_add_ps(temp0_252, zmm0)
                    zmm1 = _mm_add_ps(zmm1, 
                        _mm_add_ps(
                            _mm_sub_ps(
                                _mm_mul_ps(_mm_shuffle_ps(temp0_260, temp0_260, 0xd2), temp0_253), 
                                _mm_mul_ps(_mm_shuffle_ps(temp0_260, temp0_260, 0xc9), zmm4)), 
                            temp0_262))
                    zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    zmm2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                
                uint64_t r9_3 = zx.q(*(r8_7 + 0x32))
                zmm6.d = zmm6.d f+ zmm2[0]
                zmm8.d = zmm8.d f+ zmm0.d
                zmm0 = *(r8_7 + 8)
                zmm7[0] = zmm7[0] f+ zmm1.d
                zmm2 = zmm0
                zmm6.d = zmm6.d f* zmm0.d
                zmm2[0] = zmm2[0] f* zmm8.d
                zmm7[0] = zmm7[0] f* zmm0.d
                int32_t var_374_3 = zmm6.d
                float var_378_3 = zmm2[0]
                int32_t var_368_3 = zmm7[0]
                
                if (r9_3.d s>= r10_3)
                    zmm9 = zmm10
                    zmm8 = zmm10
                    zmm11 = zmm12
                else
                    zmm6 = *(rdi + 0x20)
                    int64_t rdx_21 = rdi[2]
                    zmm5 = *(rdi + 0x40)
                    float temp0_273[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                    int64_t rcx_63 = sx.q(r9_3.d) * 3
                    float temp0_279[0x4] = _mm_mul_ps(zmm5, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_21 + (rcx_63 << 2)), 
                                (*(rdx_21 + (rcx_63 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_21 + (rcx_63 << 2) + 4), zmm10[0].q)[0].q))
                    zmm1 = _mm_mul_ps(zmm6, _mm_shuffle_ps(temp0_279, temp0_279, 0xc9))
                    float temp0_284[0x4] = _mm_sub_ps(
                        _mm_mul_ps(temp0_273, _mm_shuffle_ps(temp0_279, temp0_279, 0xd2)), zmm1)
                    float temp0_285[0x4] = _mm_add_ps(temp0_284, temp0_284)
                    float temp0_287[0x4] =
                        _mm_mul_ps(temp0_273, _mm_shuffle_ps(temp0_285, temp0_285, 0xd2))
                    zmm6 = _mm_mul_ps(zmm6, _mm_shuffle_ps(temp0_285, temp0_285, 0xc9))
                    zmm1 = _mm_mul_ps(temp0_285, zmm4)
                    zmm9 = _mm_add_ps(_mm_sub_ps(temp0_287, zmm6), _mm_add_ps(zmm1, temp0_279))
                    zmm8 = _mm_shuffle_ps(zmm9, zmm9, 0x55)
                    zmm11 = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
                
                zmm11.d = zmm11.d f* zmm13[0]
                zmm8.d = zmm8.d f* zmm13[0]
                zmm9[0] = zmm9[0] * zmm13[0]
                
                if (r9_3.d s>= rsi_21)
                    zmm7 = zx.o(data_143dbb1f8.q)
                    zmm0 = zmm7
                    zmm2 = r11_3
                    zmm1 = zmm7.d
                    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                else
                    zmm6 = *(rdi + 0x20)
                    uint64_t rcx_64 = r9_3 * 3
                    int64_t rdx_22 = *rdi
                    zmm5 = *(rdi + 0x40)
                    zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    float temp0_301[0x4] = _mm_mul_ps(zmm5, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_22 + (rcx_64 << 2)), 
                                (*(rdx_22 + (rcx_64 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_22 + (rcx_64 << 2) + 4), zmm10[0].q)[0].q))
                    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                    zmm1 = _mm_mul_ps(zmm6, _mm_shuffle_ps(temp0_301, temp0_301, 0xc9))
                    float temp0_307[0x4] = _mm_sub_ps(
                        _mm_mul_ps(zmm7, _mm_shuffle_ps(temp0_301, temp0_301, 0xd2)), zmm1)
                    float temp0_308[0x4] = _mm_add_ps(temp0_307, temp0_307)
                    zmm7 = _mm_mul_ps(zmm7, _mm_shuffle_ps(temp0_308, temp0_308, 0xd2))
                    zmm1 = _mm_mul_ps(temp0_308, zmm4)
                    zmm6 = _mm_mul_ps(zmm6, _mm_shuffle_ps(temp0_308, temp0_308, 0xc9))
                    zmm1 = _mm_add_ps(zmm1, temp0_301)
                    zmm7 = _mm_add_ps(_mm_sub_ps(zmm7, zmm6), zmm1)
                    zmm1 = _mm_add_ps(*(rdi + 0x30), zmm7)
                    zmm7 = zx.o(data_143dbb1f8.q)
                    zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    zmm2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                
                uint64_t r9_4 = zx.q(r8_7[3].w)
                zmm11.d = zmm11.d f+ zmm2[0]
                zmm8.d = zmm8.d f+ zmm0.d
                zmm0 = *(r8_7 + 4)
                zmm9[0] = zmm9[0] f+ zmm1.d
                zmm2 = zmm0
                zmm2[0] = zmm2[0] f* zmm11.d
                zmm9[0] = zmm9[0] f* zmm0.d
                float var_348_2 = zmm2[0]
                zmm2 = zmm0
                zmm2[0] = zmm2[0] f* zmm8.d
                float var_36c_3 = zmm2[0]
                
                if (r9_4.d s>= r10_3)
                    zmm8 = zmm10
                    zmm11 = zmm10
                else
                    zmm6 = *(rdi + 0x20)
                    int64_t rdx_23 = rdi[2]
                    zmm5 = *(rdi + 0x40)
                    zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                    int64_t rcx_65 = sx.q(r9_4.d) * 3
                    float temp0_327[0x4] = _mm_mul_ps(zmm5, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_23 + (rcx_65 << 2)), 
                                (*(rdx_23 + (rcx_65 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_23 + (rcx_65 << 2) + 4), zmm10[0].q)[0].q))
                    zmm1 = _mm_mul_ps(zmm6, _mm_shuffle_ps(temp0_327, temp0_327, 0xc9))
                    float temp0_332[0x4] = _mm_sub_ps(
                        _mm_mul_ps(zmm8, _mm_shuffle_ps(temp0_327, temp0_327, 0xd2)), zmm1)
                    float temp0_333[0x4] = _mm_add_ps(temp0_332, temp0_332)
                    zmm8 = _mm_mul_ps(zmm8, _mm_shuffle_ps(temp0_333, temp0_333, 0xd2))
                    zmm6 = _mm_mul_ps(zmm6, _mm_shuffle_ps(temp0_333, temp0_333, 0xc9))
                    zmm1 = _mm_mul_ps(temp0_333, zmm4)
                    zmm8 = _mm_add_ps(_mm_sub_ps(zmm8, zmm6), _mm_add_ps(zmm1, temp0_327))
                    zmm11 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
                    zmm12 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
                
                zmm12.d = zmm12.d f* zmm13[0]
                zmm11.d = zmm11.d f* zmm13[0]
                zmm8.d = zmm8.d f* zmm13[0]
                
                if (r9_4.d s>= rsi_21)
                    zmm0 = zmm7
                    zmm2 = r11_3
                    zmm1 = zmm7.d
                    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                else
                    zmm5 = *(rdi + 0x20)
                    uint64_t rcx_66 = r9_4 * 3
                    int64_t rdx_24 = *rdi
                    zmm7 = *(rdi + 0x40)
                    zmm6 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                    zmm7 = _mm_mul_ps(zmm7, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_24 + (rcx_66 << 2)), 
                                (*(rdx_24 + (rcx_66 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_24 + (rcx_66 << 2) + 4), zmm10[0].q)[0].q))
                    float temp0_350[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
                    zmm1 = _mm_mul_ps(temp0_350, _mm_shuffle_ps(zmm7, zmm7, 0xc9))
                    float temp0_355[0x4] =
                        _mm_sub_ps(_mm_mul_ps(zmm6, _mm_shuffle_ps(zmm7, zmm7, 0xd2)), zmm1)
                    zmm1 = *(rdi + 0x30)
                    float temp0_356[0x4] = _mm_add_ps(temp0_355, temp0_355)
                    zmm7 = _mm_add_ps(zmm7, _mm_mul_ps(temp0_356, zmm4))
                    zmm1 = _mm_add_ps(zmm1, 
                        _mm_add_ps(
                            _mm_sub_ps(
                                _mm_mul_ps(zmm6, _mm_shuffle_ps(temp0_356, temp0_356, 0xd2)), 
                                _mm_mul_ps(temp0_350, _mm_shuffle_ps(temp0_356, temp0_356, 0xc9))), 
                            zmm7))
                    zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    zmm2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                
                int32_t* rcx_67 = *r14_12
                zmm11.d = zmm11.d f+ zmm0.d
                zmm0 = *r8_7
                zmm8.d = zmm8.d f+ zmm1.d
                zmm12.d = zmm12.d f+ zmm2[0]
                zmm6 = arg12
                int32_t var_28c_1 = 0x3f800000
                zmm8.d = zmm8.d f* zmm0.d
                int64_t var_338_1 = 0
                zmm11.d = zmm11.d f* zmm0.d
                int32_t var_330_1 = 0
                zmm12.d = zmm12.d f* zmm0.d
                zmm8.d = zmm8.d f+ zmm9[0]
                zmm11.d = zmm11.d f+ var_36c_3
                zmm12.d = zmm12.d f+ var_348_2
                zmm8.d = zmm8.d f+ var_368_3
                zmm11.d = zmm11.d f+ var_378_3
                zmm12.d = zmm12.d f+ var_374_3
                float var_298[0x4]
                var_298[0] = zmm8.d
                var_128.o = zmm8
                float temp0_369[0x4] = _mm_shuffle_ps(var_298, var_298, 0xe1)
                temp0_369[0] = zmm11.d
                uint128_t var_158_1 = zmm11
                float temp0_370[0x4] = _mm_shuffle_ps(temp0_369, temp0_369, 0xc6)
                temp0_370[0] = zmm12.d
                uint128_t var_168_1 = zmm12
                float temp0_371[0x4] = _mm_shuffle_ps(temp0_370, temp0_370, 0xc9)
                var_298 = temp0_371
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_371, temp0_371, 0x55), arg13[1])
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_371, temp0_371, 0), *arg13)
                float temp0_377[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_371, temp0_371, 0xff), arg13[3])
                float temp0_378[0x4] = _mm_shuffle_ps(temp0_371, temp0_371, 0xaa)
                zmm1 = _mm_add_ps(zmm1, zmm0)
                float temp0_382[0x4] = _mm_add_ps(
                    _mm_add_ps(__mulps_xmmps_memps(temp0_378, arg13[2]), temp0_377), zmm1)
                zmm4.d = _mm_shuffle_ps(temp0_382, temp0_382, 0xaa).d f- rcx_67[2]
                float temp0_384[0x4] = _mm_shuffle_ps(temp0_382, temp0_382, 0x55)
                temp0_382[0] = temp0_382[0] f- *rcx_67
                temp0_384[0] = temp0_384[0] f- rcx_67[1]
                zmm4.d = zmm4.d f* zmm6.d
                temp0_382[0] = temp0_382[0] f* zmm6.d
                zmm4.d = zmm4.d f+ rcx_67[2]
                temp0_384[0] = temp0_384[0] f* zmm6.d
                temp0_382[0] = temp0_382[0] f+ *rcx_67
                temp0_384[0] = temp0_384[0] f+ rcx_67[1]
                int32_t var_170_1 = zmm4.d
                *rcx_67 = (_mm_unpacklo_ps(temp0_382, temp0_384[0].q)).q
                rcx_67[2] = var_170_1
                uint64_t r11_4 = zx.q(r8_7[3].w)
                int32_t rsi_22 = rdi[1].d
                zmm6 = data_143dbb200
                zmm7 = data_143dbb1fc
                zmm8 = data_143dbb1f8
                int32_t var_2e8
                int32_t var_2d8
                int32_t var_1e8
                
                if (r11_4.d s>= rsi_22)
                    var_1e8 = zmm8.d
                    var_2e8 = zmm7[0]
                    var_2d8 = zmm6.d
                else
                    zmm4 = *(rdi + 0x20)
                    int64_t rdx_25 = *rdi
                    zmm5 = *(rdi + 0x40)
                    zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    int64_t rcx_68 = sx.q(r11_4.d) * 3
                    float temp0_390[0x4] = _mm_mul_ps(zmm5, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_25 + (rcx_68 << 2)), 
                                (*(rdx_25 + (rcx_68 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_25 + (rcx_68 << 2) + 4), zmm10[0].q)[0].q))
                    float temp0_391[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                    zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_390, temp0_390, 0xc9), zmm4)
                    float temp0_397[0x4] = _mm_sub_ps(
                        _mm_mul_ps(_mm_shuffle_ps(temp0_390, temp0_390, 0xd2), temp0_391), zmm0)
                    float temp0_398[0x4] = _mm_add_ps(temp0_397, temp0_397)
                    zmm0 = _mm_mul_ps(temp0_398, zmm1)
                    zmm1 = *(rdi + 0x30)
                    float temp0_400[0x4] = _mm_add_ps(temp0_390, zmm0)
                    zmm1 = _mm_add_ps(zmm1, 
                        _mm_add_ps(
                            _mm_sub_ps(
                                _mm_mul_ps(_mm_shuffle_ps(temp0_398, temp0_398, 0xd2), temp0_391), 
                                _mm_mul_ps(_mm_shuffle_ps(temp0_398, temp0_398, 0xc9), zmm4)), 
                            temp0_400))
                    var_1e8.o = zmm1
                    var_2e8.o = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    var_2d8.o = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                
                uint64_t r9_5 = zx.q(*(r8_7 + 0x32))
                int32_t var_228
                int32_t var_218
                int32_t var_1d8
                
                if (r9_5.d s>= rsi_22)
                    var_1d8 = zmm8.d
                    var_218 = zmm7[0]
                    var_228 = zmm6.d
                else
                    zmm4 = *(rdi + 0x20)
                    int64_t rdx_26 = *rdi
                    zmm5 = *(rdi + 0x40)
                    zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    int64_t rcx_69 = sx.q(r9_5.d) * 3
                    float temp0_414[0x4] = _mm_mul_ps(zmm5, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_26 + (rcx_69 << 2)), 
                                (*(rdx_26 + (rcx_69 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_26 + (rcx_69 << 2) + 4), zmm10[0].q)[0].q))
                    float temp0_415[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                    zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_414, temp0_414, 0xc9), zmm4)
                    float temp0_421[0x4] = _mm_sub_ps(
                        _mm_mul_ps(_mm_shuffle_ps(temp0_414, temp0_414, 0xd2), temp0_415), zmm0)
                    float temp0_422[0x4] = _mm_add_ps(temp0_421, temp0_421)
                    zmm0 = _mm_mul_ps(temp0_422, zmm1)
                    zmm1 = *(rdi + 0x30)
                    float temp0_424[0x4] = _mm_add_ps(temp0_414, zmm0)
                    zmm1 = _mm_add_ps(zmm1, 
                        _mm_add_ps(
                            _mm_sub_ps(
                                _mm_mul_ps(_mm_shuffle_ps(temp0_422, temp0_422, 0xd2), temp0_415), 
                                _mm_mul_ps(_mm_shuffle_ps(temp0_422, temp0_422, 0xc9), zmm4)), 
                            temp0_424))
                    var_1d8.o = zmm1
                    var_218.o = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    var_228.o = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                
                uint64_t r10_4 = zx.q(*(r8_7 + 0x34))
                int32_t var_1b8
                uint128_t var_1a8_1
                uint128_t var_198_1
                
                if (r10_4.d s>= rsi_22)
                    var_1b8 = zmm8.d
                    zmm9 = zmm6
                    zmm8 = zmm7
                    var_198_1 = zmm7
                    var_1a8_1 = zmm6
                else
                    zmm4 = *(rdi + 0x20)
                    int64_t rdx_27 = *rdi
                    zmm5 = *(rdi + 0x40)
                    zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    int64_t rcx_70 = sx.q(r10_4.d) * 3
                    float temp0_438[0x4] = _mm_mul_ps(zmm5, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_27 + (rcx_70 << 2)), 
                                (*(rdx_27 + (rcx_70 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_27 + (rcx_70 << 2) + 4), zmm10[0].q)[0].q))
                    float temp0_439[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                    zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_438, temp0_438, 0xc9), zmm4)
                    float temp0_445[0x4] = _mm_sub_ps(
                        _mm_mul_ps(_mm_shuffle_ps(temp0_438, temp0_438, 0xd2), temp0_439), zmm0)
                    float temp0_446[0x4] = _mm_add_ps(temp0_445, temp0_445)
                    zmm0 = _mm_mul_ps(temp0_446, zmm1)
                    zmm1 = *(rdi + 0x30)
                    float temp0_448[0x4] = _mm_add_ps(temp0_438, zmm0)
                    zmm1 = _mm_add_ps(zmm1, 
                        _mm_add_ps(
                            _mm_sub_ps(
                                _mm_mul_ps(_mm_shuffle_ps(temp0_446, temp0_446, 0xd2), temp0_439), 
                                _mm_mul_ps(_mm_shuffle_ps(temp0_446, temp0_446, 0xc9), zmm4)), 
                            temp0_448))
                    var_1b8.o = zmm1
                    zmm8 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    zmm9 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                    var_198_1 = zmm8
                    var_1a8_1 = zmm9
                
                int32_t rsi_23 = rdi[3].d
                int32_t var_208
                float var_1f8
                
                if (r11_4.d s>= rsi_23)
                    zmm0 = 0x3f800000
                    var_208 = 0x3f800000
                    var_1f8 = zmm10[0]
                    var_338_1.o = zmm10
                else
                    zmm4 = *(rdi + 0x20)
                    uint64_t rcx_71 = r11_4 * 3
                    int64_t rdx_28 = rdi[2]
                    zmm5 = *(rdi + 0x40)
                    zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    float temp0_462[0x4] = _mm_mul_ps(zmm5, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_28 + (rcx_71 << 2)), 
                                (*(rdx_28 + (rcx_71 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_28 + (rcx_71 << 2) + 4), zmm10[0].q)[0].q))
                    float temp0_463[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                    zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_462, temp0_462, 0xc9), zmm4)
                    float temp0_469[0x4] = _mm_sub_ps(
                        _mm_mul_ps(_mm_shuffle_ps(temp0_462, temp0_462, 0xd2), temp0_463), zmm0)
                    float temp0_470[0x4] = _mm_add_ps(temp0_469, temp0_469)
                    float temp0_472[0x4] = _mm_add_ps(temp0_462, _mm_mul_ps(temp0_470, zmm1))
                    zmm0 = _mm_add_ps(
                        _mm_sub_ps(
                            _mm_mul_ps(_mm_shuffle_ps(temp0_470, temp0_470, 0xd2), temp0_463), 
                            _mm_mul_ps(_mm_shuffle_ps(temp0_470, temp0_470, 0xc9), zmm4)), 
                        temp0_472)
                    var_338_1.o = zmm0
                    var_1f8.o = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                    zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
                    zmm0 = 0x3f800000
                    var_208.o = zmm1
                
                uint128_t var_318_2
                float var_268_2[0x4]
                uint128_t var_258_2
                
                if (r9_5.d s>= rsi_23)
                    zmm11 = zmm10
                    var_318_2 = zmm10
                    zmm12 = zmm10
                    var_258_2 = zmm10
                    zmm13 = zmm0
                    var_268_2 = zmm0
                else
                    zmm5 = *(rdi + 0x20)
                    uint64_t rcx_72 = r9_5 * 3
                    int64_t rdx_29 = rdi[2]
                    zmm6 = *(rdi + 0x40)
                    zmm11 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                    zmm6 = _mm_mul_ps(zmm6, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_29 + (rcx_72 << 2)), 
                                (*(rdx_29 + (rcx_72 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_29 + (rcx_72 << 2) + 4), zmm10[0].q)[0].q))
                    float temp0_487[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
                    zmm1 = _mm_mul_ps(temp0_487, _mm_shuffle_ps(zmm6, zmm6, 0xc9))
                    float temp0_492[0x4] =
                        _mm_sub_ps(_mm_mul_ps(zmm11, _mm_shuffle_ps(zmm6, zmm6, 0xd2)), zmm1)
                    float temp0_493[0x4] = _mm_add_ps(temp0_492, temp0_492)
                    zmm6 = _mm_add_ps(zmm6, _mm_mul_ps(temp0_493, zmm4))
                    zmm0 = 0x3f800000
                    zmm11 = _mm_add_ps(
                        _mm_sub_ps(_mm_mul_ps(zmm11, _mm_shuffle_ps(temp0_493, temp0_493, 0xd2)), 
                            _mm_mul_ps(temp0_487, _mm_shuffle_ps(temp0_493, temp0_493, 0xc9))), 
                        zmm6)
                    var_318_2 = zmm11
                    zmm12 = _mm_shuffle_ps(zmm11, zmm11, 0x55)
                    zmm13 = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
                    var_258_2 = zmm12
                    var_268_2 = zmm13
                
                float var_1c8
                
                if (r10_4.d s>= rsi_23)
                    var_1c8 = zmm10[0]
                    zmm1 = zmm10
                else
                    zmm6 = *(rdi + 0x20)
                    uint64_t rcx_73 = r10_4 * 3
                    int64_t rdx_30 = rdi[2]
                    zmm5 = *(rdi + 0x40)
                    zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                    zmm4 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    float temp0_509[0x4] = _mm_mul_ps(zmm5, 
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rdx_30 + (rcx_73 << 2)), 
                                (*(rdx_30 + (rcx_73 << 2) + 8)).q), 
                            _mm_unpacklo_ps(*(rdx_30 + (rcx_73 << 2) + 4), zmm10[0].q)[0].q))
                    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                    zmm1 = _mm_mul_ps(zmm6, _mm_shuffle_ps(temp0_509, temp0_509, 0xc9))
                    float temp0_515[0x4] = _mm_sub_ps(
                        _mm_mul_ps(zmm7, _mm_shuffle_ps(temp0_509, temp0_509, 0xd2)), zmm1)
                    float temp0_516[0x4] = _mm_add_ps(temp0_515, temp0_515)
                    zmm7 = _mm_mul_ps(zmm7, _mm_shuffle_ps(temp0_516, temp0_516, 0xd2))
                    zmm1 = _mm_mul_ps(temp0_516, zmm4)
                    zmm6 = _mm_mul_ps(zmm6, _mm_shuffle_ps(temp0_516, temp0_516, 0xc9))
                    zmm1 = _mm_add_ps(zmm1, temp0_509)
                    zmm7 = _mm_add_ps(_mm_sub_ps(zmm7, zmm6), zmm1)
                    var_1c8.o = zmm7
                    zmm1 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                    zmm0 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                
                zmm10 = *(r8_7 + 0x1c)
                zmm3 = zmm8
                zmm6 = *(r8_7 + 0x14)
                zmm2 = zmm9
                zmm9 = *(r8_7 + 0x18)
                zmm5 = zmm6
                int32_t var_188_1 = zmm1.d
                zmm1.d = zmm1.d f* zmm10[0]
                int32_t var_358_2 = zmm0.d
                zmm7 = zmm9
                zmm0.d = zmm0.d f* zmm10[0]
                zmm3[0] = zmm3[0] f+ zmm1.d
                zmm11.d = zmm11.d f* zmm10[0]
                zmm2[0] = zmm2[0] f+ zmm0.d
                zmm1.d = zmm12.d f* zmm10[0]
                zmm8.d = zmm9.d f* zmm3[0]
                zmm3 = var_218
                zmm3[0] = zmm3[0] f+ zmm1.d
                zmm0.d = zmm13.d f* zmm10[0]
                zmm1.d = var_1f8.d f* zmm10[0]
                zmm5[0] = zmm5[0] * zmm3[0]
                zmm3 = var_2e8
                zmm3[0] = zmm3[0] f+ zmm1.d
                zmm7[0] = zmm7[0] f* zmm2[0]
                zmm1 = r8_7[1].d
                zmm2 = var_228
                zmm13 = zmm1
                zmm2[0] = zmm2[0] f+ zmm0.d
                zmm0.d = var_208.d f* zmm10[0]
                zmm13[0] = zmm13[0] * zmm3[0]
                zmm3 = var_1a8_1
                zmm4.d = zmm6.d f* zmm2[0]
                zmm2 = var_2d8
                zmm13[0] = zmm13[0] + zmm5[0]
                zmm5 = var_1c8.o
                zmm2[0] = zmm2[0] f+ zmm0.d
                zmm13[0] = zmm13[0] f+ zmm8.d
                zmm8 = var_1d8.o
                zmm11.d = zmm11.d f+ zmm8.d
                zmm12.d = zmm1.d f* zmm2[0]
                zmm2 = *(r8_7 + 0x2c)
                zmm12.d = zmm12.d f+ zmm4.d
                zmm11.d = zmm11.d f* zmm6.d
                zmm6 = var_338_1.o
                zmm0.d = zmm6.d f* zmm10[0]
                zmm12.d = zmm12.d f+ zmm7[0]
                zmm7 = var_1b8.o
                zmm0.d = zmm0.d f+ var_1e8
                zmm0.d = zmm0.d f* zmm1.d
                zmm1.d = zmm5.d f* zmm10[0]
                zmm11.d = zmm11.d f+ zmm0.d
                zmm0.d = zmm2.d f* var_358_2
                zmm1.d = zmm1.d f+ zmm7[0]
                zmm3[0] = zmm3[0] f+ zmm0.d
                zmm0 = *(r8_7 + 0x28)
                zmm1.d = zmm1.d f* zmm9[0]
                zmm11.d = zmm11.d f+ zmm1.d
                zmm1.d = zmm2.d f* var_188_1
                zmm4.d = var_198_1.d f+ zmm1.d
                zmm1.d = zmm0.d f* zmm3[0]
                zmm3 = zmm0
                zmm3[0] = zmm3[0] f* zmm4.d
                zmm4.d = zmm2.d f* zmm5[0]
                var_268_2[0] = var_268_2[0] * zmm2[0]
                zmm4.d = zmm4.d f+ zmm7[0]
                zmm4.d = zmm4.d f* zmm0.d
                zmm10 = var_228.o
                zmm10[0] = zmm10[0] + var_268_2[0]
                zmm5 = var_318_2
                zmm9 = var_218.o
                zmm7 = var_208.o
                zmm0.d = var_258_2.d f* zmm2[0]
                zmm7[0] = zmm7[0] f* zmm2[0]
                zmm6.d = zmm6.d f* zmm2[0]
                zmm9[0] = zmm9[0] f+ zmm0.d
                zmm0 = *(r8_7 + 0x24)
                zmm10[0] = zmm10[0] f* zmm0.d
                zmm6.d = zmm6.d f+ var_1e8
                zmm9[0] = zmm9[0] f* zmm0.d
                zmm5[0] = zmm5[0] * zmm2[0]
                zmm5[0] = zmm5[0] f+ zmm8.d
                zmm8 = var_128.o
                zmm5[0] = zmm5[0] f* zmm0.d
                zmm0.d = var_1f8.o.d f* zmm2[0]
                zmm2 = var_2d8.o
                zmm2[0] = zmm2[0] f+ zmm7[0]
                zmm7 = var_2e8.o
                zmm7[0] = zmm7[0] f+ zmm0.d
                zmm0 = r8_7[2].d
                zmm6.d = zmm6.d f* zmm0.d
                zmm2[0] = zmm2[0] f* zmm0.d
                zmm7[0] = zmm7[0] f* zmm0.d
                zmm6.d = zmm6.d f+ zmm5[0]
                zmm2[0] = zmm2[0] + zmm10[0]
                zmm10 = var_168_1
                zmm7[0] = zmm7[0] f+ zmm9[0]
                zmm9 = var_158_1
                zmm6.d = zmm6.d f+ zmm4.d
                zmm2[0] = zmm2[0] f+ zmm1.d
                zmm7[0] = zmm7[0] f+ zmm3[0]
                zmm3 = zx.o(0)
                zmm6.d = zmm6.d f- zmm8.d
                zmm2[0] = zmm2[0] - zmm10[0]
                zmm7[0] = zmm7[0] f- zmm9[0]
                var_338_1.o = zmm6
                var_2d8.o = zmm2
                zmm2 = zmm6
                zmm4 = var_2d8.o
                zmm2[0] = zmm2[0] f* zmm6.d
                zmm0.d = zmm7.d f* zmm7[0]
                zmm1.d = zmm4.d f* zmm4.d
                zmm2[0] = zmm2[0] f+ zmm0.d
                var_2e8.o = zmm7
                zmm6.d = 0x3f000000
                zmm2[0] = zmm2[0] f+ zmm1.d
                zmm3[0] = zmm2.d
                zmm7 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                zmm3[0] = zmm3[0] * 0.5f
                zmm0.d = zmm7.d f* zmm7[0]
                zmm3[0] = zmm3[0] f* zmm0.d
                zmm1.d = zmm6.d f- zmm3[0]
                zmm0.d = zmm7.d f* zmm1.d
                zmm7[0] = zmm7[0] f+ zmm0.d
                zmm0.d = zmm7.d f* zmm7[0]
                zmm3[0] = zmm3[0] f* zmm0.d
                zmm1.d = zmm6.d f- zmm3[0]
                zmm0.d = zmm7.d f* zmm1.d
                zmm7[0] = zmm7[0] f+ zmm0.d
                zmm5 = zmm7
                int32_t var_368_4 = zmm7[0]
                zmm5[0] = zmm5[0] f* zmm4.d
                zmm11.d = zmm11.d f- zmm8.d
                zmm4.d = zmm7.d f* var_2e8
                zmm12.d = zmm12.d f- zmm10[0]
                int32_t var_27c_1 = 0
                zmm7[0] = zmm7[0] f* var_338_1.o.d
                zmm13[0] = zmm13[0] - zmm9[0]
                int32_t var_26c_1 = 0
                zmm3 = zx.o(0)
                var_318_2.q = 0
                zmm2 = zmm11
                var_318_2:8.d = 0
                zmm2[0] = zmm2[0] f* zmm11.d
                var_358_2 = 0
                var_358_2 = 0
                zmm0.d = zmm13.d f* zmm13[0]
                zmm2[0] = zmm2[0] f+ zmm0.d
                zmm0.d = zmm12.d f* zmm12.d
                zmm0.d = zmm0.d f+ zmm2[0]
                zmm3[0] = zmm0.d
                float temp0_528[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                zmm3[0] = zmm3[0] * 0.5f
                zmm0.d = temp0_528.d f* temp0_528[0]
                zmm3[0] = zmm3[0] f* zmm0.d
                zmm1.d = zmm6.d f- zmm3[0]
                zmm0.d = temp0_528.d f* zmm1.d
                temp0_528[0] = temp0_528[0] f+ zmm0.d
                zmm0.d = temp0_528.d f* temp0_528[0]
                zmm3[0] = zmm3[0] f* zmm0.d
                zmm6.d = 0.5f - zmm3[0]
                zmm0.d = temp0_528.d f* zmm6.d
                temp0_528[0] = temp0_528[0] f+ zmm0.d
                float var_368_5 = temp0_528[0]
                temp0_528[0] = temp0_528[0] f* zmm12.d
                temp0_528[0] = temp0_528[0] f* zmm11.d
                zmm11.d = zmm7[0]
                zmm8.d = temp0_528.d f* zmm13[0]
                _mm_shuffle_ps(zmm11, zmm11, 0xe1)
                float var_278[0x4]
                var_278[0] = temp0_528[0]
                zmm11.d = zmm4.d
                float temp0_530[0x4] = _mm_shuffle_ps(var_278, var_278, 0xe1)
                _mm_shuffle_ps(zmm11, zmm11, 0xc6)
                temp0_530[0] = zmm8.d
                zmm11.d = zmm5[0]
                float temp0_532[0x4] = _mm_shuffle_ps(temp0_530, temp0_530, 0xc6)
                zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0xc9)
                temp0_532[0] = temp0_528[0]
                uint128_t var_288 = zmm11
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm11, zmm11, 0x55), arg13[1])
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm11, zmm11, 0), *arg13)
                float temp0_539[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm11, zmm11, 0xff), arg13[3])
                zmm0 = _mm_add_ps(zmm0, zmm1)
                float temp0_541[0x4] = _mm_shuffle_ps(temp0_532, temp0_532, 0xc9)
                var_278 = temp0_541
                zmm11 = _mm_add_ps(
                    _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(zmm11, zmm11, 0xaa), arg13[2]), 
                        temp0_539), 
                    zmm0)
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_541, temp0_541, 0x55), arg13[1])
                zmm13 = arg12
                void* rdx_31 = *r14_12
                zmm7 = data_142dd3f80
                zmm9 = zx.o(0)
                zmm8 = data_142dd3fd0
                zmm12 = data_142dd3fb0
                zmm6 = 0x3f800000
                zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_541, temp0_541, 0), *arg13)
                zmm4.d = 1f - zmm13[0]
                float temp0_551[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_541, temp0_541, 0xff), arg13[3])
                zmm1 = _mm_add_ps(zmm1, zmm0)
                float temp0_554[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_541, temp0_541, 0xaa), arg13[2])
                zmm10 = zmm4
                float temp0_555[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
                temp0_555[0] = temp0_555[0] * zmm13[0]
                float temp0_556[0x4] = _mm_add_ps(temp0_554, temp0_551)
                zmm2 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rdx_31 + 0xc)), 0), 0)
                zmm0 = _mm_cmpgt_epi32(zmm2, zmm7)
                float temp0_560[0x4] = _mm_add_ps(temp0_556, zmm1)
                zmm1 = (zmm8 & zmm0) | zmm2
                zmm2 = zx.o(*(rdx_31 + 0x10))
                zmm0 = _mm_cvtepi32_ps(zmm1)
                zmm2 = _mm_unpacklo_epi8(zmm2, 0)
                int96_t var_358_3 = temp0_560[0].12
                float temp0_563[0x4] = _mm_mul_ps(zmm12, zmm0)
                zmm2 = _mm_unpacklo_epi16(zmm2, 0)
                zmm1 = (zmm8 & _mm_cmpgt_epi32(zmm2, zmm7)) | zmm2
                zmm2 = zmm4
                zmm1 = _mm_mul_ps(zmm12, _mm_cvtepi32_ps(zmm1))
                zmm0 = _mm_shuffle_ps(temp0_563, temp0_563, 0xaa)
                zmm2[0] = zmm2[0] f* zmm0.d
                zmm0 = _mm_shuffle_ps(temp0_563, temp0_563, 0x55)
                var_338_1.o = zmm1
                zmm10[0] = zmm10[0] f* zmm0.d
                zmm1.d = zmm4.d f* temp0_563[0]
                float temp0_570[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x55)
                zmm11.d = zmm11.d f* zmm13[0]
                temp0_570[0] = temp0_570[0] * zmm13[0]
                zmm11.d = zmm11.d f+ zmm1.d
                zmm11.d = zmm11.d f* 127f
                zmm11.d = zmm11.d f+ zmm11.d
                zmm11.d = zmm11.d f+ 0.5f
                int32_t rcx_75 = int.d(zmm11.d) s>> 1
                char rax_103
                
                if (rcx_75 s>= 0xffffff80)
                    rax_103 = 0x7f
                    
                    if (rcx_75 s< 0x7f)
                        rax_103 = rcx_75.b
                else
                    rax_103 = -0x80
                
                temp0_570[0] = temp0_570[0] + zmm10[0]
                *(rdx_31 + 0xc) = rax_103
                zmm2[0] = zmm2[0] + temp0_555[0]
                temp0_570[0] = temp0_570[0] * 127f
                temp0_570[0] = temp0_570[0] + temp0_570[0]
                temp0_570[0] = temp0_570[0] + 0.5f
                int32_t rax_105 = int.d(temp0_570[0]) s>> 1
                char rcx_76
                
                if (rax_105 s>= 0xffffff80)
                    rcx_76 = 0x7f
                    
                    if (rax_105 s< 0x7f)
                        rcx_76 = rax_105.b
                else
                    rcx_76 = -0x80
                
                zmm2[0] = zmm2[0] * 127f
                *(rdx_31 + 0xd) = rcx_76
                zmm2[0] = zmm2[0] + zmm2[0]
                zmm2[0] = zmm2[0] + 0.5f
                int32_t rax_107 = int.d(zmm2[0]) s>> 1
                char rcx_77
                
                if (rax_107 s>= 0xffffff80)
                    rcx_77 = 0x7f
                    
                    if (rax_107 s< 0x7f)
                        rcx_77 = rax_107.b
                else
                    rcx_77 = -0x80
                
                zmm3 = var_358_3:8.d
                zmm2 = var_358_3:4.d
                zmm1.d = var_338_1:4.d.d f* zmm4.d
                *(rdx_31 + 0xe) = rcx_77
                zmm0.d = var_330_1.d f* zmm4.d
                *(rdx_31 + 0xf) = 0x7f
                void* rax_108 = *r14_12
                zmm3[0] = zmm3[0] * zmm13[0]
                zmm2[0] = zmm2[0] * zmm13[0]
                zmm3[0] = zmm3[0] f+ zmm0.d
                zmm0.d = var_338_1.d.d f* zmm4.d
                zmm2[0] = zmm2[0] f+ zmm1.d
                zmm1.d = var_358_3.d.d f* zmm13[0]
                zmm1.d = zmm1.d f+ zmm0.d
                zmm1.d = zmm1.d f* 127f
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f+ 0.5f
                int32_t rcx_79 = int.d(zmm1.d) s>> 1
                char rdx_32
                
                if (rcx_79 s>= 0xffffff80)
                    rdx_32 = 0x7f
                    
                    if (rcx_79 s< 0x7f)
                        rdx_32 = rcx_79.b
                else
                    rdx_32 = -0x80
                
                zmm2[0] = zmm2[0] * 127f
                *(rax_108 + 0x10) = rdx_32
                zmm2[0] = zmm2[0] + zmm2[0]
                zmm2[0] = zmm2[0] + 0.5f
                int32_t rcx_81 = int.d(zmm2[0]) s>> 1
                char rdx_33
                
                if (rcx_81 s>= 0xffffff80)
                    rdx_33 = 0x7f
                    
                    if (rcx_81 s< 0x7f)
                        rdx_33 = rcx_81.b
                else
                    rdx_33 = -0x80
                
                zmm3[0] = zmm3[0] * 127f
                *(rax_108 + 0x11) = rdx_33
                zmm3[0] = zmm3[0] + zmm3[0]
                zmm3[0] = zmm3[0] + 0.5f
                int32_t rcx_83 = int.d(zmm3[0]) s>> 1
                char rdx_34
                
                if (rcx_83 s>= 0xffffff80)
                    rdx_34 = 0x7f
                    
                    if (rcx_83 s< 0x7f)
                        rdx_34 = rcx_83.b
                else
                    rdx_34 = -0x80
                
                int32_t var_32c
                zmm1.d = var_32c.d f* 127f
                *(rax_108 + 0x12) = rdx_34
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f+ 0.5f
                int32_t rcx_85 = int.d(zmm1.d) s>> 1
                
                if (rcx_85 s>= 0xffffff80)
                    char rdx_35 = 0x7f
                    zmm10 = zx.o(0)
                    
                    if (rcx_85 s< 0x7f)
                        rdx_35 = rcx_85.b
                    
                    *(rax_108 + 0x13) = rdx_35
                else
                    zmm10 = zx.o(0)
                    *(rax_108 + 0x13) = 0x80
            
            r9 = var_308
            r10 = arg4
            int64_t rcx_86 = r9[0x13]
            uint64_t rax_110 = zx.q(*(r10 + 0x10) + arg7)
            uint64_t r15_6 = zx.q(r9[0x15].d)
            
            if (r9[0x16].b == 0)
                int16_t* r15_9 = (r15_6 << 2) * rax_110 + rcx_86
                uint32_t rsi_24 = zx.d(r15_9[1])
                int32_t r14_15 = (rsi_24 & 0xffff8000) << 0x10
                int16_t rax_112 = rsi_24.w & 0x7c00
                int32_t var_378_4
                
                if (rax_112 == 0)
                    int32_t rsi_25 = rsi_24 & 0x3ff
                    
                    if (rsi_25 != 0)
                        if (data_143cda914 s> *(0x14 +
                                *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                            _Init_thread_header(&data_143cda914)
                            
                            if (data_143cda914 == 0xffffffff)
                                data_143cda910 = 0x3fb8aa3b
                                _Init_thread_footer(&data_143cda914)
                        
                        zmm0.d = float.s(zx.q(rsi_25))
                        zmm0.d = logf(zmm0.d).d f* data_143cda910
                        var_378_4 = (rsi_25 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                            | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | r14_15
                    else
                        var_378_4 = r14_15
                else if (rax_112 != 0x7c00)
                    var_378_4 =
                        ((rsi_24 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rsi_24 & 0x3ff) << 0xd | r14_15
                else
                    var_378_4 = r14_15 | 0x477fe000
                
                uint32_t rsi_32 = zx.d(*r15_9)
                int32_t r14_19 = (rsi_32 & 0xffff8000) << 0x10
                int16_t rax_127 = rsi_32.w & 0x7c00
                int32_t var_374_4
                
                if (rax_127 == 0)
                    int32_t rsi_33 = rsi_32 & 0x3ff
                    
                    if (rsi_33 != 0)
                        if (data_143cda914 s> *(0x14 +
                                *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                            _Init_thread_header(&data_143cda914)
                            
                            if (data_143cda914 == 0xffffffff)
                                data_143cda910 = 0x3fb8aa3b
                                _Init_thread_footer(&data_143cda914)
                        
                        zmm0.d = float.s(zx.q(rsi_33))
                        zmm0.d = logf(zmm0.d).d f* data_143cda910
                        var_374_4 = (rsi_33 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                            | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | r14_19
                    else
                        var_374_4 = r14_19
                else if (rax_127 != 0x7c00)
                    var_374_4 =
                        ((rsi_32 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rsi_32 & 0x3ff) << 0xd | r14_19
                else
                    var_374_4 = r14_19 | 0x477fe000
                
                zmm0 = var_374_4
                zmm1 = var_378_4
                r9 = var_308
                r14_12 = arg1
                r10 = arg4
            else
                int64_t rax_111 = rax_110 * r15_6
                zmm0 = *(rcx_86 + (rax_111 << 3))
                zmm1 = *(rcx_86 + (rax_111 << 3) + 4)
            
            r11_1 = zx.q(data_14401b1a0)
            rcx_2 = arg7 + 1
            rsi_2 = var_324_1
            *(*r14_12 + 0x14) = zmm0.d
            arg7 = rcx_2
            *(*r14_12 + 0x18) = zmm1.d
            result = arg9
            *result += 1
            *r14_12 += 0x1c
        while (rcx_2 s< var_328)

__security_check_cookie(rax_1 ^ &var_398)
return result
