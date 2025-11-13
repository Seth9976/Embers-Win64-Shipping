// 函数: sub_140edf010
// 地址: 0x140edf010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_1 = arg1[0xc].d - *(arg1 + 0x8c)
uint64_t result = zx.q(arg1[2].d - *(arg1 + 0x3c))

if (result.d != rdx_1 || rdx_1 != arg1[0x16].d)
    result = *arg1
    int64_t* rsi_1 = nullptr
    
    if (*(result + 0x5e8) != 0)
        int64_t* rcx = *(result + 0x5e0)
        
        if (rcx != 0)
            result = (*(*rcx + 0x28))(rcx)
            
            if (result.b != 0)
                int32_t r10_1 = arg1[6].d
                void* r9_1 = &arg1[3]
                int32_t var_74_1 = 1
                int32_t rcx_1 = 0
                int32_t var_78 = 0
                int32_t r8_1 = 0
                void* var_70_1 = r9_1
                int32_t var_68_1 = 0xffffffff
                int64_t var_64_1 = 0
                
                if (r10_1 != 0)
                    void* rax_2 = *(r9_1 + 0x10)
                    
                    if (rax_2 != 0)
                        r9_1 = rax_2
                    
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(r10_1 - 1)
                    int32_t rdx_4 = *r9_1
                    
                    if (rdx_4 != 0)
                    label_140edf108:
                        int32_t rax_9 = neg.d(rdx_4) & rdx_4
                        uint64_t rflags_1
                        int32_t temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
                        int32_t var_74_2 = rax_9
                        int32_t rax_10
                        
                        if (rax_9 == 0)
                            rax_10 = 0x20
                        else
                            rax_10 = 0x1f - temp0_2
                        
                        var_64_1.d = r8_1 - rax_10 + 0x1f
                        
                        if (r8_1 - rax_10 + 0x1f s> r10_1)
                            var_64_1.d = r10_1
                    else
                        while (true)
                            int64_t rdx_5 = sx.q(rcx_1)
                            r8_1 += 0x20
                            rcx_1 += 1
                            var_64_1:4.d = r8_1
                            var_78 = rcx_1
                            
                            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                            var_68_1 = 0xffffffff
                            
                            if (rdx_4 != 0)
                                goto label_140edf108
                        
                        var_64_1.d = r10_1
                
                double zmm2[0x2] = var_68_1.o
                double var_18_1[0x2] = zmm2
                double var_28_1[0x2] = var_78.o
                double var_58[0x2] = (&arg1[1]).o
                uint32_t rax_13 = (zmm2[0] u>> 0x20).d
                int64_t var_38_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                
                if (rax_13 s< r10_1)
                    int32_t i = var_28_1[1]:4.d
                    
                    do
                        int64_t* rcx_4 = *(*var_58[0] + sx.q(i) * 0x28 + 0x10)
                        (*(*rcx_4 + 0x50))(rcx_4, &var_78)
                        
                        if (var_70_1 != 0)
                            int32_t temp4_1 = *(var_70_1 + 8)
                            *(var_70_1 + 8) -= 1
                            
                            if (temp4_1 == 1)
                                (**var_70_1)(var_70_1)
                                int32_t temp5_1 = *(var_70_1 + 0xc)
                                *(var_70_1 + 0xc) -= 1
                                
                                if (temp5_1 == 1)
                                    (*(*var_70_1 + 8))(var_70_1, 1)
                        
                        var_28_1[1].d &= not.d(var_58[1]:4.d)
                        sub_14059bdd0(&var_58[1])
                        i = var_28_1[1]:4.d
                    while (i s< *(var_28_1[0] i+ 0x18))
                
                int32_t var_74_3 = 1
                int32_t r10_2 = arg1[0x10].d
                void* r9_2 = &arg1[0xd]
                void* var_70_2 = r9_2
                int32_t rcx_8 = 0
                var_78 = 0
                int32_t r8_3 = 0
                int32_t var_68_2 = 0xffffffff
                int64_t var_64_2 = 0
                
                if (r10_2 != 0)
                    void* rax_22 = *(r9_2 + 0x10)
                    
                    if (rax_22 != 0)
                        r9_2 = rax_22
                    
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(r10_2 - 1)
                    int32_t rdx_10 = *r9_2
                    
                    if (rdx_10 != 0)
                    label_140edf258:
                        int32_t rax_29 = neg.d(rdx_10) & rdx_10
                        uint64_t rflags_2
                        int32_t temp0_4
                        temp0_4, rflags_2 = _bit_scan_reverse(rax_29)
                        int32_t var_74_4 = rax_29
                        int32_t r14_1
                        
                        if (rax_29 == 0)
                            r14_1 = 0x20
                        else
                            r14_1 = 0x1f - temp0_4
                        
                        var_64_2.d = r8_3 - r14_1 + 0x1f
                        
                        if (r8_3 - r14_1 + 0x1f s> r10_2)
                            var_64_2.d = r10_2
                    else
                        while (true)
                            int64_t rdx_11 = sx.q(rcx_8)
                            r8_3 += 0x20
                            rcx_8 += 1
                            var_64_2:4.d = r8_3
                            var_78 = rcx_8
                            
                            if (rdx_11.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_10 = *(r9_2 + (rdx_11 << 2) + 4)
                            var_68_2 = 0xffffffff
                            
                            if (rdx_10 != 0)
                                goto label_140edf258
                        
                        var_64_2.d = r10_2
                
                zmm2 = var_68_2.o
                double var_28_2[0x2] = var_78.o
                result = zmm2[0] u>> 0x20
                double var_18_2[0x2] = zmm2
                var_58 = (&arg1[0xb]).o
                int64_t var_38_2 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                
                if (result.d s< r10_2)
                    do
                        var_28_2[1].d &= not.d(var_58[1]:4.d)
                        sub_14059bdd0(&var_58[1])
                        result = var_28_2[0]
                    while (var_28_2[1]:4.d s< *(result + 0x18))
    
    uint64_t rbx_4 = *arg1
    
    if (*(rbx_4 + 0x5f8) != 0)
        int64_t* rcx_12 = *(rbx_4 + 0x5f0)
        
        if (rcx_12 != 0)
            result = (*(*rcx_12 + 0x28))(rcx_12)
            
            if (result.b != 0)
                if (*(rbx_4 + 0x5f8) != 0)
                    rsi_1 = *(rbx_4 + 0x5f0)
                
                return (*(*rsi_1 + 0x50))(rsi_1)

return result
