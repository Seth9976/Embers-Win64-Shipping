// 函数: sub_141ee2ad0
// 地址: 0x141ee2ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0

if ((*(*arg1 + 0x540))() != 0 && arg1[0xf0].d - *(arg1 + 0x7ac) s> 0)
    void* r10_1 = &arg1[0xef]
    int32_t rbx_1 = *(r10_1 + 0x28)
    int32_t rcx = 0
    int32_t r8_1 = 0
    void* r13_1 = r10_1 + 0x10
    int32_t var_a8_1 = 0
    int32_t var_a4_1 = 1
    void* var_a0_1 = r13_1
    int32_t var_98_1 = 0xffffffff
    int64_t var_94_1 = 0
    
    if (rbx_1 != 0)
        void* rax_4 = *(r13_1 + 0x10)
        void* r9_1 = r13_1
        
        if (rax_4 != 0)
            r9_1 = rax_4
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_141ee2bc8:
            int32_t rax_11 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
            int32_t var_a4_2 = rax_11
            int32_t rax_12
            
            if (rax_11 == 0)
                rax_12 = 0x20
            else
                rax_12 = 0x1f - temp0_2
            
            var_94_1.d = r8_1 - rax_12 + 0x1f
            
            if (r8_1 - rax_12 + 0x1f s> rbx_1)
                var_94_1.d = rbx_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                var_94_1:4.d = r8_1
                var_a8_1 = rcx
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                int32_t var_98_2 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_141ee2bc8
            
            var_94_1.d = rbx_1
        
        r10_1 = &arg1[0xef]
    
    int32_t rdx_4 = *(r10_1 + 0x28)
    int128_t var_48_1 = 0xffffffff
    int32_t r14_1 = 0xffffffff << (rdx_4.b & 0x1f)
    int128_t var_58_1 = var_a8_1.o
    int32_t r8_4 = rdx_4 s>> 5
    int32_t r9_3 = rdx_4 & 0xffffffe0
    int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_98_3 = r14_1
    var_94_1.d = rdx_4
    int128_t zmm0 = r10_1.o
    int128_t var_88 = zmm0
    int128_t var_78_1 = var_58_1
    
    if (rdx_4 != rbx_1)
        void* rax_14 = *(r13_1 + 0x10)
        void* r10_2 = r13_1
        
        if (rax_14 != 0)
            r10_2 = rax_14
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 - 1)
        int32_t rdx_8 = *(r10_2 + (sx.q(r8_4) << 2)) & r14_1
        
        if (rdx_8 != 0)
        label_141ee2ca2:
            int32_t rax_21 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_21)
            int32_t r11_1
            
            if (rax_21 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            var_94_1.d = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rbx_1)
                var_94_1.d = rbx_1
        else
            while (true)
                int64_t rcx_5 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r10_2 + (rcx_5 << 2) + 4)
                var_98_3 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_141ee2ca2
            
            var_94_1.d = rbx_1
        
        r10_1 = &arg1[0xef]
    
    while (true)
        int64_t rax_23 = sx.q(var_78_1:0xc.d)
        int64_t* rdi_1 = var_88.q
        
        if (rax_23.d == (var_98_3.q u>> 0x20).d && var_78_1.q == r13_1 && rdi_1 == r10_1)
            break
        
        int64_t rdi_2 = *rdi_1
        int64_t rbx_2 = rax_23 * 5
        
        if (*(*(rdi_2 + (rbx_2 << 3) + 8) + 0x198) s> 0
                && not(0f f>= *(rdi_2 + (rbx_2 << 3) + 0x10)))
            int64_t* rcx_7 = arg1[0x3e]
            float arg_8 = 0f
            char rax_25 = sub_14236bbe0(rcx_7, zmm0.d)
            char rax_26
            rax_26, zmm0 = sub_1423650d0(*(rdi_2 + (rbx_2 << 3) + 8), 
                (*(rdi_2 + (rbx_2 << 3) + 0x10)).d, rdi_2 + 0x14 + (rbx_2 << 3), &arg_8, rax_25)
            
            if (rax_26 != 0)
                int64_t rbx_3 = sx.q(arg2[1].d)
                int64_t var_a0_2 = *(rdi_2 + (rbx_2 << 3) + 8)
                int32_t var_a4_3 = (*(rdi_2 + (rbx_2 << 3) + 0x10)).d
                int32_t rax_28 = (rbx_3 + 1).d
                int32_t var_a8_2 = arg_8.d
                arg2[1].d = rax_28
                
                if (rax_28 s> *(arg2 + 0xc))
                    sub_1405a4f90(arg2)
                
                zmm0 = var_a8_2.o
                r15.b = 1
                *(*arg2 + rbx_3 * 0x10) = zmm0
        
        var_78_1:8.d &= not.d(var_88:0xc.d)
        sub_14059bdd0(&var_88:8)
        r10_1 = &arg1[0xef]

return zx.q(r15.b)
