// 函数: sub_142a90c20
// 地址: 0x142a90c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = arg9
int64_t* r9 = arg3
int32_t r12 = arg2

if (*rsi s<= 0)
    if ((arg2 & 0x600) != 0x600)
        int64_t rbx = arg6
        uint64_t rdi
        rdi.b = 1
        int32_t r13 = 0
        uint64_t r14 = 0
        int32_t r15 = arg5
        int64_t var_68 = 0
        int64_t var_5c = 0
        int32_t var_54 = 0
        int64_t var_70 = rbx
        int32_t var_60 = arg7
        char var_88 = 1
        
        if (arg7 s> 0)
            while (true)
                int64_t rax_4 = *r9
                int32_t rax_5
                
                if (rdi.b == 0)
                    rax_5 = (*(rax_4 + 0x68))(r9)
                else
                    var_88 = 0
                    rax_5 = (*(rax_4 + 0x48))(r9)
                
                int32_t rbp_1 = rax_5
                
                if (rbp_1 == 0xffffffff || rbp_1 s> arg7)
                    rbp_1 = arg7
                
                if (r13 s< rbp_1)
                    int32_t rdi_1 = r13 + 1
                    int32_t r15_1 = r13
                    int16_t* rax_8 = rbx + (sx.q(r13) << 1)
                    uint32_t rbx_1 = zx.d(*rax_8)
                    
                    if ((rbx_1 & 0xfffffc00) == 0xd800 && rdi_1 != rbp_1)
                        uint32_t rcx_1 = zx.d(*(arg6 + (sx.q(rdi_1) << 1)))
                        
                        if ((rcx_1 & 0xfffffc00) == 0xdc00)
                            rdi_1 += 1
                            rbx_1 = ((rbx_1 - 0xd7f7) << 0xa) + rcx_1
                    
                    int32_t var_a8
                    int64_t* r13_1
                    
                    if (test_bit(r12, 9))
                        r13_1 = arg8
                    else
                        int16_t* rsi_1 = arg6 + (sx.q(rdi_1) << 1)
                        
                        while (true)
                            int32_t rcx_3
                            
                            if (((r12 u>> 0xa).b & 1) == 0)
                                int32_t rcx_4 = sx.d(sub_142a53dd0(rbx_1))
                                int32_t rax_18
                                
                                if ((1 << rcx_4.b & 0xf020e2e) == 0 && rcx_4 == 4)
                                    rax_18 = sub_142a53180(rbx_1)
                                
                                if ((1 << rcx_4.b & 0xf020e2e) != 0 || (rcx_4 == 4 && rax_18 != 0))
                                    rcx_3 = 0
                                else
                                    rcx_3 = 1
                            else
                                rcx_3.b = sub_142a53180(rbx_1) == 0
                            
                            if (rcx_3 == 0)
                                break
                            
                            r15_1 = rdi_1
                            
                            if (rdi_1 == rbp_1)
                                break
                            
                            rbx_1 = zx.d(*rsi_1)
                            rdi_1 += 1
                            rsi_1 = &rsi_1[1]
                            
                            if ((rbx_1 & 0xfffffc00) == 0xd800 && rdi_1 != rbp_1)
                                uint32_t rcx_6 = zx.d(*rsi_1)
                                
                                if ((rcx_6 & 0xfffffc00) == 0xdc00)
                                    rdi_1 += 1
                                    rsi_1 = &rsi_1[1]
                                    rbx_1 = ((rbx_1 - 0xd7f7) << 0xa) + rcx_6
                        
                        r12 = arg2
                        
                        if (r13 s>= r15_1)
                            rsi = arg9
                            r13_1 = arg8
                        else
                            r13_1 = arg8
                            var_a8.q = r13_1
                            int32_t rax_25 =
                                sub_142a8f9b0(arg4, r14.d, arg5, rax_8, r15_1 - r13, r12, var_a8)
                            r14 = zx.q(rax_25)
                            
                            if (rax_25 s< 0)
                                *arg9 = 8
                                return 0
                            
                            rsi = arg9
                    
                    if (r15_1 s>= rdi_1)
                        rbx = arg6
                        r15 = arg5
                    else
                        var_5c.d = r15_1
                        var_5c:4.d = rdi_1
                        int64_t var_78
                        int32_t rax_27 = sub_142a53c70(rbx_1, sub_142a90920, &var_70, &var_78, arg1)
                        int32_t var_b8_2
                        var_b8_2.q = var_78
                        int32_t rax_28 = sub_142a8f800(arg4, r14.d, arg5, rax_27, var_b8_2, 
                            rdi_1 - r15_1, r12, r13_1)
                        r14 = sx.q(rax_28)
                        
                        if (rax_28 s< 0)
                            *rsi = 8
                            return 0
                        
                        rbx = arg6
                        
                        if (r15_1 + 1 s>= rbp_1 || arg1 != 5)
                            r15 = arg5
                        else
                            int64_t rax_29 = sx.q(r15_1)
                            r15 = arg5
                            
                            if ((0xffdf & (*(rbx + (rax_29 << 1)) - 0x49)) == 0)
                                int16_t rcx_14 = *(rbx + (sx.q(r15_1 + 1) << 1))
                                
                                if (rcx_14 == 0x6a)
                                    if (r14.d s< r15)
                                        *(arg4 + (r14 << 1)) = 0x4a
                                    else if (r14.d == 0x7fffffff)
                                        *rsi = 8
                                        return 0
                                    
                                    int32_t temp0_1 = r14.d
                                    r14 = zx.q(r14.d + 1)
                                    
                                    if (temp0_1 + 1 s< 0)
                                        *rsi = 8
                                        return 0
                                    
                                    if (r13_1 != 0)
                                        sub_142afcad0(r13_1, 1, 1)
                                    
                                    rdi_1 += 1
                                else if (rcx_14 == 0x4a)
                                    var_a8.q = r13_1
                                    var_b8_2 = 1
                                    int32_t rax_32 = sub_142a8f9b0(arg4, r14.d, r15, 
                                        rbx + (rax_29 << 1) + 2, 1, r12, var_a8)
                                    r14 = zx.q(rax_32)
                                    
                                    if (rax_32 s< 0)
                                        *rsi = 8
                                        return 0
                                    
                                    rdi_1 += 1
                        
                        if (rdi_1 s< rbp_1)
                            if (test_bit(r12, 8))
                                var_a8.q = r13_1
                                int32_t rax_37 = sub_142a8f9b0(arg4, r14.d, r15, 
                                    rbx + (sx.q(rdi_1) << 1), rbp_1 - rdi_1, r12, var_a8)
                                r14 = zx.q(rax_37)
                                
                                if (rax_37 s< 0)
                                    *rsi = 8
                                    return 0
                            else
                                int64_t* var_a0_1
                                var_a0_1.d = rbp_1
                                int32_t var_b0_2
                                var_b0_2.q = &var_70
                                var_b8_2.q = rbx
                                r14 = zx.q(r14.d + sub_142a8fba0(arg1, r12, 
                                    arg4 + (sx.q(r14.d) << 1), r15 - r14.d, var_b8_2, var_b0_2, 
                                    rdi_1, var_a0_1.d, r13_1, rsi))
                                int32_t rax_35 = *rsi
                                
                                if (rax_35 == 0xf)
                                    *rsi = 0
                                else if (rax_35 s> 0)
                                    return zx.q(r14.d)
                
                r13 = rbp_1
                
                if (rbp_1 s>= arg7)
                    break
                
                r9 = arg3
                rdi = zx.q(var_88)
        
        if (*rsi s<= 0)
            if (r14.d s> r15)
                *rsi = 0xf
                return zx.q(r14.d)
            
            if (arg8 != 0)
                sub_142afce40(arg8, rsi)
        
        return zx.q(r14.d)
    
    *rsi = 1

return 0
