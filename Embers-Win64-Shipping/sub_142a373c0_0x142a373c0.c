// 函数: sub_142a373c0
// 地址: 0x142a373c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0xc] s< 0)
    return sub_142a37810(arg1, arg2, arg3, arg4)

int64_t* rcx = *arg1
int64_t var_48
int64_t arg_20
int64_t result = (*(*rcx + 8))(rcx, &var_48, &arg_20)

if (result.d s>= 0)
    int64_t rax_2 = var_48
    
    if (rax_2 s>= 0 && arg_20 s> rax_2)
        return 0xfffffffe
    
    int64_t rcx_1 = arg1[3]
    int64_t rbp_1
    
    if (rcx_1 s>= 0)
        rbp_1 = arg1[2] + rcx_1
    else
        rbp_1 = -1
    
    while (true)
        int64_t rax_4 = var_48
        
        if ((rax_4 s< 0 || arg1[0xc] s< rax_4) && (rbp_1 s< 0 || arg1[0xc] s< rbp_1))
            int64_t rdx_1 = arg1[0xc]
            *arg2 = rdx_1
            
            if (rdx_1 + 1 s> arg_20)
                *arg3 = 1
                return 0xfffffffd
            
            result = sub_142a38740(*arg1, rdx_1, arg3)
            
            if (result s< 0)
                break
            
            if (result s> 0)
                return 0xfffffffd
            
            if (rbp_1 s>= 0 && sx.q(*arg3) + *arg2 s> rbp_1)
                return 0xfffffffe
            
            if (sx.q(*arg3) + *arg2 s> arg_20)
                return 0xfffffffd
            
            int64_t r13_1 = *arg2
            uint64_t rax_10 = sub_142a3e160(*arg1, r13_1, arg3, arg4)
            
            if (rax_10 s< 0)
                return 0xfffffffe
            
            *arg2 += sx.q(*arg3)
            int64_t rdx_3 = *arg2
            
            if (rdx_3 + 1 s> arg_20)
                *arg3 = 1
                return 0xfffffffd
            
            result = sub_142a38740(*arg1, rdx_3, arg3)
            
            if (result s< 0)
                break
            
            if (result s> 0)
                return 0xfffffffd
            
            if (rbp_1 s>= 0 && sx.q(*arg3) + *arg2 s> rbp_1)
                return 0xfffffffe
            
            if (sx.q(*arg3) + *arg2 s> arg_20)
                return 0xfffffffd
            
            result = sub_142a3e270(*arg1, *arg2, arg3, arg4)
            
            if (result s< 0)
                break
            
            *arg2 += sx.q(*arg3)
            int64_t r15_1 = *arg2
            
            if (result != 0)
                int64_t rdx_6 = (1 << ((*arg3).b * 7)) - 1
                
                if (rbp_1 s>= 0 && result != rdx_6 && result + r15_1 s> rbp_1)
                    return 0xfffffffe
                
                int64_t** arg_8
                
                if (rax_10 == 0x1c53bb6b)
                    if (result == rdx_6)
                        return 0xfffffffe
                    
                    int64_t** rax_16
                    
                    if (arg1[0x11] == 0)
                        rax_16 = j_sub_140a82f30(0x40)
                        arg_8 = rax_16
                        
                        if (rax_16 != 0)
                            int64_t rcx_10 = *arg2
                            rax_16[1] = rcx_10
                            rax_16[5] = 0
                            rax_16[6] = 0
                            rax_16[7] = rcx_10
                            *rax_16 = arg1
                            rax_16[2] = result
                            rax_16[3] = r13_1
                            rax_16[4] = r15_1 - r13_1 + result
                        
                        arg1[0x11] = rax_16
                    
                    if (arg1[0x11] == 0 && rax_16 == 0)
                        return 0xffffffff
                    
                    arg1[0xc] = *arg2 + result
                    continue
                
                if (rax_10 != 0x1f43b675)
                    if (result == rdx_6)
                        return 0xfffffffe
                    
                    arg1[0xc] = r15_1 + result
                    continue
                
                int64_t r13_2 = r13_1 - arg1[2]
                int64_t result_1 = -1
                
                if (result != rdx_6)
                    result_1 = result
                
                if (r13_2 s< 0)
                    return 0xfffffffe
                
                int64_t var_40
                result = sub_142a38830(arg1, r13_2, &var_40, &arg_8, arg4)
                int32_t r8_6 = result.d
                
                if (result.d s< 0)
                    *arg2 = var_40
                    *arg3 = arg_8.d
                    break
                
                int64_t r9_2 = sx.q(arg1[0x15].d)
                int64_t rax_22
                
                if (*(arg1 + 0xac) s> 0)
                    if (r9_2.d s>= arg1[0x16].d)
                        return 0xfffffffe
                    
                    int64_t* rdx_9 = *(arg1[0x14] + (r9_2 << 3))
                    
                    if (rdx_9 == 0 || rdx_9[2].d s>= 0)
                        return 0xfffffffe
                    
                    void* rax_19 = *rdx_9
                    int64_t r10_1 = rdx_9[1]
                    
                    if (r10_1 - *(rax_19 + 0x10) s< 0)
                        return 0xfffffffe
                    
                    if (r10_1 - *(rax_19 + 0x10) == r13_2)
                        if (r8_6 == 0)
                            return 0xfffffffe
                        
                        if (result_1 s< 0)
                            int64_t rax_20 = rdx_9[4]
                            
                            if (rax_20 s<= 0)
                                return 0xfffffffe
                            
                            *arg2 = rax_20 + r10_1
                        else
                            *arg2 += result_1
                        
                        rdx_9[2].d = r9_2.d
                        arg1[0x15].d += 1
                        *(arg1 + 0xac) -= 1
                        rax_22 = *arg2
                        arg1[0xc] = rax_22
                        
                        if (rbp_1 s< 0 || rax_22 s<= rbp_1)
                            return 0
                        
                        return 0xfffffffe
                
                if (r8_6 != 0)
                    void** rax_25 = sub_142a36b00(arg1, r9_2.d, r13_2)
                    
                    if (rax_25 == 0)
                        return 0xffffffff
                    
                    if (sub_142a365e0(arg1, rax_25) == 0)
                        sub_142a35cd0(rax_25)
                        j_sub_140a74f90(rax_25)
                        return 0xffffffff
                    
                    if (result_1 s< 0)
                        arg1[0xd] = rax_25
                        arg1[0xc] = neg.q(*arg2)
                        return 0
                    
                    *arg2 += result_1
                    rax_22 = *arg2
                    arg1[0xc] = rax_22
                    
                    if (rbp_1 s<= 0 || rax_22 s<= rbp_1)
                        return 0
                    
                    return 0xfffffffe
                
                if (result_1 s>= 0)
                    *arg2 += result_1
                
                int64_t rax_23 = var_48
                
                if (rax_23 s>= 0 && *arg2 s>= rax_23)
                    arg1[0xc] = rax_23
                    return 1
                
                if (rbp_1 s< 0 || *arg2 s< rbp_1)
                    arg1[0xc] = *arg2
                    return 2
                
                arg1[0xc] = rbp_1
            else
                arg1[0xc] = r15_1
                continue
        
        return 1

return result
