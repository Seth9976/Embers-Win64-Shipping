// 函数: sub_141d766d0
// 地址: 0x141d766d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* r13 = *(arg1 + 0xd0)

if (r13 != 0)
    int32_t rcx = 0
    int32_t rbx_1 = *(r13 + 0x28)
    int32_t r8_1 = 0
    int32_t var_f8 = 0
    int32_t var_f4_1 = 1
    void* var_f0_1 = r13 + 0x10
    int32_t var_e8_1 = 0xffffffff
    int64_t var_e4_1 = 0
    
    if (rbx_1 != 0)
        void* rax = *(r13 + 0x20)
        void* r9_1 = r13 + 0x10
        
        if (rax != 0)
            r9_1 = rax
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbx_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_141d7678b:
            int32_t rax_7 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_f4_2 = rax_7
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_2
            
            var_e4_1.d = r8_1 - rax_8 + 0x1f
            
            if (r8_1 - rax_8 + 0x1f s> rbx_1)
                var_e4_1.d = rbx_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                var_e4_1:4.d = r8_1
                var_f8 = rcx
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                var_e8_1 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_141d7678b
            
            var_e4_1.d = rbx_1
    
    int32_t rdx_4 = *(r13 + 0x28)
    double zmm2[0x2] = var_e8_1.o
    void* var_d8 = r13
    double var_c0_1[0x2] = zmm2
    int32_t rsi_1 = 0xffffffff << (rdx_4.b & 0x1f)
    int128_t var_d0_1 = var_f8.o
    int32_t r8_4 = rdx_4 s>> 5
    int32_t r9_3 = rdx_4 & 0xffffffe0
    int64_t var_80_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_e8_2 = rsi_1
    var_e4_1.d = rdx_4
    int128_t var_a0 = var_d8.o
    int128_t var_90_1 = var_d0_1
    
    if (rdx_4 != rbx_1)
        void* rax_10 = *(r13 + 0x20)
        void* r10_1 = r13 + 0x10
        
        if (rax_10 != 0)
            r10_1 = rax_10
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 - 1)
        int32_t rdx_8 = *(r10_1 + (sx.q(r8_4) << 2)) & rsi_1
        
        if (rdx_8 != 0)
        label_141d76863:
            int32_t rax_17 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
            int32_t r11_1
            
            if (rax_17 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            var_e4_1.d = r9_3 - r11_1 + 0x1f
            
            if (r9_3 - r11_1 + 0x1f s> rbx_1)
                var_e4_1.d = rbx_1
        else
            while (true)
                int64_t rcx_5 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r10_1 + (rcx_5 << 2) + 4)
                var_e8_2 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_141d76863
            
            var_e4_1.d = rbx_1
    
    while (true)
        result = sx.q(var_90_1:0xc.d)
        int64_t* rdx_9 = var_a0.q
        
        if (result.d == (var_e8_2.q u>> 0x20).d && var_90_1.q == r13 + 0x10 && rdx_9 == r13)
            break
        
        void* rcx_7 = result * 3
        int64_t rax_19 = *rdx_9
        int32_t* rdi_1 = rax_19 + (rcx_7 << 3)
        int64_t rcx_12
        
        if ((*(rax_19 + (rcx_7 << 3) + 0xc) == 0 & sub_140b5b8a0(*(rax_19 + (rcx_7 << 3) + 8), 0))
                == 0)
            sub_140b2f3e0(&var_d8, sub_140b63b70(&rdi_1[2], &var_f8))
            int64_t var_48
            int64_t* var_68 = sub_140b63b70(rdi_1, &var_48)
            void** var_60_1 = &var_d8
            void arg_18
            sub_141d73530(arg2, &arg_18, &var_68, nullptr)
            rcx_12 = var_48
        else
            int64_t var_b0 = 0
            int64_t var_a8_1 = 0
            sub_140b2f3e0(&var_d8, &var_b0)
            int64_t var_58
            int64_t* var_78 = sub_140b63b70(rdi_1, &var_58)
            void** var_70_1 = &var_d8
            void arg_8
            sub_141d73530(arg2, &arg_8, &var_78, nullptr)
            rcx_12 = var_58
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        int64_t rcx_17 = var_d0_1:8.q
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        var_90_1:8.d &= not.d(var_a0:0xc.d)
        sub_14059bdd0(&var_a0:8)

return result
