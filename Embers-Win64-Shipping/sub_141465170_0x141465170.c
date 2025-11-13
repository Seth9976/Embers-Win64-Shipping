// 函数: sub_141465170
// 地址: 0x141465170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** arg_8 = arg1
int64_t* result = *(arg2 + 8)
int64_t* result_1 = result

if (result != 0)
    void* r13_1 = &result[0x67]
    uint64_t rcx_2 = zx.q((*(r13_1 + 0x1c) + 0x1f) u>> 5)
    int32_t rax_2 = *(*arg1 + 0xdc0)
    *(r13_1 + 0x18) = rax_2
    uint32_t rbx_2 = (rax_2 + 0x1f) u>> 5
    
    if (rbx_2 u<= rcx_2.d)
        void* rax_7 = *(r13_1 + 0x10)
        void* rdi_2 = r13_1
        
        if (rax_7 != 0)
            rdi_2 = rax_7
        
        if (rcx_2.d u> 8)
            memset(rdi_2, 0, zx.q(rcx_2.d) << 2)
        else if (rcx_2.d != 0)
            __builtin_memset(rdi_2, 0, rcx_2 << 2)
    else
        sub_1405a4a00(r13_1, 0, rbx_2, 4)
        void* rsi_1 = r13_1
        *(r13_1 + 0x1c) = rbx_2 << 5
        void* rax_5 = *(r13_1 + 0x10)
        
        if (rax_5 != 0)
            rsi_1 = rax_5
        
        if (rbx_2 u> 8)
            memset(rsi_1, 0, zx.q(rbx_2) << 2)
        else if (rbx_2 != 0)
            __builtin_memset(rsi_1, 0, zx.q(rbx_2) << 2)
        
        uint64_t rdx = zx.q(rbx_2 - 1)
        *(rsi_1 + (rdx << 2)) &= 0xffffffff u>> ((neg.d(*(r13_1 + 0x18))).b & 0x1f)
    
    int32_t rcx_10 = *(*arg1 + 0xdc0)
    *(r13_1 + 0x38) = rcx_10
    uint32_t rbx_4 = (rcx_10 + 0x1f) u>> 5
    uint64_t rcx_13 = zx.q((*(r13_1 + 0x3c) + 0x1f) u>> 5)
    
    if (rbx_4 u<= rcx_13.d)
        void* rax_13 = *(r13_1 + 0x30)
        void* rdi_4 = r13_1 + 0x20
        
        if (rax_13 != 0)
            rdi_4 = rax_13
        
        if (rcx_13.d u> 8)
            memset(rdi_4, 0, zx.q(rcx_13.d) << 2)
        else if (rcx_13.d != 0)
            __builtin_memset(rdi_4, 0, rcx_13 << 2)
    else
        sub_1405a4a00(r13_1 + 0x20, 0, rbx_4, 4)
        void* rsi_2 = r13_1 + 0x20
        *(r13_1 + 0x3c) = rbx_4 << 5
        void* rax_11 = *(r13_1 + 0x30)
        
        if (rax_11 != 0)
            rsi_2 = rax_11
        
        if (rbx_4 u> 8)
            memset(rsi_2, 0, zx.q(rbx_4) << 2)
        else if (rbx_4 != 0)
            __builtin_memset(rsi_2, 0, zx.q(rbx_4) << 2)
        
        uint64_t rdx_1 = zx.q(rbx_4 - 1)
        *(rsi_2 + (rdx_1 << 2)) &= 0xffffffff u>> ((neg.d(*(r13_1 + 0x38))).b & 0x1f)
    
    int32_t rcx_21 = *(*arg1 + 0xdc0)
    *(r13_1 + 0x58) = rcx_21
    uint32_t rbx_6 = (rcx_21 + 0x1f) u>> 5
    uint64_t rcx_24 = zx.q((*(r13_1 + 0x5c) + 0x1f) u>> 5)
    
    if (rbx_6 u<= rcx_24.d)
        void* rax_19 = *(r13_1 + 0x50)
        void* rdi_6 = r13_1 + 0x40
        
        if (rax_19 != 0)
            rdi_6 = rax_19
        
        if (rcx_24.d u> 8)
            memset(rdi_6, 0, zx.q(rcx_24.d) << 2)
        else if (rcx_24.d != 0)
            __builtin_memset(rdi_6, 0, rcx_24 << 2)
    else
        sub_1405a4a00(r13_1 + 0x40, 0, rbx_6, 4)
        void* rsi_3 = r13_1 + 0x40
        *(r13_1 + 0x5c) = rbx_6 << 5
        void* rax_17 = *(r13_1 + 0x50)
        
        if (rax_17 != 0)
            rsi_3 = rax_17
        
        if (rbx_6 u> 8)
            memset(rsi_3, 0, zx.q(rbx_6) << 2)
        else if (rbx_6 != 0)
            __builtin_memset(rsi_3, 0, zx.q(rbx_6) << 2)
        
        uint64_t rdx_2 = zx.q(rbx_6 - 1)
        *(rsi_3 + (rdx_2 << 2)) &= 0xffffffff u>> ((neg.d(*(r13_1 + 0x58))).b & 0x1f)
    
    int32_t rcx_32 = *(*arg1 + 0xdc0)
    *(r13_1 + 0x78) = rcx_32
    uint32_t rbx_8 = (rcx_32 + 0x1f) u>> 5
    uint64_t rcx_35 = zx.q((*(r13_1 + 0x7c) + 0x1f) u>> 5)
    
    if (rbx_8 u<= rcx_35.d)
        void* rax_25 = *(r13_1 + 0x70)
        void* rdi_8 = r13_1 + 0x60
        
        if (rax_25 != 0)
            rdi_8 = rax_25
        
        if (rcx_35.d u> 8)
            memset(rdi_8, 0, zx.q(rcx_35.d) << 2)
        else if (rcx_35.d != 0)
            __builtin_memset(rdi_8, 0, rcx_35 << 2)
    else
        sub_1405a4a00(r13_1 + 0x60, 0, rbx_8, 4)
        void* rsi_4 = r13_1 + 0x60
        *(r13_1 + 0x7c) = rbx_8 << 5
        void* rax_23 = *(r13_1 + 0x70)
        
        if (rax_23 != 0)
            rsi_4 = rax_23
        
        if (rbx_8 u> 8)
            memset(rsi_4, 0, zx.q(rbx_8) << 2)
        else if (rbx_8 != 0)
            __builtin_memset(rsi_4, 0, zx.q(rbx_8) << 2)
        
        uint64_t rdx_3 = zx.q(rbx_8 - 1)
        *(rsi_4 + (rdx_3 << 2)) &= 0xffffffff u>> ((neg.d(*(r13_1 + 0x78))).b & 0x1f)
    
    result = *arg1
    
    if (*(r13_1 + 0x18) == result[0x1b8].d)
        int16_t r14_2 = *(r13_1 + 0x88) + 1
        *(r13_1 + 0x88) = r14_2
        int16_t arg_20 = r14_2
        void* rax_27
        void* r9_1
        rax_27, r9_1 = (*(*result_1 + 0x48))(result_1)
        char arg_18 = 0
        int128_t zmm0 = *(rax_27 + 0x20)
        
        if (not(zmm0.d f== *(r13_1 + 0x80)))
            *(r13_1 + 0x80) = zmm0.d
            arg_18 = 1
            
            if (data_143a30388.d == 0)
                *(r13_1 + 0x84) = 0x3f800000
            else
                zmm0 = sub_141447490(&data_143a30368, (*(arg2 + 0xae4)).d)
                zmm0.d = zmm0.d f* zmm0.d
                *(r13_1 + 0x84) = zmm0.d
        
        int32_t var_134_1 = 1
        int32_t var_138_1 = 0
        int32_t r10_1 = arg1[6].d
        void* r8_21 = &arg1[3]
        void* var_130 = r8_21
        int32_t rcx_45 = 0
        int32_t var_128_1 = 0xffffffff
        int32_t rdi_9 = 0
        int64_t var_124_1 = 0
        
        if (r10_1 != 0)
            void* rax_28 = *(r8_21 + 0x10)
            
            if (rax_28 != 0)
                r8_21 = rax_28
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10_1 - 1)
            int32_t rdx_6 = *r8_21
            int32_t rax_32 = (temp1_1 + (temp0_1 & 0x1f)) s>> 5
            r9_1 = zx.q(rax_32)
            
            if (rdx_6 != 0)
            label_1414655c9:
                int32_t rax_35 = neg.d(rdx_6) & rdx_6
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_35)
                int32_t var_134_2 = rax_35
                int32_t rax_36
                
                if (rax_35 == 0)
                    rax_36 = 0x20
                else
                    rax_36 = 0x1f - temp0_2
                
                var_124_1.d = rdi_9 - rax_36 + 0x1f
                
                if (rdi_9 - rax_36 + 0x1f s> r10_1)
                    var_124_1.d = r10_1
            else
                while (true)
                    int64_t rdx_7 = sx.q(rcx_45)
                    rdi_9 += 0x20
                    rcx_45 += 1
                    var_124_1:4.d = rdi_9
                    var_138_1 = rcx_45
                    
                    if (rdx_7.d s>= rax_32)
                        break
                    
                    rdx_6 = *(r8_21 + (rdx_7 << 2) + 4)
                    var_128_1 = 0xffffffff
                    
                    if (rdx_6 != 0)
                        goto label_1414655c9
                
                var_124_1.d = r10_1
        
        void* var_c8_1 = &arg1[1]
        zmm0 = var_138_1.o
        int128_t var_d8_1 = 0xffffffff
        int16_t var_100_1 = 0
        result = zmm0.q
        var_128_1.o = zmm0
        var_138_1.o = (&arg1[1]).o
        zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int128_t var_118_1 = zmm0
        
        if (0 s< result[3].d)
            int32_t i_1
            int32_t i = i_1
            int128_t zmm6
            int128_t var_58_1 = zmm6
            int128_t zmm7
            int128_t var_68_1 = zmm7
            int128_t zmm8
            int128_t var_78_1 = zmm8
            uint32_t zmm9[0x4]
            uint32_t var_88_1[0x4] = zmm9
            
            do
                int64_t rdx_8 = sx.q(i) * 5
                int64_t rax_41 = *var_138_1.q + 8
                void* rbx_9 = *(rax_41 + (rdx_8 << 3) + 0x10)
                int64_t* rax_42 = rax_41 + (rdx_8 << 3)
                
                if (rbx_9 != 0)
                    int32_t rdx_9 = *(rbx_9 + 0x10)
                    
                    if (rdx_9 != 0 && ((*(rbx_9 + 0x110) + 1) & 0x7fffffff) != 0)
                        int16_t* rax_45
                        void* r8_23
                        rax_45, r8_23 = sub_141438000(&result[0x79], rdx_9, rbx_9 + 0x10, r9_1)
                        
                        if (*rax_45 != r14_2 && *(rbx_9 + 0x40) s> 0)
                            int64_t r14_3 = sx.q(*(rbx_9 + 0x110))
                            
                            if (r14_3.d s>= 0)
                                void** r10_2 = arg_8
                                void* rax_46 = *r10_2
                                
                                if (r14_3.d s< *(rax_46 + 0xdf0))
                                    void* rdx_10 = *(rax_46 + 0xde8)
                                    int64_t rcx_48 = r14_3 * 5
                                    void* r11_2 = arg2
                                    uint32_t zmm2[0x4] = zx.o(0)
                                    int128_t zmm3 = *(rdx_10 + (rcx_48 << 3))
                                    float zmm5_1 = *(rdx_10 + (rcx_48 << 3) + 4)
                                    zmm7 = *(rdx_10 + (rcx_48 << 3) + 8)
                                    zmm9 = *(rdx_10 + (rcx_48 << 3) + 0x1c)
                                    zmm6.d = zmm3.d f- *(rdx_10 + (rcx_48 << 3) + 0xc)
                                    float zmm4_1 = zmm5_1 f- *(rdx_10 + (rcx_48 << 3) + 0x10)
                                    zmm8.d = zmm7.d f- *(rdx_10 + (rcx_48 << 3) + 0x14)
                                    zmm3.d = zmm3.d f+ *(rdx_10 + (rcx_48 << 3) + 0xc)
                                    zmm5_1 = zmm5_1 f+ *(rdx_10 + (rcx_48 << 3) + 0x10)
                                    zmm7.d = zmm7.d f+ *(rdx_10 + (rcx_48 << 3) + 0x14)
                                    bool cond:2_1 =
                                        _mm_and_ps(zmm9, 0x7fffffff)[0] f<= 9.99999994e-09f
                                    uint32_t zmm0_1[0x4] = *(r11_2 + 0x60c)
                                    r8_23.b = cond:2_1
                                    
                                    if (not(zmm0_1[0] f>= zmm6.d))
                                        zmm2 = zmm0_1
                                        zmm2[0] = zmm2[0] f- zmm6.d
                                        zmm2[0] = zmm2[0] f* zmm2[0]
                                    else if (not(zmm0_1[0] f<= zmm3.d))
                                        zmm2 = zmm0_1
                                        zmm2[0] = zmm2[0] f- zmm3.d
                                        zmm2[0] = zmm2[0] f* zmm2[0]
                                    
                                    zmm0_1 = *(r11_2 + 0x610)
                                    
                                    if (not(zmm0_1[0] f>= zmm4_1))
                                        zmm0_1[0] = zmm0_1[0] f- zmm4_1
                                        zmm0_1[0] = zmm0_1[0] f* zmm0_1[0]
                                        zmm2[0] = zmm2[0] f+ zmm0_1[0]
                                    else if (not(zmm0_1[0] f<= zmm5_1))
                                        zmm0_1[0] = zmm0_1[0] f- zmm5_1
                                        zmm0_1[0] = zmm0_1[0] f* zmm0_1[0]
                                        zmm2[0] = zmm2[0] f+ zmm0_1[0]
                                    
                                    zmm0_1 = *(r11_2 + 0x614)
                                    
                                    if (not(zmm0_1[0] f>= zmm8.d))
                                        zmm0_1[0] = zmm0_1[0] f- zmm8.d
                                        zmm0_1[0] = zmm0_1[0] f* zmm0_1[0]
                                        zmm2[0] = zmm2[0] f+ zmm0_1[0]
                                    else if (not(zmm0_1[0] f<= zmm7.d))
                                        zmm0_1[0] = zmm0_1[0] f- zmm7.d
                                        zmm0_1[0] = zmm0_1[0] f* zmm0_1[0]
                                        zmm2[0] = zmm2[0] f+ zmm0_1[0]
                                    
                                    float zmm1_1 = *(r13_1 + 0x84)
                                    zmm0_1 = *(rdx_10 + (rcx_48 << 3) + 0x20)
                                    zmm0_1[0] = zmm0_1[0] f* zmm0_1[0]
                                    zmm0_1[0] = zmm0_1[0] f* zmm1_1
                                    void* r12
                                    r12.b = zmm2[0] f> zmm0_1[0]
                                    
                                    if (zmm2[0] f< zmm1_1 f* zmm9[0] || r12.b != 0)
                                        rdx_10.b = 0
                                    else
                                        rdx_10.b = 1
                                    
                                    uint16_t rdi_11 = rax_45[1]
                                    uint16_t rcx_49 = rdi_11 u>> 2
                                    void* r9_2
                                    r9_2.b = rcx_49.b & 1
                                    
                                    if ((*(*(rbx_9 + 0x38) + 0x11) & 1) == 0 || r8_23.b != 0)
                                        int16_t rax_50
                                        
                                        if (rdx_10.b != 0 || r8_23.b != 0)
                                            rax_50 = 2
                                        else
                                            rax_50 = 0
                                        
                                        rdi_11 = (((rdi_11 ^ ((rdi_11 u>> 1 ^ rdi_11) & 1))
                                            & 0xfffd) | rax_50) & 0xfffb
                                        rax_45[1] = rdi_11
                                    else if (arg_18 != r8_23.b)
                                        rdx_10 = zx.q(rdx_10.b)
                                        r8_23.w = rdi_11 & 1
                                        uint16_t rax_48
                                        
                                        if ((rcx_49.b & 1) == 0)
                                            rax_48 = rdi_11
                                            
                                            if (rdx_10.w != r8_23.w)
                                                rax_48 |= 4
                                        else
                                            rax_48 = rdi_11 & 0xfffb
                                        
                                        rdx_10.w *= 2
                                        rdi_11 = (rax_48 u>> 1 & 1) | (rax_48 & 0xfffc) | rdx_10.w
                                        rax_45[1] = rdi_11
                                    
                                    if (((rdi_11.b u>> 1 ^ rdi_11.b) & 1) != 0 || r9_2.b != 0
                                            || (rdi_11.b & 4) != 0)
                                        int64_t* j = *(rbx_9 + 0xe0)
                                        
                                        if (j != 0)
                                            do
                                                rdx_10, r8_23, r9_2 =
                                                    sub_14141ef80(j, rdx_10, r8_23)
                                                j = j[5]
                                            while (j != 0)
                                            
                                            rdi_11 = rax_45[1]
                                            r10_2 = arg_8
                                            r11_2 = arg2
                                    
                                    if ((rdi_11.b & 2) == 0 && r14_3.d s< *(r11_2 + 0x1660))
                                        int64_t* r15_3 = (r14_3 << 4) + *(r11_2 + 0x1658)
                                        *r15_3 = 0
                                        r15_3[1] = 0
                                        r15_3[1].d |= 0x8000
                                        rdi_11 = rax_45[1]
                                    
                                    int32_t temp2_1
                                    int32_t temp3_1
                                    temp2_1:temp3_1 = sx.q(r14_3.d)
                                    int32_t rdx_13 = 1 << (r14_3.b & 0x1f)
                                    int64_t r8_24 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                    
                                    if ((rdi_11.b & 4) != 0)
                                        void* rax_56 = *(r13_1 + 0x10)
                                        void* rdi_12 = r13_1 + 0x20
                                        void* rcx_52 = r13_1
                                        
                                        if (rax_56 != 0)
                                            rcx_52 = rax_56
                                        
                                        *(rcx_52 + (r8_24 << 2)) |= rdx_13
                                        void* rax_57 = *(r13_1 + 0x30)
                                        
                                        if (rax_57 != 0)
                                            rdi_12 = rax_57
                                        
                                        int32_t rcx_53 = *(rdi_12 + (r8_24 << 2))
                                        int32_t rcx_54
                                        
                                        if ((not.b(rax_45[1].b u>> 1) & 1) == 0)
                                            rcx_54 = rcx_53 & not.d(rdx_13)
                                        else
                                            rcx_54 = rcx_53 | rdx_13
                                        
                                        *(rdi_12 + (r8_24 << 2)) = rcx_54
                                        void* rax_61 = *(r13_1 + 0x50)
                                        void* rcx_55 = r13_1 + 0x40
                                        
                                        if (rax_61 != 0)
                                            rcx_55 = rax_61
                                        
                                        *(rcx_55 + (r8_24 << 2)) |= rdx_13
                                        sub_141447140(r10_2, result_1, rax_42, rax_45, 1, 
                                            rax_45[1].b u>> 1 & 1)
                                    else if ((rdi_11.b & 2) == 0)
                                        void* rax_64 = *(r13_1 + 0x70)
                                        void* rcx_58 = r13_1 + 0x60
                                        
                                        if (rax_64 != 0)
                                            rcx_58 = rax_64
                                        
                                        *(rcx_58 + (r8_24 << 2)) |= rdx_13
                                        
                                        if (r12.b != 0)
                                            sub_141458670(r10_2, result_1, rax_42, r9_2)
                                    else
                                        void* rax_63 = *(r13_1 + 0x50)
                                        void* rcx_57 = r13_1 + 0x40
                                        
                                        if (rax_63 != 0)
                                            rcx_57 = rax_63
                                        
                                        *(rcx_57 + (r8_24 << 2)) |= rdx_13
                                        sub_141458670(r10_2, result_1, rax_42, r9_2)
                            
                            r14_2 = arg_20
                
                var_124_1:4.d &= not.d(var_130:4.d)
                r9_1 = sub_14059bdd0(&var_130)
                result = var_128_1.q
                i = i_1
            while (i s< result[3].d)
            
            if (var_100_1.b != 0 && var_100_1:1.b != 0)
                return sub_1408df340(&arg1[1], arg1[2].d - *(arg1 + 0x3c), 1)

return result
