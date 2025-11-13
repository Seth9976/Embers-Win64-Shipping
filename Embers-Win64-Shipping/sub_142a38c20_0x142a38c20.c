// 函数: sub_142a38c20
// 地址: 0x142a38c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *arg1

if (rdx != 0)
    if (arg1[5] s>= 0)
        return 0
    
    if (arg1[3] == arg1[1] && arg1[4] s< 0)
        int64_t* r12 = *rdx
        int64_t var_48
        int64_t arg_8
        int64_t result = (*(*r12 + 8))(r12, &var_48, &arg_8)
        
        if (result.d s>= 0)
            int64_t rax_5 = var_48
            int64_t rcx_1 = arg_8
            
            if (rax_5 s>= 0 && (rcx_1 s> rax_5 || arg1[3] s> rax_5))
                return 0xfffffffe
            
            int64_t rdx_2 = arg1[3]
            int64_t result_3 = -1
            *arg2 = rdx_2
            
            if (rdx_2 + 1 s> rcx_1)
                *arg3 = 1
                return 0xfffffffd
            
            result = sub_142a38740(r12, rdx_2, arg3)
            
            if (result s>= 0)
                if (result s> 0)
                    return 0xfffffffd
                
                int64_t rdx_3 = *arg2
                
                if (sx.q(*arg3) + rdx_3 s> arg_8)
                    return 0xfffffffd
                
                result = sub_142a3e160(r12, rdx_3, arg3, arg4)
                
                if (result s>= 0)
                    if (result != 0x1f43b675)
                        return 0xfffffffe
                    
                    *arg2 += sx.q(*arg3)
                    int64_t rdx_4 = *arg2
                    
                    if (rdx_4 + 1 s> arg_8)
                        *arg3 = 1
                        return 0xfffffffd
                    
                    result = sub_142a38740(r12, rdx_4, arg3)
                    
                    if (result s>= 0)
                        if (result s> 0 || sx.q(*arg3) + *arg2 s> arg_8)
                            return 0xfffffffd
                        
                        int64_t rax_14 = sub_142a3e270(r12, *arg2, arg3, arg4)
                        
                        if (rax_14 s< 0)
                            return 0xffffffff
                        
                        if (rax_14 == 0)
                            return 0xfffffffe
                        
                        int64_t r9_1 = -1
                        *arg2 += sx.q(*arg3)
                        int64_t rdi_1 = -1
                        int64_t arg_20 = -1
                        
                        if (rax_14 != (1 << (*arg3 * 7).b) - 1)
                            r9_1 = rax_14
                        
                        if (r9_1 s>= 0)
                            rdi_1 = *arg2 + r9_1
                        
                    label_142a38df0:
                        int64_t rcx_6
                        
                        if (rdi_1 s< 0 || *arg2 s< rdi_1)
                            while (true)
                                int64_t rdx_7 = *arg2
                                
                                if (rdx_7 + 1 s> arg_8)
                                    *arg3 = 1
                                else
                                    result = sub_142a38740(r12, rdx_7, arg3)
                                    
                                    if (result s< 0)
                                        return result
                                    
                                    if (result s<= 0)
                                        if (rdi_1 s>= 0 && sx.q(*arg3) + *arg2 s> rdi_1)
                                            return 0xfffffffe
                                        
                                        if (sx.q(*arg3) + *arg2 s<= arg_8)
                                            result, rcx_6 = sub_142a3e160(r12, *arg2, arg3, arg4)
                                            int64_t result_1 = result
                                            
                                            if (result s< 0)
                                                return result
                                            
                                            if (result == 0)
                                                return 0xfffffffe
                                            
                                            if (result == 0x1f43b675)
                                                goto label_142a38fbc
                                            
                                            if (result == 0x1c53bb6b)
                                                goto label_142a38fbc
                                            
                                            *arg2 += sx.q(*arg3)
                                            int64_t rdx_9 = *arg2
                                            
                                            if (rdx_9 + 1 s> arg_8)
                                                *arg3 = 1
                                            else
                                                result = sub_142a38740(r12, rdx_9, arg3)
                                                
                                                if (result s< 0)
                                                    return result
                                                
                                                if (result s<= 0)
                                                    if (rdi_1 s>= 0 && sx.q(*arg3) + *arg2 s> rdi_1)
                                                        return 0xfffffffe
                                                    
                                                    if (sx.q(*arg3) + *arg2 s<= arg_8)
                                                        result =
                                                            sub_142a3e270(r12, *arg2, arg3, arg4)
                                                        int64_t result_2 = result
                                                        
                                                        if (result s< 0)
                                                            return result
                                                        
                                                        int64_t rax_30 = sx.q(*arg3)
                                                        
                                                        if (result_2 == (1 << (rax_30.b * 7)) - 1)
                                                            return 0xfffffffe
                                                        
                                                        *arg2 += rax_30
                                                        int64_t rax_31 = *arg2
                                                        
                                                        if (rdi_1 s>= 0 && rax_31 s> rdi_1)
                                                            return 0xfffffffe
                                                        
                                                        if (result_2 == 0)
                                                            goto label_142a38df0
                                                        
                                                        if (rdi_1 s>= 0
                                                                && rax_31 + result_2 s> rdi_1)
                                                            return 0xfffffffe
                                                        
                                                        if (result_1 != 0xe7)
                                                            if (result_1 != 0xa0
                                                                    && result_1 != 0xa3)
                                                                goto label_142a38f9c
                                                            
                                                            rcx_6.b = 1
                                                            break
                                                        
                                                        *arg3 = result_2.d
                                                        int64_t rax_33 = *arg2
                                                        
                                                        if (result_2 + rax_33 s<= arg_8)
                                                            result =
                                                                sub_142a3ea30(r12, rax_33, result_2)
                                                            result_3 = result
                                                            
                                                            if (result s< 0)
                                                                return result
                                                            
                                                            arg_20 = *arg2 + result_2
                                                        label_142a38f9c:
                                                            *arg2 += result_2
                                                            
                                                            if (rdi_1 s< 0)
                                                                continue
                                                            
                                                            if (*arg2 s<= rdi_1)
                                                                goto label_142a38df0
                                                            
                                                            return 0xfffffffe
                                
                                return 0xfffffffd
                        else
                        label_142a38fbc:
                            rcx_6.b = 0
                        
                        if ((rdi_1 s>= 0 && *arg2 s> rdi_1) || result_3 s< 0 || rcx_6.b == 0)
                            return 0xfffffffe
                        
                        arg1[3] = arg_20
                        arg1[5] = result_3
                        
                        if (r9_1 s>= 0)
                            arg1[4] = rdi_1 - arg1[1]
                        
                        return 0
        
        return result

return -1
