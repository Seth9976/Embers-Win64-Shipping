// 函数: sub_14216dfc0
// 地址: 0x14216dfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_142167460(arg1, arg2, arg5, nullptr)
int64_t* result_1 = result

if (result != 0)
    void* r12_1 = *result
    int64_t var_b0
    sub_140d3a3a0(&var_b0, arg3)
    int64_t* r14_1 = r12_1 + 0x30
    int64_t var_b8
    
    if (*sub_141fb3050(r14_1, &var_b8, var_b0) == 0xffffffff)
        sub_140d3a3a0(&var_b0, arg3)
        sub_142159da0(r14_1, &var_b8, &var_b0, nullptr)
        sub_140d3a3a0(&var_b8, arg3)
        int64_t rax_1 = var_b8
        int32_t r15_2 = (rax_1 u>> 0x20).d ^ rax_1.d
        int32_t* rax_7
        
        if (arg1[0x1f].d == *(arg1 + 0x124))
        labelid_26:
            rax_7 = sub_14215b1f0(&arg1[0x1e], r15_2, &var_b8)
        else
            void* rdx_5 = arg1[0x26]
            void* r9 = &arg1[0x25]
            
            if (rdx_5 != 0)
                r9 = rdx_5
            
            int32_t rbx_1 = *(r9 + (((sx.q(arg1[0x27].d) - 1) & sx.q(r15_2)) << 2))
            
            if (rbx_1 == 0xffffffff)
            label_14216e11b:
                rax_7 = sub_14215b1f0(&arg1[0x1e], r15_2, &var_b8)
            else
                int64_t rdx_6 = arg1[0x1e]
                int64_t rdi_1
                
                while (true)
                    var_b0 = rax_1
                    int64_t rcx_7 = sx.q(rbx_1) * 5
                    rdi_1 = rcx_7 << 2
                    int64_t var_78 = *(rdx_6 + (rcx_7 << 2))
                    
                    if (sub_14077a170(&var_78, &var_b0) != 0)
                        break
                    
                    rdx_6 = arg1[0x1e]
                    rbx_1 = *(rdi_1 + rdx_6 + 0xc)
                    
                    if (rbx_1 == 0xffffffff)
                        goto label_14216e11b_2
                    
                    rax_1 = var_b8
                
                if (rbx_1 == 0xffffffff)
                label_14216e11b_1:
                    rax_7 = sub_14215b1f0(&arg1[0x1e], r15_2, &var_b8)
                else
                    void* rax_5 = arg1[0x1e]
                    
                    if (rax_5 == neg.q(rdi_1))
                    label_14216e11b_2:
                        rax_7 = sub_14215b1f0(&arg1[0x1e], r15_2, &var_b8)
                    else
                        rax_7 = rax_5 + rdi_1 + 8
        
        *rax_7 += 1
        result_1 = result
    
    int32_t r10_1 = r14_1[5].d
    void* r9_1 = &r14_1[2]
    int32_t rcx_10 = 0
    int32_t var_a4_1 = 1
    int32_t var_a8_1 = 0
    int32_t r8_7 = 0
    void* var_a0 = r9_1
    int32_t var_98_1 = 0xffffffff
    int64_t var_94_1 = 0
    
    if (r10_1 != 0)
        void* rax_8 = *(r9_1 + 0x10)
        
        if (rax_8 != 0)
            r9_1 = rax_8
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_11 = *r9_1
        
        if (rdx_11 != 0)
        label_14216e198:
            int32_t rax_15 = neg.d(rdx_11) & rdx_11
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_15)
            int32_t var_a4_2 = rax_15
            int32_t rax_16
            
            if (rax_15 == 0)
                rax_16 = 0x20
            else
                rax_16 = 0x1f - temp0_2
            
            var_94_1.d = r8_7 - rax_16 + 0x1f
            
            if (r8_7 - rax_16 + 0x1f s> r10_1)
                var_94_1.d = r10_1
        else
            while (true)
                int64_t rdx_12 = sx.q(rcx_10)
                r8_7 += 0x20
                rcx_10 += 1
                var_94_1:4.d = r8_7
                var_a8_1 = rcx_10
                
                if (rdx_12.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(r9_1 + (rdx_12 << 2) + 4)
                var_98_1 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_14216e198
            
            var_94_1.d = r10_1
    
    int64_t* var_80_1 = r14_1
    int128_t var_50_1 = 0xffffffff
    double var_60_1[0x2] = var_a8_1.o
    var_a8_1.o = r14_1.o
    int64_t var_88_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    var_98_1.o = var_60_1
    
    if (0 s< r10_1)
        int32_t var_8c
        int32_t rbx_2 = var_8c
        
        while (true)
            int64_t* rsi_2 = var_a8_1.q
            int64_t rdi_3 = sx.q(rbx_2) << 4
            int64_t rax_18 = sub_140d3c6e0(*rsi_2 + rdi_3)
            void* rax_19
            
            if (rax_18 != 0)
                rax_19 = sub_140d3c6e0(*rsi_2 + rdi_3)
            
            if (rax_18 == 0 || *(rax_19 + 0x134) == 1)
                sub_1418ebff0(r14_1, rbx_2)
            
            var_94_1:4.d &= not.d(var_a0:4.d)
            sub_14059bdd0(&var_a0)
            rbx_2 = var_8c
            
            if (rbx_2 s>= *(var_98_1.q + 0x18))
                break
            
            r14_1 = var_80_1
    
    result = zx.q(*(r12_1 + 0x38) - *(r12_1 + 0x64))
    
    if (result.d == arg4)
        sub_1421599e0(&arg1[0x14], &var_b8, result_1, nullptr)
        return sub_142174690(&arg1[0xa], arg2)

return result
