// 函数: sub_142a3d240
// 地址: 0x142a3d240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
int64_t arg_10
int64_t arg_18
int32_t rax_1 = (*(*rcx + 8))(rcx, &arg_18, &arg_10)

if (rax_1 s< 0)
    return sx.q(rax_1)

int64_t rcx_1 = arg_18

if (rcx_1 s> 0 && arg_10 s> rcx_1)
    return -2

int64_t rdx_1 = arg1[3]
int64_t r12

if (rdx_1 s>= 0)
    int64_t r12_1 = arg1[2]
    r12 = r12_1 + rdx_1
    
    if (r12_1 + rdx_1 s>= 0)
        if (rcx_1 s< 0)
            if (arg1[0xc] s> r12)
                return -2
        else if (r12 s> rcx_1 || arg1[0xc] s> r12)
            return -2
else
    r12 = -1

int64_t rax_4

while (true)
    if ((rcx_1 s< 0 || arg1[0xc] s< rcx_1) && (r12 s< 0 || arg1[0xc] s< r12))
        int64_t rdi_1 = arg1[0xc]
        int64_t r13_1 = rdi_1
        rax_4 = rdi_1 + 1
        
        if (rax_4 u> 0x7fffffffffffffff)
            return -2
        
        if (rax_4 s> arg_10)
            break
        
        int32_t arg_8
        rax_4 = sub_142a38740(*arg1, rdi_1, &arg_8)
        
        if (rax_4 s< 0)
            break
        
        if (rax_4 s> 0)
            return rdi_1 + 1
        
        int64_t rcx_3 = sx.q(arg_8)
        
        if (r12 s>= 0 && rdi_1 + rcx_3 s> r12)
            return -2
        
        if (rdi_1 + rcx_3 s> arg_10)
            return rdi_1 + rcx_3
        
        uint64_t rax_7 = sub_142a3e160(*arg1, rdi_1, &arg_8, arg2)
        
        if (rax_7 s< 0)
            return -2
        
        if (rax_7 != 0x1f43b675)
            rdi_1 += sx.q(arg_8)
            rax_4 = rdi_1 + 1
            
            if (rax_4 s> arg_10)
                break
            
            rax_4 = sub_142a38740(*arg1, rdi_1, &arg_8)
            
            if (rax_4 s< 0)
                break
            
            if (rax_4 s> 0)
                return rdi_1 + 1
            
            rcx_3 = sx.q(arg_8)
            
            if (r12 s>= 0 && rdi_1 + rcx_3 s> r12)
                return -2
            
            if (rdi_1 + rcx_3 s> arg_10)
                return rdi_1 + rcx_3
            
            rax_4 = sub_142a3e270(*arg1, rdi_1, &arg_8, arg2)
            
            if (rax_4 s< 0)
                break
            
            int64_t rcx_8 = sx.q(arg_8)
            
            if (rcx_8.d s< 1)
                break
            
            if (rcx_8.d s> 8)
                break
            
            int64_t rdi_2 = rdi_1 + rcx_8
            int64_t r14_1 = rax_4 + rdi_2
            
            if (r14_1 u<= 0x7fffffffffffffff)
                int64_t rax_10 = rax_4 + rdi_2
                int64_t r14_4 = rax_4 - r13_1 + rdi_2
                
                if (r12 s< 0 || rax_10 s<= r12)
                    if (rax_10 s> arg_10)
                        return r14_1
                    
                    int32_t rax_13
                    
                    if (rax_7 != 0x1549a966)
                        if (rax_7 != 0x1654ae6b)
                            if (rax_7 == 0x1c53bb6b)
                                if (arg1[0x11] == 0)
                                    int64_t** rax_15 = j_sub_140a82f30(0x40)
                                    int64_t** var_58_3 = rax_15
                                    
                                    if (rax_15 == 0)
                                        rax_15 = nullptr
                                    else
                                        *rax_15 = arg1
                                        rax_15[1] = rdi_2
                                        rax_15[2] = rax_4
                                        rax_15[3] = r13_1
                                        rax_15[4] = r14_4
                                        rax_15[5] = 0
                                        rax_15[6] = 0
                                        rax_15[7] = rdi_2
                                    
                                    arg1[0x11] = rax_15
                                    
                                    if (rax_15 != 0)
                                        goto label_142a3d742
                                    
                                    return -1
                                
                            label_142a3d742:
                                rcx_1 = arg_18
                                arg1[0xc] = r14_1
                                continue
                            
                            if (rax_7 == 0x114d9b74)
                                if (arg1[0xe] != 0)
                                    goto label_142a3d742
                                
                                int64_t** rax_16 = j_sub_140a82f30(0x48)
                                int64_t** var_58_4 = rax_16
                                
                                if (rax_16 == 0)
                                    rax_16 = nullptr
                                else
                                    *rax_16 = arg1
                                    rax_16[1] = rdi_2
                                    rax_16[2] = rax_4
                                    rax_16[3] = r13_1
                                    rax_16[4] = r14_4
                                    rax_16[5] = 0
                                    rax_16[6].d = 0
                                    rax_16[7] = 0
                                    rax_16[8].d = 0
                                
                                arg1[0xe] = rax_16
                                
                                if (rax_16 == 0)
                                    return -1
                                
                                rax_13 = sub_142a3b1e0(rax_16, arg2)
                                goto label_142a3d72c
                            
                            if (rax_7 != 0x1043a770)
                                if (rax_7 != 0x1254c367 || arg1[0x13] != 0)
                                    goto label_142a3d742
                                
                                int64_t** rax_18 = j_sub_140a82f30(0x38)
                                int64_t** var_58_6 = rax_18
                                
                                if (rax_18 == 0)
                                    rax_18 = nullptr
                                else
                                    *rax_18 = arg1
                                    rax_18[1] = rdi_2
                                    rax_18[2] = rax_4
                                    rax_18[3] = r13_1
                                    rax_18[4] = r14_4
                                    rax_18[5] = 0
                                    rax_18[6] = 0
                                
                                arg1[0x13] = rax_18
                                
                                if (rax_18 == 0)
                                    return -1
                                
                                rax_13, arg2 = sub_142a3b910(rax_18, arg2)
                                goto label_142a3d72c
                            
                            if (arg1[0x12] != 0)
                                goto label_142a3d742
                            
                            int64_t** rax_17 = j_sub_140a82f30(0x38)
                            int64_t** var_58_5 = rax_17
                            
                            if (rax_17 == 0)
                                rax_17 = nullptr
                            else
                                *rax_17 = arg1
                                rax_17[1] = rdi_2
                                rax_17[2] = rax_4
                                rax_17[3] = r13_1
                                rax_17[4] = r14_4
                                rax_17[5] = 0
                                rax_17[6] = 0
                            
                            arg1[0x12] = rax_17
                            
                            if (rax_17 == 0)
                                return -1
                            
                            rax_13, arg2 = sub_142a39bb0(rax_17, arg2)
                            goto label_142a3d72c
                        else if (arg1[0x10] == 0)
                            int64_t* rax_14 = j_sub_140a82f30(0x38)
                            int64_t* var_58_2 = rax_14
                            
                            if (rax_14 == 0)
                                rax_14 = nullptr
                            else
                                *rax_14 = arg1
                                rax_14[1] = rdi_2
                                rax_14[2] = rax_4
                                rax_14[3] = r13_1
                                rax_14[4] = r14_4
                                rax_14[5] = 0
                                rax_14[6] = 0
                            
                            arg1[0x10] = rax_14
                            
                            if (rax_14 == 0)
                                return -1
                            
                            rax_13, arg2 = sub_142a3ba70(rax_14, arg2)
                            goto label_142a3d72c
                    else if (arg1[0xf] == 0)
                        int64_t** rax_11 = j_sub_140a82f30(0x50)
                        int64_t** var_58_1 = rax_11
                        
                        if (rax_11 == 0)
                            rax_11 = nullptr
                        else
                            *rax_11 = arg1
                            rax_11[1] = rdi_2
                            rax_11[2] = rax_4
                            rax_11[3] = r13_1
                            rax_11[4] = r14_4
                            __builtin_memset(&rax_11[7], 0, 0x18)
                        
                        arg1[0xf] = rax_11
                        
                        if (rax_11 == 0)
                            return -1
                        
                        rax_13, arg2 = sub_142a3b4e0(rax_11, arg2)
                    label_142a3d72c:
                        
                        if (rax_13 != 0)
                            return sx.q(rax_13)
                        
                        goto label_142a3d742
            
            return -2
    
    if (r12 s>= 0 && arg1[0xc] s> r12)
        return -2
    
    rax_4 = -2
    
    if (arg1[0xf] == 0)
        break
    
    if (arg1[0x10] == 0)
        return -2
    
    return 0

return rax_4
