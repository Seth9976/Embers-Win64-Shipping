// 函数: sub_1423855f0
// 地址: 0x1423855f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = EnterCriticalSection(arg1 + 0x580)

if (arg2 != 0)
    uint64_t var_c8 = 0
    int64_t var_c0_1 = 0
    sub_1405c5570(&var_c8, 0x20)
    void* r15_1 = arg2 + 0x1a0
    int32_t var_b4_1 = 1
    int32_t r10_1 = *(r15_1 + 0x28)
    void* rdi_1 = r15_1 + 0x10
    void* arg_8 = r15_1
    int32_t rcx_2 = 0
    int32_t var_b8_1 = 0
    int32_t r8_1 = 0
    void* var_b0_1 = rdi_1
    int32_t var_a8_1 = 0xffffffff
    int64_t var_a4_1 = 0
    
    if (r10_1 != 0)
        void* rax = *(rdi_1 + 0x10)
        void* r9_1 = rdi_1
        
        if (rax != 0)
            r9_1 = rax
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_2 = *r9_1
        
        if (rdx_2 != 0)
        label_1423856f9:
            int32_t rax_7 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_b4_2 = rax_7
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_2
            
            var_a4_1.d = r8_1 - rax_8 + 0x1f
            
            if (r8_1 - rax_8 + 0x1f s> r10_1)
                var_a4_1.d = r10_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx_2)
                r8_1 += 0x20
                rcx_2 += 1
                var_a4_1:4.d = r8_1
                var_b8_1 = rcx_2
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
                int32_t var_a8_2 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_1423856f9
            
            var_a4_1.d = r10_1
    
    int32_t rdx_4 = *(r15_1 + 0x28)
    int128_t var_90_1 = var_b8_1.o
    int32_t r14_1 = 0xffffffff << (rdx_4.b & 0x1f)
    int32_t r8_4 = rdx_4 s>> 5
    int32_t r9_3 = rdx_4 & 0xffffffe0
    int128_t var_80_1 = 0xffffffff
    int64_t var_50_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    int64_t zmm1 = var_90_1:8.q
    var_90_1:8.d = r14_1
    var_90_1:0xc.d = rdx_4
    int128_t var_70 = r15_1.o
    
    if (rdx_4 != r10_1)
        void* rax_10 = *(rdi_1 + 0x10)
        void* r11_1 = rdi_1
        
        if (rax_10 != 0)
            r11_1 = rax_10
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_8 = *(r11_1 + (sx.q(r8_4) << 2)) & r14_1
        
        if (rdx_8 != 0)
        label_1423857c3:
            int32_t rax_17 = ((rdx_8 - 1) & rdx_8) ^ rdx_8
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
            int32_t rsi_1
            
            if (rax_17 == 0)
                rsi_1 = 0x20
            else
                rsi_1 = 0x1f - temp0_4
            
            var_90_1:0xc.d = r9_3 - rsi_1 + 0x1f
            
            if (r9_3 - rsi_1 + 0x1f s> r10_1)
                var_90_1:0xc.d = r10_1
        else
            while (true)
                int64_t rcx_7 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r11_1 + (rcx_7 << 2) + 4)
                var_90_1:8.d = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_1423857c3
            
            var_90_1:0xc.d = r10_1
        
        rdi_1 = var_b0_1
    
    result = var_90_1:8.q u>> 0x20
    uint64_t result_1 = result
    
    while (true)
        int32_t var_54
        int64_t rdx_9 = sx.q(var_54)
        
        if (rdx_9.d != result.d || zmm1 != rdi_1)
            result.b = 0
        else
            result.b = 1
        
        int64_t* rcx_9 = var_70.q
        
        if (result.b == 0 || rcx_9 != r15_1)
            result.b = 1
        else
            result.b = 0
        
        if (result.b == 0)
            break
        
        int64_t* rdi_2 = *(*rcx_9 + rdx_9 * 0x10)
        
        if (rdi_2 != 0)
            void* rax_22 = sub_142577430()
            void* rdx_10 = rdi_2[2]
            int64_t rax_23 = sx.q(*(rax_22 + 0x38))
            
            if (rax_23.d s<= *(rdx_10 + 0x38)
                    && *(*(rdx_10 + 0x30) + (rax_23 << 3)) == rax_22 + 0x30
                    && (rdi_2[0x11].b & 1) != 0)
                int32_t rax_25 = var_c0_1:4.d
                var_c0_1.d = 0
                
                if (rax_25 s< 0 && rax_25 != 0)
                    sub_1405c5570(&var_c8, 0)
                
                (*(*rdi_2 + 0x688))(rdi_2, &var_c8, 3)
                uint64_t r14_2 = var_c8
                int64_t* rdi_3 = nullptr
                int64_t r15_2 = 0
                int64_t rcx_14 = r14_2 + (sx.q(var_c0_1.d) << 3)
                uint64_t r12_4 = (rcx_14 - r14_2 + 7) u>> 3
                
                if (r14_2 u> rcx_14)
                    r12_4 = 0
                
                if (r12_4 != 0)
                    do
                        void* rsi_2 = *r14_2
                        EnterCriticalSection(arg1 + 0x580)
                        int64_t rax_28
                        char rcx_16
                        
                        if (rsi_2 != 0)
                            rax_28 = sx.q(*(rsi_2 + 0x34))
                            
                            if (rax_28.d s< 0 || rax_28.d s>= *(arg1 + 0x18))
                                rcx_16 = 0
                            else
                                rcx_16 = 1
                        
                        if (rsi_2 != 0 && rcx_16 != 0)
                            int64_t* rcx_18 = rax_28 * 0xd8 + *(arg1 + 0x10)
                            
                            if (*rcx_18 == rsi_2)
                                rdi_3 = rcx_18
                            
                            if (arg1 != -0x580)
                                LeaveCriticalSection(arg1 + 0x580)
                            
                            if (rdi_3 != 0)
                                rdi_3[0x10].d = _mm_max_ss(rdi_3[0x10].d, arg3[0].d)
                            
                            rdi_3 = nullptr
                        else if (arg1 != -0x580)
                            LeaveCriticalSection(arg1 + 0x580)
                        
                        r14_2 += 8
                        r15_2 += 1
                    while (r15_2 != r12_4)
                
                r15_1 = arg_8
        
        int32_t var_58 = var_58 & not.d(var_70:0xc.d)
        sub_14059bdd0(&var_70:8)
        result = result_1
        rdi_1 = var_b0_1
    
    uint64_t rcx_22 = var_c8
    
    if (rcx_22 != 0)
        result = sub_140a74f90(rcx_22)

if (arg1 == -0x580)
    return result

return LeaveCriticalSection(arg1 + 0x580)
