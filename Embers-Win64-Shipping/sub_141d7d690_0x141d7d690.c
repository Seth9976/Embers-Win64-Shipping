// 函数: sub_141d7d690
// 地址: 0x141d7d690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (*(arg1 + 8) - *(arg1 + 0x34) != arg2[1].d - *(arg2 + 0x34))
label_141d7d885:
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
        label_141d7d748:
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
                    goto label_141d7d748
            
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
            int64_t rsi_1 = sx.q(i) * 0x18
            int64_t rbx_2 = *(rsi_1 + *r14_1)
            *(arg2 + 0x34)
            void* const rcx_6
            
            if (arg2[1].d == *(arg2 + 0x34))
            label_141d7d840:
                rcx_6 = nullptr
            else
                int32_t rax_14 = sub_140b5ead0(rbx_2.d) + rbx_2:4.d
                void* r8_4 = &arg2[7]
                void* rcx_4 = *(r8_4 + 8)
                
                if (rcx_4 != 0)
                    r8_4 = rcx_4
                
                result = zx.q(*(r8_4 + (((sx.q(arg2[9].d) - 1) & sx.q(rax_14)) << 2)))
                
                if (result.d == 0xffffffff)
                label_141d7d840_1:
                    rcx_6 = nullptr
                else
                    int64_t r8_5 = *arg2
                    
                    while (true)
                        int64_t rdx_7 = sx.q(result.d) * 3
                        rcx_6 = r8_5 + (rdx_7 << 3)
                        
                        if (*(r8_5 + (rdx_7 << 3)) == rbx_2)
                            break
                        
                        result = zx.q(*(rcx_6 + 0x10))
                        
                        if (result.d == 0xffffffff)
                            goto label_141d7d840_2
                    
                    if (result.d == 0xffffffff)
                    label_141d7d840_2:
                        rcx_6 = nullptr
            
            void* rdx_8 = rcx_6 + 8
            
            if (rcx_6 == 0)
                rdx_8 = nullptr
            
            if (rdx_8 == 0)
                goto label_141d7d885
            
            if (*rdx_8 != *(rsi_1 + *r14_1 + 8))
                goto label_141d7d885
            
            var_54_1:4.d &= not.d(var_60:4.d)
            sub_14059bdd0(&var_60)
            i = i_1
        while (i s< *(var_58_1.q + 0x18))
    
    result.b = 1

return result
