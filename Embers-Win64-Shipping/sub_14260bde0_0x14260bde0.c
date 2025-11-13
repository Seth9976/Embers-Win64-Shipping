// 函数: sub_14260bde0
// 地址: 0x14260bde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg7 = 0

if (arg2 != 0 && sub_1426126b0(*arg1, arg2) != 0)
    void* rbx_1 = arg1[0xd]
    memset(*(rbx_1 + 8), 0xff, sx.q(*(rbx_1 + 0x1c)) * 2)
    *(rbx_1 + 0x24) = 0
    *(arg1[0xe] + 0xc) = 0
    int32_t* rax_3 = sub_14260fcd0(arg1[0xd], arg2)
    *rax_3 = *arg3
    rax_3[1] = arg3[1]
    rax_3[2] = arg3[2]
    *(rax_3 + 0xc) = 0
    *(rax_3 + 0x18) = arg2
    rax_3[5] = 0x40000000
    sub_142613e10(arg1[0xe], rax_3)
    int64_t rcx_7 = sx.q(arg8)
    uint64_t rax_4 = 0
    int32_t arg_10 = 0
    int32_t r12_1 = 0x40000000
    
    if (rcx_7.d s<= 0)
        r12_1 = 0x40000010
    else
        if (arg6 != 0)
            *arg6 = *(rax_3 + 0x18)
        
        rax_4 = 1
        arg_10 = 1
    
    int64_t* r9_1 = arg1[0xe]
    int128_t zmm12
    zmm12.d = arg4.d f* arg4.d
    
    if (*(r9_1 + 0xc) != 0)
        int128_t zmm6
        int128_t var_48_1 = zmm6
        int128_t zmm7
        int128_t var_58_1 = zmm7
        int128_t zmm8
        int128_t var_68_1 = zmm8
        int128_t zmm9
        int128_t var_78_1 = zmm9
        uint64_t var_118_1 = rax_4
        
        do
            int64_t rax_6 = sx.q(*(r9_1 + 0xc))
            void* rdx_3 = 1
            int64_t* rcx_8 = *r9_1
            int32_t i_1 = 0
            void* rbx_3 = nullptr
            uint64_t r8_2 = 1
            int32_t i = (rax_6 - 1).d
            int32_t* rsi_1 = *rcx_8
            *(r9_1 + 0xc) = i
            void* rdi_1 = rcx_8[rax_6 - 1]
            
            if (i s> 1)
                do
                    int32_t r10_1 = (r8_2 + 1).d
                    
                    if (r10_1 s< i)
                        int64_t rax_7 = *r9_1
                        
                        if (not(*(*(rax_7 + (rdx_3 << 3) + 8) + 0x10) f>=
                                *(*(rax_7 + (rdx_3 << 3)) + 0x10)))
                            r8_2 = zx.q(r10_1)
                            rdx_3 += 1
                    
                    int64_t rcx_10 = *r9_1
                    i_1 = r8_2.d
                    r8_2 = zx.q(((r8_2 << 1) + 1).d)
                    *(rcx_10 + (rbx_3 << 3)) = *(rcx_10 + (rdx_3 << 3))
                    rbx_3 = rdx_3
                    i = *(r9_1 + 0xc)
                    rdx_3 = (rdx_3 << 1) + 1
                while (r8_2.d s< i)
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(i_1 - 1)
            int32_t i_3 = (temp1_1 - temp0_1) s>> 1
            float zmm0_1
            
            if (i_1 s> 0)
                zmm0_1 = *(rdi_1 + 0x10)
                
                do
                    int64_t rdx_5 = *r9_1
                    void* r8_3 = *(rdx_5 + (sx.q(i_3) << 3))
                    
                    if (zmm0_1 f>= *(r8_3 + 0x10))
                        break
                    
                    int64_t i_4 = sx.q(i_1)
                    i_1 = i_3
                    *(rdx_5 + (i_4 << 3)) = r8_3
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(i_3 - 1)
                    i_3 = (temp3_1 - temp2_1) s>> 1
                while (i_1 s> 0)
            
            *(*r9_1 + (sx.q(i_1) << 3)) = rdi_1
            int64_t r11_1 = *(rsi_1 + 0x18)
            int32_t r10_4 = (rsi_1[5] & 0x3fffffff) | 0x80000000
            rsi_1[5] = r10_4
            void* r8_4 = *arg1
            char r9_2 = (*(r8_4 + 0xa0)).b
            int64_t rdx_10 = 0
            void* r13_2 =
                (((1 << (*(r8_4 + 0x9c)).b) - 1) & zx.q((r11_1 u>> r9_2).d)) * 0xb0 + *(r8_4 + 0x90)
            int64_t var_110_1 = 0
            int32_t* r8_10 = ((zx.q((1 << r9_2).d - 1) & zx.q(r11_1.d)) << 5) + *(r13_2 + 0x10)
            int32_t r10_5 = r10_4 & 0x3fffffff
            
            if (r10_5 != 0)
                rdx_10 = *((zx.q(r10_5 - 1) << 5) + *arg1[0xd] + 0x18)
                var_110_1 = rdx_10
            
            int32_t i_2 = *r8_10
            
            while (i_2 != 0xffffffff)
                int32_t rcx_18 = *(*(r13_2 + 8) + 0x20)
                int64_t* rax_24
                
                if (i_2 u>= rcx_18)
                    rax_24 = (sx.q(i_2 - rcx_18) << 4) + *(r13_2 + 0x80)
                else
                    rax_24 = (zx.q(i_2) << 4) + *(r13_2 + 0x20)
                
                int64_t rdi_2 = *rax_24
                i_2 = rax_24[1].d
                
                if (rdi_2 != 0 && rdi_2 != rdx_10)
                    char rcx_19 = *(rax_24 + 0xd)
                    uint32_t rax_29
                    
                    if ((rcx_19 & 0x60) == 0x40)
                        rax_29 = zx.d(rcx_19) u>> 4
                        
                        if (*(arg5 + 0x214) == 0)
                            rax_29 = not.d(rax_29)
                    
                    if ((rcx_19 & 0x60) != 0x40 || (rax_29 & 1) != 0)
                        void* r8_11 = *arg1
                        char r9_3 = (*(r8_11 + 0xa0)).b
                        void* rsi_3 =
                            (((1 << (*(r8_11 + 0x9c)).b) - 1) & zx.q((rdi_2 u>> r9_3).d)) * 0xb0
                            + *(r8_11 + 0x90)
                        int32_t* rbx_6 =
                            ((zx.q((1 << r9_3).d - 1) & zx.q(rdi_2.d)) << 5) + *(rsi_3 + 0x10)
                        int64_t var_148
                        int32_t* var_140
                        void* var_138
                        int32_t* var_130
                        int32_t* var_128
                        
                        if (arg5[0x43].b != 0)
                            if ((*(*arg5 + 8))(arg5, rdi_2, rsi_3, rbx_6, var_148, var_140, 
                                var_138, var_130, var_128) != 0)
                            label_14260c234:
                                void* r9_5 = *(rsi_3 + 8)
                                int32_t r8_13 = *(r9_5 + 0x3c)
                                int64_t* rcx_24 = arg1[1]
                                int32_t rax_45 = ((1 << (*(*arg1 + 0xa0)).b).d - 1) & rdi_2.d
                                int32_t rdx_16 = rax_45 - r8_13
                                
                                if (rcx_24 == 0 || rax_45 s< r8_13 || rdx_16 s>= *(r9_5 + 0x34))
                                label_14260c29d:
                                    int32_t var_e8
                                    var_128 = &var_e8
                                    int32_t var_d8
                                    var_130 = &var_d8
                                    var_138 = rsi_3
                                    var_140 = rbx_6
                                    var_148 = rdi_2
                                    
                                    if (sub_1426108d0(arg1, r11_1, r8_10, r13_2, var_148, var_140, 
                                            var_138, var_130, var_128) != 0)
                                        zmm8 = var_d8
                                        zmm6.d = var_e8.d f- zmm8.d
                                        int32_t var_d0
                                        zmm9 = var_d0
                                        int32_t var_e0
                                        zmm7.d = var_e0.d f- zmm9.d
                                        float zmm3 = arg3[2]
                                        float zmm4_1 = *arg3
                                        float zmm1_1 = zmm7.d f* zmm7.d + zmm6.d f* zmm6.d
                                        float zmm2_1 = (zmm3 f- zmm9.d) f* zmm7.d
                                            + (zmm4_1 f- zmm8.d) f* zmm6.d
                                        
                                        if (not(zmm1_1 <= 0f))
                                            zmm2_1 = zmm2_1 / zmm1_1
                                        
                                        if (zmm2_1 >= 0f)
                                            zmm2_1 = _mm_min_ss(zmm2_1, 0x3f800000)
                                        else
                                            zmm2_1 = (zx.o(0)).d
                                        
                                        zmm0_1 = zmm7.d * zmm2_1 f+ zmm9.d - zmm3
                                        zmm1_1 = zmm6.d * zmm2_1 f+ zmm8.d - zmm4_1
                                        
                                        if (not(zmm0_1 * zmm0_1 + zmm1_1 * zmm1_1 f> zmm12.d))
                                            int32_t* rax_52 = sub_14260fcd0(arg1[0xd], rdi_2)
                                            
                                            if (rax_52 != 0)
                                                int32_t rax_53 = rax_52[5]
                                                
                                                if (rax_53 s>= 0)
                                                    if (rax_53 u>= 0x40000000)
                                                        zmm6 = *rax_52
                                                    else
                                                        zmm6.d = zmm6.d f* 0.5f
                                                        zmm7.d = zmm7.d f* 0.5f
                                                        zmm6.d = zmm6.d f+ zmm8.d
                                                        zmm7.d = zmm7.d f+ zmm9.d
                                                        *rax_52 = zmm6.d
                                                        rax_52[2] = zmm7.d
                                                        float var_e4
                                                        float var_d4
                                                        rax_52[1] =
                                                            (var_e4 - var_d4) * 0.5f + var_d4
                                                    
                                                    zmm1_1 = rax_52[1] f- rsi_1[1]
                                                    zmm6.d = zmm6.d f- *rsi_1
                                                    zmm0_1 = rax_52[2] f- rsi_1[2]
                                                    zmm6.d = zmm6.d f* zmm6.d
                                                    zmm2_1 = _mm_sqrt_ss(0, 
                                                        zmm1_1 * zmm1_1 f+ zmm6.d + zmm0_1 * zmm0_1)
                                                        f+ rsi_1[4]
                                                    
                                                    if ((not(test_bit(rax_53, 0x1e))
                                                            || not(zmm2_1 f>= rax_52[4]))
                                                            && not(zmm2_1 * zmm2_1 f>= zmm12.d))
                                                        int32_t r8_16 = rax_53 & 0x7fffffff
                                                        *(rax_52 + 0x18) = rdi_2
                                                        rax_52[5] = r8_16
                                                        int32_t rcx_30 =
                                                            ((rsi_1 - *arg1[0xd]) s>> 5).d + 1
                                                        rax_52[4] = zmm2_1
                                                        int32_t rax_58 =
                                                            ((r8_16 ^ rcx_30) & 0x3fffffff) ^ r8_16
                                                        rax_52[5] = rax_58
                                                        
                                                        if (rax_58 u< 0x40000000)
                                                            if (var_118_1 s>= rcx_7)
                                                                r12_1 |= 0x10
                                                            else
                                                                if (arg6 != 0)
                                                                    arg6[var_118_1] = rdi_2
                                                                    rax_58 = rax_52[5]
                                                                
                                                                arg_10 += 1
                                                                var_118_1 += 1
                                                            
                                                            rax_52[5] =
                                                                (rax_58 & 0x3fffffff) | 0x40000000
                                                            sub_142613e10(arg1[0xe], rax_52)
                                                        else
                                                            sub_142612a00(arg1[0xe], rax_52)
                                            else
                                                r12_1 |= 0x20
                                else
                                    if (*(*(rsi_3 + 0x48) + sx.q(rdx_16) * 0x28 + 0x20) == 0)
                                        goto label_14260c29d
                                    
                                    if ((*(*rcx_24 + 8))() != 0)
                                        goto label_14260c29d
                        else
                            int16_t rax_37 = rbx_6[7].w
                            
                            if ((arg5[0x42].w & rax_37) != 0 && (*(arg5 + 0x212) & rax_37) == 0)
                                uint64_t rax_39 = zx.q(*(rbx_6 + 0x1f)) & 0x3f
                                
                                if (not(3.40282347e+38f f<= *(arg5 + (rax_39 << 2) + 8)) &&
                                        not(3.40282347e+38f f<= *(arg5 + (rax_39 << 2) + 0x108)))
                                    goto label_14260c234
                
                rdx_10 = var_110_1
            
            r9_1 = arg1[0xe]
        while (*(r9_1 + 0xc) != 0)
        
        rax_4 = zx.q(arg_10)
    
    *arg7 = rax_4.d
    return zx.q(r12_1)

return 0x80000008
