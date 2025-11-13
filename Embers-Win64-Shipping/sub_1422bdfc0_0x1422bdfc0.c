// 函数: sub_1422bdfc0
// 地址: 0x1422bdfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg1
uint64_t result

if (*(arg1 + 0x30) == 0)
    result.b = 0
else
    *(arg3 + 0x810) += 1
    int32_t rax_1 = *(arg3 + 0x80c) & 0x8000003f
    
    if (rax_1 s< 0)
        rax_1 = ((rax_1 - 1) | 0xffffffc0) + 1
    
    int64_t rax_5 = sx.q(rax_1) << 5
    void* rdi_2 = arg3 + 8 + rax_5
    bool cond:1_1 = *(rax_5 + arg3 + 0x14) == 1
    *(rax_5 + arg3 + 0x10) = 0
    
    if (not(cond:1_1))
        sub_1405947f0(rdi_2, 1)
    
    char rcx_1 = *(r14 + 0x20)
    char var_77_1 = 0
    int32_t rdx = *arg5
    uint8_t var_78 = (rdx u>> 1).b & 1
    void* var_58_1 = arg3
    void* const rax_11
    
    if (arg2 == 0)
        rax_11 = nullptr
    else
        rax_11 = *(arg2 + 0x20)
    
    uint64_t var_90_1 = *(arg3 + 0x818)
    int128_t var_48
    __builtin_memset(&var_48, 0, 0x12)
    int64_t var_98 = arg4
    void* var_88_1 = rdi_2
    
    if (rdx.b s>= 0)
        int32_t i = 0
        
        if (*(r14 + 0x30) s> 0)
            int64_t r14_3 = 0
            
            do
                void* r8_2 = *(r14 + 0x28)
                void* rcx_8 = r14_3 * 0x30 + r8_2
                void* const rax_23
                
                if (rax_11 == 0 || (*(*(rax_11 + 8) + (r14_3 << 2)) & 1) != 0)
                    rax_23.b = 1
                else
                    rax_23.b = 0
                
                if ((*(rcx_8 + 0x2c) & 1) != 0 && rax_23.b != 0
                        && (*(rcx_8 + 0x20) != 1 || var_78 != 0))
                    uint32_t r10_1 = zx.d(*(rcx_8 + 0x1c))
                    int64_t rdx_8 = *(r14 + 0x38)
                    
                    if ((rcx_1 & 1) == 0)
                        sub_1422be6d0(&var_78, &var_98, r10_1.w, *(rcx_8 + 0x1e), 
                            *((zx.q(r10_1) << 5) + rdx_8 + 0x14) - 1)
                    else
                        int16_t r15_1
                        
                        if (r14_3 == 8)
                            r15_1 = *((zx.q(*(r8_2 + 0x19c)) << 5) + rdx_8 + 0x14)
                            char rax_30 = *(sx.q(*(r8_2 + 0x194)) + arg4)
                            
                            if (var_77_1 != 0 || *(arg2 + 2) != rax_30)
                                *(arg2 + 2) = rax_30
                            label_1422be249:
                                int64_t rsi_3 = sx.q(*(rdi_2 + 8))
                                int32_t rax_31 = (rsi_3 + 1).d
                                *(rdi_2 + 8) = rax_31
                                
                                if (rax_31 s> *(rdi_2 + 0xc))
                                    sub_140594770(rdi_2)
                                
                                *(*rdi_2 + (rsi_3 << 1)) = r15_1
                        else if (r14_3 != 4)
                            sub_1422be6d0(&var_78, &var_98, r10_1.w, *(rcx_8 + 0x1e), 
                                *((zx.q(r10_1) << 5) + rdx_8 + 0x14) - 1)
                        else
                            r15_1 = *((zx.q(*(r8_2 + 0xdc)) << 5) + rdx_8 + 0x14)
                            char rax_36 = *(sx.q(*(r8_2 + 0xd4)) + arg4)
                            
                            if (var_77_1 != 0 || *(arg2 + 1) != rax_36)
                                *(arg2 + 1) = rax_36
                                goto label_1422be249
                
                i += 1
                r14_3 += 1
            while (i s< *(r14 + 0x30))
            
            r14 = arg1
    else if (arg2 != 0 && (rcx_1 & 1) != 0)
        void* r8 = *(r14 + 0x28)
        char rax_15 = *(sx.q(*(r8 + 0xd4)) + arg4)
        int16_t r14_1 = *((zx.q(*(r8 + 0xdc)) << 5) + *(r14 + 0x38) + 0x14)
        
        if (*(arg2 + 1) != rax_15)
            *(arg2 + 1) = rax_15
            int64_t rsi_1 = sx.q(*(rdi_2 + 8))
            int32_t rax_16 = (rsi_1 + 1).d
            *(rdi_2 + 8) = rax_16
            
            if (rax_16 s> *(rdi_2 + 0xc))
                sub_140594770(rdi_2)
            
            *(*rdi_2 + (rsi_1 << 1)) = r14_1
        
        void* r8_1 = *(r14 + 0x28)
        result = zx.q(*(sx.q(*(r8_1 + 0x194)) + arg4))
        int16_t r14_2 = *((zx.q(*(r8_1 + 0x19c)) << 5) + *(r14 + 0x38) + 0x14)
        
        if (var_77_1 != 0 || *(arg2 + 2) != result.b)
            *(arg2 + 2) = result.b
            int64_t rsi_2 = sx.q(*(rdi_2 + 8))
            int32_t rax_21 = (rsi_2 + 1).d
            *(rdi_2 + 8) = rax_21
            
            if (rax_21 s> *(rdi_2 + 0xc))
                sub_140594770(rdi_2)
            
            *(*rdi_2 + (rsi_2 << 1)) = r14_2
        
        r14 = arg1
    
    int64_t rsi_4 = sx.q(*(rdi_2 + 8))
    
    if (rsi_4.d == 0)
        result.b = 0
    else
        int32_t rax_38 = (rsi_4 + 1).d
        *(rdi_2 + 8) = rax_38
        
        if (rax_38 s> *(rdi_2 + 0xc))
            sub_140594770(rdi_2)
        
        int64_t rax_39 = *rdi_2
        *(arg3 + 0x80c) += 1
        bool cond:2_1 = *(arg3 + 0x850) == 0
        int32_t rcx_14 = *(arg3 + 0x80c)
        *(rax_39 + (rsi_4 << 1)) = 0
        
        if (not(cond:2_1))
            *(arg3 + 0x840) = 0
            
            if (*(arg3 + 0x844) s<= 0xffffffff)
                sub_1405a51b0(arg3 + 0x838, 0)
            
            int64_t* rcx_16 = *(arg3 + 0x848)
            (*(*rcx_16 + 0x98))(rcx_16)
            *(arg3 + 0x850) = 0
            rcx_14 = *(arg3 + 0x80c)
        
        result = zx.q(*(arg3 + 0x808))
        
        if (rcx_14 - result.d == 0x40)
            int32_t rcx_18 = (result + 1).d
            *(arg3 + 0x808) = rcx_18
            int32_t rax_41 = result.d & 0x8000003f
            
            if (rax_41 s< 0)
                rax_41 = ((rax_41 - 1) | 0xffffffc0) + 1
            
            int32_t rcx_19 = rcx_18 & 0x8000003f
            
            if (rcx_19 s< 0)
                rcx_19 = ((rcx_19 - 1) | 0xffffffc0) + 1
            
            var_98 = 0
            void* rcx_23 = arg3 + 8 + (sx.q(rcx_19) << 5)
            var_98 = *rcx_23
            *rcx_23 = 0
            var_90_1.d = *(rcx_23 + 8)
            var_90_1:4.d = *(rcx_23 + 0xc)
            *(rcx_23 + 8) = 0
            sub_1422ca850(r14, arg4, arg3 + 8 + (sx.q(rax_41) << 5), &var_98, rcx_23)
            int64_t rcx_25 = var_98
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
        
        result.b = 1

return result
