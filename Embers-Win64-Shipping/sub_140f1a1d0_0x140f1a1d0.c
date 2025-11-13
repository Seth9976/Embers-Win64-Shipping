// 函数: sub_140f1a1d0
// 地址: 0x140f1a1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t* result = arg2
int32_t i_1 = 0

if (arg2[1].d s> 0)
    int64_t rdx = 0
    int64_t r8 = 0
    int64_t var_b0_1 = 0
    int64_t var_a8_1 = 0
    
    do
        int64_t* rdi_2 = *result + r8
        
        if (rdx s> 0)
            sub_140a20ba0(arg3, &data_142d6acb4, 2)
            i = i_1
            rdx = var_b0_1
            r8 = var_a8_1
        
        int64_t* r14_1 = *rdi_2
        int64_t* var_a0_1 = r14_1
        void* r13_2 = sx.q(rdi_2[1].d) * 0x70 + r14_1
        void* var_90_1 = r13_2
        
        if (r14_1 != r13_2)
            void* r12_1 = &r14_1[6]
            void* var_98_1 = r12_1
            
            do
                int32_t r15_2 = *(r12_1 - 0x28)
                
                if (r15_2 s> 1)
                    int32_t rdx_1 = arg3[1].d
                    int32_t rax_1
                    rax_1.b = rdx_1 s<= 0
                    int32_t rdi_3 = rdx_1 - 1
                    
                    if (rdx_1 s<= 0)
                        rdi_3 = 0
                    
                    int32_t rax_3 = rax_1 + 1 + rdx_1
                    arg3[1].d = rax_3
                    
                    if (rax_3 s> *(arg3 + 0xc))
                        sub_140594770(arg3)
                    
                    int64_t rcx_2 = sx.q(rdi_3)
                    *(*arg3 + (rcx_2 << 1)) = 0x3c
                    *(*arg3 + (rcx_2 << 1) + 2) = 0
                    int32_t rax_6 = *(r12_1 - 0x28)
                    int32_t r8_1 = rax_6 - 1
                    
                    if (rax_6 == 0)
                        r8_1 = 0
                    
                    sub_140a20ba0(arg3, *r14_1, r8_1)
                    int32_t r11_1 = *(r12_1 + 8)
                    void* r9_1 = r12_1 - 0x10
                    void* var_e0_1 = r9_1
                    int32_t rcx_4 = 0
                    int32_t var_e8_1 = 0
                    int32_t r8_2 = 0
                    int32_t var_e4_1 = 1
                    int32_t var_d8_1 = 0xffffffff
                    int64_t var_d4_1 = 0
                    
                    if (r11_1 != 0)
                        void* rax_7 = *r12_1
                        
                        if (rax_7 != 0)
                            r9_1 = rax_7
                        
                        int32_t temp1_1
                        int32_t temp2_1
                        temp1_1:temp2_1 = sx.q(r11_1 - 1)
                        int32_t rdx_5 = *r9_1
                        
                        if (rdx_5 != 0)
                        label_140f1a35a:
                            int32_t rax_14 = neg.d(rdx_5) & rdx_5
                            uint64_t rflags_1
                            int32_t temp0_2
                            temp0_2, rflags_1 = _bit_scan_reverse(rax_14)
                            int32_t var_e4_2 = rax_14
                            int32_t rax_15
                            
                            if (rax_14 == 0)
                                rax_15 = 0x20
                            else
                                rax_15 = 0x1f - temp0_2
                            
                            var_d4_1.d = r8_2 - rax_15 + 0x1f
                            
                            if (r8_2 - rax_15 + 0x1f s> r11_1)
                                var_d4_1.d = r11_1
                        else
                            while (true)
                                int64_t rdx_6 = sx.q(rcx_4)
                                r8_2 += 0x20
                                rcx_4 += 1
                                var_d4_1:4.d = r8_2
                                var_e8_1 = rcx_4
                                
                                if (rdx_6.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                                int32_t var_d8_2 = 0xffffffff
                                
                                if (rdx_5 != 0)
                                    goto label_140f1a35a
                            
                            var_d4_1.d = r11_1
                    
                    int32_t rsi_1 = *(r12_1 + 8)
                    int128_t var_48_1 = 0xffffffff
                    int128_t var_58_1 = var_e8_1.o
                    int32_t rdi_4 = 0xffffffff << (r11_1.b & 0x1f)
                    int32_t r8_5 = r11_1 s>> 5
                    int32_t r9_3 = r11_1 & 0xffffffe0
                    int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
                    int32_t var_d8_3 = rdi_4
                    var_d4_1.d = r11_1
                    int128_t var_88 = (r12_1 - 0x20).o
                    int128_t var_78_1 = var_58_1
                    
                    if (r11_1 != rsi_1)
                        void* rax_17 = *r12_1
                        void* r10_1 = r12_1 - 0x10
                        
                        if (rax_17 != 0)
                            r10_1 = rax_17
                        
                        int32_t temp3_1
                        int32_t temp4_1
                        temp3_1:temp4_1 = sx.q(rsi_1 - 1)
                        int32_t rdx_10 = *(r10_1 + (sx.q(r8_5) << 2)) & rdi_4
                        
                        if (rdx_10 != 0)
                        label_140f1a433:
                            int32_t rax_24 = neg.d(rdx_10) & rdx_10
                            uint64_t rflags_2
                            int32_t temp0_4
                            temp0_4, rflags_2 = _bit_scan_reverse(rax_24)
                            int32_t rax_25
                            
                            if (rax_24 == 0)
                                rax_25 = 0x20
                            else
                                rax_25 = 0x1f - temp0_4
                            
                            var_d4_1.d = r9_3 - rax_25 + 0x1f
                            
                            if (r9_3 - rax_25 + 0x1f s> rsi_1)
                                var_d4_1.d = rsi_1
                        else
                            while (true)
                                int64_t rcx_9 = sx.q(r8_5)
                                r9_3 += 0x20
                                r8_5 += 1
                                
                                if (rcx_9.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_10 = *(r10_1 + (rcx_9 << 2) + 4)
                                var_d8_3 = 0xffffffff
                                
                                if (rdx_10 != 0)
                                    goto label_140f1a433
                            
                            var_d4_1.d = rsi_1
                    
                    while (true)
                        int64_t rax_27 = sx.q(var_78_1:0xc.d)
                        int64_t* rdx_11 = var_88.q
                        
                        if (rax_27.d == (var_d8_3.q u>> 0x20).d && var_78_1.q == r12_1 - 0x10
                                && rdx_11 == r12_1 - 0x20)
                            break
                        
                        int32_t rdx_12 = arg3[1].d
                        int64_t* rsi_2 = *rdx_11 + rax_27 * 0x28
                        int32_t rax_29
                        rax_29.b = rdx_12 s<= 0
                        int32_t rdi_5 = rdx_12 - 1
                        
                        if (rdx_12 s<= 0)
                            rdi_5 = 0
                        
                        int32_t rax_31 = rax_29 + 1 + rdx_12
                        arg3[1].d = rax_31
                        
                        if (rax_31 s> *(arg3 + 0xc))
                            sub_140594770(arg3)
                        
                        int64_t rcx_13 = sx.q(rdi_5)
                        *(*arg3 + (rcx_13 << 1)) = 0x20
                        *(*arg3 + (rcx_13 << 1) + 2) = 0
                        int32_t rax_34 = rsi_2[1].d
                        int32_t r8_6 = rax_34 - 1
                        
                        if (rax_34 == 0)
                            r8_6 = 0
                        
                        sub_140a20ba0(arg3, *rsi_2, r8_6)
                        int32_t rdx_14 = arg3[1].d
                        int32_t rax_35
                        rax_35.b = rdx_14 s<= 0
                        int32_t rdi_6 = rdx_14 - 1
                        
                        if (rdx_14 s<= 0)
                            rdi_6 = 0
                        
                        int32_t rax_37 = rax_35 + 1 + rdx_14
                        arg3[1].d = rax_37
                        
                        if (rax_37 s> *(arg3 + 0xc))
                            sub_140594770(arg3)
                        
                        int64_t rcx_16 = sx.q(rdi_6)
                        *(*arg3 + (rcx_16 << 1)) = 0x3d
                        *(*arg3 + (rcx_16 << 1) + 2) = 0
                        int32_t rdx_15 = arg3[1].d
                        int32_t rax_40
                        rax_40.b = rdx_15 s<= 0
                        int32_t rdi_7 = rdx_15 - 1
                        
                        if (rdx_15 s<= 0)
                            rdi_7 = 0
                        
                        int32_t rax_42 = rax_40 + 1 + rdx_15
                        arg3[1].d = rax_42
                        
                        if (rax_42 s> *(arg3 + 0xc))
                            sub_140594770(arg3)
                        
                        int64_t rcx_18 = sx.q(rdi_7)
                        *(*arg3 + (rcx_18 << 1)) = 0x22
                        *(*arg3 + (rcx_18 << 1) + 2) = 0
                        int32_t rax_45 = rsi_2[3].d
                        int32_t r8_7 = rax_45 - 1
                        
                        if (rax_45 == 0)
                            r8_7 = 0
                        
                        sub_140a20ba0(arg3, rsi_2[2], r8_7)
                        int32_t rdx_17 = arg3[1].d
                        int32_t rax_46
                        rax_46.b = rdx_17 s<= 0
                        int32_t rdi_8 = rdx_17 - 1
                        
                        if (rdx_17 s<= 0)
                            rdi_8 = 0
                        
                        int32_t rax_48 = rax_46 + 1 + rdx_17
                        arg3[1].d = rax_48
                        
                        if (rax_48 s> *(arg3 + 0xc))
                            sub_140594770(arg3)
                        
                        int64_t rcx_21 = sx.q(rdi_8)
                        *(*arg3 + (rcx_21 << 1)) = 0x22
                        *(*arg3 + (rcx_21 << 1) + 2) = 0
                        var_78_1:8.d &= not.d(var_88:0xc.d)
                        sub_14059bdd0(&var_88:8)
                    
                    int32_t rdx_18 = arg3[1].d
                    r12_1 = var_98_1
                    int32_t rax_53
                    rax_53.b = rdx_18 s<= 0
                    int32_t rdi_9 = rdx_18 - 1
                    
                    if (rdx_18 s<= 0)
                        rdi_9 = 0
                    
                    int32_t rax_55 = rax_53 + 1 + rdx_18
                    arg3[1].d = rax_55
                    
                    if (rax_55 s> *(arg3 + 0xc))
                        sub_140594770(arg3)
                    
                    r14_1 = var_a0_1
                    r13_2 = var_90_1
                    int64_t rcx_24 = sx.q(rdi_9)
                    *(*arg3 + (rcx_24 << 1)) = 0x3e
                    *(*arg3 + (rcx_24 << 1) + 2) = 0
                
                int32_t rdi_10 = *(r12_1 + 0x38)
                int64_t var_c8 = 0
                int64_t rsi_3 = *(r12_1 + 0x30)
                
                if (rdi_10 != 0)
                    sub_1405a4c70(&var_c8, rdi_10, 0)
                    memcpy(var_c8, rsi_3, rdi_10 * 2)
                else
                    int32_t var_bc_1 = 0
                
                sub_140efbf50(&var_c8)
                int32_t r8_10 = rdi_10 - 1
                
                if (rdi_10 == 0)
                    r8_10 = 0
                
                sub_140a20ba0(arg3, var_c8, r8_10)
                
                if (r15_2 s> 1)
                    sub_140a20ba0(arg3, &data_142ee1060, 3)
                
                int64_t rcx_30 = var_c8
                
                if (rcx_30 != 0)
                    sub_140a74f90(rcx_30)
                
                r14_1 = &r14_1[0xe]
                r12_1 += 0x70
                var_a0_1 = r14_1
                var_98_1 = r12_1
            while (r14_1 != r13_2)
            
            i = i_1
            rdx = var_b0_1
            r8 = var_a8_1
        
        result = arg2
        i += 1
        rdx += 1
        i_1 = i
        r8 += 0x10
        var_b0_1 = rdx
        var_a8_1 = r8
    while (i s< result[1].d)

return result
