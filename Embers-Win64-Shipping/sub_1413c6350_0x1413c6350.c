// 函数: sub_1413c6350
// 地址: 0x1413c6350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t r8_1 = 0
    int32_t rbx_1 = arg1[5].d
    int32_t rcx = 0
    int32_t var_a8_1 = 0
    int32_t var_a4_1 = 1
    void* var_a0_1 = &arg1[2]
    int32_t var_98_1 = 0xffffffff
    int64_t var_94_1 = 0
    
    if (rbx_1 != 0)
        void* rax_1 = arg1[4]
        void* r9_1 = &arg1[2]
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rbx_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_1413c6408:
            int32_t rax_8 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_a4_2 = rax_8
            int32_t arg_8 = temp0_1
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_1
            
            var_94_1.d = rcx - rax_9 + 0x1f
            
            if (rcx - rax_9 + 0x1f s> rbx_1)
                var_94_1.d = rbx_1
        else
            while (true)
                int64_t rdx_3 = sx.q(r8_1)
                rcx += 0x20
                r8_1 += 1
                var_94_1:4.d = rcx
                var_a8_1 = r8_1
                
                if (rdx_3.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                int32_t var_98_2 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_1413c6408
            
            var_94_1.d = rbx_1
    
    int32_t rdx_5 = arg1[5].d
    int32_t r13_1 = arg1[5].d
    int32_t var_74_1 = rdx_5
    int32_t r12_1 = 0xffffffff << (rdx_5.b & 0x1f)
    int32_t r8_3 = rdx_5 s>> 5
    int32_t r9_3 = rdx_5 & 0xffffffe0
    int32_t var_88_1 = r8_3
    int32_t var_78_1 = r12_1
    int64_t* rbx_2 = arg1
    int64_t* var_68_1 = rbx_2
    int32_t var_70_1 = r9_3
    int128_t var_60 = var_a8_1.o
    int64_t var_50_1 = 0xffffffff
    
    if (rdx_5 != r13_1)
        void* rax_11 = arg1[4]
        void* r10_1 = &arg1[2]
        
        if (rax_11 != 0)
            r10_1 = rax_11
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(r13_1 - 1)
        int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & r12_1
        int32_t var_74_3
        
        if (rdx_9 != 0)
        label_1413c64da:
            int32_t rax_18 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_2
            temp0_2, rflags_2 = _bit_scan_reverse(rax_18)
            int32_t arg_10 = temp0_2
            int32_t r11_1
            
            if (rax_18 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_2
            
            int32_t var_74_2 = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> r13_1)
                var_74_3 = r13_1
        else
            while (true)
                int64_t rcx_5 = sx.q(r8_3)
                r9_3 += 0x20
                r8_3 += 1
                int32_t var_70_2 = r9_3
                int32_t var_88_2 = r8_3
                
                if (rcx_5.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
                var_78_1 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_1413c64da
            
            var_74_3 = r13_1
    
    while (true)
        int64_t rax_20 = sx.q(var_50_1:4.d)
        int64_t var_58
        
        if (rax_20.d == (var_78_1.q u>> 0x20).d && var_58 == &arg1[2] && rbx_2 == arg1)
            break
        
        int64_t* rbx_4 = *((rax_20 << 5) + *rbx_2 + 0x10)
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t rax_24 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rax_24 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
        
        int32_t var_5c
        var_50_1.d &= not.d(var_5c)
        sub_14059bdd0(&var_60)
        rbx_2 = var_68_1
    
    int64_t rcx_10 = *arg1
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    *arg1 = *arg2
    *arg2 = 0
    arg1[1].d = arg2[1].d
    *(arg1 + 0xc) = *(arg2 + 0xc)
    arg2[1] = 0
    
    if (&arg1[2] != &arg2[2])
        if (arg2[4] == 0)
            memmove(&arg1[2], &arg2[2], 0x10)
        
        int64_t rcx_12 = arg1[4]
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
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
