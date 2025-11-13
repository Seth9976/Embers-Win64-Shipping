// 函数: sub_1419a9da0
// 地址: 0x1419a9da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i_2 = *(arg1 + 0x48)
void* rdi = arg1

if (i_2 != 0)
    sub_1410b3740(arg1 + 0x38, 0, i_2, 4)
    int32_t r8_2 = 0
    
    if (i_2 s> 0)
        int64_t r9_1 = 0
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            void* rcx_1 = *(arg1 + 0x40)
            void* rax = arg1 + 0x38
            int64_t rdx_3 = (sx.q(*(arg1 + 0x48)) - 1) & r9_1
            
            if (rcx_1 != 0)
                rax = rcx_1
            
            r9_1 += 1
            *(rax + (rdx_3 << 2)) = 0xffffffff
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t r10_1 = *(rdi + 0x28)
    void* r9_2 = rdi + 0x10
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
        label_1419a9ea8:
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
                    goto label_1419a9ea8
            
            var_44_3 = r10_1
    
    void* var_38_1 = rdi
    result = nullptr
    int128_t var_30 = var_58_1.o
    int64_t var_20_1 = 0xffffffff
    
    if (0 s< r10_1)
        int32_t r10_2 = 0
        
        while (true)
            int64_t* r9_5 = (sx.q(r10_2) << 4) + *rdi
            uint32_t rcx_5 = (*r9_5 u>> 4).d
            int32_t rdx_10 = (0x9e3779b9 - rcx_5) ^ rcx_5 << 8
            int32_t r8_5 = neg.d(rdx_10 + rcx_5) ^ rdx_10 u>> 0xd
            int32_t rcx_8 = (rcx_5 - rdx_10 - r8_5) ^ r8_5 u>> 0xc
            int32_t rdx_13 = (rdx_10 - rcx_8 - r8_5) ^ rcx_8 << 0x10
            int32_t r8_8 = (r8_5 - rdx_13 - rcx_8) ^ rdx_13 u>> 5
            int32_t rcx_11 = (rcx_8 - rdx_13 - r8_8) ^ r8_8 u>> 3
            int32_t rdx_16 = (rdx_13 - rcx_11 - r8_8) ^ rcx_11 << 0xa
            int32_t r8_12 = ((r8_8 - rdx_16 - rcx_11) ^ rdx_16 u>> 0xf) & (*(arg1 + 0x48) - 1)
            void* rax_27 = arg1 + 0x38
            *(r9_5 + 0xc) = r8_12
            void* rdx_18 = *(arg1 + 0x40)
            int64_t r8_13 = sx.q(r8_12)
            
            if (rdx_18 != 0)
                rax_27 = rdx_18
            
            r9_5[1].d = *(rax_27 + (((sx.q(*(arg1 + 0x48)) - 1) & r8_13) << 2))
            void* rax_29 = arg1 + 0x38
            void* rcx_15 = *(arg1 + 0x40)
            
            if (rcx_15 != 0)
                rax_29 = rcx_15
            
            *(rax_29 + (((sx.q(*(arg1 + 0x48)) - 1) & r8_13) << 2)) = r10_2
            var_20_1.d &= not.d(var_30:4.d)
            sub_14059bdd0(&var_30)
            result = var_30:8.q
            r10_2 = var_20_1:4.d
            
            if (r10_2 s>= result[3].d)
                break
            
            rdi = var_38_1

return result
