// 函数: sub_1423e28e0
// 地址: 0x1423e28e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = arg1 + 0x110
sub_1422a3c90(r12, *(arg1 + 0x470) * 3, 1)
void* r13 = arg1 + 0x88
sub_1422c8fe0(r13, *(arg1 + 0x470) * 3, 1, 1)
sub_1422a3a50(arg1 + 0x150, *(arg1 + 0x470) * 3, 1)
void* rsi = arg1 + 0x78
int64_t rbx = sx.q(*(rsi + 8))
uint32_t rcx_3 = *(arg1 + 0x470) * 3

if (rcx_3 s> rbx.d)
    *(rsi + 8) = rcx_3
    
    if (rcx_3 s> *(rsi + 0xc))
        sub_140594770(rsi)
    
    memset(*rsi + (rbx << 1), 0, sx.q(rcx_3 - rbx.d) * 2)
else if (rcx_3 s< rbx.d && rcx_3 != rbx.d)
    *(rsi + 8) = rcx_3
    sub_1405a50a0(rsi)

uint64_t r14 = 0
int32_t var_108 = 0

if (*(arg1 + 0x470) s> 0)
    int64_t r9_1 = 0
    int64_t var_100_1 = 0
    int128_t zmm6 = 0x437e8000
    int128_t zmm7 = 0x477ffe80
    int32_t rdi_4 = int.d(fconvert.t(0.5f)) s>> 1
    
    do
        uint64_t r8_3 = zx.q((r14 * 3).d)
        int64_t rdx_4 = sx.q(r8_3.d)
        *(*rsi + (rdx_4 << 1)) = r8_3.w
        uint64_t r12_1 = zx.q((r8_3 + 1).d)
        *(*rsi + (rdx_4 << 1) + 2) = (r8_3 + 1).w
        *(*rsi + (rdx_4 << 1) + 4) = (r8_3 + 2).w
        float (* r9_3)[0x4] = r9_1 * 0x64 + *(arg1 + 0x468)
        int64_t rcx_9 = *(arg1 + 0x138)
        float zmm0_1[0x4] = r9_3[2][0]
        int32_t rax_22
        int64_t rcx_11
        uint64_t rdx_7
        uint64_t r14_1
        
        if (arg3 == 0)
            r14_1 = zx.q((r8_3 + 2).d)
            int32_t var_c0_1 = 0
            int32_t var_b4_1 = 0
            int32_t var_a8_1 = 0
            int64_t* rax_25 = zx.q(r14.d * *(arg1 + 0x140) * 3)
            *(rax_25 + rcx_9) = (_mm_unpacklo_ps(zmm0_1, (*r9_3)[9].q)).q
            *(zx.q(rax_25.d) + rcx_9 + 8) = var_c0_1
            int64_t* rax_28 = zx.q(r12_1.d * *(arg1 + 0x140))
            int64_t rcx_12 = *(arg1 + 0x138)
            *(rax_28 + rcx_12) = (_mm_unpacklo_ps(*r9_3, (*r9_3)[1].q)).q
            *(zx.q(rax_28.d) + rcx_12 + 8) = var_b4_1
            int64_t* rax_31 = zx.q(r14_1.d * *(arg1 + 0x140))
            rcx_11 = *(arg1 + 0x138)
            rdx_7 = zx.q(rax_31.d)
            *(rax_31 + rcx_11) = (_mm_unpacklo_ps(r9_3[4][0], (*r9_3)[0x11].q)).q
            rax_22 = var_a8_1
        else
            r14_1 = zx.q((r8_3 + 2).d)
            int32_t var_e4_1 = 0
            int32_t var_d8_1 = 0
            int32_t var_cc_1 = 0
            uint64_t rax_11 = zx.q(r8_3.d * *(arg1 + 0x140))
            uint128_t zmm1
            zmm1.d = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x264) - *(arg2 + 0x25c))).d f- (*r9_3)[9]
            *(rax_11 + rcx_9) = (_mm_unpacklo_ps(zmm0_1, zmm1.q)).q
            *(zx.q(rax_11.d) + rcx_9 + 8) = var_e4_1
            zmm0_1 = *r9_3
            int64_t rcx_10 = *(arg1 + 0x138)
            uint64_t rax_16 = zx.q(r12_1.d * *(arg1 + 0x140))
            zmm1.d = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x264) - *(arg2 + 0x25c))).d f- (*r9_3)[1]
            *(rax_16 + rcx_10) = (_mm_unpacklo_ps(zmm0_1, zmm1.q)).q
            *(zx.q(rax_16.d) + rcx_10 + 8) = var_d8_1
            zmm0_1 = r9_3[4][0]
            rcx_11 = *(arg1 + 0x138)
            int64_t* rax_21 = zx.q(r14_1.d * *(arg1 + 0x140))
            rdx_7 = zx.q(rax_21.d)
            zmm1.d = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x264) - *(arg2 + 0x25c))).d f- (*r9_3)[0x11]
            *(rax_21 + rcx_11) = (_mm_unpacklo_ps(zmm0_1, zmm1.q)).q
            rax_22 = var_cc_1
        
        *(rdx_7 + rcx_11 + 8) = rax_22
        int64_t rsi_1 = *(arg1 + 0xe8)
        uint64_t r13_1 = zx.q(r8_3.d)
        int128_t var_148
        int128_t zmm6_1
        int128_t zmm7_1
        int128_t zmm0_2
        
        if (*(arg1 + 0x109) == 0)
            int32_t rbx_5 = int.d(zmm6.d) s>> 1
            char rax_40
            
            if (rbx_5 s>= 0xffffff80)
                rax_40 = 0x7f
                
                if (rbx_5 s< 0x7f)
                    rax_40 = rbx_5.b
            else
                rax_40 = -0x80
            
            *(rsi_1 + (r8_3 << 3)) = rax_40
            char rax_41
            
            if (rdi_4 s>= 0xffffff80)
                rax_41 = 0x7f
                
                if (rdi_4 s< 0x7f)
                    rax_41 = rdi_4.b
            else
                rax_41 = -0x80
            
            *(rsi_1 + (r8_3 << 3) + 1) = rax_41
            char rax_42
            
            if (rdi_4 s>= 0xffffff80)
                rax_42 = 0x7f
                
                if (rdi_4 s< 0x7f)
                    rax_42 = rdi_4.b
            else
                rax_42 = -0x80
            
            __builtin_memcpy(&var_148, 
                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
            "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x
                    3f", 
                0x40)
            *(rsi_1 + (r8_3 << 3) + 2) = rax_42
            *(rsi_1 + (r8_3 << 3) + 3) = 0x7f
            int32_t zmm8_2
            int128_t zmm10_1
            zmm0_2, zmm6_1, zmm7_1, zmm8_2, zmm10_1 = sub_14062b8d0(&var_148)
            
            zmm0_2 = zmm0_2.d f>= zmm8_2 ? zmm6_1 : zmm10_1
            
            char rax_43
            
            if (rdi_4 s>= 0xffffff80)
                rax_43 = 0x7f
                
                if (rdi_4 s< 0x7f)
                    rax_43 = rdi_4.b
            else
                rax_43 = -0x80
            
            *(rsi_1 + (r13_1 << 3) + 4) = rax_43
            char rax_44
            
            if (rdi_4 s>= 0xffffff80)
                rax_44 = 0x7f
                
                if (rdi_4 s< 0x7f)
                    rax_44 = rdi_4.b
            else
                rax_44 = -0x80
            
            *(rsi_1 + (r13_1 << 3) + 5) = rax_44
            char rax_45
            
            if (rbx_5 s>= 0xffffff80)
                rax_45 = 0x7f
                
                if (rbx_5 s< 0x7f)
                    rax_45 = rbx_5.b
            else
                rax_45 = -0x80
            
            *(rsi_1 + (r13_1 << 3) + 6) = rax_45
            int32_t rax_47 = int.d(zmm0_2.d) s>> 1
            char rcx_16
            
            if (rax_47 s>= 0xffffff80)
                rcx_16 = 0x7f
                
                if (rax_47 s< 0x7f)
                    rcx_16 = rax_47.b
            else
                rcx_16 = -0x80
            
            *(rsi_1 + (r13_1 << 3) + 7) = rcx_16
        else
            int16_t* rbx_3 = (zx.q(r13_1.d) << 4) + rsi_1
            int32_t rsi_3 = int.d(zmm7.d) s>> 1
            int16_t rax_32
            
            if (rsi_3 s>= 0xffff8000)
                rax_32 = 0x7fff
                
                if (rsi_3 s< 0x7fff)
                    rax_32 = rsi_3.w
            else
                rax_32 = -0x8000
            
            *rbx_3 = rax_32
            int16_t rax_33
            
            if (rdi_4 s>= 0xffff8000)
                rax_33 = 0x7fff
                
                if (rdi_4 s< 0x7fff)
                    rax_33 = rdi_4.w
            else
                rax_33 = -0x8000
            
            rbx_3[1] = rax_33
            int16_t rax_34
            
            if (rdi_4 s>= 0xffff8000)
                rax_34 = 0x7fff
                
                if (rdi_4 s< 0x7fff)
                    rax_34 = rdi_4.w
            else
                rax_34 = -0x8000
            
            __builtin_memcpy(&var_148, 
                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
            "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x
                    3f", 
                0x40)
            rbx_3[2] = rax_34
            rbx_3[3] = 0x7fff
            int32_t zmm8_1
            int128_t zmm9_1
            zmm0_2, zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_14062b8d0(&var_148)
            
            zmm0_2 = zmm0_2.d f>= zmm8_1 ? zmm7_1 : zmm9_1
            
            int16_t rax_35
            
            if (rdi_4 s>= 0xffff8000)
                rax_35 = 0x7fff
                
                if (rdi_4 s< 0x7fff)
                    rax_35 = rdi_4.w
            else
                rax_35 = -0x8000
            
            rbx_3[4] = rax_35
            int16_t rax_36
            
            if (rdi_4 s>= 0xffff8000)
                rax_36 = 0x7fff
                
                if (rdi_4 s< 0x7fff)
                    rax_36 = rdi_4.w
            else
                rax_36 = -0x8000
            
            rbx_3[5] = rax_36
            int16_t rax_37
            
            if (rsi_3 s>= 0xffff8000)
                rax_37 = 0x7fff
                
                if (rsi_3 s< 0x7fff)
                    rax_37 = rsi_3.w
            else
                rax_37 = -0x8000
            
            rbx_3[6] = rax_37
            int32_t rax_39 = int.d(zmm0_2.d) s>> 1
            
            if (rax_39 s>= 0xffff8000)
                int16_t rcx_14 = 0x7fff
                
                if (rax_39 s< 0x7fff)
                    rcx_14 = rax_39.w
                
                rbx_3[7] = rcx_14
            else
                rbx_3[7] = 0x8000
        int64_t rsi_4 = *(arg1 + 0xe8)
        int128_t zmm6_2
        int128_t zmm7_2
        int128_t zmm0_3
        
        if (*(arg1 + 0x109) == 0)
            int32_t rbx_10 = int.d(zmm6_1.d) s>> 1
            char rax_56
            
            if (rbx_10 s>= 0xffffff80)
                rax_56 = 0x7f
                
                if (rbx_10 s< 0x7f)
                    rax_56 = rbx_10.b
            else
                rax_56 = -0x80
            
            *(rsi_4 + (r12_1 << 3)) = rax_56
            char rax_57
            
            if (rdi_4 s>= 0xffffff80)
                rax_57 = 0x7f
                
                if (rdi_4 s< 0x7f)
                    rax_57 = rdi_4.b
            else
                rax_57 = -0x80
            
            *(rsi_4 + (r12_1 << 3) + 1) = rax_57
            char rax_58
            
            if (rdi_4 s>= 0xffffff80)
                rax_58 = 0x7f
                
                if (rdi_4 s< 0x7f)
                    rax_58 = rdi_4.b
            else
                rax_58 = -0x80
            
            __builtin_memcpy(&var_148, 
                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
            "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x
                    3f", 
                0x40)
            *(rsi_4 + (r12_1 << 3) + 2) = rax_58
            *(rsi_4 + (r12_1 << 3) + 3) = 0x7f
            int32_t zmm8_4
            int128_t zmm10_2
            zmm0_3, zmm6_2, zmm7_2, zmm8_4, zmm10_2 = sub_14062b8d0(&var_148)
            
            zmm0_3 = zmm0_3.d f>= zmm8_4 ? zmm6_2 : zmm10_2
            
            char rax_59
            
            if (rdi_4 s>= 0xffffff80)
                rax_59 = 0x7f
                
                if (rdi_4 s< 0x7f)
                    rax_59 = rdi_4.b
            else
                rax_59 = -0x80
            
            *(rsi_4 + (r12_1 << 3) + 4) = rax_59
            char rax_60
            
            if (rdi_4 s>= 0xffffff80)
                rax_60 = 0x7f
                
                if (rdi_4 s< 0x7f)
                    rax_60 = rdi_4.b
            else
                rax_60 = -0x80
            
            *(rsi_4 + (r12_1 << 3) + 5) = rax_60
            char rax_61
            
            if (rbx_10 s>= 0xffffff80)
                rax_61 = 0x7f
                
                if (rbx_10 s< 0x7f)
                    rax_61 = rbx_10.b
            else
                rax_61 = -0x80
            
            *(rsi_4 + (r12_1 << 3) + 6) = rax_61
            int32_t rax_63 = int.d(zmm0_3.d) s>> 1
            char rcx_20
            
            if (rax_63 s>= 0xffffff80)
                rcx_20 = 0x7f
                
                if (rax_63 s< 0x7f)
                    rcx_20 = rax_63.b
            else
                rcx_20 = -0x80
            
            *(rsi_4 + (r12_1 << 3) + 7) = rcx_20
        else
            int16_t* rbx_8 = (r12_1 << 4) + rsi_4
            int32_t rsi_6 = int.d(zmm7_1.d) s>> 1
            int16_t rax_48
            
            if (rsi_6 s>= 0xffff8000)
                rax_48 = 0x7fff
                
                if (rsi_6 s< 0x7fff)
                    rax_48 = rsi_6.w
            else
                rax_48 = -0x8000
            
            *rbx_8 = rax_48
            int16_t rax_49
            
            if (rdi_4 s>= 0xffff8000)
                rax_49 = 0x7fff
                
                if (rdi_4 s< 0x7fff)
                    rax_49 = rdi_4.w
            else
                rax_49 = -0x8000
            
            rbx_8[1] = rax_49
            int16_t rax_50
            
            if (rdi_4 s>= 0xffff8000)
                rax_50 = 0x7fff
                
                if (rdi_4 s< 0x7fff)
                    rax_50 = rdi_4.w
            else
                rax_50 = -0x8000
            
            __builtin_memcpy(&var_148, 
                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
            "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x
                    3f", 
                0x40)
            rbx_8[3] = 0x7fff
            rbx_8[2] = rax_50
            int32_t zmm8_3
            int128_t zmm9_2
            zmm0_3, zmm6_2, zmm7_2, zmm8_3, zmm9_2 = sub_14062b8d0(&var_148)
            
            zmm0_3 = zmm0_3.d f>= zmm8_3 ? zmm7_2 : zmm9_2
            
            int16_t rax_51
            
            if (rdi_4 s>= 0xffff8000)
                rax_51 = 0x7fff
                
                if (rdi_4 s< 0x7fff)
                    rax_51 = rdi_4.w
            else
                rax_51 = -0x8000
            
            rbx_8[4] = rax_51
            int16_t rax_52
            
            if (rdi_4 s>= 0xffff8000)
                rax_52 = 0x7fff
                
                if (rdi_4 s< 0x7fff)
                    rax_52 = rdi_4.w
            else
                rax_52 = -0x8000
            
            rbx_8[5] = rax_52
            int16_t rax_53
            
            if (rsi_6 s>= 0xffff8000)
                rax_53 = 0x7fff
                
                if (rsi_6 s< 0x7fff)
                    rax_53 = rsi_6.w
            else
                rax_53 = -0x8000
            
            rbx_8[6] = rax_53
            int32_t rax_55 = int.d(zmm0_3.d) s>> 1
            
            if (rax_55 s>= 0xffff8000)
                int16_t rcx_18 = 0x7fff
                
                if (rax_55 s< 0x7fff)
                    rcx_18 = rax_55.w
                
                rbx_8[7] = rcx_18
            else
                rbx_8[7] = 0x8000
        int64_t rsi_7 = *(arg1 + 0xe8)
        float zmm0_4
        
        if (*(arg1 + 0x109) == 0)
            int32_t rbx_15 = int.d(zmm6_2.d) s>> 1
            char rax_72
            
            if (rbx_15 s>= 0xffffff80)
                rax_72 = 0x7f
                
                if (rbx_15 s< 0x7f)
                    rax_72 = rbx_15.b
            else
                rax_72 = -0x80
            
            *(rsi_7 + (r14_1 << 3)) = rax_72
            char rax_73
            
            if (rdi_4 s>= 0xffffff80)
                rax_73 = 0x7f
                
                if (rdi_4 s< 0x7f)
                    rax_73 = rdi_4.b
            else
                rax_73 = -0x80
            
            *(rsi_7 + (r14_1 << 3) + 1) = rax_73
            char rax_74
            
            if (rdi_4 s>= 0xffffff80)
                rax_74 = 0x7f
                
                if (rdi_4 s< 0x7f)
                    rax_74 = rdi_4.b
            else
                rax_74 = -0x80
            
            __builtin_memcpy(&var_148, 
                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
            "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x
                    3f", 
                0x40)
            *(rsi_7 + (r14_1 << 3) + 2) = rax_74
            *(rsi_7 + (r14_1 << 3) + 3) = 0x7f
            float zmm6_3
            int32_t zmm8_6
            float zmm10_3
            zmm0_4, zmm6_3, zmm8_6, zmm10_3 = sub_14062b8d0(&var_148)
            
            zmm0_4 = zmm0_4 f>= zmm8_6 ? zmm6_3 : zmm10_3
            
            char rax_75
            
            if (rdi_4 s>= 0xffffff80)
                rax_75 = 0x7f
                
                if (rdi_4 s< 0x7f)
                    rax_75 = rdi_4.b
            else
                rax_75 = -0x80
            
            *(rsi_7 + (r14_1 << 3) + 4) = rax_75
            char rax_76
            
            if (rdi_4 s>= 0xffffff80)
                rax_76 = 0x7f
                
                if (rdi_4 s< 0x7f)
                    rax_76 = rdi_4.b
            else
                rax_76 = -0x80
            
            *(rsi_7 + (r14_1 << 3) + 5) = rax_76
            char rax_77
            
            if (rbx_15 s>= 0xffffff80)
                rax_77 = 0x7f
                
                if (rbx_15 s< 0x7f)
                    rax_77 = rbx_15.b
            else
                rax_77 = -0x80
            
            *(rsi_7 + (r14_1 << 3) + 6) = rax_77
            int32_t rax_79 = int.d(zmm0_4) s>> 1
            char rcx_24
            
            if (rax_79 s>= 0xffffff80)
                rcx_24 = 0x7f
                
                if (rax_79 s< 0x7f)
                    rcx_24 = rax_79.b
            else
                rcx_24 = -0x80
            
            *(rsi_7 + (r14_1 << 3) + 7) = rcx_24
        else
            int16_t* rbx_13 = (r14_1 << 4) + rsi_7
            int32_t rsi_9 = int.d(zmm7_2.d) s>> 1
            int16_t rax_64
            
            if (rsi_9 s>= 0xffff8000)
                rax_64 = 0x7fff
                
                if (rsi_9 s< 0x7fff)
                    rax_64 = rsi_9.w
            else
                rax_64 = -0x8000
            
            *rbx_13 = rax_64
            int16_t rax_65
            
            if (rdi_4 s>= 0xffff8000)
                rax_65 = 0x7fff
                
                if (rdi_4 s< 0x7fff)
                    rax_65 = rdi_4.w
            else
                rax_65 = -0x8000
            
            rbx_13[1] = rax_65
            int16_t rax_66
            
            if (rdi_4 s>= 0xffff8000)
                rax_66 = 0x7fff
                
                if (rdi_4 s< 0x7fff)
                    rax_66 = rdi_4.w
            else
                rax_66 = -0x8000
            
            __builtin_memcpy(&var_148, 
                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
            "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x
                    3f", 
                0x40)
            rbx_13[3] = 0x7fff
            rbx_13[2] = rax_66
            float zmm7_3
            int32_t zmm8_5
            float zmm9_3
            zmm0_4, zmm7_3, zmm8_5, zmm9_3 = sub_14062b8d0(&var_148)
            
            zmm0_4 = zmm0_4 f>= zmm8_5 ? zmm7_3 : zmm9_3
            
            int16_t rax_67
            
            if (rdi_4 s>= 0xffff8000)
                rax_67 = 0x7fff
                
                if (rdi_4 s< 0x7fff)
                    rax_67 = rdi_4.w
            else
                rax_67 = -0x8000
            
            rbx_13[4] = rax_67
            int16_t rax_68
            
            if (rdi_4 s>= 0xffff8000)
                rax_68 = 0x7fff
                
                if (rdi_4 s< 0x7fff)
                    rax_68 = rdi_4.w
            else
                rax_68 = -0x8000
            
            rbx_13[5] = rax_68
            int16_t rax_69
            
            if (rsi_9 s>= 0xffff8000)
                rax_69 = 0x7fff
                
                if (rsi_9 s< 0x7fff)
                    rax_69 = rsi_9.w
            else
                rax_69 = -0x8000
            
            rbx_13[6] = rax_69
            int32_t rax_71 = int.d(zmm0_4) s>> 1
            
            if (rax_71 s>= 0xffff8000)
                int16_t rcx_22 = 0x7fff
                
                if (rax_71 s< 0x7fff)
                    rcx_22 = rax_71.w
                
                rbx_13[7] = rcx_22
            else
                rbx_13[7] = 0x8000
        
        int64_t r11_1 = *(arg1 + 0xf0)
        int64_t r9_5 = zx.q(*(arg1 + 0x100)) * r13_1
        zmm0_4 = (*r9_3)[0xa]
        float zmm1_1 = (*r9_3)[0xb]
        float (* var_158_1)[0x4]
        
        if (*(arg1 + 0x108) == 0)
            var_158_1.d = zmm0_4
            int32_t rdx_10 = var_158_1.d
            uint16_t rcx_26 = (rdx_10 u>> 0x17).w
            uint16_t rax_81 = (rdx_10 u>> 0x1f).w << 0xf
            uint32_t r8_4 = zx.d(rcx_26.b)
            
            if (r8_4 u> 0x70)
                if (r8_4 u< 0x8f)
                    rax_81 |= ((rcx_26 - 0x10) & 0x1f) << 0xa | ((rdx_10 u>> 0xd).w & 0x3ff)
                else
                    rax_81 |= 0x7bff
            else if (0x70 - r8_4 + 0xe s<= 0x18)
                int32_t rdx_12 = (rdx_10 & 0x7fffff) | 0x800000
                uint16_t r8_6 = ((rdx_12 u>> (0x70 - r8_4 + 0xe).b).w & 0x3ff) | rax_81
                rax_81 = r8_6
                
                if (((rdx_12 u>> ((0x70 - r8_4).b + 0xd)).b & 1) != 0)
                    rax_81 = r8_6 + 1
            
            var_158_1.d = zmm1_1
            *(r11_1 + (r9_5 << 2)) = rax_81
            int32_t rax_82 = var_158_1.d
            uint16_t rcx_30 = (rax_82 u>> 0x17).w
            int16_t rdx_16 = (rax_82 u>> 0x1f).w << 0xf
            r8_3 = zx.q(rcx_30.b)
            
            if (r8_3.d u<= 0x70)
                int32_t r10_3 = 0x70 - r8_3.d
                
                if (r10_3 + 0xe s<= 0x18)
                    int32_t rax_84 = (rax_82 & 0x7fffff) | 0x800000
                    r8_3.w = (rax_84 u>> (r10_3 + 0xe).b).w & 0x3ff
                    r8_3.w |= rdx_16
                    rdx_16 = r8_3.w
                    
                    if (((rax_84 u>> (r10_3.b + 0xd)).b & 1) != 0)
                        rdx_16 = (r8_3 + 1).w
            else if (r8_3.d u< 0x8f)
                rdx_16 |= ((rax_82 u>> 0xd).w & 0x3ff) | ((rcx_30 - 0x10) & 0x1f) << 0xa
            else
                rdx_16 |= 0x7bff
            
            *(r11_1 + (r9_5 << 2) + 2) = rdx_16
        else
            *(r11_1 + (r9_5 << 3)) = zmm0_4
            *(r11_1 + (r9_5 << 3) + 4) = zmm1_1
        
        zmm0_4 = (*r9_3)[2]
        zmm1_1 = (*r9_3)[3]
        int64_t r11_2 = *(arg1 + 0xf0)
        int64_t r9_7 = zx.q(*(arg1 + 0x100)) * r12_1
        
        if (*(arg1 + 0x108) == 0)
            var_158_1.d = zmm0_4
            int32_t rdx_17 = var_158_1.d
            uint16_t rcx_34 = (rdx_17 u>> 0x17).w
            uint16_t rax_88 = (rdx_17 u>> 0x1f).w << 0xf
            uint32_t r8_8 = zx.d(rcx_34.b)
            
            if (r8_8 u> 0x70)
                if (r8_8 u< 0x8f)
                    rax_88 |= ((rcx_34 - 0x10) & 0x1f) << 0xa | ((rdx_17 u>> 0xd).w & 0x3ff)
                else
                    rax_88 |= 0x7bff
            else if (0x70 - r8_8 + 0xe s<= 0x18)
                int32_t rdx_19 = (rdx_17 & 0x7fffff) | 0x800000
                uint16_t r8_10 = ((rdx_19 u>> (0x70 - r8_8 + 0xe).b).w & 0x3ff) | rax_88
                rax_88 = r8_10
                
                if (((rdx_19 u>> ((0x70 - r8_8).b + 0xd)).b & 1) != 0)
                    rax_88 = r8_10 + 1
            
            *(r11_2 + (r9_7 << 2)) = rax_88
            var_158_1.d = zmm1_1
            int32_t rdx_22 = var_158_1.d
            uint16_t rcx_38 = (rdx_22 u>> 0x17).w
            int16_t rax_90 = (rdx_22 u>> 0x1f).w << 0xf
            r8_3 = zx.q(rcx_38.b)
            
            if (r8_3.d u<= 0x70)
                int32_t r10_5 = 0x70 - r8_3.d
                
                if (r10_5 + 0xe s<= 0x18)
                    int32_t rdx_24 = (rdx_22 & 0x7fffff) | 0x800000
                    r8_3.w = (rdx_24 u>> (r10_5 + 0xe).b).w & 0x3ff
                    r8_3.w |= rax_90
                    rax_90 = r8_3.w
                    
                    if (((rdx_24 u>> (r10_5.b + 0xd)).b & 1) != 0)
                        rax_90 = (r8_3 + 1).w
            else if (r8_3.d u< 0x8f)
                rax_90 |= ((rcx_38 - 0x10) & 0x1f) << 0xa | ((rdx_22 u>> 0xd).w & 0x3ff)
            else
                rax_90 |= 0x7bff
            
            *(r11_2 + (r9_7 << 2) + 2) = rax_90
        else
            *(r11_2 + (r9_7 << 3)) = zmm0_4
            *(r11_2 + (r9_7 << 3) + 4) = zmm1_1
        
        zmm0_4 = (*r9_3)[0x12]
        zmm1_1 = (*r9_3)[0x13]
        int64_t r11_3 = *(arg1 + 0xf0)
        int64_t r9_9 = zx.q(*(arg1 + 0x100)) * r14_1
        
        if (*(arg1 + 0x108) == 0)
            var_158_1.d = zmm0_4
            int32_t rax_91 = var_158_1.d
            uint16_t rcx_42 = (rax_91 u>> 0x17).w
            uint16_t rdx_28 = (rax_91 u>> 0x1f).w << 0xf
            uint32_t r8_12 = zx.d(rcx_42.b)
            
            if (r8_12 u> 0x70)
                if (r8_12 u< 0x8f)
                    rdx_28 |= ((rax_91 u>> 0xd).w & 0x3ff) | ((rcx_42 - 0x10) & 0x1f) << 0xa
                else
                    rdx_28 |= 0x7bff
            else if (0x70 - r8_12 + 0xe s<= 0x18)
                int32_t rax_93 = (rax_91 & 0x7fffff) | 0x800000
                uint16_t r8_14 = ((rax_93 u>> (0x70 - r8_12 + 0xe).b).w & 0x3ff) | rdx_28
                rdx_28 = r8_14
                
                if (((rax_93 u>> ((0x70 - r8_12).b + 0xd)).b & 1) != 0)
                    rdx_28 = r8_14 + 1
            
            *(r11_3 + (r9_9 << 2)) = rdx_28
            var_158_1.d = zmm1_1
            int32_t rax_96 = var_158_1.d
            uint16_t rcx_46 = (rax_96 u>> 0x17).w
            int16_t rdx_30 = (rax_96 u>> 0x1f).w << 0xf
            r8_3 = zx.q(rcx_46.b)
            
            if (r8_3.d u<= 0x70)
                int32_t r10_7 = 0x70 - r8_3.d
                
                if (r10_7 + 0xe s<= 0x18)
                    int32_t rax_98 = (rax_96 & 0x7fffff) | 0x800000
                    r8_3.w = (rax_98 u>> (r10_7 + 0xe).b).w & 0x3ff
                    r8_3.w |= rdx_30
                    rdx_30 = r8_3.w
                    
                    if (((rax_98 u>> (r10_7.b + 0xd)).b & 1) != 0)
                        rdx_30 = (r8_3 + 1).w
            else if (r8_3.d u< 0x8f)
                rdx_30 |= ((rax_96 u>> 0xd).w & 0x3ff) | ((rcx_46 - 0x10) & 0x1f) << 0xa
            else
                rdx_30 |= 0x7bff
            
            *(r11_3 + (r9_9 << 2) + 2) = rdx_30
        else
            *(r11_3 + (r9_9 << 3)) = zmm0_4
            *(r11_3 + (r9_9 << 3) + 4) = zmm1_1
        
        r8_3.b = 1
        void var_f8
        *(zx.q(var_108 * *(arg1 + 0x180) * 3) + *(arg1 + 0x178)) =
            *sub_140ae16d0(&r9_3[3], &var_f8, r8_3.b)
        void var_f4
        *(zx.q(*(arg1 + 0x180) * r12_1.d) + *(arg1 + 0x178)) = *sub_140ae16d0(&r9_3[1], &var_f4, 1)
        int32_t* rbx_23 = zx.q(r14_1.d * *(arg1 + 0x180)) + *(arg1 + 0x178)
        void var_f0
        char* rax_105
        rax_105, zmm6, zmm7 = sub_140ae16d0(&r9_3[5], &var_f0, 1)
        rsi = arg1 + 0x78
        r14 = zx.q(var_108 + 1)
        r9_1 = var_100_1 + 1
        var_108 = r14.d
        *rbx_23 = *rax_105
        var_100_1 = r9_1
    while (r14.d s< *(arg1 + 0x470))
    
    r12 = arg1 + 0x110
    r13 = arg1 + 0x88

(*(*r12 + 0x28))(r12)
(*(*r13 + 0x28))(r13)
(*(*(arg1 + 0x150) + 0x28))(arg1 + 0x150)
(*(*(arg1 + 0x60) + 0x28))(arg1 + 0x60)
(*(*(arg1 + 0x190) + 0x28))(arg1 + 0x190)
jump(*(*(arg1 + 0x3a8) + 0x28))
