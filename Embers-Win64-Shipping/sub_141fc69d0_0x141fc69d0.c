// 函数: sub_141fc69d0
// 地址: 0x141fc69d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0

if (*(arg1 + 0x98) s> 0)
    void* rcx = **(arg1 + 0x90)
    
    if (rcx != 0 && *(rcx + 0x134) != 1)
        int32_t r8 = 0
        int32_t var_d4 = 1
        int32_t r10 = *(rcx + 0x1398)
        void* r9 = rcx + 0x1380
        void* var_d0 = r9
        int32_t rcx_1 = 0
        int32_t var_d8 = 0
        int32_t var_c8 = 0xffffffff
        int64_t var_c4 = 0
        
        if (r10 != 0)
            void* rax_2 = *(r9 + 0x10)
            
            if (rax_2 != 0)
                r9 = rax_2
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10 - 1)
            int32_t rdx_2 = *r9
            
            if (rdx_2 != 0)
            label_141fc6aa8:
                int32_t rax_9 = neg.d(rdx_2) & rdx_2
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
                int32_t var_d4_1 = rax_9
                int32_t rax_10
                
                if (rax_9 == 0)
                    rax_10 = 0x20
                else
                    rax_10 = 0x1f - temp0_2
                
                var_c4.d = r8 - rax_10 + 0x1f
                
                if (r8 - rax_10 + 0x1f s> r10)
                    var_c4.d = r10
            else
                while (true)
                    int64_t rdx_3 = sx.q(rcx_1)
                    r8 += 0x20
                    rcx_1 += 1
                    var_c4:4.d = r8
                    var_d8 = rcx_1
                    
                    if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_2 = *(r9 + (rdx_3 << 2) + 4)
                    int32_t var_c8_1 = 0xffffffff
                    
                    if (rdx_2 != 0)
                        goto label_141fc6aa8
                
                var_c4.d = r10
        
        int64_t var_a0 = 0xffffffff
        double var_b0[0x2] = var_d8.o
        double zmm1[0x2] = var_b0
        double var_68[0x2] = (rcx + 0x1370).o
        int64_t var_48 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        
        if (0 s>= r10)
            return arg2
        
        int32_t i = zmm1[1]:4.d
        
        do
            void* rax_14 = *(*var_68[0] + sx.q(i) * 0x18 + 8)
            
            if (rax_14 != 0)
                void* rsi_1 = rax_14 + 0xa8
                int32_t var_d4_2 = 1
                int32_t r10_1 = *(rsi_1 + 0x28)
                void* rbx_1 = rsi_1 + 0x10
                void* arg_8 = rsi_1
                int32_t rcx_4 = 0
                int32_t var_d8_1 = 0
                int32_t r8_2 = 0
                void* var_d0_1 = rbx_1
                int32_t var_c8_2 = 0xffffffff
                int64_t var_c4_1 = 0
                
                if (r10_1 != 0)
                    void* rax_15 = *(rbx_1 + 0x10)
                    void* r9_1 = rbx_1
                    
                    if (rax_15 != 0)
                        r9_1 = rax_15
                    
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(r10_1 - 1)
                    int32_t rdx_7 = *r9_1
                    
                    if (rdx_7 != 0)
                    label_141fc6be8:
                        int32_t rax_22 = neg.d(rdx_7) & rdx_7
                        uint64_t rflags_2
                        int32_t temp0_4
                        temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
                        int32_t var_d4_3 = rax_22
                        int32_t rax_23
                        
                        if (rax_22 == 0)
                            rax_23 = 0x20
                        else
                            rax_23 = 0x1f - temp0_4
                        
                        var_c4_1.d = r8_2 - rax_23 + 0x1f
                        
                        if (r8_2 - rax_23 + 0x1f s> r10_1)
                            var_c4_1.d = r10_1
                    else
                        while (true)
                            int64_t rdx_8 = sx.q(rcx_4)
                            r8_2 += 0x20
                            rcx_4 += 1
                            var_c4_1:4.d = r8_2
                            var_d8_1 = rcx_4
                            
                            if (rdx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_7 = *(r9_1 + (rdx_8 << 2) + 4)
                            int32_t var_c8_3 = 0xffffffff
                            
                            if (rdx_7 != 0)
                                goto label_141fc6be8
                        
                        var_c4_1.d = r10_1
                
                int32_t rdx_9 = *(rsi_1 + 0x28)
                void* var_90 = rsi_1
                double var_88_1[0x2] = var_d8_1.o
                int32_t rdi_1 = 0xffffffff << (rdx_9.b & 0x1f)
                double zmm0[0x2] = var_90.o
                int32_t r8_5 = rdx_9 s>> 5
                int32_t r9_3 = rdx_9 & 0xffffffe0
                int128_t var_78_1 = 0xffffffff
                var_a0 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                var_88_1[1].d = rdi_1
                var_88_1[1]:4.d = rdx_9
                void* var_b8
                var_b8.o = zmm0
                var_b0 = var_88_1
                
                if (rdx_9 != r10_1)
                    void* rax_25 = *(rbx_1 + 0x10)
                    void* r11_1 = rbx_1
                    
                    if (rax_25 != 0)
                        r11_1 = rax_25
                    
                    int32_t temp4_1
                    int32_t temp5_1
                    temp4_1:temp5_1 = sx.q(r10_1 - 1)
                    int32_t rdx_13 = *(r11_1 + (sx.q(r8_5) << 2)) & rdi_1
                    
                    if (rdx_13 != 0)
                    label_141fc6cb2:
                        int32_t rax_32 = neg.d(rdx_13) & rdx_13
                        uint64_t rflags_3
                        int32_t temp0_6
                        temp0_6, rflags_3 = _bit_scan_reverse(rax_32)
                        int32_t rax_33
                        
                        if (rax_32 == 0)
                            rax_33 = 0x20
                        else
                            rax_33 = 0x1f - temp0_6
                        
                        var_88_1[1]:4.d = r9_3 - rax_33 + 0x1f
                        
                        if (r9_3 - rax_33 + 0x1f s> r10_1)
                            var_88_1[1]:4.d = r10_1
                    else
                        while (true)
                            int64_t rcx_9 = sx.q(r8_5)
                            r9_3 += 0x20
                            r8_5 += 1
                            
                            if (rcx_9.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_13 = *(r11_1 + (rcx_9 << 2) + 4)
                            var_88_1[1].d = 0xffffffff
                            
                            if (rdx_13 != 0)
                                goto label_141fc6cb2
                        
                        var_88_1[1]:4.d = r10_1
                    
                    rbx_1 = var_d0_1
                
                uint32_t r13_2 = (var_88_1[1] u>> 0x20).d
                
                while (true)
                    int64_t rcx_11 = sx.q(var_a0:4.d)
                    
                    if (rcx_11.d == r13_2 && var_b0[1] == rbx_1 && var_b8 == rsi_1)
                        break
                    
                    void* rbx_4 = (rcx_11 << 5) + *var_b8
                    int64_t arg_10 = *(*(rbx_4 + 8) + 0xd8)
                    int64_t rax_37 = sub_140d3c6e0(&arg_10)
                    
                    if (rax_37 != 0)
                        void* rbx_5 = *(rbx_4 + 8)
                        void* r14_1 = *(rbx_5 + 0x20)
                        int64_t* rbx_6 = *(rbx_5 + 0x28)
                        
                        if (rbx_6 != 0)
                            rbx_6[1].d += 1
                            
                            if (rbx_6 != 0)
                                int32_t rax_38 = rbx_6[1].d
                                rbx_6[1].d = rax_38
                                
                                if (rax_38 == 0)
                                    (**rbx_6)(rbx_6)
                                    int32_t temp6_1 = *(rbx_6 + 0xc)
                                    *(rbx_6 + 0xc) -= 1
                                    
                                    if (temp6_1 == 1)
                                        (*(*rbx_6 + 8))(rbx_6, 1)
                        
                        int64_t* rax_41 = sub_1422c19e0(r14_1, &var_90, rax_37)
                        int64_t rdi_2 = sx.q(arg2[1].d)
                        int32_t rcx_17 = (rdi_2 + 1).d
                        arg2[1].d = rcx_17
                        
                        if (rcx_17 s> *(arg2 + 0xc))
                            sub_1407c3b60(arg2)
                        
                        int64_t* rdi_4 = rdi_2 * 0x38 + *arg2
                        *rdi_4 = arg_10
                        rdi_4[1] = r14_1
                        rdi_4[2] = rbx_6
                        
                        if (rbx_6 != 0)
                            rbx_6[1].d += 1
                        
                        rdi_4[3] = 0
                        rdi_4[3] = *rax_41
                        *rax_41 = 0
                        rdi_4[4].d = rax_41[1].d
                        *(rdi_4 + 0x24) = *(rax_41 + 0xc)
                        rax_41[1] = 0
                        rdi_4[5] = rax_41[2]
                        void* rax_47 = rax_41[3]
                        rdi_4[6] = rax_47
                        
                        if (rax_47 != 0)
                            *(rax_47 + 8) += 1
                        
                        sub_1422b53f0(&var_90)
                        int32_t var_e8_1 = 3
                        sub_1422b19f0(rdi_4[1], 0, rdi_4[3], rax_37.d)
                        
                        if (rbx_6 != 0)
                            rbx_6[1].d -= 1
                            
                            if (rbx_6[1].d == 1)
                                (**rbx_6)(rbx_6)
                                int32_t temp8_1 = *(rbx_6 + 0xc)
                                *(rbx_6 + 0xc) -= 1
                                
                                if (temp8_1 == 1)
                                    (*(*rbx_6 + 8))(rbx_6, 1)
                        
                        rsi_1 = arg_8
                    
                    var_a0.d &= not.d(var_b0[0]:4.d)
                    sub_14059bdd0(&var_b0)
                    rbx_1 = var_d0_1
            
            int32_t var_5c
            zmm1[1].d &= not.d(var_5c)
            sub_14059bdd0(&var_68[1])
            i = zmm1[1]:4.d
        while (i s< *(zmm1[0] i+ 0x18))

return arg2
