// 函数: sub_142a38830
// 地址: 0x142a38830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = *arg1
int64_t var_28
int64_t arg_8
int64_t result = (*(*r15 + 8))(r15, &var_28, &arg_8)

if (result.d s>= 0)
    int64_t rax_1 = var_28
    int64_t rdx_2 = arg1[2] + arg2
    *arg3 = rdx_2
    
    if (rax_1 s>= 0 && rdx_2 s>= rax_1)
        return 0
    
    int64_t rcx_1 = arg1[3]
    int64_t i = -1
    int64_t rbp_1
    
    if (rcx_1 s>= 0)
        rbp_1 = arg1[2] + rcx_1
    else
        rbp_1 = -1
    
    if (rdx_2 + 1 s> arg_8)
    label_142a38b9a:
        *arg4 = 1
        return 0xfffffffd
    
    result = sub_142a38740(r15, rdx_2, arg4)
    
    if (result s>= 0)
        if (result s> 0)
            return 0xfffffffd
        
        if (rbp_1 s>= 0 && sx.q(*arg4) + *arg3 s> rbp_1)
            return 0xfffffffe
        
        int64_t rcx_3 = var_28
        
        if (rcx_3 s>= 0 && sx.q(*arg4) + *arg3 s> rcx_3)
            return 0
        
        if (sx.q(*arg4) + *arg3 s> arg_8)
            return 0xfffffffd
        
        result = sub_142a3e160(r15, *arg3, arg4, arg5)
        
        if (result s>= 0)
            if (result != 0x1f43b675)
                return 0xffffffff
            
            *arg3 += sx.q(*arg4)
            int64_t rdx_4 = *arg3
            
            if (rdx_4 + 1 s> arg_8)
                goto label_142a38b9a
            
            result = sub_142a38740(r15, rdx_4, arg4)
            
            if (result s>= 0)
                if (result s> 0)
                    return 0xfffffffd
                
                if (rbp_1 s>= 0 && sx.q(*arg4) + *arg3 s> rbp_1)
                    return 0xfffffffe
                
                int64_t rcx_6 = var_28
                
                if (rcx_6 s>= 0 && sx.q(*arg4) + *arg3 s> rcx_6)
                    return 0
                
                if (sx.q(*arg4) + *arg3 s> arg_8)
                    return 0xfffffffd
                
                result = sub_142a3e270(r15, *arg3, arg4, arg5)
                
                if (result s>= 0)
                    if (result == 0)
                        return 0
                    
                    *arg3 += sx.q(*arg4)
                    
                    if (result != (1 << ((*arg4).b * 7)) - 1)
                        i = *arg3 + result
                        
                        if (rbp_1 s>= 0 && i s> rbp_1)
                            return 0xfffffffe
                        
                        int64_t rax_20 = var_28
                        
                        if (rax_20 s>= 0 && i s> rax_20)
                            return 0
                    
                    while (i s< 0 || *arg3 s< i)
                        while (true)
                            int64_t rdx_7 = *arg3
                            
                            if (rdx_7 + 1 s> arg_8)
                                goto label_142a38b9a
                            
                            result = sub_142a38740(r15, rdx_7, arg4)
                            
                            if (result s< 0)
                                return result
                            
                            if (result s> 0)
                                return 0xfffffffd
                            
                            if (i s>= 0 && sx.q(*arg4) + *arg3 s> i)
                                return 0xfffffffe
                            
                            if (sx.q(*arg4) + *arg3 s> arg_8)
                                return 0xfffffffd
                            
                            result = sub_142a3e160(r15, *arg3, arg4, arg5)
                            int64_t result_1 = result
                            
                            if (result s< 0)
                                return result
                            
                            if (result == 0x1f43b675)
                                return 0
                            
                            if (result == 0x1c53bb6b)
                                return 0
                            
                            *arg3 += sx.q(*arg4)
                            int64_t rdx_9 = *arg3
                            
                            if (i s>= 0 && rdx_9 s>= i)
                                return 0xfffffffe
                            
                            if (rdx_9 + 1 s> arg_8)
                                goto label_142a38b9a
                            
                            result = sub_142a38740(r15, rdx_9, arg4)
                            
                            if (result s< 0)
                                return result
                            
                            if (result s> 0)
                                return 0xfffffffd
                            
                            if (i s>= 0 && sx.q(*arg4) + *arg3 s> i)
                                return 0xfffffffe
                            
                            if (sx.q(*arg4) + *arg3 s> arg_8)
                                return 0xfffffffd
                            
                            result = sub_142a3e270(r15, *arg3, arg4, arg5)
                            
                            if (result s< 0)
                                return result
                            
                            *arg3 += sx.q(*arg4)
                            int64_t r8_10 = *arg3
                            
                            if (i s>= 0 && r8_10 s> i)
                                return 0xfffffffe
                            
                            if (result == 0)
                                break
                            
                            if (result == (1 << ((*arg4).b * 7)) - 1)
                                return 0xfffffffe
                            
                            if (i s>= 0 && r8_10 + result s> i)
                                return 0xfffffffe
                            
                            if (result_1 == 0xa0 || result_1 == 0xa3)
                                return 1
                            
                            int64_t rax_34 = r8_10 + result
                            *arg3 = rax_34
                            
                            if (i s< 0)
                                continue
                            
                            if (rax_34 s<= i)
                                break
                            
                            return 0xfffffffe
                    
                    return 0

return result
