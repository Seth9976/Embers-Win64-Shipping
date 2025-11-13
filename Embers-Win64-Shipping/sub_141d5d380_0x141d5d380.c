// 函数: sub_141d5d380
// 地址: 0x141d5d380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg1 + 0x730)
int64_t* result

if (rax != 0)
    void* rcx_9 = *(rax + 0x110)
    int64_t* r14_1 = *(rax + 0x118)
    
    if (r14_1 != 0)
        r14_1[1].d += 1
    
    int64_t* rbx_1 = *(arg1 + 0x740)
    void* const rdi_2 = nullptr
    
    if (rbx_1 != 0)
        int32_t rax_5 = 0
        bool z_1
        
        if (0 == rbx_1[1].d)
            rbx_1[1].d = 0
            z_1 = true
        else
            rax_5 = rbx_1[1].d
            z_1 = false
        
        if (z_1)
        label_141d5d4c4:
            rbx_1 = nullptr
        else
            while (true)
                bool z_2
                
                if (rax_5 == rbx_1[1].d)
                    rbx_1[1].d = rax_5 + 1
                    z_2 = true
                else
                    rbx_1[1].d
                    z_2 = false
                
                if (z_2)
                    if (rbx_1 != 0)
                        rdi_2 = *(arg1 + 0x738)
                    
                    break
                
                rax_5 = 0
                bool z_3
                
                if (0 == rbx_1[1].d)
                    rbx_1[1].d = 0
                    z_3 = true
                else
                    rax_5 = rbx_1[1].d
                    z_3 = false
                
                if (z_3)
                    goto label_141d5d4c4
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax_10 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_10 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    char rax_13 = *(arg1 + 0x8a) & 1
    
    if (rcx_9 == rdi_2)
        if (rax_13 == 0)
            EnterCriticalSection(arg1 + 0x708)
            int64_t* var_70 = nullptr
            int64_t var_78
            
            if (arg1 + 0x758 != &var_78)
                *(arg1 + 0x758) = 0
                var_78 = 0
                sub_1405aeff0(arg1 + 0x760, &var_70)
                int64_t* rcx_29 = var_70
                
                if (rcx_29 != 0)
                    rcx_29[1].d -= 1
                    
                    if (rcx_29[1].d == 1)
                        int64_t* rdi_6 = var_70
                        (**rdi_6)(rdi_6)
                        int32_t rax_34 = *(rdi_6 + 0xc)
                        *(rdi_6 + 0xc) -= 1
                        
                        if (rax_34 == 1)
                            int64_t* rcx_31 = var_70
                            (*(*rcx_31 + 8))(rcx_31, 1)
            
            void var_58
            
            if (arg1 + 0x738 != &var_58)
                *(arg1 + 0x738) = nullptr
                int64_t* rcx_32 = *(arg1 + 0x740)
                *(arg1 + 0x740) = 0
                
                if (rcx_32 != 0)
                    int32_t rax_36 = *(rcx_32 + 0xc)
                    *(rcx_32 + 0xc) -= 1
                    
                    if (rax_36 == 1)
                        (*(*rcx_32 + 8))(rcx_32, 1)
            
            if (arg1 != -0x708)
                LeaveCriticalSection(arg1 + 0x708)
    else if (rax_13 != 0)
        void*** rax_14 = sub_141d4b9b0()
        void*** var_80_1 = rax_14
        uint128_t zmm0_1 = (&rax_14[2]).o
        uint128_t var_68 = zmm0_1
        void* rax_15 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rax_15 != 0)
            *(rax_15 + 8) += 1
        
        sub_141d4c110(rcx_9, &var_68)
        int64_t* rbx_3 = var_68:8.q
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t rax_18 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (rax_18 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        EnterCriticalSection(arg1 + 0x708)
        uint128_t zmm0_2 = (&rax_14[2]).o
        uint128_t var_a8 = zmm0_2
        int64_t* rdi_3 = _mm_bsrli_si128(zmm0_2, 8).q
        
        if (rdi_3 != 0)
            rdi_3[1].d += 1
        
        if (arg1 + 0x758 != &var_a8)
            *(arg1 + 0x758) = var_a8.q
            var_a8.q = 0
            sub_1405aeff0(arg1 + 0x760, &var_a8:8)
        
        void* rcx_19 = var_a8:8.q
        
        if (rcx_19 != 0)
            int32_t rax_21 = *(rcx_19 + 8)
            *(rcx_19 + 8) -= 1
            
            if (rax_21 == 1)
                int64_t* rdi_4 = var_a8:8.q
                (**rdi_4)(rdi_4)
                int32_t rax_23 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (rax_23 == 1)
                    int64_t* rcx_21 = var_a8:8.q
                    (*(*rcx_21 + 8))(rcx_21, 1)
        
        if (arg1 != -0x708)
            LeaveCriticalSection(arg1 + 0x708)
        
        *(arg1 + 0x738) = rcx_9
        int64_t* rcx_23 = *(arg1 + 0x740)
        
        if (r14_1 != rcx_23)
            if (r14_1 != 0)
                *(r14_1 + 0xc) += 1
                rcx_23 = *(arg1 + 0x740)
            
            if (rcx_23 != 0)
                int32_t rax_26 = *(rcx_23 + 0xc)
                *(rcx_23 + 0xc) -= 1
                
                if (rax_26 == 1)
                    (*(*rcx_23 + 8))(rcx_23, 1)
            
            *(arg1 + 0x740) = r14_1
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t rax_30 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (rax_30 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
    
    int32_t zmm0_3 = sub_141d4e380(rcx_9)
    *(arg1 + 0x6f8)
    *(arg1 + 0x6f8) = zmm0_3
    void arg_18
    *(arg1 + 0x700) = *sub_141d4e4f0(rcx_9, &arg_18)
    result = nullptr
    
    if (0 == *(arg1 + 0x768))
        *(arg1 + 0x768) = 0
    else
        result = *(arg1 + 0x768)
    
    int64_t* result_1 = result
    sub_141d51040(rcx_9, result)
    
    if (r14_1 != 0)
        result = zx.q(r14_1[1].d)
        r14_1[1].d -= 1
        
        if (result.d == 1)
            result = (**r14_1)(r14_1)
            int32_t rsi_2 = *(r14_1 + 0xc)
            *(r14_1 + 0xc) -= 1
            
            if (rsi_2 == 1)
                return (*(*r14_1 + 8))(r14_1, zx.q(rsi_2))
else
    int32_t arg_8 = 0
    *(arg1 + 0x6f8) = 0
    *(arg1 + 0x700)
    *(arg1 + 0x700) = 0
    EnterCriticalSection(arg1 + 0x708)
    int64_t* var_90 = nullptr
    int64_t var_98
    result = &var_98
    
    if (arg1 + 0x758 != &var_98)
        *(arg1 + 0x758) = 0
        var_98 = 0
        result = sub_1405aeff0(arg1 + 0x760, &var_90)
        int64_t* rcx_4 = var_90
        
        if (rcx_4 != 0)
            result = zx.q(rcx_4[1].d)
            rcx_4[1].d -= 1
            
            if (result.d == 1)
                int64_t* rdi_1 = var_90
                result = (**rdi_1)(rdi_1)
                int32_t rsi_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rsi_1 == 1)
                    int64_t* rcx_6 = var_90
                    result = (*(*rcx_6 + 8))(rcx_6, zx.q(rsi_1))
    
    if (arg1 != -0x708)
        return LeaveCriticalSection(arg1 + 0x708) __tailcall

return result
