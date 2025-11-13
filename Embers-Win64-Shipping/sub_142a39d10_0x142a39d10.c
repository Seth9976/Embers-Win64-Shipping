// 函数: sub_142a39d10
// 地址: 0x142a39d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_142a38c20(arg1, arg2, arg3, arg4)

if (result.d s>= 0)
    int64_t rax = arg1[3]
    int64_t rcx = arg1[1]
    
    if (rax s< rcx || arg1[5] s< 0)
        return 0xffffffff
    
    int64_t rdx = arg1[4]
    int64_t rdi_1
    
    if (rdx s>= 0)
        rdi_1 = rdx + rcx
        
        if (rdi_1 s>= 0 && rax s>= rdi_1)
            return 1
    else
        rdi_1 = -1
    
    int64_t* r15_1 = **arg1
    int64_t var_28
    int64_t arg_20
    result = (*(*r15_1 + 8))(r15_1, &var_28, &arg_20)
    
    if (result.d s>= 0)
        int64_t rcx_2 = var_28
        int64_t r8_1 = arg_20
        
        if (rcx_2 s>= 0 && r8_1 s> rcx_2)
            return 0xfffffffe
        
        *arg2 = arg1[3]
    label_142a39dd0:
        
        if (rdi_1 s< 0 || *arg2 s< rdi_1)
            while (true)
                if (rcx_2 s< 0 || *arg2 s< rcx_2)
                    int64_t rdx_2 = *arg2
                    
                    if (rdx_2 + 1 s> r8_1)
                        *arg3 = 1
                        return 0xfffffffd
                    
                    result = sub_142a38740(r15_1, rdx_2, arg3)
                    
                    if (result s< 0)
                        return result
                    
                    if (result s> 0)
                        return 0xfffffffd
                    
                    if (rdi_1 s>= 0 && sx.q(*arg3) + *arg2 s> rdi_1)
                        return 0xfffffffe
                    
                    if (sx.q(*arg3) + *arg2 s> arg_20)
                        return 0xfffffffd
                    
                    uint64_t rax_10 = sub_142a3e160(r15_1, *arg2, arg3, arg4)
                    
                    if (rax_10 s< 0)
                        return 0xfffffffe
                    
                    if (rax_10 != 0x1f43b675 && rax_10 != 0x1c53bb6b)
                        *arg2 += sx.q(*arg3)
                        int64_t rdx_4 = *arg2
                        
                        if (rdx_4 + 1 s> arg_20)
                            *arg3 = 1
                            return 0xfffffffd
                        
                        result = sub_142a38740(r15_1, rdx_4, arg3)
                        
                        if (result s< 0)
                            return result
                        
                        if (result s<= 0)
                            if (rdi_1 s>= 0 && sx.q(*arg3) + *arg2 s> rdi_1)
                                return 0xfffffffe
                            
                            if (sx.q(*arg3) + *arg2 s<= arg_20)
                                result = sub_142a3e270(r15_1, *arg2, arg3, arg4)
                                
                                if (result s< 0)
                                    return result
                                
                                int64_t rax_15 = sx.q(*arg3)
                                
                                if (result == (1 << (rax_15.b * 7)) - 1)
                                    return 0xfffffffe
                                
                                *arg2 += rax_15
                                int64_t rax_16 = *arg2
                                
                                if (rdi_1 s>= 0 && rax_16 s> rdi_1)
                                    return 0xfffffffe
                                
                                r8_1 = arg_20
                                rcx_2 = var_28
                                
                                if (result == 0)
                                    goto label_142a39dd0
                                
                                int64_t rax_17 = rax_16 + result
                                
                                if (rdi_1 s>= 0)
                                    if (rax_17 s<= rdi_1)
                                        goto label_142a39f51
                                    
                                    if (rax_10 == 0xa0)
                                        return 0xfffffffe
                                    
                                    if (rax_10 == 0xa3)
                                        return 0xfffffffe
                                    
                                    *arg2 = rdi_1
                                    break
                                
                                if (rcx_2 s>= 0 && rax_17 s> rcx_2)
                                    arg1[4] = rcx_2 - arg1[1]
                                    *arg2 = rcx_2
                                    break
                                
                                if (rax_17 s> r8_1)
                                    *arg3 = result.d
                                else
                                label_142a39f51:
                                    
                                    if (rax_10 == 0xa0)
                                        return sub_142a3c0d0(arg1, result, arg2, arg3, arg4)
                                    
                                    if (rax_10 == 0xa3)
                                        return sub_142a3d7d0(arg1, result, arg2, arg3, arg4)
                                    
                                    *arg2 = rax_17
                                    
                                    if (rdi_1 s< 0)
                                        continue
                                    
                                    if (rax_17 s<= rdi_1)
                                        goto label_142a39dd0
                                    
                                    return 0xfffffffe
                        
                        return 0xfffffffd
                
                if (arg1[4] s>= 0)
                    break
                
                arg1[4] = *arg2 - arg1[1]
                break
        
        if (arg1[4] s>= 1)
            int64_t rax_22 = *arg2
            arg1[3] = rax_22
            
            if (rdi_1 s< 0 || rax_22 s<= rdi_1)
                int32_t rcx_12 = *(arg1 + 0x3c)
                
                if (rcx_12 s<= 0)
                    return 1
                
                int64_t* rcx_15 = *(arg1[6] + (sx.q(rcx_12 - 1) << 3))
                
                if (rcx_15 == 0)
                    return 0xffffffff
                
                int64_t* rax_24 = (*(*rcx_15 + 8))(rcx_15)
                
                if (rax_24 == 0)
                    return 0xffffffff
                
                int64_t rcx_16 = var_28
                int64_t rdx_11 = *rax_24
                
                if (rcx_16 s>= 0 && rdx_11 s> rcx_16)
                    return 0xffffffff
                
                int64_t rdx_12 = rdx_11 + rax_24[1]
                
                if (rdi_1 s< 0 || rdx_12 s<= rdi_1)
                    if (rcx_16 s< 0 || rdx_12 s<= rcx_16)
                        return 1
                    
                    return 0xffffffff
        
        return 0xfffffffe

return result
