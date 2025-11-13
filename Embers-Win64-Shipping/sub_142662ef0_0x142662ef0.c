// 函数: sub_142662ef0
// 地址: 0x142662ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *arg1

if (*(r10 + 8) != *(r10 + 0x34) && *(r10 + 0x50) != 0)
    int32_t r11_1 = *(r10 + 0x28)
    void* r9_1 = r10 + 0x10
    int32_t rcx = 0
    int32_t var_64_1 = 1
    int32_t var_68_1 = 0
    int32_t r8_1 = 0
    void* var_60 = r9_1
    int32_t var_58_1 = 0xffffffff
    int64_t var_54_1 = 0
    
    if (r11_1 != 0)
        void* rax_1 = *(r9_1 + 0x10)
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_142662fa8:
            int32_t rax_8 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_64_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            var_54_1.d = r8_1 - rax_9 + 0x1f
            
            if (r8_1 - rax_9 + 0x1f s> r11_1)
                var_54_1.d = r11_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                var_54_1:4.d = r8_1
                var_68_1 = rcx
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                var_58_1 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_142662fa8
            
            var_54_1.d = r11_1
    
    void* var_40_1 = r10
    int128_t var_20_1 = 0xffffffff
    double var_30_1[0x2] = var_68_1.o
    var_68_1.o = r10.o
    int64_t var_48_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    var_58_1.o = var_30_1
    
    if (0 s< r11_1)
        int32_t i_1
        int32_t i = i_1
        
        do
            sub_1426474c0(arg1, (sx.q(i) << 6) + *var_68_1.q)
            var_54_1:4.d &= not.d(var_60:4.d)
            sub_14059bdd0(&var_60)
            i = i_1
        while (i s< *(var_58_1.q + 0x18))

return sub_142651a40(*arg1, 0x20) __tailcall
