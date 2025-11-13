// 函数: sub_140618af0
// 地址: 0x140618af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t r10_1 = arg1[5].d
    int32_t r8_1 = 0
    int32_t rcx = 0
    int32_t var_78_1 = 0
    int32_t var_74_1 = 1
    void* var_70_1 = &arg1[2]
    int32_t var_68_1 = 0xffffffff
    int64_t var_64_1 = 0
    
    if (r10_1 != 0)
        void* rax_1 = arg1[4]
        void* r9_1 = &arg1[2]
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_140618ba8:
            int32_t rax_7 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_74_2 = rax_7
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_2
            
            var_64_1.d = rcx - rax_8 + 0x1f
            
            if (rcx - rax_8 + 0x1f s> r10_1)
                var_64_1.d = r10_1
        else
            while (true)
                r8_1 += 1
                rcx += 0x20
                var_78_1 = r8_1
                var_64_1:4.d = rcx
                
                if (r8_1 s> ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                    break
                
                int32_t var_68_2 = 0xffffffff
                rdx_2 = *(r9_1 + (sx.q(r8_1) << 2))
                
                if (rdx_2 != 0)
                    goto label_140618ba8
            
            var_64_1.d = r10_1
    
    int32_t rdx_4 = arg1[5].d
    int32_t r13_1 = arg1[5].d
    int32_t r12_1 = 0xffffffff << (rdx_4.b & 0x1f)
    int32_t r8_3 = rdx_4 s>> 5
    int32_t r10_3 = rdx_4 & 0xffffffe0
    int32_t var_68_3 = r12_1
    var_64_1.d = rdx_4
    int64_t* r9_2 = arg1
    int128_t var_50 = var_78_1.o
    int64_t var_40_1 = 0xffffffff
    
    if (rdx_4 != r13_1)
        void* rax_10 = arg1[4]
        void* r11_3 = &arg1[2]
        
        if (rax_10 != 0)
            r11_3 = rax_10
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r13_1 - 1)
        int32_t rdx_8 = *(r11_3 + (sx.q(r8_3) << 2)) & r12_1
        
        if (rdx_8 != 0)
        label_140618c62:
            int32_t rax_16 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_16)
            int32_t rdi_1
            
            if (rax_16 == 0)
                rdi_1 = 0x20
            else
                rdi_1 = 0x1f - temp0_3
            
            var_64_1.d = r10_3 - rdi_1 + 0x1f
            
            if (r10_3 - rdi_1 + 0x1f s> r13_1)
                var_64_1.d = r13_1
        else
            while (true)
                r8_3 += 1
                r10_3 += 0x20
                
                if (r8_3 s> ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                    break
                
                var_68_3 = 0xffffffff
                rdx_8 = *(r11_3 + (sx.q(r8_3) << 2))
                
                if (rdx_8 != 0)
                    goto label_140618c62
            
            var_64_1.d = r13_1
    
    while (true)
        int64_t rax_18 = sx.q(var_40_1:4.d)
        
        if (rax_18.d == (var_68_3.q u>> 0x20).d && var_50:8.q == &arg1[2] && r9_2 == arg1)
            break
        
        void* rdi_4 = rax_18 * 0x30 + *r9_2
        int64_t rcx_6 = *(rdi_4 + 0x18)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = *(rdi_4 + 8)
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        var_40_1.d &= not.d(var_50:4.d)
        sub_14059bdd0(&var_50)
        r9_2 = arg1
    
    int64_t rcx_9 = *arg1
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    *arg1 = *arg2
    *arg2 = 0
    arg1[1].d = arg2[1].d
    *(arg1 + 0xc) = *(arg2 + 0xc)
    arg2[1] = 0
    
    if (&arg1[2] != &arg2[2])
        if (arg2[4] == 0)
            memmove(&arg1[2], &arg2[2], 0x10)
        
        int64_t rcx_11 = arg1[4]
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        arg1[4] = arg2[4]
        arg2[4] = 0
        arg1[5].d = arg2[5].d
        *(arg1 + 0x2c) = *(arg2 + 0x2c)
        arg2[5] = 0
    
    arg1[6].d = arg2[6].d
    *(arg1 + 0x34) = *(arg2 + 0x34)
    *(arg2 + 0x34) = 0
    arg2[6].d = 0xffffffff

return arg1
