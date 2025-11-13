// 函数: sub_14233b5c0
// 地址: 0x14233b5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = *(**arg1 + (sx.q(arg1[1].d) << 3))
void* r8

if (arg2 != 0)
    r8 = *(arg2 + 0x18)
    
    if (r8 == 0 || *(r8 + 0x40) != *(r13 + 0xec))
        r8 = *(arg2 + 0x20)
        
        if (r8 == 0 || *(r8 + 0x40) != *(r13 + 0xec))
            r8 = *(r13 + 0x308)
            
            if (r8 == 0)
                r8 = r13 + 0x138
    
    arg1[0x5d] = r8
    void* rcx = *(arg2 + 0x10)
    
    if (rcx == 0 || *(rcx + 0x34) != *(r13 + 0xec))
        arg1[0x5e] = r13 + 0xf8
    else
        arg1[0x5e] = rcx

r8.b = 1
sub_1422a3bd0(&arg1[0x55], r13 + 0xb8, r8.b)
sub_1422c8fe0(&arg1[0x44], *(r13 + 0xac), 1, 1)
uint64_t rdx_2 = 0
int32_t i = 0
void* arg_18
void* arg_20
uint128_t zmm2
float zmm3[0x4]

if (*(r13 + 0xac) u> 0)
    int128_t zmm9 = 0x3f000000
    int128_t zmm10 = 0x42fe0000
    int128_t zmm11 = 0x46fffe00
    int128_t zmm12 = zx.o(0)
    float zmm6[0x4]
    float var_58_1[0x4] = zmm6
    float zmm7[0x4]
    float var_68_1[0x4] = zmm7
    float zmm8[0x4]
    float var_78_1[0x4] = zmm8
    
    do
        char rdx_3 = *(r13 + 0xb1)
        int64_t rcx_3 = *(r13 + 0x90)
        uint64_t rax_8 = zx.q(i) * 2
        uint64_t i_4 = zx.q(i)
        int64_t var_2a8_1 = 0
        uint128_t zmm0_1
        int32_t zmm1[0x4]
        
        if (rdx_3 == 0)
            zmm1 = data_142dd3fd0
            zmm2 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_3 + (i_4 << 3) + 4)), zmm12.q), 
                zmm12.q)
            zmm0_1 = _mm_cvtepi32_ps((zmm1 & __pcmpgtd_xmmdq_memdq(zmm2, data_142dd3f80)) | zmm2)
            zmm1 = data_142dd3fb0
        else
            zmm1 = data_142dd3fc0
            zmm2 = _mm_unpacklo_epi16(zx.o(*(rcx_3 + (rax_8 << 3) + 8)), zmm12.q)
            zmm0_1 = _mm_cvtepi32_ps((zmm1 & __pcmpgtd_xmmdq_memdq(zmm2, data_142dd3f90)) | zmm2)
            zmm1 = data_142dd3fa0
        
        int64_t* r8_1 = rcx_3 + (rax_8 << 3)
        var_2a8_1.o = _mm_mul_ps(zmm1, zmm0_1)
        int32_t zmm4_1[0x4]
        
        if (rdx_3 == 0)
            zmm4_1 = data_142dd3fd0
            zmm6 = data_142dd3fb0
            zmm2 =
                _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_3 + (i_4 << 3))), zmm12.q), zmm12.q)
            zmm0_1 = _mm_cvtepi32_ps((zmm4_1 & __pcmpgtd_xmmdq_memdq(zmm2, data_142dd3f80)) | zmm2)
            zmm1 = zx.o(*(rcx_3 + (i_4 << 3) + 4))
            float temp0_26[0x4] = _mm_mul_ps(zmm6, zmm0_1)
            int32_t temp0_28[0x4] = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zmm1, zmm12.q), zmm12.q)
            zmm4_1 &= __pcmpgtd_xmmdq_memdq(temp0_28, data_142dd3f80)
            float temp0_30[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0x55)
            zmm7 = temp0_26
            float var_148_1[0x4] = temp0_26
            zmm8 = temp0_30
            float temp0_32[0x4] = _mm_mul_ps(zmm6, _mm_cvtepi32_ps(zmm4_1 | temp0_28))
            float temp0_33[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xaa)
            zmm8[0] = zmm8[0] * temp0_32[0]
            zmm2 = _mm_shuffle_ps(temp0_32, temp0_32, 0x55)
            zmm1 = _mm_shuffle_ps(temp0_32, temp0_32, 0xaa)
            zmm0_1.d = temp0_26.d f* zmm2.d
            zmm7[0] = zmm7[0] f* zmm1[0]
            zmm8[0] = zmm8[0] f- zmm0_1.d
            float var_178_1[0x4] = temp0_32
            temp0_30[0] = temp0_30[0] f* zmm1[0]
            temp0_33[0] = temp0_33[0] f* zmm2.d
            zmm0_1.d = temp0_33.d f* temp0_32[0]
            float temp0_36[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xff)
            temp0_33[0] = temp0_33[0] - temp0_30[0]
            zmm8[0] = zmm8[0] * temp0_36[0]
            zmm7[0] = zmm7[0] f- zmm0_1.d
            temp0_33[0] = temp0_33[0] * temp0_36[0]
            zmm7[0] = zmm7[0] * temp0_36[0]
            float var_290_2 = temp0_33[0]
            zmm6 = temp0_33
        else
            zmm4_1 = data_142dd3fc0
            float zmm5_1[0x4] = data_142dd3fa0
            zmm2 = _mm_unpacklo_epi16(zx.o(*r8_1), zmm12.q)
            zmm0_1 = _mm_cvtepi32_ps((zmm4_1 & __pcmpgtd_xmmdq_memdq(zmm2, data_142dd3f90)) | zmm2)
            zmm1 = zx.o(r8_1[1])
            float temp0_12[0x4] = _mm_mul_ps(zmm5_1, zmm0_1)
            int32_t temp0_13[0x4] = _mm_unpacklo_epi16(zmm1, zmm12.q)
            zmm4_1 &= __pcmpgtd_xmmdq_memdq(temp0_13, data_142dd3f90)
            float var_158_1[0x4] = temp0_12
            zmm7 = temp0_12
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x55)
            zmm8 = temp0_15
            float temp0_17[0x4] = _mm_mul_ps(zmm5_1, _mm_cvtepi32_ps(zmm4_1 | temp0_13))
            zmm6 = _mm_shuffle_ps(temp0_12, temp0_12, 0xaa)
            zmm8[0] = zmm8[0] * temp0_17[0]
            zmm2 = _mm_shuffle_ps(temp0_17, temp0_17, 0x55)
            zmm0_1.d = temp0_12.d f* zmm2.d
            zmm1 = _mm_shuffle_ps(temp0_17, temp0_17, 0xaa)
            zmm7[0] = zmm7[0] f* zmm1[0]
            zmm8[0] = zmm8[0] f- zmm0_1.d
            temp0_15[0] = temp0_15[0] f* zmm1[0]
            float var_188_1[0x4] = temp0_17
            zmm6[0] = zmm6[0] f* zmm2.d
            zmm0_1.d = zmm6.d f* temp0_17[0]
            float temp0_21[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xff)
            zmm6[0] = zmm6[0] - temp0_15[0]
            zmm8[0] = zmm8[0] * temp0_21[0]
            zmm7[0] = zmm7[0] f- zmm0_1.d
            zmm6[0] = zmm6[0] * temp0_21[0]
            zmm7[0] = zmm7[0] * temp0_21[0]
            float var_290_1 = zmm6[0]
        
        float var_288_1 = zmm8[0]
        float var_28c_1 = zmm7[0]
        
        if (rdx_3 == 0)
            int32_t temp0_44[0x4] =
                _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_3 + (i_4 << 3))), zmm12.q), zmm12.q)
            zmm1 = __mulps_xmmps_memps(
                _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(temp0_44, data_142dd3f80) & data_142dd3fd0)
                    | temp0_44), 
                data_142dd3fb0)
            int32_t var_128_1[0x4] = zmm1
            zmm3 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            zmm2 = zmm1
            zmm4_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        else
            zmm2 = data_142dd3fa0
            int32_t temp0_37[0x4] = _mm_unpacklo_epi16(zx.o(*r8_1), zmm12.q)
            zmm2 = _mm_mul_ps(zmm2, 
                _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(temp0_37, data_142dd3f90) & data_142dd3fc0)
                    | temp0_37))
            uint128_t var_138_1 = zmm2
            zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm4_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        
        zmm1 = zmm2
        int64_t rdi_1 = arg1[0x50]
        
        if (*(arg1 + 0x2a1) == 0)
            zmm1[0] = zmm1[0] f* zmm10.d
            zmm1[0] = zmm1[0] f+ zmm1[0]
            zmm1[0] = zmm1[0] f+ zmm9.d
            int32_t rax_24 = int.d(zmm1[0]) s>> 1
            char rcx_12
            
            if (rax_24 s>= 0xffffff80)
                rcx_12 = 0x7f
                
                if (rax_24 s< 0x7f)
                    rcx_12 = rax_24.b
            else
                rcx_12 = -0x80
            
            zmm1 = zmm3
            *(rdi_1 + (i_4 << 3)) = rcx_12
            zmm1[0] = zmm1[0] f* zmm10.d
            zmm1[0] = zmm1[0] f+ zmm1[0]
            zmm1[0] = zmm1[0] f+ zmm9.d
            int32_t rax_26 = int.d(zmm1[0]) s>> 1
            char rcx_13
            
            if (rax_26 s>= 0xffffff80)
                rcx_13 = 0x7f
                
                if (rax_26 s< 0x7f)
                    rcx_13 = rax_26.b
            else
                rcx_13 = -0x80
            
            *(rdi_1 + (i_4 << 3) + 1) = rcx_13
            zmm4_1[0] = zmm4_1[0] f* zmm10.d
            zmm4_1[0] = zmm4_1[0] f+ zmm4_1[0]
            zmm4_1[0] = zmm4_1[0] f+ zmm9.d
            int32_t rax_28 = int.d(zmm4_1[0]) s>> 1
            char rcx_14
            
            if (rax_28 s>= 0xffffff80)
                rcx_14 = 0x7f
                
                if (rax_28 s< 0x7f)
                    rcx_14 = rax_28.b
            else
                rcx_14 = -0x80
            
            zmm0_1 = data_142d3f660
            float var_1b8_1 = zmm6[0]
            float var_1b4_1 = zmm7[0]
            float var_1b0_1 = zmm8[0]
            *(rdi_1 + (i_4 << 3) + 2) = rcx_14
            float var_1a8_1 = var_2a8_1.d[0]
            float var_1a4_1 = var_2a8_1:4.d[0]
            int32_t var_1a0_1 = 0
            float var_1c8 = zmm2.d
            float var_1c4_1 = zmm3[0]
            int32_t var_1c0_1 = zmm4_1[0]
            *(rdi_1 + (i_4 << 3) + 3) = 0x7f
            int32_t var_1bc_1 = 0
            int32_t var_1ac_1 = 0
            int32_t var_19c_1 = 0
            uint128_t var_198_1 = zmm0_1
            int32_t zmm13_2
            zmm0_1, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_2 = sub_14062b8d0(&var_1c8)
            
            zmm1 = zmm0_1.d f>= zmm13_2 ? 0x437e8000 : 0xc37d8000
            
            zmm6[0] = zmm6[0] f* zmm10.d
            zmm6[0] = zmm6[0] + zmm6[0]
            zmm6[0] = zmm6[0] f+ zmm9.d
            int32_t rax_30 = int.d(zmm6[0]) s>> 1
            char rcx_16
            
            if (rax_30 s>= 0xffffff80)
                rcx_16 = 0x7f
                
                if (rax_30 s< 0x7f)
                    rcx_16 = rax_30.b
            else
                rcx_16 = -0x80
            
            zmm7[0] = zmm7[0] f* zmm10.d
            *(rdi_1 + (i_4 << 3) + 4) = rcx_16
            zmm7[0] = zmm7[0] + zmm7[0]
            zmm7[0] = zmm7[0] f+ zmm9.d
            int32_t rax_32 = int.d(zmm7[0]) s>> 1
            char rcx_17
            
            if (rax_32 s>= 0xffffff80)
                rcx_17 = 0x7f
                
                if (rax_32 s< 0x7f)
                    rcx_17 = rax_32.b
            else
                rcx_17 = -0x80
            
            zmm8[0] = zmm8[0] f* zmm10.d
            *(rdi_1 + (i_4 << 3) + 5) = rcx_17
            zmm8[0] = zmm8[0] + zmm8[0]
            zmm8[0] = zmm8[0] f+ zmm9.d
            int32_t rax_34 = int.d(zmm8[0]) s>> 1
            char rcx_18
            
            if (rax_34 s>= 0xffffff80)
                rcx_18 = 0x7f
                
                if (rax_34 s< 0x7f)
                    rcx_18 = rax_34.b
            else
                rcx_18 = -0x80
            
            *(rdi_1 + (i_4 << 3) + 6) = rcx_18
            int32_t rax_36 = int.d(zmm1.d) s>> 1
            char rcx_19
            
            if (rax_36 s>= 0xffffff80)
                rcx_19 = 0x7f
                
                if (rax_36 s< 0x7f)
                    rcx_19 = rax_36.b
            else
                rcx_19 = -0x80
            
            *(rdi_1 + (i_4 << 3) + 7) = rcx_19
        else
            zmm1[0] = zmm1[0] f* zmm11.d
            int16_t* rbx_3 = (i_4 << 4) + rdi_1
            zmm1[0] = zmm1[0] f+ zmm1[0]
            zmm1[0] = zmm1[0] f+ zmm9.d
            int32_t rax_10 = int.d(zmm1[0]) s>> 1
            int16_t rcx_4
            
            if (rax_10 s>= 0xffff8000)
                rcx_4 = 0x7fff
                
                if (rax_10 s< 0x7fff)
                    rcx_4 = rax_10.w
            else
                rcx_4 = -0x8000
            
            zmm1 = zmm3
            *rbx_3 = rcx_4
            zmm1[0] = zmm1[0] f* zmm11.d
            zmm1[0] = zmm1[0] f+ zmm1[0]
            zmm1[0] = zmm1[0] f+ zmm9.d
            int32_t rax_12 = int.d(zmm1[0]) s>> 1
            int16_t rcx_5
            
            if (rax_12 s>= 0xffff8000)
                rcx_5 = 0x7fff
                
                if (rax_12 s< 0x7fff)
                    rcx_5 = rax_12.w
            else
                rcx_5 = -0x8000
            
            rbx_3[1] = rcx_5
            zmm4_1[0] = zmm4_1[0] f* zmm11.d
            zmm4_1[0] = zmm4_1[0] f+ zmm4_1[0]
            zmm4_1[0] = zmm4_1[0] f+ zmm9.d
            int32_t rax_14 = int.d(zmm4_1[0]) s>> 1
            int16_t rcx_6
            
            if (rax_14 s>= 0xffff8000)
                rcx_6 = 0x7fff
                
                if (rax_14 s< 0x7fff)
                    rcx_6 = rax_14.w
            else
                rcx_6 = -0x8000
            
            zmm0_1 = data_142d3f660
            float var_1f8_1 = zmm6[0]
            float var_1f4_1 = zmm7[0]
            float var_1f0_1 = zmm8[0]
            rbx_3[2] = rcx_6
            float var_1e8_1 = var_2a8_1.d[0]
            float var_1e4_1 = var_2a8_1:4.d[0]
            int32_t var_1e0_1 = 0
            float var_208 = zmm2.d
            float var_204_1 = zmm3[0]
            int32_t var_200_1 = zmm4_1[0]
            rbx_3[3] = 0x7fff
            int32_t var_1fc_1 = 0
            int32_t var_1ec_1 = 0
            int32_t var_1dc_1 = 0
            uint128_t var_1d8_1 = zmm0_1
            int32_t zmm13_1
            int32_t zmm14_1[0x4]
            int32_t zmm15_1[0x4]
            zmm0_1, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13_1, zmm14_1, zmm15_1 =
                sub_14062b8d0(&var_208)
            
            zmm1 = zmm0_1.d f>= zmm13_1 ? zmm15_1 : zmm14_1
            
            zmm6[0] = zmm6[0] f* zmm11.d
            zmm6[0] = zmm6[0] + zmm6[0]
            zmm6[0] = zmm6[0] f+ zmm9.d
            int32_t rax_16 = int.d(zmm6[0]) s>> 1
            int16_t rcx_8
            
            if (rax_16 s>= 0xffff8000)
                rcx_8 = 0x7fff
                
                if (rax_16 s< 0x7fff)
                    rcx_8 = rax_16.w
            else
                rcx_8 = -0x8000
            
            zmm7[0] = zmm7[0] f* zmm11.d
            rbx_3[4] = rcx_8
            zmm7[0] = zmm7[0] + zmm7[0]
            zmm7[0] = zmm7[0] f+ zmm9.d
            int32_t rax_18 = int.d(zmm7[0]) s>> 1
            int16_t rcx_9
            
            if (rax_18 s>= 0xffff8000)
                rcx_9 = 0x7fff
                
                if (rax_18 s< 0x7fff)
                    rcx_9 = rax_18.w
            else
                rcx_9 = -0x8000
            
            zmm8[0] = zmm8[0] f* zmm11.d
            rbx_3[5] = rcx_9
            zmm8[0] = zmm8[0] + zmm8[0]
            zmm8[0] = zmm8[0] f+ zmm9.d
            int32_t rax_20 = int.d(zmm8[0]) s>> 1
            int16_t rcx_10
            
            if (rax_20 s>= 0xffff8000)
                rcx_10 = 0x7fff
                
                if (rax_20 s< 0x7fff)
                    rcx_10 = rax_20.w
            else
                rcx_10 = -0x8000
            
            int32_t rax_21 = int.d(zmm1[0])
            rbx_3[6] = rcx_10
            int32_t rax_22 = rax_21 s>> 1
            
            if (rax_22 s>= 0xffff8000)
                int16_t rcx_11 = 0x7fff
                
                if (rax_22 s< 0x7fff)
                    rcx_11 = rax_22.w
                
                rbx_3[7] = rcx_11
            else
                rbx_3[7] = 0x8000
        
        int64_t rcx_20 = *(r13 + 0x98)
        rdx_2 = zx.q(*(r13 + 0xa8))
        
        if (*(r13 + 0xb0) == 0)
            void* r14_2 = i_4 * (rdx_2 << 2)
            rdx_2 = 0x7c00
            int16_t* r14_3 = r14_2 + rcx_20
            uint32_t rbx_4 = zx.d(r14_3[1])
            int32_t rdi_4 = (rbx_4 & 0xffff8000) << 0x10
            int16_t rax_40 = rbx_4.w & 0x7c00
            TEB* gsbase
            
            if (rax_40 == 0)
                int32_t rbx_5 = rbx_4 & 0x3ff
                
                if (rbx_5 != 0)
                    if (data_143cda914 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0_1.d = float.s(zx.q(rbx_5))
                    zmm0_1.d = logf(zmm0_1.d).d f* data_143cda910
                    rdx_2 = 0x7c00
                    arg_20.d = (rbx_5 << ((0xa - int.d(zmm0_1.d)).b + 0xd) & 0x7fffff)
                        | ((0x71 - (0xa - int.d(zmm0_1.d))) << 0x17 & 0x7f800000) | rdi_4
                else
                    arg_20.d = rdi_4
            else if (rax_40 != 0x7c00)
                arg_20.d = ((rbx_4 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_4 & 0x3ff) << 0xd | rdi_4
            else
                arg_20.d = rdi_4 | 0x477fe000
            
            uint32_t rbx_12 = zx.d(*r14_3)
            int32_t rdi_8 = (rbx_12 & 0xffff8000) << 0x10
            int16_t rax_56 = rbx_12.w & 0x7c00
            
            if (rax_56 == 0)
                int32_t rbx_13 = rbx_12 & 0x3ff
                
                if (rbx_13 != 0)
                    if (data_143cda914 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0_1.d = float.s(zx.q(rbx_13))
                    zmm0_1.d = logf(zmm0_1.d).d f* data_143cda910
                    rdx_2 = zx.q(0xa - int.d(zmm0_1.d))
                    arg_18.d = (rbx_13 << (rdx_2 + 0xd).b & 0x7fffff)
                        | ((0x71 - rdx_2.d) << 0x17 & 0x7f800000) | rdi_8
                else
                    arg_18.d = rdi_8
            else if (rax_56 != 0x7c00)
                arg_18.d =
                    ((rbx_12 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_12 & 0x3ff) << 0xd | rdi_8
            else
                arg_18.d = rdi_8 | 0x477fe000
            
            zmm0_1 = arg_18.d
            zmm1 = arg_20.d
        else
            int64_t rax_38 = i_4 * rdx_2
            zmm0_1 = *(rcx_20 + (rax_38 << 3))
            zmm1 = *(rcx_20 + (rax_38 << 3) + 4)
        
        int64_t r11_1 = arg1[0x51]
        int64_t r9_2 = zx.q(arg1[0x53].d) * i_4
        int32_t var_294_1 = zmm1[0]
        int32_t var_298_1 = zmm0_1.d
        
        if (arg1[0x54].b == 0)
            int32_t rdx_7 = zmm0_1.d
            uint16_t rcx_24 = (rdx_7 u>> 0x17).w
            uint16_t rax_73 = (rdx_7 u>> 0x1f).w << 0xf
            uint32_t r8_2 = zx.d(rcx_24.b)
            int32_t arg_8
            
            if (r8_2 u<= 0x70)
                arg_8.w = rax_73
                
                if (0x70 - r8_2 + 0xe s<= 0x18)
                    int32_t rdx_9 = (rdx_7 & 0x7fffff) | 0x800000
                    uint16_t r8_4 = ((rdx_9 u>> (0x70 - r8_2 + 0xe).b).w & 0x3ff) | rax_73
                    rax_73 = r8_4
                    arg_8.w = rax_73
                    
                    if (((rdx_9 u>> ((0x70 - r8_2).b + 0xd)).b & 1) != 0)
                        rax_73 = r8_4 + 1
                        arg_8.w = rax_73
            else if (r8_2 u< 0x8f)
                rcx_24 = ((rcx_24 - 0x10) & 0x1f) << 0xa | ((rdx_7 u>> 0xd).w & 0x3ff) | rax_73
                rax_73 = rcx_24
                arg_8.w = rcx_24
            else
                rax_73 |= 0x7bff
                arg_8.w = rax_73
            *(r11_1 + (r9_2 << 2)) = rax_73
            rdx_2 = zx.q(zmm1[0])
            uint16_t rcx_28 = (rdx_2.d u>> 0x17).w
            uint16_t rax_75 = (rdx_2.d u>> 0x1f).w << 0xf
            uint32_t r8_5 = zx.d(rcx_28.b)
            int32_t arg_10
            
            if (r8_5 u<= 0x70)
                arg_10.w = rax_75
                
                if (0x70 - r8_5 + 0xe s<= 0x18)
                    int32_t rdx_13 = (rdx_2.d & 0x7fffff) | 0x800000
                    rdx_2 = zx.q(rdx_13 u>> ((0x70 - r8_5).b + 0xd))
                    uint16_t r8_7 = ((rdx_13 u>> (0x70 - r8_5 + 0xe).b).w & 0x3ff) | rax_75
                    rax_75 = r8_7
                    arg_10.w = rax_75
                    
                    if ((rdx_2.b & 1) != 0)
                        rax_75 = r8_7 + 1
                        arg_10.w = rax_75
            else if (r8_5 u< 0x8f)
                rdx_2.w = (rdx_2.d u>> 0xd).w & 0x3ff
                rcx_28 = ((rcx_28 - 0x10) & 0x1f) << 0xa | rdx_2.w | rax_75
                rax_75 = rcx_28
                arg_10.w = rcx_28
            else
                rax_75 |= 0x7bff
                arg_10.w = rax_75
            *(r11_1 + (r9_2 << 2) + 2) = rax_75
        else
            *(r11_1 + (r9_2 << 3)) = zmm0_1.d
            *(r11_1 + (r9_2 << 3) + 4) = zmm1[0]
        
        i += 1
    while (i u< *(r13 + 0xac))

sub_141997e80(&arg1[0x55], rdx_2)
sub_141997e80(&arg1[0x44])
int64_t* var_240 = arg1
void* var_248 = &arg1[2]
uint64_t result

if (sub_140a80f40() == 0)
    uint32_t rax_78
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_78.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_78.b == 0))
        void var_118
        void** rax_79 = sub_142332820(&var_118, nullptr, 0xff)
        *(*rax_79 + 0x10) = var_248.o
        void* rcx_37 = *rax_79
        int32_t r8_8 = rax_79[2].d
        int64_t* rdx_16 = rax_79[1]
        int64_t* rbx_20 = *(rcx_37 + 0x28)
        int64_t* var_280_1 = rbx_20
        void* rdi_10 = &rbx_20[9]
        
        if (rbx_20 != 0)
            *rdi_10 += 1
            rbx_20 = var_280_1
        
        result = sub_1405e48c0(rcx_37, rdx_16, r8_8, 1)
        
        if (rbx_20 != 0)
            result = zx.q(*rdi_10)
            *rdi_10 -= 1
            
            if (result.d == 1)
                result = sub_140a2f6e0(var_280_1)
    else
        int128_t var_168 = var_248.o
        result = sub_14232d740(&var_168)
else
    result = sub_14232d740(&var_248)

if (data_143f0f21f != 0)
    uint64_t rdx_17 = zx.q(data_143f0f1a0)
    result = zx.q(*(&data_143f025fc + sx.q(rdx_17.d) * 0x14) u>> 0x13)
    
    if ((result.b & 1) != 0)
        result = data_143f13cd8
        
        if (test_bit(result, rdx_17))
            int64_t* rsi_1 = *(**arg1 + (sx.q(arg1[1].d) << 3))
            void* rbx_21 = rsi_1[0x19]
            arg_18 = rbx_21
            
            if (rbx_21 != 0)
                *(rbx_21 + 8) += 1
                rbx_21 = arg_18
            
            void* rdi_12 = *(rsi_1[3] + 0x10)
            arg_20 = rdi_12
            
            if (rdi_12 != 0)
                *(rdi_12 + 8) += 1
                rbx_21 = arg_18
                rdi_12 = arg_20
            
            int64_t r11_2 = sx.q(rsi_1[1].d)
            int32_t r14_4 = 0
            int32_t r13_1 = rsi_1[0x1d].d
            int32_t r9_4 = 0
            
            if (r11_2.d s> 0 && r11_2.d u>= 8)
                int64_t rcx_41 = *rsi_1
                int32_t zmm5_2[0x4] = zx.o(0)
                int32_t zmm4_2[0x4] = zx.o(0)
                int32_t rdx_20 = r11_2.d & 0x80000007
                
                if (rdx_20 s< 0)
                    rdx_20 = ((rdx_20 - 1) | 0xfffffff8) + 1
                
                int64_t i_1 = 0
                int64_t rax_85 = 0
                
                do
                    uint64_t zmm1_1 = zx.q(*(rcx_41 + rax_85 + 0x2c0))
                    r9_4 += 8
                    uint128_t zmm0_3 = zx.o(*(rcx_41 + rax_85 + 0x1d8))
                    i_1 += 8
                    zmm2 = zx.o(*(rcx_41 + rax_85 + 0xf0))
                    zmm3 = zx.o(*(rcx_41 + rax_85 + 8))
                    rax_85 += 0x740
                    zmm3 = _mm_unpacklo_epi32(zmm3, zmm0_3.q)
                    zmm0_3 = zx.o(*(rcx_41 + rax_85 - 0x1c8))
                    zmm2 = _mm_unpacklo_epi32(zmm2, zmm1_1)
                    zmm1_1 = zx.q(*(rcx_41 + rax_85 - 0xe0))
                    zmm3 = _mm_unpacklo_epi32(zmm3, zmm2.q)
                    zmm2 = zx.o(*(rcx_41 + rax_85 - 0x2b0))
                    zmm3 = _mm_add_epi32(zmm3, zmm5_2)
                    zmm2 = _mm_unpacklo_epi32(zmm2, zmm1_1)
                    zmm5_2 = zmm3
                    zmm4_2 = _mm_add_epi32(
                        _mm_unpacklo_epi32(
                            _mm_unpacklo_epi32(zx.o(*(rcx_41 + rax_85 - 0x398)), zmm0_3.q), 
                            zmm2.q), 
                        zmm4_2)
                while (i_1 s< sx.q(r11_2.d - rdx_20))
                
                int32_t temp0_59[0x4] = _mm_add_epi32(zmm4_2, zmm5_2)
                int32_t temp0_61[0x4] = _mm_add_epi32(temp0_59, _mm_bsrli_si128(temp0_59, 8))
                r14_4 = _mm_add_epi32(temp0_61, _mm_bsrli_si128(temp0_61, 4))[0]
            
            int32_t rdx_23 = 0
            int64_t r10_3 = sx.q(r9_4)
            int32_t r8_10 = 0
            
            if (r10_3 s< r11_2)
                if (r11_2 - r10_3 s>= 2)
                    int64_t r9_5 = *rsi_1
                    int64_t rcx_42 = r10_3 * 0xe8
                    int64_t i_3 = ((r11_2 - r10_3 - 2) u>> 1) + 1
                    r10_3 += i_3 << 1
                    int64_t i_2
                    
                    do
                        rdx_23 += *(r9_5 + rcx_42 + 8)
                        r8_10 += *(r9_5 + rcx_42 + 0xf0)
                        rcx_42 += 0x1d0
                        i_2 = i_3
                        i_3 -= 1
                    while (i_2 != 1)
                
                if (r10_3 s< r11_2)
                    r14_4 += *(r10_3 * 0xe8 + *rsi_1 + 8)
                
                r14_4 += rdx_23 + r8_10
            
            int64_t* var_270 = arg1
            void* const var_268 = rbx_21
            
            if (rbx_21 != 0)
                *(rbx_21 + 8) += 1
                rbx_21 = arg_18
                rdi_12 = arg_20
            
            void* const var_260 = rdi_12
            
            if (rdi_12 != 0)
                *(rdi_12 + 8) += 1
                rbx_21 = arg_18
                rdi_12 = arg_20
            
            int32_t var_258_1 = r13_1
            int32_t var_254_1 = r14_4
            int64_t* var_250_1 = rsi_1
            
            if (sub_140a80f40() == 0)
                uint32_t rax_95
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_95.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_95.b == 0))
                    void var_100
                    void** rax_96 = sub_142332ac0(&var_100, nullptr, 0xff)
                    var_268 = nullptr
                    var_260 = nullptr
                    void* rcx_49 = *rax_96
                    *(rcx_49 + 0x10) = arg1
                    *(rcx_49 + 0x18) = rbx_21
                    *(rcx_49 + 0x20) = rdi_12
                    *(rcx_49 + 0x28) = r13_1
                    *(rcx_49 + 0x2c) = r14_4
                    *(rcx_49 + 0x30) = rsi_1
                    void* rcx_50 = *rax_96
                    int32_t r8_11 = rax_96[2].d
                    int64_t* rdx_26 = rax_96[1]
                    int64_t* rbx_22 = *(rcx_50 + 0x40)
                    int64_t* var_278_1 = rbx_22
                    int32_t* rdi_13 = &rbx_22[9]
                    
                    if (rbx_22 != 0)
                        *rdi_13 += 1
                        rbx_22 = var_278_1
                    
                    sub_1405e4b20(rcx_50, rdx_26, r8_11, 1)
                    
                    if (rbx_22 != 0)
                        int32_t r12 = *rdi_13
                        *rdi_13 -= 1
                        
                        if (r12 == 1)
                            sub_140a2f6e0(var_278_1)
                else
                    int64_t* var_238 = arg1
                    var_268 = nullptr
                    var_260 = nullptr
                    void* var_230 = rbx_21
                    void* var_228 = rdi_12
                    int32_t var_220_1 = r13_1
                    int32_t var_21c_1 = r14_4
                    int64_t* var_218_1 = rsi_1
                    sub_14232cf00(&var_238)
                    sub_14081c9d0(&var_228)
                    sub_1405d1550(&var_230)
            else
                sub_14232cf00(&var_270)
            
            sub_14081c9d0(&var_260)
            sub_1405d1550(&var_268)
            sub_14081c9d0(&arg_20)
            result = sub_1405d1550(&arg_18)

arg1[0x6d].b = 1
return result
