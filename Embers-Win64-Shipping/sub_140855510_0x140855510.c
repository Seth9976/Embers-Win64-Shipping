// 函数: sub_140855510
// 地址: 0x140855510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x6b8) &= 0xffffffbf
uint64_t result = *(arg1 + 0x28)

if (result != 0 && *(result + 0x408) != 0 && *(arg1 + 0x6e8) != 4)
    if (*(arg1 + 0x6bc) != 0)
        int64_t rdx
        rdx.b = 1
        sub_1408622c0(arg1)
        sub_14084fd50(arg1)
    
    void* rbx_2 = *(arg1 + 0x28) + 0x418
    
    if (*(rbx_2 + 0x58) - *(rbx_2 + 0x84) s> 0 && (*(rbx_2 + 0xb0) & 7) != 0)
        sub_14083f210(rbx_2)
    
    *(rbx_2 + 0xb0) &= 0xfffffff8
    sub_14084dbf0(arg1)
    int32_t r12_1 = 0
    void* r13_1 = arg1 + 0x100
    *(arg1 + 0x724) = 0
    int32_t arg_8 = 0
    sub_14084f020(r13_1, 0)
    void* var_128 = arg1
    int32_t* var_120_1 = &arg_8
    sub_1408484f0(&var_128, arg1 + 0x180)
    void* rdx_2 = *(arg1 + 0x18)
    
    if (((*(rdx_2 + 0xd68) u>> 3).b & 1) != 0)
        sub_1408484f0(&var_128, rdx_2 + 0x4a8)
        void* rax_5 = *(arg1 + 0x18)
        *(rax_5 + 0x528) |= 2
        sub_1408484f0(&var_128, *(arg1 + 0x18) + 0x810)
        void* rax_6 = *(arg1 + 0x18)
        *(rax_6 + 0x890) |= 2
    
    void** r14_1 = *(arg1 + 0xa0)
    void* rbx_5 = &r14_1[sx.q(*(arg1 + 0xa8)) * 2]
    void** var_e8_1 = r14_1
    
    if (r14_1 != rbx_5)
        void* rax_7 = rbx_5
        
        do
            int64_t* rbx_7 = r14_1[1]
            void* r15_1 = *r14_1
            void* var_d0_1 = r15_1
            int32_t* rsi_1 = &rbx_7[1]
            int32_t* var_f0_1 = rsi_1
            
            if (rbx_7 == 0)
                var_f0_1 = rsi_1
            else
                *rsi_1 += 1
            
            if (*(r15_1 + 0x24) != 4)
                sub_1408484f0(&var_128, r15_1 + 0xb0)
                sub_1408484f0(&var_128, r15_1 + 0x418)
                int32_t i = 0
                int32_t i_1 = 0
                
                if (*(r15_1 + 0x738) s> 0)
                    int64_t rdx_8 = 0
                    int64_t var_f8_1 = 0
                    
                    do
                        int64_t rax_8 = *(r15_1 + 0x730)
                        int64_t r14_2 = 0
                        int64_t* rsi_2 = *(rax_8 + rdx_8 + 0x58)
                        uint64_t r13_3 = sx.q(*(rax_8 + rdx_8 + 0x60)) << 3 u>> 3
                        
                        if (rsi_2 u> &rsi_2[sx.q(*(rax_8 + rdx_8 + 0x60))])
                            r13_3 = 0
                        
                        if (r13_3 != 0)
                            do
                                int64_t* rbx_6 = *rsi_2
                                
                                if (rbx_6 != 0)
                                    int32_t rax_12 = (*(*rbx_6 + 0x2c0))(rbx_6)
                                    
                                    if (rax_12 != 0)
                                        int64_t var_e0
                                        sub_140d3a3a0(&var_e0, rbx_6)
                                        int32_t arg_18
                                        sub_1408506d0(arg1 + 0x100, &arg_18, var_e0)
                                        int64_t rcx_12 = sx.q(arg_18)
                                        int64_t rdx_11
                                        
                                        if (rcx_12.d == 0xffffffff)
                                            rdx_11 = 0
                                        else
                                            rdx_11 = *(arg1 + 0x100) + rcx_12 * 0x14
                                        
                                        int64_t rax_14 = rdx_11 + 8
                                        
                                        if (rdx_11 == 0)
                                            rax_14 = 0
                                        
                                        if (rax_14 == 0)
                                            void var_d8
                                            sub_140d3a3a0(&var_d8, rbx_6)
                                            int32_t* rax_15 = sub_140841880(arg1 + 0x100, &var_d8)
                                            *rax_15 = arg_8
                                            arg_8 += (rax_12 + 0xf) & 0xfffffff0
                                    
                                    if ((*(arg1 + 0x6b8) & 0x40) == 0)
                                        char rax_19 = (*(*rbx_6 + 0x300))(rbx_6)
                                        *(arg1 + 0x6b8) &= 0xffffffbf
                                        *(arg1 + 0x6b8) |= (zx.d(rax_19) & 1) << 6
                                
                                rsi_2 = &rsi_2[1]
                                r14_2 += 1
                            while (r14_2 != r13_3)
                            
                            r15_1 = var_d0_1
                            i = i_1
                            rdx_8 = var_f8_1
                        
                        i += 1
                        rdx_8 += 0x368
                        i_1 = i
                        var_f8_1 = rdx_8
                    while (i s< *(r15_1 + 0x738))
                    
                    rsi_1 = var_f0_1
                    r14_1 = var_e8_1
                
                void* rax_23 = *(r15_1 + 0x788)
                
                if (rax_23 != 0 && *(rax_23 + 0xd8) == 1 && (*(rax_23 + 0x1a8) & 1) != 0)
                    void* rdx_14 = *(r15_1 + 0x728)
                    
                    if (rdx_14 != 0)
                        sub_1408484f0(&var_128, rdx_14 + 0x88)
                
                sub_1407ebc50(r15_1)
                
                if (rbx_7 != 0)
                    goto label_140855890
                
                rax_7 = rbx_5
            else if (rbx_7 != 0)
            label_140855890:
                int32_t rax_24 = *rsi_1
                *rsi_1 -= 1
                
                if (rax_24 == 1)
                    (**rbx_7)(rbx_7)
                    int32_t rax_26 = *(rbx_7 + 0xc)
                    *(rbx_7 + 0xc) -= 1
                    
                    if (rax_26 == 1)
                        (*(*rbx_7 + 8))(rbx_7, 1)
                
                rax_7 = rbx_5
            
            r14_1 = &r14_1[2]
            var_e8_1 = r14_1
        while (r14_1 != rax_7)
        
        r13_1 = arg1 + 0x100
    
    int32_t rcx_22 = arg_8
    int32_t rax_28 = *(arg1 + 0xf8)
    
    if (rcx_22 s> rax_28)
        *(arg1 + 0xf8) = rcx_22
        
        if (rcx_22 s> *(arg1 + 0xfc))
            sub_14085a250(arg1 + 0xf0)
    else if (rcx_22 s< rax_28 && rax_28 != rcx_22)
        *(arg1 + 0xf8) = rcx_22
        sub_14085a6a0(arg1 + 0xf0)
    
    *(arg1 + 0x6b8) |= 0x200
    int32_t r10_1 = *(r13_1 + 0x28)
    int32_t rcx_25 = 0
    int32_t var_118_1 = 0
    int32_t var_114_1 = 1
    void* var_110_1 = r13_1 + 0x10
    int32_t var_108_1 = 0xffffffff
    int32_t var_104_1 = 0
    int32_t var_100_1 = 0
    
    if (r10_1 != 0)
        void* rax_30 = *(r13_1 + 0x20)
        void* r8_2 = r13_1 + 0x10
        
        if (rax_30 != 0)
            r8_2 = rax_30
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_21 = *r8_2
        int32_t var_104_3
        
        if (rdx_21 != 0)
        label_1408559ab:
            int32_t rax_37 = neg.d(rdx_21) & rdx_21
            uint64_t rflags_1
            int32_t temp0_3
            temp0_3, rflags_1 = _bit_scan_reverse(rax_37)
            int32_t var_114_2 = rax_37
            int32_t rax_38
            
            if (rax_37 == 0)
                rax_38 = 0x20
            else
                rax_38 = 0x1f - temp0_3
            
            int32_t var_104_2 = rcx_25 - rax_38 + 0x1f
            
            if (rcx_25 - rax_38 + 0x1f s> r10_1)
                var_104_3 = r10_1
        else
            while (true)
                int64_t rdx_22 = sx.q(r12_1)
                rcx_25 += 0x20
                r12_1 += 1
                int32_t var_100_2 = rcx_25
                var_118_1 = r12_1
                
                if (rdx_22.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_21 = *(r8_2 + (rdx_22 << 2) + 4)
                int32_t var_108_2 = 0xffffffff
                
                if (rdx_21 != 0)
                    goto label_1408559ab
            
            var_104_3 = r10_1
    
    int32_t rdx_24 = *(r13_1 + 0x28)
    int128_t var_70_1 = var_118_1.o
    int32_t r12_2 = 0xffffffff << (rdx_24.b & 0x1f)
    int32_t r8_4 = rdx_24 s>> 5
    int32_t r9_2 = rdx_24 & 0xffffffe0
    int32_t var_88_1 = r12_2
    int32_t var_84_1 = rdx_24
    int128_t var_60_1 = 0xffffffff
    int64_t var_a0_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_c0 = r13_1.o
    int128_t var_b0_1 = var_70_1
    
    if (rdx_24 != r10_1)
        void* rax_40 = *(r13_1 + 0x20)
        void* r10_2 = r13_1 + 0x10
        
        if (rax_40 != 0)
            r10_2 = rax_40
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r10_1 - 1)
        int32_t rdx_28 = *(r10_2 + (sx.q(r8_4) << 2)) & r12_2
        int32_t var_84_3
        
        if (rdx_28 != 0)
        label_140855a82:
            int32_t rax_47 = neg.d(rdx_28) & rdx_28
            uint64_t rflags_2
            int32_t temp0_5
            temp0_5, rflags_2 = _bit_scan_reverse(rax_47)
            int32_t rbx_8
            
            if (rax_47 == 0)
                rbx_8 = 0x20
            else
                rbx_8 = 0x1f - temp0_5
            
            int32_t var_84_2 = r9_2 - rbx_8 + 0x1f
            
            if (r9_2 - rbx_8 + 0x1f s> r10_1)
                var_84_3 = r10_1
        else
            while (true)
                int64_t rcx_30 = sx.q(r8_4)
                r9_2 += 0x20
                r8_4 += 1
                
                if (rcx_30.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_28 = *(r10_2 + (rcx_30 << 2) + 4)
                var_88_1 = 0xffffffff
                
                if (rdx_28 != 0)
                    goto label_140855a82
            
            var_84_3 = r10_1
    
    while (true)
        result = sx.q(var_b0_1:0xc.d)
        int64_t* rdx_29 = var_c0.q
        
        if (result.d == (var_88_1.q u>> 0x20).d && var_b0_1.q == r13_1 + 0x10 && rdx_29 == r13_1)
            break
        
        int32_t* rbx_9 = *rdx_29 + result * 0x14
        
        if (sub_140d3c6e0(rbx_9) == 0)
            *(arg1 + 0x6b8) &= 0xfffffdff
        else
            int64_t* rax_51 = sub_140d3c6e0(rbx_9)
            int64_t rdx_30 = *rax_51
            int32_t rax_52 = (*(rdx_30 + 0x2b8))(rax_51, rdx_30)
            *(arg1 + 0x724) += rax_52
            int64_t* rax_53 = sub_140d3c6e0(rbx_9)
            int64_t r9_4 = *rax_53
            int32_t rcx_40 =
                zx.d((*(r9_4 + 0x288))(rax_53, sx.q(rbx_9[2]) + *(arg1 + 0xf0), arg1, r9_4)) << 9
                | 0xfffffdff
            *(arg1 + 0x6b8) &= rcx_40
        
        var_b0_1:8.d &= not.d(var_c0:0xc.d)
        sub_14059bdd0(&var_c0:8)
    
    int32_t rcx_42 = *(arg1 + 0x6b8)
    
    if (not(test_bit(rcx_42, 9)))
        result = zx.q(*(arg1 + 0x6e8) - 3)
        
        if (result.d u> 1 && ((rcx_42 u>> 2).b & 1) == 0)
            return sub_14084b160(arg1)

return result
