// 函数: sub_141b4b6f0
// 地址: 0x141b4b6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_1439c8bbc
void* rsi = *(*arg1[1] + (sx.q(arg2) << 3))
int32_t rcx
rcx.b = sub_140b5b8a0(*(rsi + 0x50), 0) == 0
void* rax_3

if ((*(rsi + 0x54) != 0 | rcx.b) == 0)
    rax_3 = *(rsi + 0x48)

int64_t rax_4

if ((*(rsi + 0x54) != 0 | rcx.b) != 0 || rax_3 == 0)
    rax_4 = *(rsi + 0x50)
else
    rax_4 = *(rax_3 + 0x18)

int64_t var_78 = rax_4
int32_t rcx_1
rcx_1.b = sub_140b5b8a0(rax_4.d, 0).b == 0
int64_t result
result.b = var_78:4.d != 0
result.b |= rcx_1.b

if (result.b != 0 && *(rsi + 0x48) == 0)
    result = zx.q(*(rsi + 0x80))
    
    if ((result.b & 2) == 0 && (result.b & 1) == 0)
        int64_t rbx_1 = var_78
        void* rdi_1 = *arg1
        *(rdi_1 + 0x44)
        int64_t arg_8
        
        if (*(rdi_1 + 0x18) == *(rdi_1 + 0x44))
        label_141b4b802:
            CRITICAL_SECTION* lpCriticalSection = arg1[2]
            EnterCriticalSection(lpCriticalSection)
            char rax_10 = *(rsi + 0x6f)
            int64_t r13
            r13.b = rax_10 != 2
            int64_t r12
            
            if (*(rsi + 0x6d) != 0 || rax_10 == 2 || *(*arg1 + 0x228) u<= 0)
                r12.b = 0
            else
                r12.b = 1
            
            int64_t* r15_1 = arg1[3]
            int64_t rdi_2 = var_78
            void* const rcx_9
            
            if (r15_1[1].d == *(r15_1 + 0x34))
            label_141b4b8ac:
                rcx_9 = nullptr
            else
                arg_8 = rdi_2
                int32_t rax_14 = sub_140b5ead0(rdi_2.d) + arg_8:4.d
                void* r8_3 = &r15_1[7]
                void* rcx_7 = *(r8_3 + 8)
                
                if (rcx_7 != 0)
                    r8_3 = rcx_7
                
                int32_t rax_16 = *(r8_3 + (((sx.q(r15_1[9].d) - 1) & sx.q(rax_14)) << 2))
                
                if (rax_16 == 0xffffffff)
                label_141b4b8ac_1:
                    rcx_9 = nullptr
                else
                    int64_t r8_4 = *r15_1
                    
                    while (true)
                        int64_t rdx_8 = sx.q(rax_16) * 5
                        rcx_9 = r8_4 + (rdx_8 << 3)
                        
                        if (*(r8_4 + (rdx_8 << 3)) == rdi_2)
                            break
                        
                        rax_16 = *(rcx_9 + 0x20)
                        
                        if (rax_16 == 0xffffffff)
                            goto label_141b4b8ac_2
                    
                    if (rax_16 == 0xffffffff)
                    label_141b4b8ac_2:
                        rcx_9 = nullptr
            
            result = rcx_9 + 8
            
            if (rcx_9 == 0)
                result = 0
            
            if (result == 0)
                int64_t* rdi_3 = arg1[3]
                int64_t* var_70 = &var_78
                int32_t arg_18
                sub_141b483b0(rdi_3, &arg_18, &var_70, nullptr)
                int64_t rax_17 = sx.q(arg_18)
                result = *rdi_3
                *(result + ((rax_17 * 5 + 1) << 3) + 0x10) = r12.b
                *(result + ((rax_17 * 5 + 1) << 3) + 0x11) = r13.b
                int64_t rdi_5 = result + ((rax_17 * 5 + 1) << 3)
                
                if (lpCriticalSection != 0)
                    result = LeaveCriticalSection(lpCriticalSection)
                
                if (*rdi_5 == 0)
                    int64_t* rcx_14 = *arg1
                    int32_t arg_10 = 0
                    arg_8.d = 0
                    int64_t var_58 = 0
                    int64_t var_50_1 = 0
                    char rax_19 = (*(*rcx_14 + 0x20))(rcx_14, rsi, &arg_10, &arg_8, &var_58)
                    
                    if (rax_19 != 0)
                        int64_t* rax_20 = j_sub_140a82f30(0x20)
                        int64_t* rsi_1
                        
                        if (rax_20 == 0)
                            rsi_1 = nullptr
                        else
                            rsi_1 = sub_141b4a820(rax_20, arg_10, arg_8.d, rax, &var_58)
                        
                        int64_t* rax_22 = j_sub_140a82f30(0x18)
                        int64_t* rbx_2 = rax_22
                        
                        if (rax_22 == 0)
                            rbx_2 = nullptr
                        else
                            rax_22[1].d = 1
                            *(rax_22 + 0xc) = 1
                            *rbx_2 = &data_14306d0a8
                            rbx_2[2] = rsi_1
                        
                        int64_t* var_68 = rsi_1
                        int64_t* var_60 = rbx_2
                        
                        if (rdi_5 != &var_68)
                            *rdi_5 = rsi_1
                            var_68 = nullptr
                            sub_1405aeff0(rdi_5 + 8, &var_60)
                            rbx_2 = var_60
                        
                        if (rbx_2 != 0)
                            rbx_2[1].d -= 1
                            
                            if (rbx_2[1].d == 1)
                                (**rbx_2)(rbx_2)
                                int32_t rsi_2 = *(rbx_2 + 0xc)
                                *(rbx_2 + 0xc) -= 1
                                
                                if (rsi_2 == 1)
                                    (*(*rbx_2 + 8))(rbx_2, zx.q(rsi_2))
                        
                        void* rax_26 = *arg1
                        int32_t r8_8 = arg_10
                        
                        if (r8_8 u>= *(rax_26 + 0x22c))
                            rax_26.b = 0
                        else
                            int32_t rcx_19 = arg_8.d
                            
                            if (rcx_19 u>= *(rax_26 + 0x230))
                                rax_26.b = 0
                            else
                                int32_t rdx_14 = *(rax_26 + 0x228)
                                
                                if (r8_8 u>= rdx_14 || rcx_19 u>= rdx_14)
                                    rax_26.b = 0
                                else
                                    rax_26.b = 1
                        
                        *(rdi_5 + 0x10) &= rax_26.b
                        result = *rdi_5
                    
                    if (rax_19 == 0 || *(result + 8) s<= 0)
                        CRITICAL_SECTION* lpCriticalSection_1 = arg1[2]
                        EnterCriticalSection(lpCriticalSection_1)
                        result = sub_141b64710(arg1[3], var_78)
                        
                        if (lpCriticalSection_1 != 0)
                            result = LeaveCriticalSection(lpCriticalSection_1)
                    
                    int64_t rcx_23 = var_58
                    
                    if (rcx_23 != 0)
                        return sub_140a74f90(rcx_23)
            else
                *(result + 0x10) &= r12.b
                
                if (lpCriticalSection != 0)
                    return LeaveCriticalSection(lpCriticalSection)
        else
            arg_8 = rbx_1
            int32_t rax_8 = sub_140b5ead0(rbx_1.d) + arg_8:4.d
            void* r8_1 = rdi_1 + 0x48
            void* rcx_3 = *(r8_1 + 8)
            
            if (rcx_3 != 0)
                r8_1 = rcx_3
            
            result = zx.q(*(r8_1 + (((sx.q(*(rdi_1 + 0x58)) - 1) & sx.q(rax_8)) << 2)))
            
            if (result.d == 0xffffffff)
                goto label_141b4b802
            
            int64_t r8_2 = *(rdi_1 + 0x10)
            
            while (true)
                int64_t rdx_4 = sx.q(result.d) * 3
                
                if (*(r8_2 + (rdx_4 << 3)) == rbx_1)
                    break
                
                result = zx.q(*(r8_2 + (rdx_4 << 3) + 0x10))
                
                if (result.d == 0xffffffff)
                    goto label_141b4b802
            
            if (result.d == 0xffffffff)
                goto label_141b4b802

return result
