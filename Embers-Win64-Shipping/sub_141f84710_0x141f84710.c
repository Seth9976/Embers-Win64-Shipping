// 函数: sub_141f84710
// 地址: 0x141f84710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0x38)

if (rax != 0)
    void* rcx = rax[0x11]
    
    if (rcx != 0)
    label_141f84755:
        int32_t rcx_1 = 0
        int32_t r8_1 = 0
        int32_t var_58_1 = 0
        int32_t var_54_1 = 1
        void* rbx_1 = *(*(rcx + 0x58) + 0x6f0)
        int32_t r10_1 = *(rbx_1 + 0x28)
        void* r9_1 = rbx_1 + 0x10
        void* var_50 = r9_1
        int32_t var_48_1 = 0xffffffff
        int64_t var_44_1 = 0
        
        if (r10_1 != 0)
            void* rax_2 = *(r9_1 + 0x10)
            
            if (rax_2 != 0)
                r9_1 = rax_2
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10_1 - 1)
            int32_t rdx_3 = *r9_1
            
            if (rdx_3 != 0)
            label_141f847e8:
                int32_t rax_9 = neg.d(rdx_3) & rdx_3
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
                int32_t var_54_2 = rax_9
                int32_t rax_10
                
                if (rax_9 == 0)
                    rax_10 = 0x20
                else
                    rax_10 = 0x1f - temp0_2
                
                int32_t rax_11 = r8_1 - rax_10 + 0x1f
                var_44_1.d = rax_11
                
                if (rax_11 s> r10_1)
                    var_44_1.d = r10_1
            else
                while (true)
                    int64_t rdx_4 = sx.q(rcx_1)
                    r8_1 += 0x20
                    rcx_1 += 1
                    var_44_1:4.d = r8_1
                    var_58_1 = rcx_1
                    
                    if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                    var_48_1 = 0xffffffff
                    
                    if (rdx_3 != 0)
                        goto label_141f847e8
                
                var_44_1.d = r10_1
        
        double var_28_1[0x2] = var_58_1.o
        rax = nullptr
        int128_t var_18_1 = 0xffffffff
        var_58_1.o = rbx_1.o
        int64_t var_38_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        var_48_1.o = var_28_1
        
        if (0 s< r10_1)
            int32_t i_1
            int32_t i = i_1
            void* rax_17
            
            do
                int64_t* rcx_4 = *(*var_58_1.q + sx.q(i) * 0x18)
                
                if (rcx_4[7].d != *(rcx_4 + 0x64))
                    r8_1.b = 1
                    return sub_141dbe590(*rcx_4, 0, r8_1.b) __tailcall
                
                var_44_1:4.d &= not.d(var_50:4.d)
                sub_14059bdd0(&var_50)
                rax_17 = var_48_1.q
                i = i_1
            while (i s< *(rax_17 + 0x18))
            
            return rax_17
    else if (rax[0x13].d s> rcx.d)
        rax = rax[0x12]
        rcx = *rax
        
        if (rcx != 0)
            goto label_141f84755

return rax
