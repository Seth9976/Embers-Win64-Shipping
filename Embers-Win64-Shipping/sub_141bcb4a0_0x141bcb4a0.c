// 函数: sub_141bcb4a0
// 地址: 0x141bcb4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t r15 = 0

if (arg1[0x19].d s> 0)
    int64_t* r12_1 = nullptr
    
    while (true)
        int64_t rbx_1 = *(r12_1 + arg1[0x18])
        int32_t result_1
        sub_1405ba560(&arg1[1], &result_1, rbx_1)
        result = sx.q(result_1)
        void* const rcx_3
        
        if (result.d == 0xffffffff)
            rcx_3 = nullptr
        else
            rcx_3 = (result << 5) + arg1[1]
        
        int64_t* r8_2 = rcx_3 + 8
        
        if (rcx_3 == 0)
            r8_2 = nullptr
        
        int512_t zmm4
        
        if (r8_2 != 0)
            int64_t* var_f8 = *r8_2
            int64_t* rax_2 = r8_2[1]
            
            if (rax_2 != 0)
                rax_2[1].d += 1
            
            sub_140dba910(&arg1[1], rbx_1)
            result = sub_140868c90(&arg1[0xb], var_f8)
            
            if (*arg1 != 0)
                int64_t* rcx_6 = var_f8
                result, zmm4 = (*(*rcx_6 + 8))(rcx_6)
                void* rbx_2 = *arg1
                
                if (*(rbx_2 + 0x618) != 0)
                    int64_t* rcx_7 = *(rbx_2 + 0x610)
                    
                    if (rcx_7 != 0)
                        result, zmm4 = (*(*rcx_7 + 0x28))(rcx_7)
                        
                        if (result.b != 0)
                            int64_t* rcx_8
                            
                            if (*(rbx_2 + 0x618) == 0)
                                rcx_8 = nullptr
                            else
                                rcx_8 = *(rbx_2 + 0x610)
                            
                            result, zmm4 = (*(*rcx_8 + 0x50))(rcx_8, &var_f8)
            
            if (rax_2 != 0)
                rax_2[1].d -= 1
                
                if (rax_2[1].d == 1)
                    result, zmm4 = (**rax_2)(rax_2)
                    int32_t temp3_1 = *(rax_2 + 0xc)
                    *(rax_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        result, zmm4 = (*(*rax_2 + 8))(rax_2, 1)
        else if (rbx_1 == 0)
            int32_t var_114_1 = 1
            int32_t r10_1 = arg1[0x10].d
            void* r9_1 = &arg1[0xd]
            void* var_110_1 = r9_1
            int32_t rcx_11 = 0
            int32_t var_118_1 = 0
            int32_t r8_3 = 0
            int32_t var_108_1 = 0xffffffff
            int64_t var_104_1 = 0
            
            if (r10_1 != 0)
                void* rax_8 = *(r9_1 + 0x10)
                
                if (rax_8 != 0)
                    r9_1 = rax_8
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(r10_1 - 1)
                int32_t rdx_7 = *r9_1
                
                if (rdx_7 != 0)
                label_141bcb68b:
                    int32_t rax_15 = neg.d(rdx_7) & rdx_7
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_15)
                    int32_t var_114_2 = rax_15
                    int32_t rax_16
                    
                    if (rax_15 == 0)
                        rax_16 = 0x20
                    else
                        rax_16 = 0x1f - temp0_2
                    
                    var_104_1.d = r8_3 - rax_16 + 0x1f
                    
                    if (r8_3 - rax_16 + 0x1f s> r10_1)
                        var_104_1.d = r10_1
                else
                    while (true)
                        int64_t rdx_8 = sx.q(rcx_11)
                        r8_3 += 0x20
                        rcx_11 += 1
                        var_104_1:4.d = r8_3
                        var_118_1 = rcx_11
                        
                        if (rdx_8.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_7 = *(r9_1 + (rdx_8 << 2) + 4)
                        int32_t var_108_2 = 0xffffffff
                        
                        if (rdx_7 != 0)
                            goto label_141bcb68b
                    
                    var_104_1.d = r10_1
            
            int128_t var_68_1 = 0xffffffff
            double var_78_1[0x2] = var_118_1.o
            double var_a8[0x2] = (&arg1[0xb]).o
            result = nullptr
            int64_t var_88_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
            void* rbx_4
            
            if (0 s>= r10_1)
            label_141bcb736:
                rbx_4 = nullptr
            else
                int32_t rdx_9 = var_78_1[1]:4.d
                
                while (true)
                    void*** r8_5 = var_a8[0]
                    
                    if ((*r8_5)[sx.q(rdx_9) * 3 + 1] == 0)
                        result = *r8_5
                        rbx_4 = &result[sx.q(rdx_9) * 3]
                        break
                    
                    var_78_1[1].d &= not.d(var_a8[1]:4.d)
                    sub_14059bdd0(&var_a8[1])
                    result = var_78_1[0]
                    rdx_9 = var_78_1[1]:4.d
                    
                    if (rdx_9 s>= result[3].d)
                        goto label_141bcb736
            
            if (rbx_4 != 0)
                int32_t r11_1 = arg1[6].d
                void* r9_2 = &arg1[3]
                int32_t var_114_3 = 1
                int32_t rcx_15 = 0
                int32_t var_118_2 = 0
                int32_t r8_6 = 0
                void* var_110_2 = r9_2
                int32_t var_108_3 = 0xffffffff
                int64_t var_104_2 = 0
                
                if (r11_1 != 0)
                    void* rax_22 = *(r9_2 + 0x10)
                    
                    if (rax_22 != 0)
                        r9_2 = rax_22
                    
                    int32_t temp4_1
                    int32_t temp5_1
                    temp4_1:temp5_1 = sx.q(r11_1 - 1)
                    int32_t rdx_12 = *r9_2
                    
                    if (rdx_12 != 0)
                    label_141bcb7cb:
                        int32_t rax_29 = neg.d(rdx_12) & rdx_12
                        uint64_t rflags_2
                        int32_t temp0_4
                        temp0_4, rflags_2 = _bit_scan_reverse(rax_29)
                        int32_t var_114_4 = rax_29
                        int32_t rax_30
                        
                        if (rax_29 == 0)
                            rax_30 = 0x20
                        else
                            rax_30 = 0x1f - temp0_4
                        
                        var_104_2.d = r8_6 - rax_30 + 0x1f
                        
                        if (r8_6 - rax_30 + 0x1f s> r11_1)
                            var_104_2.d = r11_1
                    else
                        while (true)
                            int64_t rdx_13 = sx.q(rcx_15)
                            r8_6 += 0x20
                            rcx_15 += 1
                            var_104_2:4.d = r8_6
                            var_118_2 = rcx_15
                            
                            if (rdx_13.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_12 = *(r9_2 + (rdx_13 << 2) + 4)
                            int32_t var_108_4 = 0xffffffff
                            
                            if (rdx_12 != 0)
                                goto label_141bcb7cb
                        
                        var_104_2.d = r11_1
                
                zmm4.o = 0xffffffff
                void* var_30_1 = &arg1[1]
                double var_78_2[0x2] = var_118_2.o
                int16_t var_b0_1 = 0
                int128_t var_68_2 = 0xffffffff
                double var_38[0x2]
                var_38[0] = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
                int128_t var_e8 = (&arg1[1]).o
                
                if (0 s< r11_1)
                    int32_t r8_8 = var_78_2[1]:4.d
                    
                    while (true)
                        if (*((sx.q(r8_8) << 5) + *var_e8.q + 8) == *rbx_4)
                            r8_8, zmm4 = sub_141b643e0(var_38[1], r8_8)
                        else
                            var_78_2[1].d &= not.d(var_e8:0xc.d)
                            sub_14059bdd0(&var_e8:8)
                            r8_8 = var_78_2[1]:4.d
                            
                            if (r8_8 s< *(var_78_2[0] i+ 0x18))
                                continue
                            else if (var_b0_1.b == 0)
                                break
                        
                        if (var_b0_1:1.b == 0)
                            break
                        
                        r8_8.b = 1
                        sub_1405b6520(&arg1[1], arg1[2].d - *(arg1 + 0x3c), r8_8.b)
                        break
                
                result = sub_140868c90(&arg1[0xb], *rbx_4)
        r15 += 1
        r12_1 = &r12_1[1]
        
        if (r15 s>= arg1[0x19].d)
            break

arg1[0x19].d = 0

if (*(arg1 + 0xcc) s> 0xffffffff)
    return result

return sub_1405c5570(&arg1[0x18], 0)
