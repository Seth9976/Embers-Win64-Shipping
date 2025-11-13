// 函数: sub_1423691c0
// 地址: 0x1423691c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
int32_t rdx = arg3[1].d
int64_t* rsi = arg3
arg3.b = 1
float zmm6[0x4]
float var_58[0x4] = zmm6
float zmm7[0x4]
float var_68[0x4] = zmm7
void* var_290
int32_t var_288
int32_t rdx_16
uint128_t zmm0_1

if (rdx == 0)
    sub_1422a3c90(arg1 + 0x88, 1, arg3.b)
    sub_1422c8fe0(arg1, 1, 1, 1)
    sub_1422a3a50(arg1 + 0xc8, 1, 1)
    int64_t* rcx_32 = *(arg1 + 0xb0)
    var_288 = 0
    *rcx_32 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    rcx_32[1].d = 0
    int16_t* rbx_7 = *(arg1 + 0x60)
    
    if (*(arg1 + 0x81) == 0)
        char r14_1 = -0x80
        int32_t rsi_5 = int.d(254.5f) s>> 1
        char rax_46
        
        if (rsi_5 s>= 0xffffff80)
            rax_46 = 0x7f
            
            if (rsi_5 s< 0x7f)
                rax_46 = rsi_5.b
        else
            rax_46 = -0x80
        
        *rbx_7 = rax_46
        int32_t rdi_3 = int.d(fconvert.t(0.5f)) s>> 1
        char rax_47
        
        if (rdi_3 s>= 0xffffff80)
            rax_47 = 0x7f
            
            if (rdi_3 s< 0x7f)
                rax_47 = rdi_3.b
        else
            rax_47 = -0x80
        
        *(rbx_7 + 1) = rax_47
        char rax_48
        
        if (rdi_3 s>= 0xffffff80)
            rax_48 = 0x7f
            
            if (rdi_3 s< 0x7f)
                rax_48 = rdi_3.b
        else
            rax_48 = -0x80
        
        int128_t var_158
        __builtin_memcpy(&var_158, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x40)
        rbx_7[1].b = rax_48
        *(rbx_7 + 3) = 0x7f
        zmm0_1, zmm6, zmm7 = sub_14062b8d0(&var_158)
        
        if (not(zmm0_1.d f>= zmm6[0]))
            zmm7 = 0xc37d8000
        
        char rax_49
        
        if (rdi_3 s>= 0xffffff80)
            rax_49 = 0x7f
            
            if (rdi_3 s< 0x7f)
                rax_49 = rdi_3.b
        else
            rax_49 = -0x80
        
        rbx_7[2].b = rax_49
        char rax_50
        
        if (rdi_3 s>= 0xffffff80)
            rax_50 = 0x7f
            
            if (rdi_3 s< 0x7f)
                rax_50 = rdi_3.b
        else
            rax_50 = -0x80
        
        *(rbx_7 + 5) = rax_50
        char rax_51
        
        if (rsi_5 s>= 0xffffff80)
            rax_51 = 0x7f
            
            if (rsi_5 s< 0x7f)
                rax_51 = rsi_5.b
        else
            rax_51 = -0x80
        
        rbx_7[3].b = rax_51
        int32_t rax_53 = int.d(zmm7.d) s>> 1
        
        if (rax_53 s>= 0xffffff80)
            r14_1 = 0x7f
            
            if (rax_53 s< 0x7f)
                r14_1 = rax_53.b
        
        *(rbx_7 + 7) = r14_1
    else
        int16_t rdi_1 = -0x8000
        int32_t r12_2 = int.d(65534.5f) s>> 1
        int16_t rax_38
        
        if (r12_2 s>= 0xffff8000)
            rax_38 = 0x7fff
            
            if (r12_2 s< 0x7fff)
                rax_38 = r12_2.w
        else
            rax_38 = -0x8000
        
        *rbx_7 = rax_38
        int32_t rsi_3 = int.d(fconvert.t(0.5f)) s>> 1
        int16_t rax_39
        
        if (rsi_3 s>= 0xffff8000)
            rax_39 = 0x7fff
            
            if (rsi_3 s< 0x7fff)
                rax_39 = rsi_3.w
        else
            rax_39 = -0x8000
        
        rbx_7[1] = rax_39
        int16_t rax_40
        
        if (rsi_3 s>= 0xffff8000)
            rax_40 = 0x7fff
            
            if (rsi_3 s< 0x7fff)
                rax_40 = rsi_3.w
        else
            rax_40 = -0x8000
        
        int128_t var_198
        __builtin_memcpy(&var_198, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x40)
        rbx_7[2] = rax_40
        rbx_7[3] = 0x7fff
        zmm0_1, zmm6, zmm7 = sub_14062b8d0(&var_198)
        
        if (not(zmm0_1.d f>= zmm6[0]))
            zmm7 = 0xc77ffd80
        
        int16_t rax_41
        
        if (rsi_3 s>= 0xffff8000)
            rax_41 = 0x7fff
            
            if (rsi_3 s< 0x7fff)
                rax_41 = rsi_3.w
        else
            rax_41 = -0x8000
        
        rbx_7[4] = rax_41
        int16_t rax_42
        
        if (rsi_3 s>= 0xffff8000)
            rax_42 = 0x7fff
            
            if (rsi_3 s< 0x7fff)
                rax_42 = rsi_3.w
        else
            rax_42 = -0x8000
        
        rbx_7[5] = rax_42
        int16_t rax_43
        
        if (r12_2 s>= 0xffff8000)
            rax_43 = 0x7fff
            
            if (r12_2 s< 0x7fff)
                rax_43 = r12_2.w
        else
            rax_43 = -0x8000
        
        rbx_7[6] = rax_43
        int32_t rax_45 = int.d(zmm7.d) s>> 1
        
        if (rax_45 s>= 0xffff8000)
            rdi_1 = 0x7fff
            
            if (rax_45 s< 0x7fff)
                rdi_1 = rax_45.w
        
        rbx_7[7] = rdi_1
    
    int64_t* rax_54 = *(arg1 + 0x68)
    rdx_16 = 0
    
    if (*(arg1 + 0x80) == 0)
        *rax_54 = 0
        arg5.w = 0
    else
        *rax_54 = 0
    
    arg_18.d = 0x1010101
    **(arg1 + 0xf0) = 0x1010101
else
    sub_1422a3c90(arg1 + 0x88, rdx, arg3.b)
    sub_1422c8fe0(arg1, rsi[1].d, arg4, 1)
    sub_1422a3a50(arg1 + 0xc8, rsi[1].d, 1)
    uint64_t j_1 = 0
    int32_t i = 0
    int32_t i_1 = 0
    
    if (rsi[1].d s<= 0)
        rdx_16 = arg5
    else
        int32_t zmm3[0x4] = data_142dd3f80
        float zmm4_1[0x4] = data_142dd3fd0
        float zmm2[0x4] = zx.o(0)
        zmm7 = data_142dd3fb0
        void* r8_2 = nullptr
        int32_t zmm8[0x4]
        int32_t var_78_1[0x4] = zmm8
        float zmm9[0x4]
        float var_88_1[0x4] = zmm9
        int128_t zmm10 = 0x3f000000
        int128_t zmm11 = 0x42fe0000
        int128_t zmm12 = 0x46fffe00
        void* var_278_1 = nullptr
        
        do
            void* r10_1 = *rsi
            int64_t rcx_3 = *(arg1 + 0xb0)
            uint64_t rax_2 = zx.q(*(arg1 + 0xb8) * i)
            zmm0_1 = zx.o(*(r8_2 + r10_1))
            var_290 = r10_1
            uint64_t i_2 = zx.q(i)
            *(rax_2 + rcx_3) = zmm0_1.q
            *(zx.q(rax_2.d) + rcx_3 + 8) = *(r8_2 + r10_1 + 8)
            bool cond:15_1 = *(arg1 + 0x81) == 0
            int64_t rsi_1 = *(arg1 + 0x60)
            uint128_t zmm1 = _mm_unpacklo_epi16(
                _mm_unpacklo_epi8(zx.o(*(r8_2 + r10_1 + 0x50)), zmm2[0].q), zmm2[0].q)
            zmm0_1 = (_mm_cmpgt_epi32(zmm1, zmm3) & zmm4_1) | zmm1
            zmm1 = zx.o(*(r8_2 + r10_1 + 0x4c))
            float temp0_4[0x4] = _mm_cvtepi32_ps(zmm0_1)
            zmm1 = _mm_unpacklo_epi8(zmm1, zmm2[0].q)
            float temp0_6[0x4] = _mm_mul_ps(temp0_4, zmm7)
            zmm1 = _mm_unpacklo_epi16(zmm1, zmm2[0].q)
            zmm0_1 = _mm_cmpgt_epi32(zmm1, zmm3) & zmm4_1
            int96_t var_258_1 = temp0_6[0].12
            float var_1c8_1[0x4] = temp0_6
            float temp0_10[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm0_1 | zmm1), zmm7)
            float temp0_11[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x55)
            zmm1 = _mm_shuffle_ps(temp0_6, temp0_6, 0xaa)
            float temp0_13[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xff)
            int96_t var_268_1 = temp0_10[0].12
            zmm3 = _mm_shuffle_ps(temp0_10, temp0_10, 0xaa)
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x55)
            zmm8 = zmm3
            zmm8[0] = zmm8[0] f* temp0_11[0]
            zmm0_1.d = temp0_15.d f* zmm1.d
            temp0_10[0] = temp0_10[0] f* zmm1.d
            zmm8[0] = zmm8[0] f- zmm0_1.d
            temp0_15[0] = temp0_15[0] * temp0_6[0]
            zmm3[0] = zmm3[0] f* temp0_6[0]
            zmm0_1.d = temp0_10.d f* temp0_11[0]
            zmm4_1 = var_268_1.d
            temp0_10[0] = temp0_10[0] f- zmm3[0]
            float var_118_1[0x4] = temp0_10
            zmm1 = zmm4_1
            temp0_15[0] = temp0_15[0] f- zmm0_1.d
            zmm8[0] = zmm8[0] f* temp0_13[0]
            temp0_10[0] = temp0_10[0] * temp0_13[0]
            temp0_15[0] = temp0_15[0] * temp0_13[0]
            
            if (cond:15_1)
                zmm1.d = zmm1.d f* zmm11.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f+ zmm10.d
                int32_t rax_19 = int.d(zmm1.d) s>> 1
                char rcx_12
                
                if (rax_19 s>= 0xffffff80)
                    rcx_12 = 0x7f
                    
                    if (rax_19 s< 0x7f)
                        rcx_12 = rax_19.b
                else
                    rcx_12 = -0x80
                
                zmm3 = var_268_1:4.d
                *(rsi_1 + (i_2 << 3)) = rcx_12
                zmm1.d = zmm3.d f* zmm11.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f+ zmm10.d
                int32_t rax_21 = int.d(zmm1.d) s>> 1
                char rcx_13
                
                if (rax_21 s>= 0xffffff80)
                    rcx_13 = 0x7f
                    
                    if (rax_21 s< 0x7f)
                        rcx_13 = rax_21.b
                else
                    rcx_13 = -0x80
                
                zmm2 = var_268_1:8.d
                *(rsi_1 + (i_2 << 3) + 1) = rcx_13
                zmm1.d = zmm2.d f* zmm11.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f+ zmm10.d
                int32_t rax_23 = int.d(zmm1.d) s>> 1
                char rcx_14
                
                if (rax_23 s>= 0xffffff80)
                    rcx_14 = 0x7f
                    
                    if (rax_23 s< 0x7f)
                        rcx_14 = rax_23.b
                else
                    rcx_14 = -0x80
                
                zmm0_1 = data_142d3f660
                int32_t var_1f8_1 = zmm8[0]
                float var_1f0_1 = temp0_15[0]
                *(rsi_1 + (i_2 << 3) + 2) = rcx_14
                float var_1e4_1 = var_258_1:4.d[0]
                int32_t var_1e0_1 = var_258_1:8.d[0]
                float var_208 = zmm4_1[0]
                int32_t var_204_1 = zmm3[0]
                float var_200_1 = zmm2[0]
                float var_1f4_1 = temp0_10[0]
                float var_1e8_1 = var_258_1.d[0]
                *(rsi_1 + (i_2 << 3) + 3) = 0x7f
                int32_t var_1fc_1 = 0
                int32_t var_1ec_1 = 0
                int32_t var_1dc_1 = 0
                uint128_t var_1d8_1 = zmm0_1
                int32_t zmm13_2
                zmm0_1, zmm6, zmm7, zmm8, zmm10, zmm11, zmm12, zmm13_2 = sub_14062b8d0(&var_208)
                
                zmm1 = zmm0_1.d f>= zmm13_2 ? 0x437e8000 : 0xc37d8000
                
                zmm6[0] = zmm6[0] f* zmm11.d
                zmm6[0] = zmm6[0] + zmm6[0]
                zmm6[0] = zmm6[0] f+ zmm10.d
                int32_t rax_25 = int.d(zmm6[0]) s>> 1
                char rcx_16
                
                if (rax_25 s>= 0xffffff80)
                    rcx_16 = 0x7f
                    
                    if (rax_25 s< 0x7f)
                        rcx_16 = rax_25.b
                else
                    rcx_16 = -0x80
                
                zmm7[0] = zmm7[0] f* zmm11.d
                *(rsi_1 + (i_2 << 3) + 4) = rcx_16
                zmm7[0] = zmm7[0] + zmm7[0]
                zmm7[0] = zmm7[0] f+ zmm10.d
                int32_t rax_27 = int.d(zmm7[0]) s>> 1
                char rcx_17
                
                if (rax_27 s>= 0xffffff80)
                    rcx_17 = 0x7f
                    
                    if (rax_27 s< 0x7f)
                        rcx_17 = rax_27.b
                else
                    rcx_17 = -0x80
                
                zmm8[0] = zmm8[0] f* zmm11.d
                *(rsi_1 + (i_2 << 3) + 5) = rcx_17
                zmm8[0] = zmm8[0] f+ zmm8[0]
                zmm8[0] = zmm8[0] f+ zmm10.d
                int32_t rax_29 = int.d(zmm8[0]) s>> 1
                char rcx_18
                
                if (rax_29 s>= 0xffffff80)
                    rcx_18 = 0x7f
                    
                    if (rax_29 s< 0x7f)
                        rcx_18 = rax_29.b
                else
                    rcx_18 = -0x80
                
                *(rsi_1 + (i_2 << 3) + 6) = rcx_18
                int32_t rax_31 = int.d(zmm1.d) s>> 1
                char rcx_19
                
                if (rax_31 s>= 0xffffff80)
                    rcx_19 = 0x7f
                    
                    if (rax_31 s< 0x7f)
                        rcx_19 = rax_31.b
                else
                    rcx_19 = -0x80
                
                *(rsi_1 + (i_2 << 3) + 7) = rcx_19
            else
                zmm1.d = zmm1.d f* zmm12.d
                int16_t* rbx_3 = (zx.q(i_2.d) << 4) + rsi_1
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f+ zmm10.d
                int32_t rax_5 = int.d(zmm1.d) s>> 1
                int16_t rcx_4
                
                if (rax_5 s>= 0xffff8000)
                    rcx_4 = 0x7fff
                    
                    if (rax_5 s< 0x7fff)
                        rcx_4 = rax_5.w
                else
                    rcx_4 = -0x8000
                
                zmm3 = var_268_1:4.d
                *rbx_3 = rcx_4
                zmm1.d = zmm3.d f* zmm12.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f+ zmm10.d
                int32_t rax_7 = int.d(zmm1.d) s>> 1
                int16_t rcx_5
                
                if (rax_7 s>= 0xffff8000)
                    rcx_5 = 0x7fff
                    
                    if (rax_7 s< 0x7fff)
                        rcx_5 = rax_7.w
                else
                    rcx_5 = -0x8000
                
                zmm2 = var_268_1:8.d
                rbx_3[1] = rcx_5
                zmm1.d = zmm2.d f* zmm12.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f+ zmm10.d
                int32_t rax_9 = int.d(zmm1.d) s>> 1
                int16_t rcx_6
                
                if (rax_9 s>= 0xffff8000)
                    rcx_6 = 0x7fff
                    
                    if (rax_9 s< 0x7fff)
                        rcx_6 = rax_9.w
                else
                    rcx_6 = -0x8000
                
                zmm0_1 = data_142d3f660
                int32_t var_238_1 = zmm8[0]
                float var_230_1 = temp0_15[0]
                rbx_3[2] = rcx_6
                float var_224_1 = var_258_1:4.d[0]
                int32_t var_220_1 = var_258_1:8.d[0]
                float var_248 = zmm4_1[0]
                int32_t var_244_1 = zmm3[0]
                float var_240_1 = zmm2[0]
                float var_234_1 = temp0_10[0]
                float var_228_1 = var_258_1.d[0]
                rbx_3[3] = 0x7fff
                int32_t var_23c_1 = 0
                int32_t var_22c_1 = 0
                int32_t var_21c_1 = 0
                uint128_t var_218_1 = zmm0_1
                int32_t zmm13_1
                uint128_t zmm14_1
                uint128_t zmm15_1
                zmm0_1, zmm6, zmm7, zmm8, zmm10, zmm11, zmm12, zmm13_1, zmm14_1, zmm15_1 =
                    sub_14062b8d0(&var_248)
                
                zmm1 = zmm0_1.d f>= zmm13_1 ? zmm15_1 : zmm14_1
                
                zmm6[0] = zmm6[0] f* zmm12.d
                zmm6[0] = zmm6[0] + zmm6[0]
                zmm6[0] = zmm6[0] f+ zmm10.d
                int32_t rax_11 = int.d(zmm6[0]) s>> 1
                int16_t rcx_8
                
                if (rax_11 s>= 0xffff8000)
                    rcx_8 = 0x7fff
                    
                    if (rax_11 s< 0x7fff)
                        rcx_8 = rax_11.w
                else
                    rcx_8 = -0x8000
                
                zmm7[0] = zmm7[0] f* zmm12.d
                rbx_3[4] = rcx_8
                zmm7[0] = zmm7[0] + zmm7[0]
                zmm7[0] = zmm7[0] f+ zmm10.d
                int32_t rax_13 = int.d(zmm7[0]) s>> 1
                int16_t rcx_9
                
                if (rax_13 s>= 0xffff8000)
                    rcx_9 = 0x7fff
                    
                    if (rax_13 s< 0x7fff)
                        rcx_9 = rax_13.w
                else
                    rcx_9 = -0x8000
                
                zmm8[0] = zmm8[0] f* zmm12.d
                rbx_3[5] = rcx_9
                zmm8[0] = zmm8[0] f+ zmm8[0]
                zmm8[0] = zmm8[0] f+ zmm10.d
                int32_t rax_15 = int.d(zmm8[0]) s>> 1
                int16_t rcx_10
                
                if (rax_15 s>= 0xffff8000)
                    rcx_10 = 0x7fff
                    
                    if (rax_15 s< 0x7fff)
                        rcx_10 = rax_15.w
                else
                    rcx_10 = -0x8000
                
                rbx_3[6] = rcx_10
                int32_t rax_17 = int.d(zmm1.d) s>> 1
                
                if (rax_17 s>= 0xffff8000)
                    int16_t rcx_11 = 0x7fff
                    
                    if (rax_17 s< 0x7fff)
                        rcx_11 = rax_17.w
                    
                    rbx_3[7] = rcx_11
                else
                    rbx_3[7] = 0x8000
            
            if (arg4 != 0)
                uint64_t j_2 = j_1
                j_1 = zx.q(arg4)
                void* rbx_6 = var_290 + 0xc + var_278_1
                uint64_t j
                
                do
                    zmm0_1 = *rbx_6
                    zmm1 = *(rbx_6 + 4)
                    int64_t r11_1 = *(arg1 + 0x68)
                    int64_t r8_5 = zx.q(*(arg1 + 0x78)) * i_2 + j_2
                    
                    if (*(arg1 + 0x80) == 0)
                        int32_t rdx_4 = zmm0_1.d
                        uint16_t rcx_22 = (rdx_4 u>> 0x17).w
                        uint16_t rax_33 = (rdx_4 u>> 0x1f).w << 0xf
                        uint32_t r9_1 = zx.d(rcx_22.b)
                        int32_t arg_8
                        
                        if (r9_1 u<= 0x70)
                            arg_8.w = rax_33
                            
                            if (0x70 - r9_1 + 0xe s<= 0x18)
                                int32_t rdx_6 = (rdx_4 & 0x7fffff) | 0x800000
                                uint16_t r9_3 =
                                    ((rdx_6 u>> (0x70 - r9_1 + 0xe).b).w & 0x3ff) | rax_33
                                rax_33 = r9_3
                                arg_8.w = rax_33
                                
                                if (((rdx_6 u>> ((0x70 - r9_1).b + 0xd)).b & 1) != 0)
                                    rax_33 = r9_3 + 1
                                    arg_8.w = rax_33
                        else if (r9_1 u< 0x8f)
                            uint16_t rdx_8 = ((rdx_4 u>> 0xd).w & 0x3ff)
                                | ((rcx_22 - 0x10) & 0x1f) << 0xa | rax_33
                            rax_33 = rdx_8
                            arg_8.w = rdx_8
                        else
                            rax_33 |= 0x7bff
                            arg_8.w = rax_33
                        *(r11_1 + (r8_5 << 2)) = rax_33
                        int32_t rdx_9 = zmm1.d
                        uint16_t rcx_26 = (rdx_9 u>> 0x17).w
                        uint16_t rax_35 = (rdx_9 u>> 0x1f).w << 0xf
                        uint32_t r9_4 = zx.d(rcx_26.b)
                        int32_t var_298_1
                        
                        if (r9_4 u<= 0x70)
                            var_298_1.w = rax_35
                            
                            if (0x70 - r9_4 + 0xe s<= 0x18)
                                int32_t rdx_11 = (rdx_9 & 0x7fffff) | 0x800000
                                uint16_t r9_6 =
                                    ((rdx_11 u>> (0x70 - r9_4 + 0xe).b).w & 0x3ff) | rax_35
                                rax_35 = r9_6
                                var_298_1.w = rax_35
                                
                                if (((rdx_11 u>> ((0x70 - r9_4).b + 0xd)).b & 1) != 0)
                                    rax_35 = r9_6 + 1
                                    var_298_1.w = rax_35
                        else if (r9_4 u< 0x8f)
                            uint16_t rdx_13 = ((rdx_9 u>> 0xd).w & 0x3ff)
                                | ((rcx_26 - 0x10) & 0x1f) << 0xa | rax_35
                            rax_35 = rdx_13
                            var_298_1.w = rdx_13
                        else
                            rax_35 |= 0x7bff
                            var_298_1.w = rax_35
                        *(r11_1 + (r8_5 << 2) + 2) = rax_35
                    else
                        *(r11_1 + (r8_5 << 3)) = zmm0_1.d
                        *(r11_1 + (r8_5 << 3) + 4) = zmm1.d
                    
                    j_2 += 1
                    rbx_6 += 8
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            zmm2 = zx.o(0)
            rsi = arg_18
            zmm3 = data_142dd3f80
            int32_t rax_37 = *(var_278_1 + var_290 + 0x54)
            r8_2 = var_278_1 + 0x58
            zmm4_1 = data_142dd3fd0
            zmm7 = data_142dd3fb0
            uint64_t rdx_15 = zx.q(*(arg1 + 0xf8) * i_1)
            i = i_1 + 1
            i_1 = i
            var_278_1 = r8_2
            *(rdx_15 + *(arg1 + 0xf0)) = rax_37
        while (i s< rsi[1].d)
        
        rdx_16 = arg5
var_290 = arg2
var_288.q = arg1

if (sub_140a80f40() != 0)
    return sub_142355590(&var_290)

if (data_143f138f4 == 0)
    uint32_t rax_58
    
    if (data_143de5480 != 0)
        rax_58.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_58.b != 0)
        uint128_t var_1b8 = var_290.o
        uint64_t var_1a8 = rdx_16.q
        return sub_142355590(&var_1b8)

void var_108
void** rax_60 = sub_14235f480(&var_108, nullptr, 0xff)
void* rcx_39 = *rax_60
*(rcx_39 + 0x10) = var_290.o
*(rcx_39 + 0x20) = rdx_16.q
void* rcx_40 = *rax_60
int32_t r8_8 = rax_60[2].d
int64_t* rdx_19 = rax_60[1]
int64_t* rbx_8 = *(rcx_40 + 0x30)
arg_18 = rbx_8
void* rdi_4 = &rbx_8[9]

if (rbx_8 != 0)
    *rdi_4 += 1
    rbx_8 = arg_18

int32_t result = sub_140778000(rcx_40, rdx_19, r8_8, 1)

if (rbx_8 != 0)
    result = *rdi_4
    *rdi_4 -= 1
    
    if (result == 1)
        return sub_140a2f6e0(arg_18)

return result
