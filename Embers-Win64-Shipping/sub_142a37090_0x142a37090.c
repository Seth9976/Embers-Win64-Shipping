// 函数: sub_142a37090
// 地址: 0x142a37090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg2

if (arg1 == 0 || arg2 s< 0)
    return -1

int64_t* r14 = nullptr
*arg3 = 0
int64_t var_38
int64_t arg_20
int32_t rax_1 = (*(*arg1 + 8))(arg1, &arg_20, &var_38)

if (rax_1 s< 0)
    return sx.q(rax_1)

int64_t rax_3 = var_38

if (rax_3 s>= 0)
    int64_t rcx = arg_20
    
    if (rcx s< 0 || rax_3 s<= rcx)
        int32_t arg_8
        int64_t rdx_7
        int64_t rbx_1
        int64_t rbp_1
        int64_t r8_5
        
        while (true)
            if (rcx s< 0 || rbx s< rcx)
                int64_t rax_5 = sub_142a38740(arg1, rbx, &arg_8)
                
                if (rax_5 != 0)
                    return rax_5
                
                int64_t rdx_2 = arg_20
                int64_t rcx_2 = sx.q(arg_8)
                
                if (rdx_2 s< 0 || rbx + rcx_2 s<= rdx_2)
                    if (rbx + rcx_2 s> var_38)
                        return rbx + rcx_2
                    
                    rbp_1 = rbx
                    uint64_t rax_8 = sub_142a3e160(arg1, rbx, &arg_8, arg4)
                    
                    if (rax_8 s>= 0)
                        rbx += sx.q(arg_8)
                        rax_5 = sub_142a38740(arg1, rbx, &arg_8)
                        
                        if (rax_5 != 0)
                            return rax_5
                        
                        int64_t rdx_5 = arg_20
                        rcx_2 = sx.q(arg_8)
                        
                        if (rdx_5 s< 0 || rbx + rcx_2 s<= rdx_5)
                            if (rbx + rcx_2 s> var_38)
                                return rbx + rcx_2
                            
                            rax_5 = sub_142a3e270(arg1, rbx, &arg_8, arg4)
                            r8_5 = rax_5
                            
                            if (rax_5 s< 0)
                                return rax_5
                            
                            rdx_7 = sx.q(arg_8)
                            rbx_1 = rbx + rdx_7
                            
                            if (rax_8 == 0x18538067)
                                break
                            
                            if (r8_5 != (1 << (rdx_7.b * 7)) - 1)
                                rcx = arg_20
                                
                                if (rcx s< 0 || r8_5 + rbx_1 s<= rcx)
                                    rbx = rbx_1 + r8_5
                                    
                                    if (rbx s> var_38)
                                        return rbx
                                    
                                    continue
            
            return -2
        
        int64_t rdi_2 = -1
        
        if (r8_5 != (1 << (rdx_7.b * 7)) - 1)
            int64_t rcx_8 = arg_20
            
            if (rcx_8 s>= 0)
                if (r8_5 + rbx_1 s> rcx_8)
                    r8_5 = -1
                
                rdi_2 = r8_5
        
        int64_t* rax_15 = j_sub_140a82f30(0xb8)
        arg_8.q = rax_15
        
        if (rax_15 != 0)
            rax_15 = sub_142a35a40(rax_15, arg1, rbp_1, rbx_1, rdi_2)
            r14 = rax_15
        
        *arg3 = r14
        return neg.q(sbb.q(rax_15, rax_15, r14 != 0)) - 1

return -1
