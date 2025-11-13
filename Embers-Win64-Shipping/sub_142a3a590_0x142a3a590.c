// 函数: sub_142a3a590
// 地址: 0x142a3a590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return arg2 - 2

int64_t i_2
int64_t var_30
int32_t rax_2 = (*(*arg2 + 8))(arg2, &var_30, &i_2)

if (rax_2 s< 0)
    return sx.q(rax_2)

int64_t i = i_2
*arg3 = 0
char arg_10 = 0

if (i s>= 0x400)
    i = 0x400

int32_t rax_5

if (i s> 0)
    do
        rax_5 = (**arg2)(arg2, *arg3, 1, &arg_10)
        
        if (rax_5 s< 0)
            return sx.q(rax_5)
        
        if (rax_5 s> 0)
            return -3
        
        if (arg_10 == 0x1a)
            break
        
        *arg3 += 1
    while (*arg3 s< i)

int64_t rdx_2 = *arg3
int32_t arg_20 = 0
uint64_t rax_6 = sub_142a3e160(arg2, rdx_2, &arg_20, arg4)

if (rax_6 != -3)
    if (arg_20 != 4 || rax_6 != 0x1a45dfa3)
        return -2
    
    *arg3 += 4
    int64_t rax_7 = sub_142a38740(arg2, *arg3, &arg_20)
    
    if (rax_7 s< 0)
        return -2
    
    if (rax_7 s<= 0)
        int64_t rdx_4 = sx.q(arg_20)
        
        if ((rdx_4 - 1).d u<= 7)
            int64_t rcx_4 = var_30
            
            if (rcx_4 s< 0 || rcx_4 - *arg3 s>= rdx_4)
                if (i_2 - *arg3 s< rdx_4)
                    return *arg3 + rdx_4
                
                int64_t result = sub_142a3e270(arg2, *arg3, &arg_20, arg4)
                
                if (result s< 0)
                    return result
                
                *arg3 += sx.q(arg_20)
                int64_t rax_13 = var_30
                int64_t rdx_6 = *arg3
                
                if (rax_13 s< 0 || rax_13 - rdx_6 s>= result)
                    if (i_2 - rdx_6 s< result)
                        return rdx_6 + result
                    
                    int64_t i_1 = rdx_6 + result
                    int512_t zmm1 = sub_142a38bc0(arg1)
                    int64_t temp2_1 = *arg3
                    bool cond:3_1 = temp2_1 != i_1
                    
                    if (temp2_1 s< i_1)
                        do
                            uint64_t var_28[0x2]
                            rax_5 = sub_142a3cd70(arg2, arg3, i_1, &var_28, zmm1, &arg_20)
                            
                            if (rax_5 s< 0)
                                return sx.q(rax_5)
                            
                            int64_t rsi = arg_20.q
                            
                            if (rsi == 0)
                                return -2
                            
                            uint64_t rax_17 = var_28[0]
                            int64_t rax_18
                            
                            if (rax_17 != 0x4286)
                                if (rax_17 == 0x42f7)
                                    rax_18 = sub_142a3ea30(arg2, *arg3, rsi)
                                    arg1[1] = rax_18
                                    goto label_142a3a86c
                                
                                if (rax_17 == 0x42f2)
                                    rax_18 = sub_142a3ea30(arg2, *arg3, rsi)
                                    arg1[2] = rax_18
                                    goto label_142a3a86c
                                
                                if (rax_17 == 0x42f3)
                                    rax_18 = sub_142a3ea30(arg2, *arg3, rsi)
                                    arg1[3] = rax_18
                                    goto label_142a3a86c
                                
                                if (rax_17 != 0x4282)
                                    if (rax_17 == 0x4287)
                                        rax_18 = sub_142a3ea30(arg2, *arg3, rsi)
                                        arg1[5] = rax_18
                                        goto label_142a3a86c
                                    
                                    if (rax_17 == 0x4285)
                                        rax_18 = sub_142a3ea30(arg2, *arg3, rsi)
                                        arg1[6] = rax_18
                                        goto label_142a3a86c
                                else
                                    if (arg1[4] != 0)
                                        return -2
                                    
                                    rax_5, zmm1 = sub_142a3e960(arg2, *arg3, rsi, &arg1[4])
                                    
                                    if (rax_5 != 0)
                                        return sx.q(rax_5)
                            else
                                rax_18 = sub_142a3ea30(arg2, *arg3, rsi)
                                *arg1 = rax_18
                            label_142a3a86c:
                                
                                if (rax_18 s<= 0)
                                    return -2
                            *arg3 += rsi
                        while (*arg3 s< i_1)
                        
                        cond:3_1 = *arg3 != i_1
                    
                    if (not(cond:3_1) && arg1[4] != 0 && arg1[6] s> 0 && arg1[5] s> 0
                            && arg1[2] - 1 u<= 3 && arg1[3] - 1 u<= 7)
                        return 0
        
        return -2

return -3
