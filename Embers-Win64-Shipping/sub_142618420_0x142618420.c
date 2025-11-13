// 函数: sub_142618420
// 地址: 0x142618420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t result = arg1[2].d
int32_t* r15 = arg3

if (((result u>> 0x1d).b & 1) != 0)
    void* rdi_1 = *arg1
    char rax_2 = sub_1426126b0(rdi_1, arg1[5])
    char rax_3
    
    if (rax_2 != 0)
        rax_3 = sub_1426126b0(rdi_1, arg1[6])
    
    if (rax_2 == 0 || rax_3 == 0)
        result = -0x80000000
        arg1[2].d = 0x80000000
    else
        void* rax_4 = arg1[0xb]
        int128_t zmm10 = *(rax_4 + 0x20c)
        
        if (not(zmm10.d f> 0f))
            zmm10 = 0x3f800000
        
        zmm10.d = zmm10.d f* *(rax_4 + 0x208)
        int32_t r14_1 = 0
        char rax_5 = *(rax_4 + 0x215)
        int128_t zmm6
        int128_t var_48_1 = zmm6
        int128_t zmm7
        int128_t var_58_1 = zmm7
        int128_t zmm8
        int128_t var_68_1 = zmm8
        
        if (arg2 s<= 0)
        label_142618db4:
            
            if (*(arg1[0xe] + 0xc) == 0)
                *(arg1 + 0x13) = 0x40
            
        label_142618dbe:
            
            if (r15 != 0)
                *r15 = r14_1
        else
            while (true)
                int64_t* r9_2 = arg1[0xe]
                int64_t rax_6 = sx.q(*(r9_2 + 0xc))
                
                if (rax_6.d != 0)
                    int64_t* rcx_2 = *r9_2
                    int32_t i = (rax_6 - 1).d
                    r14_1 += 1
                    void* rdx_2 = 1
                    int32_t i_1 = 0
                    void* rdi_2 = nullptr
                    uint64_t r8 = 1
                    float* rbp_1 = *rcx_2
                    *(r9_2 + 0xc) = i
                    void* rsi_1 = rcx_2[rax_6 - 1]
                    
                    if (i s> 1)
                        do
                            int32_t r10_1 = (r8 + 1).d
                            
                            if (r10_1 s< i)
                                int64_t rax_7 = *r9_2
                                
                                if (not((*(*(rax_7 + (rdx_2 << 3) + 8) + 0x10)).d f>=
                                        *(*(rax_7 + (rdx_2 << 3)) + 0x10)))
                                    r8 = zx.q(r10_1)
                                    rdx_2 += 1
                            
                            int64_t rcx_4 = *r9_2
                            i_1 = r8.d
                            r8 = zx.q(((r8 << 1) + 1).d)
                            *(rcx_4 + (rdi_2 << 3)) = *(rcx_4 + (rdx_2 << 3))
                            rdi_2 = rdx_2
                            i = *(r9_2 + 0xc)
                            rdx_2 = (rdx_2 << 1) + 1
                        while (r8.d s< i)
                    
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(i_1 - 1)
                    int32_t i_3 = (temp1_1 - temp0_1) s>> 1
                    int128_t zmm0
                    
                    if (i_1 s> 0)
                        zmm0 = *(rsi_1 + 0x10)
                        
                        do
                            int64_t rdx_4 = *r9_2
                            void* r8_1 = *(rdx_4 + (sx.q(i_3) << 3))
                            
                            if (zmm0.d f>= *(r8_1 + 0x10))
                                break
                            
                            int64_t i_4 = sx.q(i_1)
                            i_1 = i_3
                            *(rdx_4 + (i_4 << 3)) = r8_1
                            int32_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = sx.q(i_3 - 1)
                            i_3 = (temp3_1 - temp2_1) s>> 1
                        while (i_1 s> 0)
                    
                    *(*r9_2 + (sx.q(i_1) << 3)) = rsi_1
                    int32_t r8_3 = rbp_1[5] & 0xbfffffff
                    int32_t* r13_1 = *(rbp_1 + 0x18)
                    rbp_1[5] = r8_3 | 0x80000000
                    
                    if (r13_1 == arg1[6])
                        r15 = arg3
                        arg1[3] = rbp_1
                        *(arg1 + 0x13) = 0x40
                        goto label_142618dbe
                    
                    void* rdx_6 = *arg1
                    
                    if (r13_1 == 0)
                    label_142618e5e:
                        result = -0x80000000
                        arg1[2].d = 0x80000000
                        
                        if (arg3 == 0)
                            goto label_142618e27
                        
                        break
                    
                    char rsi_2 = (*(rdx_6 + 0x9c)).b
                    char r11_1 = (*(rdx_6 + 0xa0)).b
                    int32_t r14_2 = *(rdx_6 + 0x30)
                    int32_t rdi_3 = (1 << rsi_2).d
                    int32_t r10_3 = ((1 << r11_1).d - 1) & r13_1.d
                    int32_t r9_5 = (r13_1 u>> r11_1).d & (rdi_3 - 1)
                    
                    if (r9_5 u>= r14_2)
                        goto label_142618e5e
                    
                    int64_t r15_1 = *(rdx_6 + 0x90)
                    char rsi_3 = rsi_2 + r11_1
                    char r12_1 = (*(rdx_6 + 0x98)).b
                    int32_t* r9_7 = zx.q(r9_5) * 0xb0 + r15_1
                    
                    if (*r9_7 != (((1 << r12_1).d - 1) & (r13_1 u>> rsi_3).d))
                        goto label_142618e5e
                    
                    void* rax_23 = *(r9_7 + 8)
                    
                    if (rax_23 == 0 || r10_3 u>= *(rax_23 + 0x18))
                        goto label_142618e5e
                    
                    int32_t* r13_4 = (zx.q(r10_3) << 5) + *(r9_7 + 0x10)
                    int64_t r9_8 = 0
                    int64_t var_c8_1 = 0
                    int32_t* var_b0_1 = nullptr
                    int32_t* var_b8_1 = nullptr
                    int32_t r8_4 = r8_3 & 0x3fffffff
                    
                    if (r8_4 != 0)
                        r9_8 = *((zx.q(r8_4 - 1) << 5) + *arg1[0xd] + 0x18)
                        var_c8_1 = r9_8
                        
                        if (r9_8 != 0)
                            int32_t r8_6 = r9_8.d & ((1 << r11_1).d - 1)
                            int32_t rdx_15 = (r9_8 u>> r11_1).d & (rdi_3 - 1)
                            
                            if (rdx_15 u>= r14_2)
                            label_142618e3d:
                                result = -0x80000000
                                arg1[2].d = 0x80000000
                                
                                if (arg3 == 0)
                                    goto label_142618e27
                                
                                *arg3 = r14_1
                                goto label_142618dc6
                            
                            int32_t* r10_5 = zx.q(rdx_15) * 0xb0 + r15_1
                            var_b0_1 = r10_5
                            
                            if (*r10_5 != ((r9_8 u>> rsi_3).d & ((1 << r12_1).d - 1)))
                                goto label_142618e3d
                            
                            void* rax_29 = *(r10_5 + 8)
                            
                            if (rax_29 == 0 || r8_6 u>= *(rax_29 + 0x18))
                                goto label_142618e3d
                            
                            var_b8_1 = (zx.q(r8_6) << 5) + *(r10_5 + 0x10)
                    
                    int32_t i_2 = *r13_4
                    
                    while (i_2 != 0xffffffff)
                        int32_t rcx_14 = *(*(r9_7 + 8) + 0x20)
                        int64_t* rax_36
                        
                        if (i_2 u>= rcx_14)
                            rax_36 = (sx.q(i_2 - rcx_14) << 4) + *(r9_7 + 0x80)
                        else
                            rax_36 = (zx.q(i_2) << 4) + *(r9_7 + 0x20)
                        
                        int32_t* rbp_4 = *rax_36
                        i_2 = rax_36[1].d
                        
                        if (rbp_4 != 0 && rbp_4 != r9_8)
                            char rcx_15 = *(rax_36 + 0xd)
                            uint32_t rcx_17
                            
                            if ((rcx_15 & 0x60) == 0x40)
                                rcx_17 = zx.d(rcx_15) u>> 4
                                
                                if (*(arg1[0xb] + 0x214) == 0)
                                    rcx_17 = not.d(rcx_17)
                            
                            if ((rcx_15 & 0x60) != 0x40 || (rcx_17 & 1) != 0)
                                void* r8_7 = *arg1
                                char r9_9 = (*(r8_7 + 0xa0)).b
                                int64_t* rcx_21 = arg1[0xb]
                                float* r14_4 = (((1 << (*(r8_7 + 0x9c)).b) - 1)
                                    & zx.q((rbp_4 u>> r9_9).d)) * 0xb0 + *(r8_7 + 0x90)
                                int32_t* rdi_6 = ((zx.q((1 << r9_9).d - 1) & zx.q(rbp_4.d)) << 5)
                                    + *(r14_4 + 0x10)
                                int32_t* var_128
                                int32_t* var_120
                                int32_t* var_118
                                float* var_110
                                int32_t* var_108
                                int32_t* var_100
                                float* var_f8
                                int32_t* var_f0
                                
                                if (rcx_21[0x43].b != 0)
                                    if ((*(*rcx_21 + 8))(rcx_21, rbp_4, r14_4, rdi_6, var_128, 
                                        var_120, var_118, var_110, var_108, var_100, var_f8, 
                                        var_f0, rax_5, rbp_1, arg3, r13_1, var_c8_1, arg2, 
                                        var_b8_1, var_b0_1, r9_7) != 0)
                                    label_142618902:
                                        
                                        if (sub_142613610(arg1, r14_4, rbp_4.d) != 0)
                                            int32_t* rax_53 = sub_14260fcd0(arg1[0xd], rbp_4)
                                            
                                            if (rax_53 == 0)
                                                arg1[2].d |= 0x20
                                            else if (rax_5 == 0 || rax_53[5] s>= 0)
                                                int64_t var_a0
                                                var_110 = &var_a0
                                                var_118 = r14_4
                                                var_120 = rdi_6
                                                var_128 = rbp_4
                                                var_a0 = 0
                                                int32_t var_98_1 = 0
                                                zmm0 = sub_14260f6f0(arg1, r13_1, r13_4, r9_7, 
                                                    var_128, var_120, var_118, var_110)
                                                int64_t* rcx_25 = arg1[0xb]
                                                float* r8_13
                                                float zmm3_1
                                                float zmm1_1
                                                float zmm2_1
                                                float zmm4_1
                                                float zmm5_1
                                                
                                                if (rbp_4 == arg1[6])
                                                    if (rcx_25[0x43].b != 0)
                                                        int64_t rax_66 = *rcx_25
                                                        var_f0 = rdi_6
                                                        var_f8 = r14_4
                                                        var_100 = rbp_4
                                                        var_108 = r13_4
                                                        var_110 = r9_7
                                                        var_118 = r13_1
                                                        var_120 = var_b8_1
                                                        var_128 = var_b0_1
                                                        (*(rax_66 + 0x10))(rcx_25, rbp_1, &var_a0, 
                                                            var_c8_1, var_128, var_120, var_118, 
                                                            var_110, var_108, var_100, var_f8, 
                                                            var_f0, rax_5, rbp_1, arg3, r13_1, 
                                                            var_c8_1, arg2, var_b8_1, var_b0_1, 
                                                            r9_7)
                                                        rcx_25 = arg1[0xb]
                                                        zmm6 = zmm0
                                                        zmm7 = var_98_1
                                                        zmm5_1 = var_a0:4.d
                                                        zmm4_1 = var_a0.d
                                                    else
                                                        char rdx_31 = *(r13_4 + 0x1f)
                                                        char r8_14
                                                        
                                                        if (rdi_6 != 0)
                                                            r8_14 = *(rdi_6 + 0x1f)
                                                        
                                                        if (rdi_6 == 0
                                                                || ((rdx_31 ^ r8_14) & 0x3f) == 0)
                                                            zmm3_1 = (zx.o(0)).d
                                                        else
                                                            zmm3_1 = *(rcx_25
                                                                + ((zx.q(r8_14) & 0x3f) << 2) + 0x108)
                                                        
                                                        zmm4_1 = var_a0.d
                                                        zmm5_1 = var_a0:4.d
                                                        zmm7 = var_98_1
                                                        zmm2_1 = zmm5_1 - rbp_1[1]
                                                        zmm1_1 = zmm4_1 - *rbp_1
                                                        zmm0.d = zmm7.d f- rbp_1[2]
                                                        zmm0.d = zmm0.d f* zmm0.d
                                                        zmm6.d = _mm_sqrt_ss(zx.o(0).d, 
                                                            zmm2_1 * zmm2_1
                                                                + zmm1_1 * zmm1_1 f+ zmm0.d).d f* *(rcx_25
                                                            + ((zx.q(rdx_31) & 0x3f) << 2) + 8)
                                                        zmm6.d = zmm6.d f+ zmm3_1
                                                    
                                                    if (rcx_25[0x43].b != 0)
                                                        int64_t rax_69 = *rcx_25
                                                        __builtin_memset(&var_100, 0, 0x18)
                                                        var_108 = rdi_6
                                                        var_110 = r14_4
                                                        var_118 = rbp_4
                                                        var_120 = r13_4
                                                        var_128 = r9_7
                                                        (*(rax_69 + 0x10))(rcx_25, &var_a0, 
                                                            arg1 + 0x44, r13_1, var_128, var_120, 
                                                            var_118, var_110, var_108, var_100, 
                                                            var_f8, var_f0, rax_5, rbp_1, arg3, 
                                                            r13_1, var_c8_1, arg2, var_b8_1, 
                                                            var_b0_1, r9_7)
                                                    else
                                                        zmm0.d = (*(arg1 + 0x4c)).d f- zmm7.d
                                                        zmm1_1 = *(arg1 + 0x44) - zmm4_1
                                                        zmm2_1 = arg1[9].d f- zmm5_1
                                                        zmm0.d = zmm0.d f* zmm0.d
                                                        zmm0.d = _mm_sqrt_ss(0, 
                                                            zmm2_1 * zmm2_1
                                                                + zmm1_1 * zmm1_1 f+ zmm0.d).d f* *(rcx_25
                                                            + ((zx.q(*(rdi_6 + 0x1f)) & 0x3f) << 2)
                                                            + 8)
                                                    
                                                    r8_13 = rbp_1
                                                    zmm7 = zx.o(0)
                                                    zmm3_1 = zmm6.d + r8_13[3] f+ zmm0.d
                                                else
                                                    if (rcx_25[0x43].b != 0)
                                                        int64_t rax_59 = *rcx_25
                                                        var_f0 = rdi_6
                                                        var_f8 = r14_4
                                                        var_100 = rbp_4
                                                        var_108 = r13_4
                                                        var_110 = r9_7
                                                        var_118 = r13_1
                                                        var_120 = var_b8_1
                                                        var_128 = var_b0_1
                                                        (*(rax_59 + 0x10))(rcx_25, rbp_1, &var_a0, 
                                                            var_c8_1, var_128, var_120, var_118, 
                                                            var_110, var_108, var_100, var_f8, 
                                                            var_f0, rax_5, rbp_1, arg3, r13_1, 
                                                            var_c8_1, arg2, var_b8_1, var_b0_1, 
                                                            r9_7)
                                                        zmm7 = var_98_1
                                                        zmm6 = zmm0
                                                        zmm5_1 = var_a0:4.d
                                                        zmm4_1 = var_a0.d
                                                        r8_13 = rbp_1
                                                    else
                                                        char rdx_26 = *(r13_4 + 0x1f)
                                                        char r8_11
                                                        
                                                        if (rdi_6 != 0)
                                                            r8_11 = *(rdi_6 + 0x1f)
                                                        
                                                        if (rdi_6 == 0
                                                                || ((rdx_26 ^ r8_11) & 0x3f) == 0)
                                                            zmm3_1 = (zx.o(0)).d
                                                        else
                                                            zmm3_1 = *(rcx_25
                                                                + ((zx.q(r8_11) & 0x3f) << 2) + 0x108)
                                                        
                                                        r8_13 = rbp_1
                                                        zmm4_1 = var_a0.d
                                                        zmm5_1 = var_a0:4.d
                                                        zmm7 = var_98_1
                                                        zmm2_1 = zmm5_1 - r8_13[1]
                                                        zmm1_1 = zmm4_1 - *r8_13
                                                        zmm0.d = zmm7.d f- r8_13[2]
                                                        zmm0.d = zmm0.d f* zmm0.d
                                                        zmm6.d = _mm_sqrt_ss(zx.o(0).d, 
                                                            zmm2_1 * zmm2_1
                                                                + zmm1_1 * zmm1_1 f+ zmm0.d).d f* *(rcx_25
                                                            + ((zx.q(rdx_26) & 0x3f) << 2) + 8)
                                                        zmm6.d = zmm6.d f+ zmm3_1
                                                    
                                                    zmm1_1 = *(arg1 + 0x44) - zmm4_1
                                                    zmm2_1 = arg1[9].d f- zmm5_1
                                                    zmm3_1 = zmm6.d + r8_13[3]
                                                    zmm0.d = (*(arg1 + 0x4c)).d f- zmm7.d
                                                    zmm0.d = zmm0.d f* zmm0.d
                                                    zmm7.d = _mm_sqrt_ss(zx.o(0).d, 
                                                        zmm2_1 * zmm2_1 + zmm1_1 * zmm1_1 f+ zmm0.d).d
                                                        f* zmm10.d
                                                int32_t rdx_37 = rax_53[5]
                                                zmm0.d = zmm7.d f+ zmm3_1
                                                uint8_t rax_71 = (rdx_37 u>> 0x1e).b
                                                
                                                if (((rax_71 & 1) == 0 || not(zmm0.d f>= rax_53[4]))
                                                        && ((rax_71 & 2) == 0
                                                        || not(zmm0.d f>= rax_53[4]))
                                                        && not(zmm6.d f== 3.40282347e+38f)
                                                        && not(zmm0.d f> arg1[0xa].d))
                                                    void* rcx_27 = r8_13 - *arg1[0xd]
                                                    rax_53[3] = zmm3_1
                                                    rax_53[4] = zmm0.d
                                                    *(rax_53 + 0x18) = rbp_4
                                                    rax_53[5] = (rdx_37 & 0x40000000)
                                                        | (((rcx_27 s>> 5).d + 1) & 0x3fffffff)
                                                    *rax_53 = var_a0.d.d
                                                    rax_53[1] = var_a0:4.d
                                                    rax_53[2] = var_98_1.d
                                                    int32_t rax_73 = rax_53[5]
                                                    
                                                    if (not(test_bit(rax_73, 0x1e)))
                                                        rax_53[5] = rax_73 | 0x40000000
                                                        sub_142613e10(arg1[0xe], rax_53)
                                                    else
                                                        sub_142612a00(arg1[0xe], rax_53)
                                                    
                                                    if (not(zmm7.d f>= arg1[4].d))
                                                        arg1[4].d = zmm7.d
                                                        arg1[3] = rax_53
                                else
                                    int16_t rax_47 = rdi_6[7].w
                                    
                                    if ((rcx_21[0x42].w & rax_47) != 0
                                            && (*(rcx_21 + 0x212) & rax_47) == 0)
                                        uint64_t rax_49 = zx.q(*(rdi_6 + 0x1f)) & 0x3f
                                        
                                        if (not(3.40282347e+38f f<= *(rcx_21 + (rax_49 << 2) + 8))
                                                && not(3.40282347e+38f f<=
                                                *(rcx_21 + (rax_49 << 2) + 0x108)))
                                            goto label_142618902
                        
                        r9_8 = var_c8_1
                    
                    if (r14_1 s< arg2)
                        continue
                
                r15 = arg3
                goto label_142618db4
            
            *arg3 = r14_1
        
    label_142618dc6:
        result = arg1[2].d

label_142618e27:
__security_check_cookie(rax_1 ^ &var_148)
return result
