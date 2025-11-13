// 函数: sub_141d22440
// 地址: 0x141d22440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr

if (arg3[1].d != 0)
    int64_t r14_1 = sx.q(sub_141d1f690(arg1, *arg2))
    int32_t result_1 = arg3[1].d
    int32_t rdx_1 = 0
    int32_t var_b8_1 = 0
    int64_t var_c0 = 0
    int32_t var_b4_1 = 0
    int32_t temp0_1 = r14_1.d
    
    if (temp0_1 s> 0)
        int32_t var_b8_2 = r14_1.d
        sub_1405a4cf0(&var_c0)
    else if (temp0_1 s< 0)
        int32_t rbx_2 = neg.d(r14_1.d)
        
        if (rbx_2 != 0)
            int32_t rax_2 = neg.d(rbx_2 + r14_1.d)
            
            if (rax_2 != 0)
                memmove(r14_1 << 2, nullptr, rax_2 << 2)
                rdx_1 = var_b8_1
            
            int32_t var_b8_3 = rdx_1 - rbx_2
            sub_1405dac90(&var_c0)
    
    int32_t rdx_3 = 0
    int32_t r8_2 = 0
    
    if (r14_1.d s> 0)
        int64_t rcx_3 = 0
        int32_t* r9 = nullptr
        
        do
            *(var_c0 + (rcx_3 << 2)) = rdx_3
            
            if (rdx_3 s< arg3[1].d && r8_2 == *(r9 + *arg3))
                rdx_3 += 1
                r9 = &r9[1]
            
            r8_2 += 1
            rcx_3 += 1
        while (rcx_3 s< r14_1)
    
    void* r10_1 = arg1 + 8
    int32_t var_ac_1 = 1
    int32_t r11_1 = *(r10_1 + 0x28)
    void* r15_1 = r10_1 + 0x10
    void* var_c8_1 = r10_1
    int32_t rcx_4 = 0
    int32_t var_b0_1 = 0
    int32_t r8_3 = 0
    void* var_a8_1 = r15_1
    int32_t var_a0_1 = 0xffffffff
    int64_t var_9c_1 = 0
    
    if (r11_1 != 0)
        void* rax_5 = *(r15_1 + 0x10)
        void* r9_1 = r15_1
        
        if (rax_5 != 0)
            r9_1 = rax_5
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r11_1 - 1)
        int32_t rdx_6 = *r9_1
        
        if (rdx_6 != 0)
        label_141d225a8:
            int32_t rax_12 = neg.d(rdx_6) & rdx_6
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
            int32_t var_ac_2 = rax_12
            int32_t rax_13
            
            if (rax_12 == 0)
                rax_13 = 0x20
            else
                rax_13 = 0x1f - temp0_2
            
            var_9c_1.d = r8_3 - rax_13 + 0x1f
            
            if (r8_3 - rax_13 + 0x1f s> r11_1)
                var_9c_1.d = r11_1
        else
            while (true)
                int64_t rdx_7 = sx.q(rcx_4)
                r8_3 += 0x20
                rcx_4 += 1
                var_9c_1:4.d = r8_3
                var_b0_1 = rcx_4
                
                if (rdx_7.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_6 = *(r9_1 + (rdx_7 << 2) + 4)
                int32_t var_a0_2 = 0xffffffff
                
                if (rdx_6 != 0)
                    goto label_141d225a8
            
            var_9c_1.d = r11_1
    
    int32_t rdx_8 = *(r10_1 + 0x28)
    int128_t var_48_1 = 0xffffffff
    int32_t r12_1 = 0xffffffff << (rdx_8.b & 0x1f)
    int128_t var_58_1 = var_b0_1.o
    int32_t r8_6 = rdx_8 s>> 5
    int32_t r9_3 = rdx_8 & 0xffffffe0
    int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
    int32_t var_a0_3 = r12_1
    var_9c_1.d = rdx_8
    int128_t var_88 = r10_1.o
    int128_t var_78_1 = var_58_1
    
    if (rdx_8 != r11_1)
        void* rax_15 = *(r15_1 + 0x10)
        void* r10_2 = r15_1
        
        if (rax_15 != 0)
            r10_2 = rax_15
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(r11_1 - 1)
        int32_t rdx_12 = *(r10_2 + (sx.q(r8_6) << 2)) & r12_1
        
        if (rdx_12 != 0)
        label_141d22672:
            int32_t rax_22 = neg.d(rdx_12) & rdx_12
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
            int32_t rbx_3
            
            if (rax_22 == 0)
                rbx_3 = 0x20
            else
                rbx_3 = 0x1f - temp0_4
            
            var_9c_1.d = r9_3 - rbx_3 + 0x1f
            
            if (r9_3 - rbx_3 + 0x1f s> r11_1)
                var_9c_1.d = r11_1
        else
            while (true)
                int64_t rcx_9 = sx.q(r8_6)
                r9_3 += 0x20
                r8_6 += 1
                
                if (rcx_9.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                    break
                
                rdx_12 = *(r10_2 + (rcx_9 << 2) + 4)
                var_a0_3 = 0xffffffff
                
                if (rdx_12 != 0)
                    goto label_141d22672
            
            var_9c_1.d = r11_1
        
        r10_1 = var_c8_1
    
    while (true)
        int64_t rax_24 = sx.q(var_78_1:0xc.d)
        int64_t rcx_11 = var_88.q
        
        if (rax_24.d == (var_a0_3.q u>> 0x20).d && var_78_1.q == r15_1 && rcx_11 == r10_1)
            break
        
        int64_t rax_25 = *arg2
        void* rbx_6 = rax_24 * 0x30 + *rcx_11
        
        if (*(rbx_6 + 0x14) == rax_25 && arg4:1.b != 0)
            int64_t* rcx_12 = *(rbx_6 + 0x20)
            int32_t var_90 = r14_1.d - result_1
            (*(*rcx_12 + 0x68))(rcx_12, &var_c0, &var_90, arg3, var_c8_1)
            rax_25 = *arg2
        
        if (*(rbx_6 + 8) == rax_25)
            int64_t* rcx_13 = *(rbx_6 + 0x20)
            (*(*rcx_13 + 0x38))(rcx_13, arg3)
        
        var_78_1:8.d &= not.d(var_88:0xc.d)
        sub_14059bdd0(&var_88:8)
        r10_1 = var_c8_1
    
    int64_t rbx_7 = *arg2
    void* const rcx_18
    
    if (*(arg1 + 0x60) == *(arg1 + 0x8c))
    label_141d227c0:
        rcx_18 = nullptr
    else
        int32_t rax_34 = sub_140b5ead0(rbx_7.d) + rbx_7:4.d
        void* r8_8 = arg1 + 0x90
        void* rcx_16 = *(r8_8 + 8)
        
        if (rcx_16 != 0)
            r8_8 = rcx_16
        
        int32_t rax_36 = *(r8_8 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(rax_34)) << 2))
        
        if (rax_36 == 0xffffffff)
        label_141d227c0_1:
            rcx_18 = nullptr
        else
            int64_t r8_9 = *(arg1 + 0x58)
            
            while (true)
                int64_t rdx_18 = sx.q(rax_36) * 5
                rcx_18 = r8_9 + (rdx_18 << 2)
                
                if (*(r8_9 + (rdx_18 << 2)) == rbx_7)
                    break
                
                rax_36 = *(rcx_18 + 0xc)
                
                if (rax_36 == 0xffffffff)
                    goto label_141d227c0_2
            
            if (rax_36 == 0xffffffff)
            label_141d227c0_2:
                rcx_18 = nullptr
    
    result = result_1
    *(rcx_18 + 8) -= result
    int64_t rcx_19 = var_c0
    
    if (rcx_19 != 0)
        return sub_140a74f90(rcx_19)

return result
