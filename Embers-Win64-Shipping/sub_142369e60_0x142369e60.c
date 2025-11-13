// 函数: sub_142369e60
// 地址: 0x142369e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_48 = zmm6
uint128_t zmm7
uint128_t var_58 = zmm7
int64_t* r15 = arg2
char r8 = 1
int32_t rdx = arg2[1].d
uint64_t result
int128_t var_118

if (rdx == 0)
    sub_1422a3c90(arg1 + 0x88, 1, r8)
    sub_1422c8fe0(arg1, 1, 2, 1)
    int64_t* rcx_36 = *(arg1 + 0xb0)
    int32_t var_120_2 = 0
    *rcx_36 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    rcx_36[1].d = 0
    int16_t* rsi_4 = *(arg1 + 0x60)
    
    if (*(arg1 + 0x81) == 0)
        char r12_1 = -0x80
        int32_t rdi_2 = int.d(254.5f) s>> 1
        char rax_50
        
        if (rdi_2 s>= 0xffffff80)
            rax_50 = 0x7f
            
            if (rdi_2 s< 0x7f)
                rax_50 = rdi_2.b
        else
            rax_50 = -0x80
        
        *rsi_4 = rax_50
        int32_t rbx_3 = int.d(fconvert.t(0.5f)) s>> 1
        char rax_51
        
        if (rbx_3 s>= 0xffffff80)
            rax_51 = 0x7f
            
            if (rbx_3 s< 0x7f)
                rax_51 = rbx_3.b
        else
            rax_51 = -0x80
        
        *(rsi_4 + 1) = rax_51
        char rax_52
        
        if (rbx_3 s>= 0xffffff80)
            rax_52 = 0x7f
            
            if (rbx_3 s< 0x7f)
                rax_52 = rbx_3.b
        else
            rax_52 = -0x80
        
        __builtin_memcpy(&var_118, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x40)
        rsi_4[1].b = rax_52
        *(rsi_4 + 3) = 0x7f
        float zmm0_4
        zmm0_4, zmm6, zmm7 = sub_14062b8d0(&var_118)
        
        if (not(zmm0_4 f>= zmm6.d))
            zmm7 = 0xc37d8000
        
        char rax_53
        
        if (rbx_3 s>= 0xffffff80)
            rax_53 = 0x7f
            
            if (rbx_3 s< 0x7f)
                rax_53 = rbx_3.b
        else
            rax_53 = -0x80
        
        rsi_4[2].b = rax_53
        char rax_54
        
        if (rbx_3 s>= 0xffffff80)
            rax_54 = 0x7f
            
            if (rbx_3 s< 0x7f)
                rax_54 = rbx_3.b
        else
            rax_54 = -0x80
        
        *(rsi_4 + 5) = rax_54
        char rax_55
        
        if (rdi_2 s>= 0xffffff80)
            rax_55 = 0x7f
            
            if (rdi_2 s< 0x7f)
                rax_55 = rdi_2.b
        else
            rax_55 = -0x80
        
        rsi_4[3].b = rax_55
        int32_t rax_57 = int.d(zmm7.d) s>> 1
        
        if (rax_57 s>= 0xffffff80)
            r12_1 = 0x7f
            
            if (rax_57 s< 0x7f)
                r12_1 = rax_57.b
        
        *(rsi_4 + 7) = r12_1
    else
        int16_t rbx_1 = -0x8000
        int32_t r15_3 = int.d(65534.5f) s>> 1
        int16_t rax_42
        
        if (r15_3 s>= 0xffff8000)
            rax_42 = 0x7fff
            
            if (r15_3 s< 0x7fff)
                rax_42 = r15_3.w
        else
            rax_42 = -0x8000
        
        *rsi_4 = rax_42
        int32_t r14_5 = int.d(fconvert.t(0.5f)) s>> 1
        int16_t rax_43
        
        if (r14_5 s>= 0xffff8000)
            rax_43 = 0x7fff
            
            if (r14_5 s< 0x7fff)
                rax_43 = r14_5.w
        else
            rax_43 = -0x8000
        
        rsi_4[1] = rax_43
        int16_t rax_44
        
        if (r14_5 s>= 0xffff8000)
            rax_44 = 0x7fff
            
            if (r14_5 s< 0x7fff)
                rax_44 = r14_5.w
        else
            rax_44 = -0x8000
        
        __builtin_memcpy(&var_118, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x40)
        rsi_4[2] = rax_44
        rsi_4[3] = 0x7fff
        float zmm0_3
        zmm0_3, zmm6, zmm7 = sub_14062b8d0(&var_118)
        
        if (not(zmm0_3 f>= zmm6.d))
            zmm7 = 0xc77ffd80
        
        int16_t rax_45
        
        if (r14_5 s>= 0xffff8000)
            rax_45 = 0x7fff
            
            if (r14_5 s< 0x7fff)
                rax_45 = r14_5.w
        else
            rax_45 = -0x8000
        
        rsi_4[4] = rax_45
        int16_t rax_46
        
        if (r14_5 s>= 0xffff8000)
            rax_46 = 0x7fff
            
            if (r14_5 s< 0x7fff)
                rax_46 = r14_5.w
        else
            rax_46 = -0x8000
        
        rsi_4[5] = rax_46
        int16_t rax_47
        
        if (r15_3 s>= 0xffff8000)
            rax_47 = 0x7fff
            
            if (r15_3 s< 0x7fff)
                rax_47 = r15_3.w
        else
            rax_47 = -0x8000
        
        rsi_4[6] = rax_47
        int32_t rax_49 = int.d(zmm7.d) s>> 1
        
        if (rax_49 s>= 0xffff8000)
            rbx_1 = 0x7fff
            
            if (rax_49 s< 0x7fff)
                rbx_1 = rax_49.w
        
        rsi_4[7] = rbx_1
    
    int64_t* rax_58 = *(arg1 + 0x68)
    
    if (*(arg1 + 0x80) == 0)
        *rax_58 = 0
    else
        *rax_58 = 0
    
    result = *(arg1 + 0x68)
    
    if (*(arg1 + 0x80) == 0)
        *(result + 4) = 0
    else
        *(result + 8) = 0
else
    sub_1422a3c90(arg1 + 0x88, rdx, r8)
    *(arg1 + 0x80) = 1
    result = sub_1422c8fe0(arg1, r15[1].d, 2, 1)
    uint64_t rsi = 0
    uint64_t arg_18 = 0
    
    if (r15[1].d s> 0)
        uint128_t zmm8
        uint128_t var_68_1 = zmm8
        void* r14_1 = nullptr
        int128_t zmm9 = 0x3f000000
        uint128_t zmm10
        uint128_t var_88_1 = zmm10
        uint128_t zmm11
        uint128_t var_98_1 = zmm11
        int128_t zmm12 = 0x42fe0000
        int128_t zmm13 = 0x46fffe00
        void* var_148_1 = nullptr
        
        do
            uint64_t result_1 = *r15
            int64_t rcx_2 = *(arg1 + 0xb0)
            uint64_t rax_1 = zx.q(*(arg1 + 0xb8) * rsi.d)
            uint64_t r15_1 = zx.q(rsi.d)
            *(rax_1 + rcx_2) = *(r14_1 + result_1)
            *(zx.q(rax_1.d) + rcx_2 + 8) = *(r14_1 + result_1 + 8)
            bool cond:16_1 = *(arg1 + 0x81) == 0
            uint128_t zmm1 = zx.o(*(r14_1 + result_1 + 0xc))
            uint128_t zmm4_1 = *(r14_1 + result_1 + 0x2c)
            zmm6 = *(r14_1 + result_1 + 0x24)
            zmm8 = *(r14_1 + result_1 + 0x28)
            float rax_3 = *(r14_1 + result_1 + 0x14)
            zmm7 = *(r14_1 + result_1 + 0x20)
            int64_t r14_2 = *(arg1 + 0x60)
            uint32_t var_128_1 = zmm1.d
            zmm10.d = zmm8.d f* var_128_1
            uint128_t zmm3 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            uint128_t zmm0_1
            zmm0_1.d = zmm8.d f* zmm3.d
            zmm11.d = zmm7.d f* zmm3.d
            float zmm5_1 = zmm6.d * rax_3 f- zmm0_1.d
            uint64_t var_138_1 = zmm1.q
            zmm0_1.d = zmm7.d f* rax_3
            zmm5_1 = zmm5_1 f* zmm4_1.d
            zmm10.d = zmm10.d f- zmm0_1.d
            zmm0_1.d = zmm6.d f* var_128_1
            zmm11.d = zmm11.d f- zmm0_1.d
            zmm10.d = zmm10.d f* zmm4_1.d
            zmm11.d = zmm11.d f* zmm4_1.d
            zmm4_1 = var_138_1.d
            int128_t var_108
            int128_t var_f8
            uint128_t zmm2
            
            if (cond:16_1)
                zmm1.d = zmm4_1.d f* zmm12.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f+ zmm9.d
                int32_t rax_19 = int.d(zmm1.d) s>> 1
                char rcx_11
                
                if (rax_19 s>= 0xffffff80)
                    rcx_11 = 0x7f
                    
                    if (rax_19 s< 0x7f)
                        rcx_11 = rax_19.b
                else
                    rcx_11 = -0x80
                
                zmm3 = var_138_1:4.d
                *(r14_2 + (r15_1 << 3)) = rcx_11
                zmm1.d = zmm3.d f* zmm12.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f+ zmm9.d
                int32_t rax_21 = int.d(zmm1.d) s>> 1
                char rcx_12
                
                if (rax_21 s>= 0xffffff80)
                    rcx_12 = 0x7f
                    
                    if (rax_21 s< 0x7f)
                        rcx_12 = rax_21.b
                else
                    rcx_12 = -0x80
                
                zmm2 = rax_3
                *(r14_2 + (r15_1 << 3) + 1) = rcx_12
                zmm1.d = zmm2.d f* zmm12.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f+ zmm9.d
                int32_t rax_23 = int.d(zmm1.d) s>> 1
                char rcx_13
                
                if (rax_23 s>= 0xffffff80)
                    rcx_13 = 0x7f
                    
                    if (rax_23 s< 0x7f)
                        rcx_13 = rax_23.b
                else
                    rcx_13 = -0x80
                
                zmm0_1 = data_142d3f660
                *(r14_2 + (r15_1 << 3) + 2) = rcx_13
                uint128_t var_e8_2 = zmm0_1
                var_118.d = zmm4_1.d
                var_118:4.d = zmm3.d
                var_118:8.d = zmm2.d
                var_108.d = zmm5_1
                var_108:4.d = zmm10.d
                var_108:8.d = zmm11.d
                var_f8.d = zmm7.d
                var_f8:4.d = zmm6.d
                var_f8:8.d = zmm8.d
                *(r14_2 + (r15_1 << 3) + 3) = 0x7f
                var_118:0xc.d = 0
                var_108:0xc.d = 0
                var_f8:0xc.d = 0
                int32_t zmm14_2
                zmm0_1, zmm6, zmm7, zmm8, zmm9, zmm12, zmm13, zmm14_2 = sub_14062b8d0(&var_118)
                
                zmm1 = zmm0_1.d f>= zmm14_2 ? 0x437e8000 : 0xc37d8000
                
                zmm7.d = zmm7.d f* zmm12.d
                zmm7.d = zmm7.d f+ zmm7.d
                zmm7.d = zmm7.d f+ zmm9.d
                int32_t rax_25 = int.d(zmm7.d) s>> 1
                char rcx_15
                
                if (rax_25 s>= 0xffffff80)
                    rcx_15 = 0x7f
                    
                    if (rax_25 s< 0x7f)
                        rcx_15 = rax_25.b
                else
                    rcx_15 = -0x80
                
                zmm6.d = zmm6.d f* zmm12.d
                *(r14_2 + (r15_1 << 3) + 4) = rcx_15
                zmm6.d = zmm6.d f+ zmm6.d
                zmm6.d = zmm6.d f+ zmm9.d
                int32_t rax_27 = int.d(zmm6.d) s>> 1
                char rcx_16
                
                if (rax_27 s>= 0xffffff80)
                    rcx_16 = 0x7f
                    
                    if (rax_27 s< 0x7f)
                        rcx_16 = rax_27.b
                else
                    rcx_16 = -0x80
                
                zmm8.d = zmm8.d f* zmm12.d
                *(r14_2 + (r15_1 << 3) + 5) = rcx_16
                zmm8.d = zmm8.d f+ zmm8.d
                zmm8.d = zmm8.d f+ zmm9.d
                int32_t rax_29 = int.d(zmm8.d) s>> 1
                char rcx_17
                
                if (rax_29 s>= 0xffffff80)
                    rcx_17 = 0x7f
                    
                    if (rax_29 s< 0x7f)
                        rcx_17 = rax_29.b
                else
                    rcx_17 = -0x80
                
                *(r14_2 + (r15_1 << 3) + 6) = rcx_17
                int32_t rax_31 = int.d(zmm1.d) s>> 1
                char rcx_18
                
                if (rax_31 s>= 0xffffff80)
                    rcx_18 = 0x7f
                    
                    if (rax_31 s< 0x7f)
                        rcx_18 = rax_31.b
                else
                    rcx_18 = -0x80
                
                *(r14_2 + (r15_1 << 3) + 7) = rcx_18
            else
                zmm1.d = zmm4_1.d f* zmm13.d
                int16_t* rsi_3 = (zx.q(r15_1.d) << 4) + r14_2
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f+ zmm9.d
                int32_t rax_5 = int.d(zmm1.d) s>> 1
                int16_t rcx_3
                
                if (rax_5 s>= 0xffff8000)
                    rcx_3 = 0x7fff
                    
                    if (rax_5 s< 0x7fff)
                        rcx_3 = rax_5.w
                else
                    rcx_3 = -0x8000
                
                zmm3 = var_138_1:4.d
                *rsi_3 = rcx_3
                zmm1.d = zmm3.d f* zmm13.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f+ zmm9.d
                int32_t rax_7 = int.d(zmm1.d) s>> 1
                int16_t rcx_4
                
                if (rax_7 s>= 0xffff8000)
                    rcx_4 = 0x7fff
                    
                    if (rax_7 s< 0x7fff)
                        rcx_4 = rax_7.w
                else
                    rcx_4 = -0x8000
                
                zmm2 = rax_3
                rsi_3[1] = rcx_4
                zmm1.d = zmm2.d f* zmm13.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f+ zmm9.d
                int32_t rax_9 = int.d(zmm1.d) s>> 1
                int16_t rcx_5
                
                if (rax_9 s>= 0xffff8000)
                    rcx_5 = 0x7fff
                    
                    if (rax_9 s< 0x7fff)
                        rcx_5 = rax_9.w
                else
                    rcx_5 = -0x8000
                
                zmm0_1 = data_142d3f660
                rsi_3[2] = rcx_5
                uint128_t var_e8_1 = zmm0_1
                var_118.d = zmm4_1.d
                var_118:4.d = zmm3.d
                var_118:8.d = zmm2.d
                var_108.d = zmm5_1
                var_108:4.d = zmm10.d
                var_108:8.d = zmm11.d
                var_f8.d = zmm7.d
                var_f8:4.d = zmm6.d
                var_f8:8.d = zmm8.d
                rsi_3[3] = 0x7fff
                var_118:0xc.d = 0
                var_108:0xc.d = 0
                var_f8:0xc.d = 0
                int32_t zmm14_1
                uint128_t zmm15_1
                zmm0_1, zmm6, zmm7, zmm8, zmm9, zmm12, zmm13, zmm14_1, zmm15_1 =
                    sub_14062b8d0(&var_118)
                
                zmm1 = zmm0_1.d f>= zmm14_1 ? 0x477ffe80 : zmm15_1
                
                zmm7.d = zmm7.d f* zmm13.d
                zmm7.d = zmm7.d f+ zmm7.d
                zmm7.d = zmm7.d f+ zmm9.d
                int32_t rax_11 = int.d(zmm7.d) s>> 1
                int16_t rcx_7
                
                if (rax_11 s>= 0xffff8000)
                    rcx_7 = 0x7fff
                    
                    if (rax_11 s< 0x7fff)
                        rcx_7 = rax_11.w
                else
                    rcx_7 = -0x8000
                
                zmm6.d = zmm6.d f* zmm13.d
                rsi_3[4] = rcx_7
                zmm6.d = zmm6.d f+ zmm6.d
                zmm6.d = zmm6.d f+ zmm9.d
                int32_t rax_13 = int.d(zmm6.d) s>> 1
                int16_t rcx_8
                
                if (rax_13 s>= 0xffff8000)
                    rcx_8 = 0x7fff
                    
                    if (rax_13 s< 0x7fff)
                        rcx_8 = rax_13.w
                else
                    rcx_8 = -0x8000
                
                zmm8.d = zmm8.d f* zmm13.d
                rsi_3[5] = rcx_8
                zmm8.d = zmm8.d f+ zmm8.d
                zmm8.d = zmm8.d f+ zmm9.d
                int32_t rax_15 = int.d(zmm8.d) s>> 1
                int16_t rcx_9
                
                if (rax_15 s>= 0xffff8000)
                    rcx_9 = 0x7fff
                    
                    if (rax_15 s< 0x7fff)
                        rcx_9 = rax_15.w
                else
                    rcx_9 = -0x8000
                
                rsi_3[6] = rcx_9
                int32_t rax_17 = int.d(zmm1.d) s>> 1
                
                if (rax_17 s>= 0xffff8000)
                    int16_t rcx_10 = 0x7fff
                    
                    if (rax_17 s< 0x7fff)
                        rcx_10 = rax_17.w
                    
                    rsi_3[7] = rcx_10
                    rsi = arg_18
                else
                    rsi_3[7] = 0x8000
                    rsi = arg_18
            result = result_1
            int64_t r11_1 = *(arg1 + 0x68)
            int64_t r9_2 = zx.q(*(arg1 + 0x78)) * r15_1
            zmm0_1 = *(var_148_1 + result + 0x30)
            zmm1 = *(var_148_1 + result + 0x34)
            
            if (*(arg1 + 0x80) == 0)
                arg_18.d = zmm0_1.d
                int32_t rdx_3 = arg_18.d
                uint16_t rcx_20 = (rdx_3 u>> 0x17).w
                uint16_t rax_33 = (rdx_3 u>> 0x1f).w << 0xf
                uint32_t r8_1 = zx.d(rcx_20.b)
                
                if (r8_1 u> 0x70)
                    if (r8_1 u< 0x8f)
                        rax_33 |= ((rcx_20 - 0x10) & 0x1f) << 0xa | ((rdx_3 u>> 0xd).w & 0x3ff)
                    else
                        rax_33 |= 0x7bff
                else if (0x70 - r8_1 + 0xe s<= 0x18)
                    int32_t rdx_5 = (rdx_3 & 0x7fffff) | 0x800000
                    uint16_t r8_3 = ((rdx_5 u>> (0x70 - r8_1 + 0xe).b).w & 0x3ff) | rax_33
                    rax_33 = r8_3
                    
                    if (((rdx_5 u>> ((0x70 - r8_1).b + 0xd)).b & 1) != 0)
                        rax_33 = r8_3 + 1
                
                *(r11_1 + (r9_2 << 2)) = rax_33
                arg_18.d = zmm1.d
                int32_t rdx_8 = arg_18.d
                uint16_t rcx_24 = (rdx_8 u>> 0x17).w
                uint16_t rax_35 = (rdx_8 u>> 0x1f).w << 0xf
                uint32_t r8_4 = zx.d(rcx_24.b)
                
                if (r8_4 u> 0x70)
                    if (r8_4 u< 0x8f)
                        rcx_24 = ((rcx_24 - 0x10) & 0x1f) << 0xa | ((rdx_8 u>> 0xd).w & 0x3ff)
                    else
                        rcx_24 = 0x7bff
                    
                    rax_35 |= rcx_24
                else if (0x70 - r8_4 + 0xe s<= 0x18)
                    int32_t rdx_10 = (rdx_8 & 0x7fffff) | 0x800000
                    uint16_t r8_6 = ((rdx_10 u>> (0x70 - r8_4 + 0xe).b).w & 0x3ff) | rax_35
                    rax_35 = r8_6
                    
                    if (((rdx_10 u>> ((0x70 - r8_4).b + 0xd)).b & 1) != 0)
                        rax_35 = r8_6 + 1
                
                *(r11_1 + (r9_2 << 2) + 2) = rax_35
                result = result_1
            else
                *(r11_1 + (r9_2 << 3)) = zmm0_1.d
                *(r11_1 + (r9_2 << 3) + 4) = zmm1.d
            
            zmm0_1 = *(var_148_1 + result + 0x38)
            zmm1 = *(var_148_1 + result + 0x3c)
            int64_t r11_2 = *(arg1 + 0x68)
            int64_t r9_4 = zx.q(*(arg1 + 0x78)) * r15_1
            
            if (*(arg1 + 0x80) == 0)
                arg_18.d = zmm0_1.d
                int32_t rax_36 = arg_18.d
                uint16_t rcx_28 = (rax_36 u>> 0x17).w
                uint16_t rdx_14 = (rax_36 u>> 0x1f).w << 0xf
                uint32_t r8_7 = zx.d(rcx_28.b)
                
                if (r8_7 u> 0x70)
                    if (r8_7 u< 0x8f)
                        rdx_14 |= ((rax_36 u>> 0xd).w & 0x3ff) | ((rcx_28 - 0x10) & 0x1f) << 0xa
                    else
                        rdx_14 |= 0x7bff
                else if (0x70 - r8_7 + 0xe s<= 0x18)
                    int32_t rax_38 = (rax_36 & 0x7fffff) | 0x800000
                    uint16_t r8_9 = ((rax_38 u>> (0x70 - r8_7 + 0xe).b).w & 0x3ff) | rdx_14
                    rdx_14 = r8_9
                    
                    if (((rax_38 u>> ((0x70 - r8_7).b + 0xd)).b & 1) != 0)
                        rdx_14 = r8_9 + 1
                
                arg_18.d = zmm1.d
                *(r11_2 + (r9_4 << 2) + 4) = rdx_14
                int32_t rdx_15 = arg_18.d
                uint16_t rcx_32 = (rdx_15 u>> 0x17).w
                result.w = (rdx_15 u>> 0x1f).w << 0xf
                uint32_t r8_10 = zx.d(rcx_32.b)
                
                if (r8_10 u> 0x70)
                    if (r8_10 u< 0x8f)
                        result.w |= ((rcx_32 - 0x10) & 0x1f) << 0xa | ((rdx_15 u>> 0xd).w & 0x3ff)
                    else
                        result.w |= 0x7bff
                else if (0x70 - r8_10 + 0xe s<= 0x18)
                    int32_t rdx_17 = (rdx_15 & 0x7fffff) | 0x800000
                    uint32_t r8_12
                    r8_12.w = (rdx_17 u>> (0x70 - r8_10 + 0xe).b).w & 0x3ff
                    r8_12.w |= result.w
                    result = zx.q(r8_12.w)
                    
                    if (((rdx_17 u>> ((0x70 - r8_10).b + 0xd)).b & 1) != 0)
                        result = zx.q(r8_12 + 1)
                
                *(r11_2 + (r9_4 << 2) + 6) = result.w
            else
                *(r11_2 + (r9_4 << 3) + 8) = zmm0_1.d
                *(r11_2 + (r9_4 << 3) + 0xc) = zmm1.d
            
            r15 = arg2
            rsi = zx.q(rsi.d + 1)
            r14_1 = var_148_1 + 0x40
            arg_18 = rsi
            var_148_1 = r14_1
        while (rsi.d s< r15[1].d)
return result
