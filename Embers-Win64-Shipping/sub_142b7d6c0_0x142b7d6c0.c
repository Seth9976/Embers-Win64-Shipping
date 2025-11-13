// 函数: sub_142b7d6c0
// 地址: 0x142b7d6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1b8 = -2
void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int32_t* r15 = arg3
uint64_t result

if (*arg3 s<= 0)
    void var_b8
    sub_142b109a0(&var_b8)
    void var_128
    sub_142b109a0(&var_128)
    void* r12_1 = arg2
    void* var_1c8_1 = arg2
    int32_t result_1
    
    while (true)
        int16_t rcx_2 = *(r12_1 + 8)
        int32_t rax_3
        
        if (rcx_2 s< 0)
            rax_3 = *(r12_1 + 0xc)
        else
            rax_3 = sx.d(rcx_2) s>> 5
        
        int16_t rcx_3
        
        if (rax_3 == 0)
            rcx_3 = -1
        else
            void* rax_4 = r12_1 + 0xa
            
            if ((rcx_2.b & 2) == 0)
                rax_4 = *(r12_1 + 0x18)
            
            rcx_3 = *rax_4
        
        uint32_t rdi_1 = zx.d(rcx_3)
        uint32_t var_1dc_1 = rdi_1
        int32_t rbx_1 = rdi_1 + 1
        int32_t var_1e4_1 = rbx_1
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1a8
        Concurrency::details::_SyncOriginator<uint64_t>::_SyncOriginator<uint64_t>(&var_1a8, r12_1, 
            0, rbx_1)
        void* r14_1 = r12_1
        void* var_1d8_1 = r12_1
        int32_t i = *(r12_1 + 0x4c)
        uint16_t var_1a0
        int32_t var_19c
        uint16_t rcx_6
        int32_t rdx_4
        
        if (i s< 0)
            rdx_4 = var_19c
            rcx_6 = var_1a0
        else
            do
                void* rax_5 = sub_142ae72d0(arg1 + 0x68, i)
                rdx_4 = var_19c
                rcx_6 = var_1a0
                int32_t rax_7
                
                if (rcx_6 s< 0)
                    rax_7 = rdx_4
                else
                    rax_7 = sx.d(rcx_6) s>> 5
                
                int32_t r10_2
                
                if (rcx_6 s< 0)
                    r10_2 = rdx_4
                else
                    r10_2 = sx.d(rcx_6) s>> 5
                
                char rax_8
                
                if ((rcx_6.b & 1) == 0)
                    if (rcx_6 s>= 0)
                        rdx_4 = sx.d(rcx_6) s>> 5
                    
                    int32_t r8 = 0
                    
                    if (rdx_4 s< 0)
                        r8 = rdx_4
                    
                    if (rax_7 s>= 0)
                        int32_t rdx_6 = rdx_4 - r8
                        
                        if (rax_7 s> rdx_6)
                            rax_7 = rdx_6
                    else
                        rax_7 = 0
                    
                    void var_19e
                    void* r9_2 = &var_19e
                    void* var_190
                    
                    if ((rcx_6.b & 2) == 0)
                        r9_2 = var_190
                    rax_8 = sub_142a48fb0(rax_5, 0, r10_2, r9_2, r8, rax_7)
                    rdx_4 = var_19c
                    rcx_6 = var_1a0
                else
                    rax_8 = not.b(*(rax_5 + 8)) & 1
                
                if (rax_8 != 0)
                    break
                
                r14_1 = rax_5
                var_1d8_1 = rax_5
                i = *(rax_5 + 0x4c)
            while (i s>= 0)
            
            rdi_1 = var_1dc_1
            rbx_1 = var_1e4_1
        
        int16_t rax_9 = *(r14_1 + 8)
        int32_t rax_11
        
        if (rax_9 s< 0)
            rax_11 = *(r14_1 + 0xc)
        else
            rax_11 = sx.d(rax_9) s>> 5
        
        int32_t result_2
        void* rdi_2
        
        if (rax_11 != rbx_1)
            int16_t var_110
            int16_t rax_12 = var_110 & 0x1f
            
            if ((var_110.b & 1) != 0)
                rax_12 = 2
            
            var_110 = rax_12
            int32_t var_cc_1 = 0
            int32_t var_bc_1 = 0
            int32_t r15_1 = 0
            int32_t r14_2 = 0
            int16_t rax_13 = *(r12_1 + 8)
            int32_t rax_15
            
            if (rax_13 s< 0)
                rax_15 = *(r12_1 + 0xc)
            else
                rax_15 = sx.d(rax_13) s>> 5
            
            int32_t var_1e0_1
            
            if (rax_15 != rbx_1)
                r14_2 = 0x100
                void* rbx_3 = arg2
                
                while (true)
                    int16_t r8_2 = *(rbx_3 + 8)
                    int32_t rax_18
                    
                    if (r8_2 s< 0)
                        rax_18 = *(rbx_3 + 0xc)
                    else
                        rax_18 = sx.d(r8_2) s>> 5
                    
                    int16_t r9_3
                    
                    if (rax_18 == 0)
                        r9_3 = -1
                    else
                        void* rax_19 = rbx_3 + 0xa
                        
                        if ((r8_2.b & 2) == 0)
                            rax_19 = *(rbx_3 + 0x18)
                        
                        r9_3 = *rax_19
                    
                    int32_t r10_3 = zx.d(r9_3)
                    
                    if (r10_3 == rdi_1)
                        break
                    
                    if (*(rbx_3 + 0x44) != 1)
                        if (r10_3 == 0)
                            r15_1 = *(rbx_3 + 0x44)
                        else
                            int32_t rax_21
                            
                            if (r8_2 s< 0)
                                rax_21 = *(rbx_3 + 0xc)
                            else
                                rax_21 = sx.d(r8_2) s>> 5
                            
                            int32_t r9_4 = 1
                            
                            if (rax_21 s< 1)
                                r9_4 = rax_21
                            
                            int32_t rax_22 = rax_21 - r9_4
                            
                            if (r10_3 s> rax_22)
                                r10_3 = rax_22
                            
                            if (rcx_6 s>= 0)
                                rdx_4 = sx.d(rcx_6) s>> 5
                            
                            if ((*(rbx_3 + 8) & 1) == 0)
                                int32_t rax_24
                                
                                if (r8_2 s< 0)
                                    rax_24 = *(rbx_3 + 0xc)
                                else
                                    rax_24 = sx.d(r8_2) s>> 5
                                
                                if (r9_4 s< 0)
                                    r9_4 = 0
                                else if (r9_4 s> rax_24)
                                    r9_4 = rax_24
                                
                                int32_t rcx_9
                                
                                if (r10_3 s>= 0)
                                    int32_t rax_25 = rax_24 - r9_4
                                    rcx_9 = r10_3
                                    
                                    if (r10_3 s> rax_25)
                                        rcx_9 = rax_25
                                else
                                    rcx_9 = 0
                                
                                void* rax_26 = rbx_3 + 0xa
                                
                                if ((r8_2.b & 2) == 0)
                                    rax_26 = *(rbx_3 + 0x18)
                                
                                rcx_6 = zx.w(sub_142a48fb0(&var_1a8, rdx_4 - r10_3, r10_3, rax_26, 
                                    r9_4, rcx_9))
                            else
                                rcx_6.b = not.b(rcx_6.b)
                                rcx_6.b &= 1
                            
                            if (rcx_6.b == 0)
                                r15_1 = *(rbx_3 + 0x44)
                    
                    rbx_3 = sub_142ae72d0(arg1 + 0x68, *(rbx_3 + 0x4c))
                    rdx_4 = var_19c
                    rcx_6 = var_1a0
                
                var_1e0_1 = r15_1
                rdi_2 = r12_1
            else
                var_1e0_1 = *(r12_1 + 0x40)
                rdi_2 = sub_142ae72d0(arg1 + 0x68, *(r12_1 + 0x4c))
            
            int32_t r14_3 = r14_2 | 0x200
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_168
            
            while (true)
                Concurrency::details::_SyncOriginator<enum Concurrency::agent_status>::_SyncOriginator<enum Concurrency::agent_status>(
                    &var_168, rdi_2, var_1e4_1)
                int64_t r8_5 = sx.q(sub_142a486d0(&var_168, 0))
                void* r9_6 = *(arg1 + 8)
                int16_t rcx_14
                
                if (r8_5.d s>= zx.d(*(r9_6 + 8)))
                    uint8_t rdx_12
                    
                    if (r8_5.d s<= 0xffff)
                        rdx_12 = *((r8_5 s>> 8) + *(r9_6 + 0x38))
                    
                    if (r8_5.d s<= 0xffff
                            && (rdx_12 == 0 || (rdx_12 u>> ((r8_5.d s>> 5).b & 7) & 1) == 0))
                        rcx_14 = 0
                    else
                        rcx_14 = sub_142b1def0(r9_6, r8_5.d)
                else
                    rcx_14 = 0
                
                int32_t rax_34 = r14_3 & 0xfffffdff
                
                if (rcx_14 u> 0xff)
                    rax_34 = r14_3
                
                int16_t var_160
                int32_t rdx_15
                int32_t var_15c
                
                if (var_160 s< 0)
                    rdx_15 = var_15c
                else
                    rdx_15 = sx.d(var_160) s>> 5
                int64_t r8_6 = sx.q(sub_142a486d0(&var_168, rdx_15 - 1))
                void* r9_7 = *(arg1 + 8)
                int16_t rax_38
                
                if (r8_6.d s>= zx.d(*(r9_7 + 8)))
                    uint8_t rdx_17
                    
                    if (r8_6.d s<= 0xffff)
                        rdx_17 = *((r8_6 s>> 8) + *(r9_7 + 0x38))
                    
                    if (r8_6.d s<= 0xffff
                            && (rdx_17 == 0 || (rdx_17 u>> ((r8_6.d s>> 5).b & 7) & 1) == 0))
                        rax_38 = 0
                    else
                        rax_38 = sub_142b1def0(r9_7, r8_6.d)
                else
                    rax_38 = 0
                
                r14_3 = rax_34 | 0x400
                
                if (rax_38 u<= 0xff)
                    r14_3 = rax_34
                
                sub_142b10b60(&var_128, &var_168, *(rdi_2 + 0x40), arg3)
                
                if (rdi_2 == var_1d8_1)
                    break
                
                rdi_2 = sub_142ae72d0(arg1 + 0x68, *(rdi_2 + 0x4c))
                sub_142a47ff0(&var_168)
            
            sub_142a47ff0(&var_168)
            int32_t rax_41 = sub_142b7d400(arg1, var_1e0_1, &var_128, arg3)
            r15 = arg3
            r12_1 = var_1c8_1
            
            if (*r15 s<= 0)
                if (rax_41 s<= 0x7ffff)
                    result_2 = rax_41 << 0xd | 0xc9 | r14_3
                    goto label_142b7dbcc
                
                *r15 = 0xf
            
            result_2 = 0
        label_142b7dcb3:
            sub_142a47ff0(&var_1a8)
            result_1 = result_2
            break
        
        result_2 = *(r14_1 + 0x40)
        rdi_2 = r14_1
    label_142b7dbcc:
        *(r12_1 + 0x44) = result_2
        
        if (var_1dc_1 != 0)
            sub_142a49390(&var_1a8, 0, 1, 0, 0, 0)
            int32_t r8_10
            
            if (var_1a0 s< 0)
                r8_10 = var_19c
            else
                r8_10 = sx.d(var_1a0) s>> 5
            
            sub_142a49810(&var_1a8, 0, r8_10)
            sub_142b10b60(&var_b8, &var_1a8, result_2, r15)
            
            if (*(rdi_2 + 0x4c) s< 0)
                sub_142a47ff0(&var_1a8)
                int32_t rax_45 = sub_142b7d400(arg1, *(arg2 + 0x44), &var_b8, r15)
                
                if (*r15 s<= 0)
                    if (rax_45 s<= 0x7ffff)
                        result_1 = rax_45 << 0xd | 0xc8
                        break
                    
                    *r15 = 0xf
                
                result_1 = 0
                break
        else if (*(rdi_2 + 0x4c) s< 0)
            goto label_142b7dcb3
        
        sub_142a47ff0(&var_1a8)
        void* rax_43 = sub_142ae72d0(arg1 + 0x68, *(rdi_2 + 0x4c))
        r12_1 = rax_43
        var_1c8_1 = rax_43
    
    sub_142b109f0(&var_128)
    sub_142b109f0(&var_b8)
    result = zx.q(result_1)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_218)
return result
