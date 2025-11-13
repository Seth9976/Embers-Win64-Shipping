// 函数: sub_14145dc90
// 地址: 0x14145dc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i_2 = arg1[9].d
int64_t* rdi = arg1

if (i_2 != 0)
    sub_1410b3740(&arg1[7], 0, i_2, 4)
    int32_t r8_2 = 0
    
    if (i_2 s> 0)
        int64_t r9_1 = 0
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            void* rcx_1 = arg1[8]
            void* rax = &arg1[7]
            int64_t rdx_3 = (sx.q(arg1[9].d) - 1) & r9_1
            
            if (rcx_1 != 0)
                rax = rcx_1
            
            r9_1 += 1
            *(rax + (rdx_3 << 2)) = 0xffffffff
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t r10_1 = rdi[5].d
    void* r9_2 = &rdi[2]
    int32_t var_58_1 = 0
    int32_t rcx_2 = 0
    int32_t var_54_1 = 1
    void* var_50_1 = r9_2
    int32_t var_48_1 = 0xffffffff
    int32_t var_44_1 = 0
    int32_t var_40_1 = 0
    
    if (r10_1 != 0)
        void* rax_1 = *(r9_2 + 0x10)
        
        if (rax_1 != 0)
            r9_2 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_6 = *r9_2
        int32_t var_44_3
        
        if (rdx_6 != 0)
        label_14145dd98:
            int32_t rax_8 = neg.d(rdx_6) & rdx_6
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_54_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            int32_t var_44_2 = rcx_2 - rax_9 + 0x1f
            
            if (rcx_2 - rax_9 + 0x1f s> r10_1)
                var_44_3 = r10_1
        else
            while (true)
                int64_t rdx_7 = sx.q(r8_2)
                rcx_2 += 0x20
                r8_2 += 1
                int32_t var_40_2 = rcx_2
                var_58_1 = r8_2
                
                if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_6 = *(r9_2 + (rdx_7 << 2) + 4)
                int32_t var_48_2 = 0xffffffff
                
                if (rdx_6 != 0)
                    goto label_14145dd98
            
            var_44_3 = r10_1
    
    int64_t* var_38_1 = rdi
    result = nullptr
    int128_t var_30 = var_58_1.o
    int64_t var_20_1 = 0xffffffff
    
    if (0 s< r10_1)
        int32_t r10_2 = 0
        
        while (true)
            void* r9_3 = *rdi + sx.q(r10_2) * 0x18
            int32_t rax_15 = (arg1[9].d - 1) & *r9_3
            *(r9_3 + 0x14) = rax_15
            void* rdx_9 = arg1[8]
            int64_t r8_3 = sx.q(rax_15)
            void* rax_16 = &arg1[7]
            
            if (rdx_9 != 0)
                rax_16 = rdx_9
            
            *(r9_3 + 0x10) = *(rax_16 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
            void* rax_18 = &arg1[7]
            void* rcx_8 = arg1[8]
            
            if (rcx_8 != 0)
                rax_18 = rcx_8
            
            *(rax_18 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = r10_2
            var_20_1.d &= not.d(var_30:4.d)
            sub_14059bdd0(&var_30)
            result = var_30:8.q
            r10_2 = var_20_1:4.d
            
            if (r10_2 s>= result[3].d)
                break
            
            rdi = var_38_1

return result
