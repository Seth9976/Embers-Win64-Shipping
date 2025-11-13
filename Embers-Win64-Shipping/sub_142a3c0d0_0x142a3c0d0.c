// 函数: sub_142a3c0d0
// 地址: 0x142a3c0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *arg3
int64_t* r15 = **arg1
int64_t r14 = rsi + arg2
int64_t var_48
int64_t arg_10
int64_t result = (*(*r15 + 8))(r15, &var_48, &arg_10)

if (result.d s>= 0)
    int64_t rax_2 = var_48
    
    if (rax_2 s>= 0 && r14 s> rax_2)
        return 0xfffffffe
    
    if (r14 s> arg_10)
        *arg4 = arg2.d
        return 0xfffffffd
    
    int64_t rax_5 = *arg3
    int64_t rcx_1 = 0
    int64_t arg_18 = 0
    
    if (rax_5 s< r14)
        do
            if (rax_5 + 1 s> arg_10)
                *arg4 = 1
                return 0xfffffffd
            
            result = sub_142a38740(r15, *arg3, arg4)
            
            if (result s< 0)
                return result
            
            if (result s> 0)
                return 0xfffffffd
            
            int64_t rdx_2 = sx.q(*arg4)
            int64_t rax_7 = *arg3
            
            if (rdx_2 + rax_7 s> r14)
                return 0xfffffffe
            
            if (rdx_2 + rax_7 s> arg_10)
                return 0xfffffffd
            
            result = sub_142a3e160(r15, rax_7, arg4, arg5)
            int64_t result_1 = result
            
            if (result s< 0)
                return result
            
            if (result == 0)
                return 0xfffffffe
            
            *arg3 += sx.q(*arg4)
            int64_t rdx_4 = *arg3
            
            if (rdx_4 + 1 s> arg_10)
                *arg4 = 1
                return 0xfffffffd
            
            result = sub_142a38740(r15, rdx_4, arg4)
            
            if (result s< 0)
                return result
            
            if (result s> 0)
                return 0xfffffffd
            
            int64_t rdx_5 = sx.q(*arg4)
            int64_t rax_8 = *arg3
            
            if (rdx_5 + rax_8 s> r14)
                return 0xfffffffe
            
            if (rdx_5 + rax_8 s> arg_10)
                return 0xfffffffd
            
            result = sub_142a3e270(r15, rax_8, arg4, arg5)
            int64_t result_2 = result
            
            if (result s< 0)
                return result
            
            *arg3 += sx.q(*arg4)
            int64_t rax_9 = *arg3
            
            if (rax_9 s> r14)
                return 0xfffffffe
            
            if (result_2 != 0)
                if (result_2 == (1 << ((*arg4).b * 7)) - 1)
                    return 0xfffffffe
                
                if (result_1 == 0x75a2)
                    result = sub_142a3e880(r15, rax_9, result_2, &arg_18)
                    
                    if (result.d s< 0)
                        return result
                    
                    goto label_142a3c2cf
                
                if (result_1 == 0xa1)
                    int64_t rsi_1 = result_2 + rax_9
                    
                    if (rsi_1 s> r14)
                        return 0xfffffffe
                    
                    if (rax_9 + 1 s> arg_10)
                        *arg4 = 1
                        return 0xfffffffd
                    
                    result = sub_142a38740(r15, *arg3, arg4)
                    
                    if (result s< 0)
                        return result
                    
                    if (result s> 0)
                        return 0xfffffffd
                    
                    int64_t rdx_9 = sx.q(*arg4)
                    int64_t rax_11 = *arg3
                    
                    if (rdx_9 + rax_11 s> rsi_1)
                        return 0xfffffffe
                    
                    if (rdx_9 + rax_11 s> arg_10)
                        return 0xfffffffd
                    
                    result = sub_142a3e270(r15, rax_11, arg4, arg5)
                    
                    if (result s< 0)
                        return result
                    
                    if (result == 0)
                        return 0xfffffffe
                    
                    *arg3 += sx.q(*arg4)
                    int64_t rdx_12 = *arg3 + 2
                    
                    if (rdx_12 s> rsi_1)
                        return 0xfffffffe
                    
                    int64_t rax_13 = arg_10
                    
                    if (rdx_12 s> rax_13)
                        *arg4 = 2
                        return 0xfffffffd
                    
                    *arg3 = rdx_12
                    
                    if (rdx_12 + 1 s> rsi_1)
                        return 0xfffffffe
                    
                    if (rdx_12 + 1 s> rax_13)
                        *arg4 = 1
                        return 0xfffffffd
                    
                    char arg_8
                    result = (**r15)(r15, rdx_12, 1, &arg_8)
                    
                    if (result.d s< 0)
                        *arg4 = 1
                        return result
                    
                    *arg3 += 1
                    
                    if (*arg3 s>= rsi_1)
                        return 0xfffffffe
                    
                    if ((arg_8 & 6) != 0 && rsi_1 s> arg_10)
                        *arg4 = rsi_1.d - *arg3
                        return 0xfffffffd
                    
                    *arg3 = rsi_1
                else
                label_142a3c2cf:
                    *arg3 += result_2
                    
                    if (*arg3 s> r14)
                        return 0xfffffffe
            
            rax_5 = *arg3
        while (rax_5 s< r14)
        
        rcx_1 = arg_18
    
    if (*arg3 != r14)
        return 0xfffffffe
    
    result = sub_142a36cc0(arg1, 0xa0, rsi, arg2, arg5, rcx_1)
    
    if (result.d == 0)
        arg1[3] = r14

return result
