// 函数: sub_141dee810
// 地址: 0x141dee810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (*(arg1 + 8) - *(arg1 + 0x34) != arg2[1].d - *(arg2 + 0x34))
label_141deea0b:
    result.b = 0
else
    int32_t r10_1 = *(arg1 + 0x28)
    void* r9_1 = arg1 + 0x10
    int32_t var_64_1 = 1
    void* var_60 = r9_1
    int32_t rcx = 0
    int32_t var_68_1 = 0
    int32_t r8_2 = 0
    int32_t var_58_1 = 0xffffffff
    int64_t var_54_1 = 0
    
    if (r10_1 != 0)
        void* rax_1 = *(r9_1 + 0x10)
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_141dee8c8:
            int32_t rax_8 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_64_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            var_54_1.d = r8_2 - rax_9 + 0x1f
            
            if (r8_2 - rax_9 + 0x1f s> r10_1)
                var_54_1.d = r10_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx)
                r8_2 += 0x20
                rcx += 1
                var_54_1:4.d = r8_2
                var_68_1 = rcx
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                var_58_1 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_141dee8c8
            
            var_54_1.d = r10_1
    
    int128_t var_28_1 = 0xffffffff
    double var_38_1[0x2] = var_68_1.o
    var_68_1.o = arg1.o
    int64_t var_48_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    var_58_1.o = var_38_1
    
    if (0 s< r10_1)
        int32_t i_1
        int32_t i = i_1
        
        do
            int64_t* r14_1 = var_68_1.q
            int64_t rdi_2 = sx.q(i) << 5
            int64_t rbx_2 = *(rdi_2 + *r14_1)
            *(arg2 + 0x34)
            int64_t* rcx_6
            
            if (arg2[1].d == *(arg2 + 0x34))
            label_141dee9ae:
                rcx_6 = nullptr
            else
                int32_t rax_13 = sub_140b5ead0(rbx_2.d) + rbx_2:4.d
                void* r8_4 = &arg2[7]
                void* rcx_3 = *(r8_4 + 8)
                
                if (rcx_3 != 0)
                    r8_4 = rcx_3
                
                result = zx.q(*(r8_4 + (((sx.q(arg2[9].d) - 1) & sx.q(rax_13)) << 2)))
                
                if (result.d == 0xffffffff)
                label_141dee9ae_1:
                    rcx_6 = nullptr
                else
                    while (true)
                        rcx_6 = (sx.q(result.d) << 5) + *arg2
                        
                        if (*rcx_6 == rbx_2)
                            break
                        
                        result = zx.q(rcx_6[3].d)
                        
                        if (result.d == 0xffffffff)
                            goto label_141dee9ae_2
                    
                    if (result.d == 0xffffffff)
                    label_141dee9ae_2:
                        rcx_6 = nullptr
            
            void* r9_2 = &rcx_6[1]
            
            if (rcx_6 == 0)
                r9_2 = nullptr
            
            if (r9_2 == 0)
                goto label_141deea0b
            
            result = *r14_1
            int64_t rcx_7 = sx.q(*(r9_2 + 8))
            
            if (rcx_7.d != *(result + rdi_2 + 0x10))
                goto label_141deea0b
            
            if (memcmp(*r9_2, *(result + rdi_2 + 8), rcx_7 << 2).d != 0)
                goto label_141deea0b
            
            var_54_1:4.d &= not.d(var_60:4.d)
            sub_14059bdd0(&var_60)
            i = i_1
        while (i s< *(var_58_1.q + 0x18))
    
    result.b = 1

return result
